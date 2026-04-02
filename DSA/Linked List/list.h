#include<iostream>
using namespace std;
// Node Class
class Node
{
public:
    int data;
    Node* next;
    Node(int data);
};
// List Class
class List
{
    Node* head; // Points to Front Node of List
    Node* tail; // Points to Back Node of List
public:
    List();
    // Major Functions
    void putFront(int data);
    void putBack(int data);
    void remFront();
    void remBack();
    void printList();
    void insertNode(int data,int pos);
    void deleteNode(int pos);
    int searchNode(int data);
};