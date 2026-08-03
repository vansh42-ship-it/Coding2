#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;
  node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

node *findMid(node *&head) {
  node *fast = head->next;
  node *slow = head;
  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}
node *merge(node *&left, node *&right) {
  node *leftHead = left;
  node *rightHead = right;
  node *result = NULL;
  node *head2 = NULL;
  if (leftHead->data < rightHead->data) {
    result = leftHead;
    leftHead = leftHead->next;
    head2 = result;
  } else {
    result = rightHead;
    rightHead = rightHead->next;
    head2 = result;
  }
  while (leftHead != NULL && rightHead != NULL) {
    if (leftHead->data < rightHead->data) {
      result->next = leftHead;
      leftHead = leftHead->next;
    } else {
      result->next = rightHead;
      rightHead = rightHead->next;
    }
    result = result->next;
  }
  if (leftHead == NULL) {
    result->next = rightHead;
  } else {
    result->next = leftHead;
  }
  return head2;
}
node *mergeSort(node *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  node *mid = findMid(head);
  node *left = head;
  node *right = mid->next;
  mid->next = NULL;

  left = mergeSort(left);
  right = mergeSort(right);

  // merge both right and left sorted halfes

  node *result = merge(left, right);

  return result;
}
