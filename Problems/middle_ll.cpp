#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node{
        int data;
        Node *next;
    public:
        Node(int x)
        {
            data = x;
            next = NULL;
        }
};
Node *middle(Node *head)
{
    Node *fast = head , *slow = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
        //when fast reaches end slow points to mid element
    return slow;
}
int main()
{
    Node *root = new Node(11);
    root->next = new Node(22);
    root->next->next = new Node(33);
    if(root == NULL) return -1;
    if(root->next == NULL) return root->data;
    Node *gg = middle(root);
    cout << gg->data ;
}
