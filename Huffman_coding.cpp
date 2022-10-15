// C++ program for Huffman Coding with STL
#include <bits/stdc++.h>
using namespace std;

// A Huffman tree node
struct Node {

	// One of the input characters
	char data;

	// Frequency of the character
	unsigned freq;

	// Left and right child
	Node *left, *right;

	Node(char data, unsigned freq, Node* l = NULL, Node* r = NULL)
 
	{

		this->left = l;
		this->right = r;
		this->data = data;
		this->freq = freq;
	}
};

// For comparison of
// two heap nodes (needed in min heap)
struct compare {

	bool operator()(Node* l, Node* r)

	{
		return (l->freq > r->freq);
	}
};

// Prints huffman codes from
// the root of Huffman Tree.
void printCodes(struct Node* root, string str)
{

	if (!root)
		return;

	if (root->data != '$')
		cout << root->data << ": " << str << "\n";

	printCodes(root->left, str + "0");
	printCodes(root->right, str + "1");
}

// The main function that builds a Huffman Tree and
// print codes by traversing the built Huffman Tree
void printHcodes(char arr[], int freq[], int size)
{

	// Create a min heap & inserts all characters of data[]
	priority_queue<Node*, vector<Node*>, compare> h;

	for (int i = 0; i < size; ++i)
		h.push(new Node(arr[i], freq[i]));

	// Iterate while size of heap doesn't become 1
	while (h.size() > 1) {

		// Extract the two minimum
		// freq items from min heap
		Node *l = h.top();h.pop();

		Node *r = h.top();h.pop();

		// Create a new internal node with
		// frequency equal to the sum of the
		// two nodes frequencies. Make the
		// two extracted node as left and right children
		// of this new node. Add this node
		// to the min heap '$' is a special value
		// for internal nodes, not used
		Node *top = new Node('$', l->freq + r->freq, l, r);

		h.push(top);
	}

	// Print Huffman codes using
	// the Huffman tree built above
	printCodes(h.top(), "");
}

// Driver Code
int main()
{

	char arr[] = { 'a', 'd', 'e', 'f' };
	int freq[] = { 30, 40, 80, 60 };

	int size = sizeof(arr) / sizeof(arr[0]);

	printHcodes(arr, freq, size);

	return 0;
}
