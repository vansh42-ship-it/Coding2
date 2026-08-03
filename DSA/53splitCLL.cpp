#include <iostream>
#include <map>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  // constructor
  Node(int d) {
    this->data = d;
    this->next = NULL;
  }
  // destructor
  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      delete next;
      next = NULL;
    }
    cout << "Memory free for node with data " << value << endl;
  }
};
void insertNode(Node *&tail, int element, int d) {

  // empty list
  if (tail == NULL) {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  } else {
    // non empty list
    // assuming that the element is present in the list
    Node *curr = tail;
    while (curr->data != element) {
      curr = curr->next;
    }
    // element found -> curr is representing element wala node
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}
void print(Node *&tail) {
  if (tail == NULL)
    return;

  Node *temp = tail;
  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != tail);

  cout << endl;
}
void deleteNode(Node *&tail, int value) {
  // empty list
  if (tail == NULL) {
    cout << "List is empty plz check again" << endl;
    return;
  } else {
    // non empty
    // assuming that value is present in the linked list
    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value) {
      prev = curr;
      curr = curr->next;
    }
    if (curr == prev) {
      tail = NULL;
    }
    if (tail == curr) {
      tail = prev;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}
bool detectedLoop(Node *head) {
  if (head == NULL) {
    return false;
  }
  map<Node *, bool> visited;
  Node *temp = head;
  while (temp != NULL) {
    if (visited[temp] == true) {
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}
int findLength(Node *head) {
  Node *temp = head;
  int len = 1;
  while (temp->next != head) {
    len++;
    temp = temp->next;
  }
  return len;
}
void splitCLL(Node *tail, Node *&head1, Node *&head2) {
  if (tail == NULL) {
    head1 = NULL;
    head2 = NULL;
    return;
  }

  Node *slow = tail->next; // actual head
  Node *fast = tail->next;

  while (fast->next != tail->next && fast->next->next != tail->next) {
    fast = fast->next->next;
    slow = slow->next;
  }

  head1 = tail->next; // first list head
  head2 = slow->next; // second list head

  slow->next = head1; // close first CLL
  fast->next = head2; // close second CLL
}

int main() {
  Node *tail = NULL;

  insertNode(tail, 1, 3);
  insertNode(tail, 3, 6);
  insertNode(tail, 6, 7);
  insertNode(tail, 7, 10);

  Node *head1 = NULL;
  Node *head2 = NULL;

  splitCLL(tail, head1, head2);

  print(head1); // 3 6
  print(head2); // 7 10
}
