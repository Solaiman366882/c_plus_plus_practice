#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node * &head,int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        cout <<endl << endl << "Inserted into Head." << endl << endl;
        return ;
    }
    Node * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << endl << endl << "Inserted into Tail."<<endl<<endl;
}

void delete_at_position(Node * head,int pos)
{
    Node * temp = head;
    for(int i=1; i<pos-1;i++)
    {
        temp = temp->next;
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Deleted" << endl;
}

void insert_at_head(Node * &head,int v)
{
    Node * newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Inserted into head" << endl;
}

void print_linked_list(Node * head)
{
    Node * temp = head;
    cout << endl << endl << "Your Linked List :";
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl ;
}

void insert_at_any_position(Node * &head,int pos,int v)
{
    Node * newNode = new Node(v);
    Node * temp = head;

    if(pos == 0)
    {
        insert_at_head(head,v);
    }
    else
    {
        for(int i=1; i <= pos-1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << endl << endl << "Inserted into Position : " << pos << endl;
    }
}

int main()
{
    Node * head = NULL;
    while(true)
    {
        cout << "Option 1: Insert into tail." << endl;
        cout << "Option 2: Insert into any position." << endl;
        cout << "Option 3: Insert into head." << endl;
        cout << "Option 4: print linked list." << endl;
        cout << "Option 5: Delete By Position" << endl;
        cout << "Option 5: Terminate the program." << endl;
        int op;
        cin >> op;
        if(op == 1)
        {
            int v;
            cout << endl << endl <<"Enter a number:";
            cin >> v;
            insert_at_tail(head,v);
        }
        else if(op == 2)
        {
            int pos,v;
            cout <<endl << "Enter a Position:";
            cin >> pos;
            cout << "Enter a value:";
            cin >> v;
            insert_at_any_position(head,pos,v);
        }
        else if(op == 3)
        {
            int v;
            cout << "Enter value:";
            cin >> v;
            insert_at_head(head , v);
        }
        else if(op == 4)
        {
            print_linked_list(head);
        }
        else if(op == 5)
        {
            int pos;
            cout << "Enter Position:";
            cin >> pos;
            delete_at_position(head,pos);
        }
        else if(op == 6)
        {
            break;
        }
    }

    return 0;
}



