#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

// Hàm duyệt cây theo thứ tự NLR
void preOrder(Node* root) {
    if (!root) return;
    cout << root->data << " ";   // Nút (N)
    preOrder(root->left);        // Trái (L)
    preOrder(root->right);       // Phải (R)
}

int main() {
    Node* root = nullptr;
    int values[] = {88, 66, 44, 55, 33, 22, 77, 11, 99, 38, 60, 79};
    for (int val : values) {
        root = insert(root, val);
    }
    preOrder(root);  // Duyệt cây theo NLR
    return 0;
}
