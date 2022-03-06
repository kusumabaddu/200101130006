# include<iostream>
    using namespace std;

    struct Node{
	
	 int data;
	
	struct Node* left;
	struct Node* right;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
		
	}
	
};
void preorder(struct Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder (root->left);
	preorder(root->right);
	
}
int main ()
{
	struct Node* root = new Node(12);
	root->left = new Node (6);
	root->right =new Node (10);
	root->left->left=new Node(7);
	root->left->right=new Node(8);
	root->right->left=new Node(9);
	root->right->right=new Node(11);
	

	
	preorder(root);
	return 0; 
}
