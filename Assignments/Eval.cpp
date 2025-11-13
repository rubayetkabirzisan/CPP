#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    char data;
    Node* next;
    Node(char ch)
    {
        data=ch;
        next=NULL;
    }
};
class Queue
{
    Node* head;
    Node*tail;
public:
    Queue()
    {
        head=NULL;
        tail=NULL;
    }
    void enqueue(char ch)
    {
        Node* newnode =new Node(ch);
        if(isEmpty())
        {
            head=NULL;
            tail=NULL;

        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }

    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;

        }
        Node* temp=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete temp;

    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;

        }
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }
    bool isEmpty()
    {
        return head == NULL;
    }
};
int main ()
{
    Queue q;

    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.display();
    q.dequeue();
    q.display();

}

