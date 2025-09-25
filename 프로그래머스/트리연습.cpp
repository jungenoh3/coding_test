#include <iostream>
#include <vector>

using namespace std;

class Node {
	public:
		int val;
		Node *left, *right;
		
		Node(int key): val(key), left(nullptr), right(nullptr) {}
};

class BST {	
	public:
		Node* root;
		BST(): root(nullptr) {}
		Node* insertNode(Node* node, int key){
			if(!node) {
				return new Node(key);
			}
			
			if (key < node->val){
				node->left = insertNode(node->left, key);
			} else {
				node->right = insertNode(node->right, key);
			}
			return node;
		}
		
		void insert(int key){
			root = insertNode(root, key);
		}
		
};

void preorder(Node* node){
	if(!node){
		return;
	}
	
	cout << node->val << " ";
	preorder(node->left);
	preorder(node->right);
}


int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	
	BST bst;
	for(int i=0; i<v.size(); i++){
		bst.insert(v[i]);
	}
	
	preorder(bst.root);
}
