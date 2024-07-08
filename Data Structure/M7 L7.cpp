#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Print_linked_list_recursion(Node* head)
{
    if(head == NULL) return;
    cout<<head->val<<" ";
    Print_linked_list_recursion(head->next);
}
void Print_linked_list_reverse(Node* head)
{
    if(head == NULL) return;
    Print_linked_list_reverse(head->next);
}
void Insert_at_tail(Node*& head, Node*& tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        Insert_at_tail(head, tail, v);
    }   
    Print_linked_list_recursion(head);
    cout<<endl;
    Print_linked_list_reverse(head);
    return 0;
}