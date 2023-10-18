#include <iostream>
#include <queue>
using namespace std;

// Define the structure of a node in the AVL tree
struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};

// Function to calculate the height of a node
int height(Node* node) {
    if (node == nullptr) return 0;
    return node->height;
}

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->height = 1;
    return newNode;
}

// Function to perform a right rotation on the given node
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform the rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));

    return x;
}

// Function to perform a left rotation on the given node
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform the rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

// Function to insert a new node into the AVL tree
Node* insert(Node* root, int data) {
    // Perform a standard BST insertion
    if (root == nullptr)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else // Duplicate data is not allowed
        return root;

    // Update the height of the current node
    root->height = 1 + max(height(root->left), height(root->right));

    // Get the balance factor to check for balancing
    int balance = height(root->left) - height(root->right);

    // Perform rotations as needed to balance the tree
    if (balance > 1) {
        if (data < root->left->data) {
            return rightRotate(root);
        } else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }

    if (balance < -1) {
        if (data > root->right->data) {
            return leftRotate(root);
        } else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }

    return root;
}

// Function to perform level order traversal (BFS) to print the tree
void levelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);

        if (current->right)
            q.push(current->right);
    }
}

int main() {
    int n, data;
    Node* root = nullptr;

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the values of the nodes: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    cout << "Level order traversal of the AVL tree: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}
