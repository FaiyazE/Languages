
/*
*
*Description: BST, a binary tree in which for each node, value of all the nodes
* in left subtree is lesser and value of all the nodes in right subtree is 
* greater.
*		
*/

#include <iostream>

using namespace std;

class Node {
    public:
	Node(){
           left = right  = NULL;
           data = 0;
        }
	~Node(){
           left = right  = NULL;
           data = 0;
        }
	Node *left, *right;
	int data;
};

class BST : public Node {
	
	public:
		Node* deleteNode(Node *, int);
		void insert(Node **, int);
                void create(Node * , int);
                void printBstPreorder(Node * );
                void printBstInorder(Node * );
                void printBstPostorder(Node * );
          

};

void BST::create( Node * nodeData , int data)
{
          
	nodeData->data = data;
        nodeData->left = NULL;
	nodeData->right = NULL;
	return;
}

void BST::insert( Node **nodeData ,int data)
{    
        if(*nodeData == NULL){
               BST *tempData = new BST;
	       create(tempData, data);
               *nodeData = tempData;
        }
	else if ( (*nodeData)->data > data ){
             insert(&((*nodeData)->left), data);
        }
        else if ( (*nodeData)->data <= data ){
             insert(&((*nodeData)->right), data);
        }
             return;	
}


Node* BST::deleteNode(Node *nodeData, int data)
{

	if (nodeData == NULL){
	     return nodeData;
	} else if (nodeData->data > data){
             nodeData->left = deleteNode(nodeData->left, data);
             return nodeData;
		
	} else if (nodeData->data < data){
             nodeData->right = deleteNode(nodeData->right, data);
             return nodeData;
		
	} else {

            // We reach here when root is the node 
            // to be deleted. 
  
            // If one of the children is empty 
	    if (nodeData->left == NULL) { 
        	Node* temp = nodeData->right; 
	        delete nodeData; 
        	return temp; 
    	    }	 
            else if (nodeData->right == NULL) { 
                Node* temp = nodeData->left; 
                delete nodeData; 
                return temp; 
            } 
  
             // If both children exist 
            else { 
  
                Node* succParent = nodeData->right; 
          
                // Find successor 
                Node *succ = nodeData->right; 
                while (succ->left != NULL) { 
                     succParent = succ; 
                     succ = succ->left; 
                 } 
  
               // Delete successor.  Since successor 
               // is always left child of its parent 
               // we can safely make successor's right 
               // right child as left of its parent. 
               succParent->left = succ->right; 
  
               // Copy Successor Data to root 
               nodeData->data = succ->data; 
  
               // Delete Successor and return root 
               delete succ;          
               return nodeData; 
           } 
       }
}

//Preorder (Root, Left, Right)
void BST::printBstPreorder(Node *nodeData)
{
    if (nodeData != NULL) { 
        cout << nodeData->data << endl; 
        printBstPreorder(nodeData->left); 
        printBstPreorder(nodeData->right); 
    } 
    return;
} 

// This funtcion is here just to test buildTree() 
// Inorder (Left, Root, Right)
void BST::printBstInorder(Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left child 
    printBstInorder(node->left); 
  
    // then print the data of node
    cout << node->data << endl; 
  
    // now recur on right child 
    printBstInorder(node->right); 
} 


//Postorder (Left, Right, Root)
void BST::printBstPostorder(Node *nodeData)
{
    if (nodeData != NULL) { 
        printBstPostorder(nodeData->left); 
        printBstPostorder(nodeData->right); 
        cout << nodeData->data << endl; 
    } 
    return;
} 


int main()
{
    BST *root; 
    root = new BST;	

    root->create( static_cast <class Node *> (root) , 15);
    root->insert( reinterpret_cast <class Node **> (&root) , 12);
    root->insert( reinterpret_cast <class Node **> (&root) , 11);
    root->insert( reinterpret_cast <class Node **> (&root) , 13);
    root->insert( reinterpret_cast <class Node **> (&root) , 17);
    root->insert( reinterpret_cast <class Node **> (&root) , 16);
    root->insert( reinterpret_cast <class Node **> (&root) , 18);
    root->insert( reinterpret_cast <class Node **> (&root) , 10);

    
//    root->deleteNode( static_cast <class Node *> (root) , 10);

    cout << "Print order inorder(Left, Root, Right)\n ";
    root->printBstInorder(static_cast <class Node *> (root));

    cout << "Print order Preorder (Root, Left, Right)\n ";
    root->printBstPreorder( static_cast <class Node *>(root) );

    cout << "Print order Postorder (Left, Right, Root)\n ";
    root->printBstPostorder(static_cast <class Node *> (root));
    return 0;
}
