#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
struct Node{
    Node *left , *right;
    int data;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int main()
{
    Node *root = new Node(11);
    root->left = new Node(22);
    root->right = new Node(33);
    root->left->left = new Node(44);
}