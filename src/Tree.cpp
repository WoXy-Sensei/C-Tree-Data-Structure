#include "../include/Tree.h"
#include "../include/Node.h"
#include "iostream"

using namespace std;

Tree::Tree()
{
    root = nullptr;
};
void Tree::append(int value)
{
    return Tree::append(value, root);
}
void Tree::append(int value, Node *active)
{

    if (active == 0)
    {
        root = new Node(value);
        return;
    }
    if (value < active->value)
    {
        if (active->left)
        {
            append(value, active->left);
        }
        else
        {
            active->left = new Node(value);
        }
    }
    else if (value > active->value)
    {
        if (active->right)
        {
            append(value, active->right);
        }
        else
        {

            active->right = new Node(value);
        }
    }
    else
        return;
}
bool Tree::isthere(int value)
{
    return isthere(value, root);
};

bool Tree::isthere(int value, Node *active)
{

    if (value < active->value)
    {
        if (active->left)
        {
            return isthere(value, active->left);
        }
        return false;
    }
    else if (value > active->value)
    {
        if (active->right)
        {
            return isthere(value, active->right);
        }

        return false;
    }
    else
    {
        return true;
    }
}
int Tree::getHeight()
{
    return getHeight(root);
}
int Tree::getHeight(Node *active)
{
    if (active)
    {
        return 1 + max(getHeight(active->left), getHeight(active->right));
    }
    return -1;
}

void Tree::preOrder()
{
    preOrder(root);
}

void Tree::preOrder(Node *active)
{
    if (active)
    {
        cout << active->value << " ";
        if (active->left)
        {
            preOrder(active->left);
        }
        if (active->right)
        {
            preOrder(active->right);
        }
    }
}

void Tree::postOrder()
{
    postOrder(root);
}
void Tree::postOrder(Node *active)
{
    if (active)
    {
        if (active->left)
        {
            postOrder(active->left);
        }
        if (active->right)
        {
            postOrder(active->right);
        }
        cout << active->value << " ";
    }
}

void Tree::inOrder()
{
    inOrder(root);
}

void Tree::inOrder(Node *active)
{

    if (active)
    {
        if (active->left)
        {
            inOrder(active->left);
        }

        cout << active->value << " ";

        if (active->right)
        {
            inOrder(active->right);
        }
    }
}

void Tree::remove(int value){
    remove(value,root);
}

void Tree::remove(int value,Node* &active){
    if(value == 0 ) return;
    else if(value < active->value){
        remove(value , active->left);
    }
    else if(value > active->value){
        remove(value, active->right);
    }
    else{
        if(active->left && active->right){

            active->value = maxValue(active->left);
            remove(active->value , active->left);
        }
        else{
            Node* willbedeleted = active;
            if(active->left){
                active = active->left;
            }
            else{
                active = active->right;
            }

            delete willbedeleted;
        }
    }
}

int Tree::maxValue(Node* active){
    if(active->right){
        return maxValue(active->right);
    }
    return active->value;
}