/****************
BST header file
*****************/

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

struct BST {
    struct Node* root;
};


// Functions

// Create BST with root = NULL and return it
struct BST* createBST();


// Do an inorder traversal of the BST (first argument) and
// print the keys on the same line with a space between keys
// Eg. 12 15 100 120
void inorderTraversal(struct BST*);


// Create a BST node with the key (second argument) and insert
// it in the BST (first argument)
void insert(struct BST*, int);


// Return the height of the BST (first argument)
// Assume that the height of an empty tree is -1
int height(struct BST*);


// Return the depth of the key (second argument) in the BST (first argument)
// Return -1 if key is not found
int depth(struct BST*, int);


// Free BST (first argument) nodes and BST
void deleteBST(struct BST*);
