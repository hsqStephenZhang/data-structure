#pragma once

#include "BinNode.h"

template <typename T>class BinTree{
protected:
    int _size;
    BinNodePosi(T) _root;
    virtual int updateHeight(BinNodePosi(T) x);
    void updateHeightAbove(BinNodePosi(T) x);

public:
    BinTree():_size(0),_root(nullptr){}
    ~BinTree(){
        if(0<_size){

        }
    }

    BinNodePosi(T) root() const { return _root;}
    BinNodePosi(T) insertAsLC(BinNodePosi(T) x,T const&e);
    BinNodePosi(T) insertAsRC(BinNodePosi(T) x,T const&e);
    BinNodePosi(T) attachAsLC(BinNodePosi(T) x,BinTree<T>* &tree);
    BinNodePosi(T) attachAsRC(BinNodePosi(T) x,BinTree<T>* &tree);
    int remove(BinNodePosi(T) x);
    BinTree<T>* secede(BinNodePosi(T) x);
    template <typename VST> //操作器
    void travLevel ( VST& visit ) { if ( _root ) _root->travLevel ( visit ); } //层次遍历
    template <typename VST> //操作器
    void travPre ( VST& visit ) { if ( _root ) _root->travPre ( visit ); } //先序遍历
    template <typename VST> //操作器
    void travIn ( VST& visit ) { if ( _root ) _root->travIn ( visit ); } //中序遍历
    template <typename VST> //操作器
    void travPost ( VST& visit ) { if ( _root ) _root->travPost ( visit ); } //后序遍历

    bool operator< ( BinTree<T> const& t ) //比较器（其余自行补充）
    { return _root && t._root && lt ( _root, t._root ); }
    bool operator== ( BinTree<T> const& t ) //判等器
    { return _root && t._root && ( _root == t._root ); }
    bool operator> ( BinTree<T> const& t ) //比较器（其余自行补充）
    { return _root && t._root && lt ( _root, t._root ); }
};