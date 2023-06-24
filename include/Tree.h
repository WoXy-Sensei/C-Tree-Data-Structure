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
    void remove(int value);
private:
    void append(int value, Node* active);
    bool isthere(int value, Node* active);
    int getHeight(Node* active);
    void preOrder(Node* active);
    void postOrder(Node* active);
    void inOrder(Node* active);
    void remove(int value ,Node* &active);
    int maxValue(Node* active);
    Node *root;
};
#endif /*TREE_H*/