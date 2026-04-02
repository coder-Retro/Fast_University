#include"list.h"
// Node Methods
Node::Node(int data)
{
    this->data=data; // Data in the Node
    next=nullptr; // Points to Next Node of LinkedList
}
// List Methods
List::List():head(nullptr),tail(nullptr){}
// Major Functions
void List::putFront(int data) // Putting Node at List Front
{
    Node* newNode=new Node(data); // Creating newNode with data
    if(!head) // If List is Empty
    {
        head=tail=newNode; // Setting head/tail to newNode
        return; // returning to call
    }
    else // If Linked List is Not Empty
    {
        newNode->next=head; // Pointing newNode's next to head
        head=newNode; // Updating head to newNode
    }
}
void List::putBack(int data) // Putting Node at List Back
{
    Node* newNode=new Node(data); // Creating newNode with data
    if(!head) // If List is Empty
    {
        head=tail=newNode; // Setting head/tail to newNode
        return; // returning to call
    }
    else // If Linked List is Not Empty
    {
        tail->next=newNode; // Pointing tail's next to newNode
        tail=newNode; // Updating tail to newNode
    }
}
void List::remFront() // Removing Front Node From List
{
    if(!head) // If List is Empty
        return; // Returning to call
    Node* temp=head; // Creating temp Node* to Front Node
    head=head->next; // Updating head to 2nd Front Node
    temp->next=nullptr; // Setting temp's next to nullptr
    delete temp; // Deleting Front Node
}
void List::remBack() // Removing Back Node From List
{
    if(!head) // If List is Empty
        return; // Returning to call
    Node* temp=head; // Creating temp Node* to Front
    while(temp->next!=tail) // While temp!=2nd Back Node
        temp=temp->next; // Updating temp to next Node
    tail=temp; // Setting tail to 2nd Back Node
    temp=temp->next; // Updating temp to last Node
    tail->next=nullptr; // Setting tail's next to nullptr
    delete temp; // Deleting last Node
}
void List::printList() // Displaying List
{
    Node* temp=head; // Creating temp Node* to head
    while(temp) // While temp is not nullptr
    {
        cout<<temp->data<<" -> "; // Display temp's data
        temp=temp->next; // Updating temp to next Node
    }
    cout<<"NULL"<<'\n'; // Displaying End of List
}
void List::insertNode(int data,int pos) // Insert Node at pos
{
    if(pos<0) // If Position is Invalid
    {
        cout<<"Invalid Position!\n"; // Displaying Message
        return; // Returning to call
    }
    if(!pos||!head) // If Target Position is head
    {
        putFront(data); // Calling putFront();
        return; // Returning to call
    }
    Node* temp=head; // Creating temp Node* to head
    for(int i=0;i<pos-1;i++) // Finding Previous Node of Target
    {
        if(!temp->next) // If Position was not found in the List
        {
            cout<<"Invalid Position!\n"; // Displaying Message
            return; // Returning to call
        }
        temp=temp->next; // Updating temp to next Node
    }
    Node* newNode=new Node(data); // Creating newNode with data
    newNode->next=temp->next; // Pointing newNode to next Node of Target Position
    temp->next=newNode; // Pointing Previous Node of Target Position to newNode
}
void List::deleteNode(int pos) // Delete Node at pos
{
    if(pos<0) // If Position is Invalid
    {
        cout<<"Invalid Position!\n"; // Displaying Message
        return; // Returning to call
    }
    if(!head) // If List is Empty
        return; // Returning to call
    if(!pos&&head) // If Target Position is head
    {
        remFront(); // Calling putFront();
        return; // Returning to call
    }
    Node* temp=head; // Creating temp Node* to head
    for(int i=0;i<pos-1;i++) // Finding Previous Node of Target
    {
        if(!temp->next) // If Position was not found in the List
        {
            cout<<"Invalid Position!\n"; // Displaying Message
            return; // Returning to call
        }
        temp=temp->next; // Updating temp to next Node
    }
    Node* target=temp->next; // Creating target Node* to pos Node
    if(!target) // If Position was not found in the List
    { 
        cout<<"Invalid Position!\n"; // Displaying Message
        return; // Returning to call
    }
    if(!target->next) // Target Node is Back Node
    {
        remBack(); // Calling remBack();
        return; // Returning to call
    }
    temp->next=target->next; // Updating temp's next to Target's next
    delete target; // Removing Target Node
}
int List::searchNode(int data) // Searching data in List
{
    Node* temp=head; // Creating temp Node* to Front Node
    int pos=0; // Creating Position to Node 0
    while(temp) // While temp is not nullptr
    {
        if(temp->data==data) // If data is found
            return pos; // Returning Position of Node
        pos++;
        temp=temp->next; // Updating temp to next Node
    }
    return -1; // data not found so returning -1
}