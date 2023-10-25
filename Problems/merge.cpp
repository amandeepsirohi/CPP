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

Node *merge(Node *first , Node *second)
{
    if(first == NULL) return second;
    if(second == NULL) return first;
    if(first == NULL && second == NULL) return NULL;
    if(first->data >= second->data ) swap(first , second);
    Node *res = first;
    while(first!= NULL && second != NULL)
    {
        Node *temp = NULL;
        while(first != NULL && first->data <= second->data)
        {
            temp = first;
            first = first->next;
        }
        temp->next = second;
        swap(first , second);
    }
    return res;
}

void print(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr  = curr->next;
    }
    
}


int main()
{
    Node *root1 = new Node(1);
    root1->next = new Node(22);
    root1->next->next = new Node(33);

    Node *root2 = new Node(1);
    root2->next = new Node(2);
    root2->next->next = new Node(5);

    Node *root = merge(root1 , root2);

    print(root2);

}