#include <iostream>
using namespace std;
#include <map>
class Node {
public:
  int data;
  Node *next;

  // constructor
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  // destructor
  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for node with data " << value << endl;
  }
};

void insertAtHead(Node *&head, int d) {
  // new node create
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}
void insertAtTail(Node *&tail, int d) {
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d) {
  if (position == 1) {
    insertAtHead(head, d);
    return;
  }
  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }
  if (temp->next == NULL) {
    insertAtTail(tail, d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}
void deleteNode(int position, Node *&head, Node *&tail) {
  // deleting first node
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    // memory free start node
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
      cout << "Loop is present" << endl;
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  cout << "Loop is not present" << endl;
  return false;
}
Node *floyDetectLoop(Node *head) {
  if (head == NULL) {
    cout << "absent";
    return NULL;
  }
  Node *slow = head;
  Node *fast = head;

  while (slow != NULL && fast != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
    }
    slow = slow->next;
    if (slow == fast) {
      //   cout << "Present at " <<  << endl;
      return slow;
    }
  }
  cout << "absent" << endl;
  return NULL;
}
Node *getStartingNode(Node *head) {
  if (head == NULL) {
    return NULL;
  }
  Node *intersection = floyDetectLoop(head);
  Node *slow = head;
  while (slow != intersection) {
    slow = slow->next;
    intersection = intersection->next;
  }
  return slow;
}
void removeLoop(Node *head) {
  if (head == NULL) {
    return;
  }
  Node *startOfLoop = getStartingNode(head);
  Node *temp = startOfLoop;
  while (temp->next != startOfLoop) {
    temp = temp->next;
  }
  cout << "Loop removed" << endl;
  temp->next = NULL;
}
int main() {
  // created a new node
  Node *node1 = new Node(10);
  //   cout << node1->data << endl;
  //   cout << node1->next << endl;

  // Head pointed to node1
  Node *head = node1;
  Node *tail = node1;
  print(head);

  insertAtTail(tail, 12);
  insertAtTail(tail, 15);
  //   print(head);

  insertAtPosition(tail, head, 4, 20);
  print(head);
  //   cout << tail->data;
  //   cout << " " << head->data;
  tail->next = head->next;
  floyDetectLoop(head);
  removeLoop(head);
  cout << "loop starting point at " << getStartingNode(head)->data << endl;
  //   print(head);
  // cout << tail->data;
  // cout << " " << head->data;

  //   deleteNode(3, head, tail);
  //   print(head);
  //   cout << tail->data;
}