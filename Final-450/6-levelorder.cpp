#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node*right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};




class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
     vector<int> v;
     queue<Node*> q;
     q.push(node);
     while(!q.empty()){
         Node * temp = q.front();
         v.push_back(temp->data);
         q.pop();
         
         if(temp->left){
             q.push(temp->left);
         } 
         
         if(temp->right){
             q.push(temp->right);
         } 
         
         
     }
     
     return v;
    }
};