#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
    if(root==NULL){
        //rhis is the first node we have to create
        root=new Node(data);
        return root;
    }
    //no first node
    if(root->data>data){
        //insert in left
        root->left= insertIntoBST(root->left, data);
    }else{
        //insert in right
        root->right=insertIntoBST(root->right, data);
    }return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root, data);
        cin>>data;
    }
}
void levelordertraversal(Node* root){
    queue<Node*>q;
    //initially
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //A
        Node* temp=q.front();
        //B
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            //C
            cout<< temp->data<<" ";
            //D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
pair<int, int> predecessorSuccessor(Node *root, int key)
{
    Node *temp=root;
    int pred=-1;
    int succ=-1;

    while(temp->data!=key){
        if(temp->data>key){
            succ=temp->data;
            temp=temp->left;
            
            
        }else{
            pred=temp->data;
            temp=temp->right;
            
        }
    }   
    //pred and succ

    //pred
    Node* leftTree= temp->left;
    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
        //aisa iss liye kiya h kyunki jab hum left me jayenge toh jo sbase badi value hogi whi key k just pahle waala element hoga i.e. predecessor
    }
    //succ
    Node* rightTree=temp->right;
    while(rightTree!=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }
    // pair<int,int>ans=make_pair(pred,succ);
    // return ans;
    return {pred, succ};
    // Write your code here.
}


int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node"<<endl;
    takeinput(root);
    cout<<"Printing the tree"<<endl;
    levelordertraversal(root);
    return 0;
}