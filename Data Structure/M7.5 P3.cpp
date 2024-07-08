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
    int cnt = 0;
    while(true)
    {
        cin>>v;
        if(v == -1) break;
        Insert_at_tail(head, tail, v);
        cnt++;
    }
    int mid;
    Node* tmp = head;
    if(cnt%2 == 0)
    {
        mid = cnt/2;
        for(int i = 1; i<mid; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else
    {
        mid = (cnt+1)/2;
        for(int i = 1; i<mid; i++)
        {
            tmp = tmp->next;
        }
        cout<<tmp->val;
    }
    return 0;
}