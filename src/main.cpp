#include "iostream"
#include "../include/Tree.h"
using namespace std;
int main()
{
    Tree *treeList = new Tree();
    treeList->append(30);
    treeList->append(15);
    treeList->append(45);
    treeList->append(25);
    treeList->append(40);
    treeList->append(60);


    treeList->preOrder();
    cout << endl;
    treeList->postOrder();
    cout << endl;
    treeList->inOrder();
    cout << endl;
    treeList->remove(25);

    treeList->preOrder();
    
}