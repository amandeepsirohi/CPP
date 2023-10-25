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
Node *add(Node *num1 , Node *num2)
{
    Node *gg = new Node();
    Node *temp = gg;
    gg->next = num2;
    int sum = 0 , carry = 0;
    while(num1 || num2 || carry)
    {   sum = 0;
        if(num1 != NULL)
        {
            sum += num1->data;
            num1 = num1->next;
        }
        if(num2 != NULL)
        {
            sum += num2->data;
            num2= num2->next;
        }
        sum += carry;
        carry = sum / 10;
        Node *new_n = new Node(sum % 10);
        temp->next = new_n;
        temp = temp->next;
    }
    return gg->next ;
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
    Node *root1 = new Node(9);

    Node *root2 = new Node(9);

    Node *root = add(root1 , root2);
    print(root);
}