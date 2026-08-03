#include <bits/stdc++.h>
#include <iostream>

using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
// CONVERT BST TO MIN HEAP
void storeInorder(Node *root, vector<int> &sortedArr) {
  if (root == NULL)
    return;
  storeInorder(root->left, sortedArr);
  sortedArr.push_back(root->data);
  storeInorder(root->right, sortedArr);
}
void convertToMinHeap(Node *root, vector<int> &sortedArr, int &index) {
  if (root == NULL)
    return;
  root->data = sortedArr[index++];
  convertToMinHeap(root->left, sortedArr, index);
  convertToMinHeap(root->right, sortedArr, index);
}
int main() {
  // 1. Set up a sample BST
  Node *root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(6);
  root->left->left = new Node(1);
  root->left->right = new Node(3);
  root->right->left = new Node(5);
  root->right->right = new Node(7);

  // 2. Extract sorted elements
  vector<int> sortedArr;
  storeInorder(root, sortedArr);

  // 3. Convert to Min Heap (CRITICAL: initialize index to 0)
  int index = 0;
  convertToMinHeap(root, sortedArr, index);

  return 0;
}
