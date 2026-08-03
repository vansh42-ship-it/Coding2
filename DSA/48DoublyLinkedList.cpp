#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  // constructor
  Node(int d) {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node() {
    int val = this->data;
    if (next != NULL) {
      delete next;
      next = NULL;
    }
    cout << "Memory free for node with data " << val << endl;
  }
};

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLength(Node *head) {
  Node *temp = head;
  int length = 0;
  while (temp != NULL) {
    cout << temp->data;
    temp = temp->next;
    length++;
  }
  return length;
}

void insertAtHead(Node *&tail, Node *&head, int d) {
  if (head == NULL) {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  } else {
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}
void insertAtTail(Node *&tail, Node *&head, int d) {
  if (tail == NULL) {
    Node *temp = new Node(d);
    tail = temp;
    head = temp;
  }
  Node *temp = new Node(d);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d) {
  // insert at start
  if (position == 1) {
    insertAtHead(tail, head, d);
    return;
  }
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }
  // inserting at last position
  if (temp->next == NULL) {
    insertAtTail(tail, head, d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}

void deleteNode(Node *&tail, Node *&head, int position) {
  if (position == 1) {
    Node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  } else {
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;
    while (cnt < position) {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    if (curr->next == NULL) {
      tail = prev;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}
int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  insertAtHead(tail, head, 12);
  print(head);
  insertAtHead(tail, head, 15);
  insertAtHead(tail, head, 20);
  insertAtTail(tail, tail, 5);
  print(head);
  insertAtPosition(tail, head, 6, 55);
  print(head);
  cout << "Tail and Head " << tail->data << " " << head->data << endl;
  deleteNode(tail, head, 6);
  print(head);
  cout << "Tail and Head " << tail->data << " " << head->data;
}