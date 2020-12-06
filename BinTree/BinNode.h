#pragma once

#define stature(p) ((p)?(p)->height:-1)
#define BinNodePosi(T) BinNode<T>*

typedef enum {RB_RED,RB_BLACK} RBColor;


template <typename T>struct BinNode{
    T data;
    int height;
    BinNodePosi(T) parent;BinNodePosi(T) lc;BinNodePosi(T) rc;
    int npl;
    RBColor color;

    BinNode():parent(nullptr),lc(nullptr),rc(nullptr),height(0),npl(0),color(RB_RED){}
    BinNode(T element,BinNodePosi(T) p= nullptr,BinNodePosi(T) l_child= nullptr,BinNodePosi(T) r_child= nullptr,int h=0,int l=1,RBColor c=RB_RED):
    data(element),parent(p),lc(l_child),rc(r_child),height(h),npl(l),color(c){}

    int size();
    BinNodePosi(T) insertAsLC(T const&);
    BinNodePosi(T) insertAsRC(T const&);
    BinNodePosi(T) succ();

    template <typename VST> void travLevel(VST&);
    template <typename VST> void travPre(VST&);
    template <typename VST> void travIn(VST&);
    template <typename VST> void travPost(VST&);

    bool operator<(BinNode const&bn){
        return data<bn.data;
    }
    bool operator==(BinNode const&bn){
        return data==bn.data;
    }
    bool operator>(BinNode const&bn){
        return data>bn.data;
    }

    BinNodePosi(T) zig();
    BinNodePosi(T) zag();
    BinNodePosi(T) balance();
    BinNodePosi(T) imitate(const BinNodePosi(T));
};

#include "BinNode_implementation.h"

