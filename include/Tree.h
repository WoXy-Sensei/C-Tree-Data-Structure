#ifndef TREE_H
#define TREE_H

#include "Node.h"

class Tree
{
public:
    Tree();
    void append(int value);
    bool isthere(int value);
    int getHeight();
    void preOrder();
    void postOrder();
    void inOrder();
private:
    void append(int value, Node* active);
    bool isthere(int value, Node* active);
    int getHeight(Node* active);
    void preOrder(Node* active);
    void postOrder(Node* active);
    void inOrder(Node* active);
    Node *root;
};
#endif /*TREE_H*/