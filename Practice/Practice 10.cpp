#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

class dll
{
    node *head;
    node *tail;
public:
    dll()
    {
        head=NULL;
        tail=NULL;
    }

    void print()
    {
        node *cur = new node;
        cur=head;
        if(cur->next==NULL)
        {
            cout<<cur->data;
        }
        else
        {
            while(cur->next!=NULL)
            {
                cout<<cur->data<<"->";
                cur=cur->next;
            }
        }
        cout<<"END(for now)\n";
    }

    void insertFirst(int num)
    {
        node *newitem;
        newitem= new node;
        newitem->data=num;
        newitem->next=NULL;
        newitem->next=NULL;
        newitem->prev=head;

        if(head==NULL)
        {

            head=newitem;
            tail=newitem;

        }

        else
        {
            newitem->next=head;
            head->prev=newitem;
            head=newitem;
        }

    }

    void insertLast(int num)
    {

    }

    void insertAtany(int num)
    {

    }

};

int main ()
{
    dll list1;
    while(1)
    {
        int num,choice;
        printf("Menu\n1.Insert at first\n2.Insert at last\n3.Enter at an index Pos\n4.Print");
        cout<<"\nEnter choice : ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the value you want to insert at first : ";
            cin>>num;
            list1.insertFirst(num);
        }

        else if(choice==2)
        {
            cout<<"Enter the value you want to insert at last : "<<endl;
            cin>>num;
            list1.insertLast(num);
        }

        else if(choice==3)
        {
            cout<<"Enter the value you want to insert at an index position : "<<endl;
            cin>>num;
            list1.insertAtany(num);
        }

        else if(choice==4)
        {
            list1.print();
        }
    }
}
