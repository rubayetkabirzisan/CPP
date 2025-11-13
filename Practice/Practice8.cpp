///Linked List
#include<iostream>
using namespace std;
#include<stdio.h>
struct node
{
    int data;
    node *next;
};
class list_
{
    node *head;
    node *tail;
public:
    list_()
    {
        head = NULL;
        tail = NULL;

    }
    void insert_first(int val)
    {
        node *newitem;
        newitem = new node;
        newitem->data = val;
        newitem->next = head;
        if (head==NULL)
        {
            newitem->next=head;
            head = newitem;
        }
        else
        {

        }

    }
    void insert_last(int val)
    {
        node *newitem;
        newitem = new node;
        newitem->data = val;/// '->' Dot pointer
        newitem->next = NULL;
        if (head==NULL)
        {
            head = newitem;
            tail = newitem;
        }

        else
        {
            tail->next = newitem;
            tail = newitem;
        }

    }

    void print()
    {
        node *current = head;
        while(current->next!=NULL)
        {

            cout<<current->data<<endl;
            current=current->next;

        }
        cout<<current->data<<endl;/// tail->data can also be used


    }


};
int main ()
{
    list_ l;
    l.insert_first(10);
    l.insert_first(20);
    l.insert_first(30);
    l.print();
}
