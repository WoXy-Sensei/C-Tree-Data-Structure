#ifndef NODE_H
#define NODE_H

class Node
{
public: 
    Node(int value);
    int value;
    Node* right;
    Node* left;
   
};

#endif /*NODE_H*/