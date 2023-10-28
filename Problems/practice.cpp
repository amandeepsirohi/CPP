#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node{
        int data;
        Node *next;
    public:
        Node()
        {
            data = 0;
            next = NULL;
        }
        Node(int x)
        {
            data = x;
            next = NULL;
        }

};

void print(Node *root)
{
    Node *curr = root;
    while(curr!= NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;
}

Node *add(Node *first , Node *second)
{
    Node *gg = new Node();
    Node *temp = gg;
    int sum = 0 , carry = 0;
    while(first || second || sum)
    {
        sum = 0;
        if(first != NULL)
        {
            sum += first->data;
            first = first->next;
        }
        if(second)
        {
            sum += second->data;
            second = second->next;
        }
        sum += carry;
        carry = sum / 10;
        Node *aa = new Node(sum % 10);
        temp->next = aa;
        temp = temp->next;
    }
    return gg->next;
}

int main()
{
    Node *root1 = new Node(1);
    root1->next = new Node(3);
    root1->next->next = new Node(5);
    Node *root2 = new Node(2);
    root2->next = new Node(4);
    root2->next->next = new Node(6);
    print(root1);
    print(root2);
    Node *aa = add(root1 , root2);
    print(aa);
}