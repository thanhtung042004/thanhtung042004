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

// Hàm chèn phần tử vào cây
Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

// Hàm tìm kiếm phần tử trong cây
bool search(Node* root, int key) {
    if (!root) return false; // Nếu cây rỗng hoặc không tìm thấy
    if (root->data == key) return true; // Nếu tìm thấy giá trị
    if (key < root->data)
        return search(root->left, key); // Tìm ở cây con bên trái
    else
        return search(root->right, key); // Tìm ở cây con bên phải
}

int main() {
    Node* root = nullptr;
    int values[] = {88, 66, 44, 55, 33, 22, 77, 11, 99, 38, 60, 79};
    
    // Chèn các giá trị vào cây
    for (int val : values) {
        root = insert(root, val);
    }

    // Tìm kiếm phần tử 55
    int key = 77;
    if (search(root, key))
        cout << "Tim thay " << key << " trong cay." << endl;
    else
        cout << "Khong tim thay " << key << " trong cay." << endl;
    
    return 0;
}