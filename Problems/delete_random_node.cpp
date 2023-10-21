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
        Node()
        {
            data = 0;
            next = NULL;
        }
};
void print(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr  = curr->next;
    }
    
}

void deletes(Node *aa)
{
    if(aa == NULL) return;
    if(aa->next == NULL) 
    {
        delete(aa);
        return;
    }
}

int main()
{
    Node *root1 = new Node(0);
    root1->next = new Node(22);
    root1->next->next = new Node(33);
    cout << "enter node to delete ";
    int data;
    cin >> data;
    Node *aa = new Node(data);
    print(root1);
    deletes(aa);
    
    cout << endl;
    print(root1);
}