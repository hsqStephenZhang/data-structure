#pragma once


#include "BinNode.h"

template <typename T>BinNodePosi(T) BinNode<T>::insertAsLC(const T &element){
    return lc=new BinNode(element,this);
}

template <typename T>BinNodePosi(T) BinNode<T>::insertAsRC(const T &element){
    return rc=new BinNode(element,this);
}