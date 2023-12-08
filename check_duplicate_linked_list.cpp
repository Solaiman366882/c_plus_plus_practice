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
void insert_at_tail(Node * &head, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int linked_list_size(Node * head)
{
    int size_count = 0;
    Node * temp = head;
    while(temp != NULL)
    {
        size_count++;
        temp = temp->next;
    }
    return size_count;
}
void check_duplicate(Node * head)
{
    Node * temp = head;
    int sz = linked_list_size(head);
    bool flag = false;
    for(int i=0; i < sz; i++)
    {
        Node * temp2 = temp->next;
        while(temp2 != NULL)
        {
            if(temp->val == temp2->val)
            {
                flag = true;
                break;
            }
            temp2 = temp2->next;
        }
        if(flag)
        {
            break;
        }
        temp = temp->next;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main()
{
    Node * head = NULL;
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    check_duplicate(head);

    return 0;
}
