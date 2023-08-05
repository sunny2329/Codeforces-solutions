#include <bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;


    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


vector<int> reverselevelorder(node *root){
    vector<int> ans;

    stack<node*> s;
    queue<node*> q;

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        s.push(temp);

        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);

    }

    while(!s.empty()){
        ans.push_back(s.top()->data);
        s.pop();
    }
    return ans;
}


int main()
{

}