#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *Next;
    Node(int value)
    {
        data = value;
        Next = NULL;
    }
};
void insertAtHead(Node *&head,int value)
{
    Node *newNode = new Node(value);
    //if head is empty
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->Next = head;
    head = newNode;
}
void insertAtTail(Node *&head,int value)
{
    Node *newNode = new Node(value);
      //if head is empty
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp -> Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;

}
int findMid(Node *&head)
{
    //if head is empty
    if(head == NULL)
    {
        return -1;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->Next!=NULL)
    {
        slow = slow->Next;
        fast =fast->Next->Next;
    }
    return slow->data;
}
void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data;
        if(n->Next != NULL)
        
            cout<<"->";
        
        n=n->Next;
    }
    cout<<endl;
}
int main()
{
    Node *head =NULL;
    int data,n;
    cout<<"Enter choice:";
    int choice;
    cin>> choice;
    while(choice != 0)
    {
        switch(choice)
        {
            case 1:
                cout<<"Enter the value: ";
                cin>>data;
                insertAtTail(head,data);
            break;
            case 2:
                cout<<"Enter the value: ";
                cin>>data;
                insertAtHead(head,data);
            break;
            case 3:
                int mid;
                mid=findMid(head);
                if(mid == -1)
                {
                    cout<<"This linked list is empty";
                }
                else
                {
                    cout<<"Your linked list: ";
                    display(head);
                    cout<<endl;
                    cout<<"Mid value is "<<mid <<endl;
                }
            break;
        default:
            break;

        }
        cout<<endl;
        cout<<"Next choice: ";
        cin>> choice;
    } 
    return 0;

}