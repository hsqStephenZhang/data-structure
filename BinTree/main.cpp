#include <iostream>
#include "BinNode.h"

using namespace std;

int main(){
    typedef int T;
    BinNode<T> node(1);
    node.insertAsLC(2);
    node.insertAsRC(3);
    cout<<node.lc->data<<endl;
    cout<<node.rc->data<<endl;

    return 0;
}