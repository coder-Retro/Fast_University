#include<iostream>
using namespace std;
// Node Class
class Node
{
public:
    int data;
    Node* left,right;
    Node(int data);
}
// Node Methods
Node::Node(int data):left(nullptr),right(nullptr)
{
    this->data=data;
}
// Tree Class
class Tree
{
    Node* root;
public:
    Tree();
    // Major Functions
    void insertNode(int data);
    void deleteNode(int data);
    void preOrder();
    void inOrder();
    void postOrder();
}
// Tree Methods
Tree::Tree():root(nullptr){}
void Tree::insertNode(int data)
{
    Node* newNode=new Node(data);
    if(!newNode)
    {
        cout<<"Memory Allocation Failed!\n";
        return;
    }
    if(!root)
    {
        root=newNode;
        return;
    }
    Node* temp=root;
    while(1)
    {
        if(temp->data>newNode->data)
        {
            if(temp->left!=nullptr)
                temp=temp->left;
            else
            {
                temp->left=newNode;
                return;
            }
        }
        else if(temp->data<newNode->data)
        {
            if(temp->right!=nullptr)
                temp=temp->right;
            else
            {
                temp->right=newNode;
                return;
            }
        }
        else
        {
            cout<<"Data Already Exists in Tree!\n";
            delete newNode;
            newNode=nullptr;
            return;
        }
    }
}