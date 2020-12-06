#pragma once

#include "BinNode.h"
#include "BinNode_macro_BASIC.h"

template <typename T>BinNodePosi(T) BinNode<T>::succ() {
    BinNodePosi(T) s=this;
    // 如果有right child，说明下一个节点(后继)就是右子树的最左边的节点
    //如果没有right child，那么要找到当前节点作为left child的最低祖先节点
    if(rc){
        s=rc;
        while (HasLChild(*s)){
            s=s->lc;
        }
    }else{
        while(IsRChild(*s)){
            s=s->parent;
        }
    }
    return s;
}