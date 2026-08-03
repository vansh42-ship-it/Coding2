#include <iostream>
using namespace std;
#include <stack>
class Stack {
  // properties
public:
  int *arr;
  int top;
  int size;
  // behaviour
  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int element) {
    if (size - top > 1) {
      top++;
      arr[top] = element;
    } else {
      cout << "Stack Overflow" << endl;
    }
  }
  void pop() {
    if (top >= 0) {
      top--;
    } else {
      cout << "Stack underflow" << endl;
    }
  }
  int peek() {
    if (top >= 0 && top < size) {
      return arr[top];
    } else {
      cout << "Stack is empty" << endl;
      return -1;
    }
  }
  bool isEmpty() {
    if (top == -1) {
      return true;
    }
    return false;
  }
};
int main() {
  //   stack<int> s;

  //   // push operation
  //   s.push(2);
  //   s.push(3);
  //   // pop

  //   s.pop();

  //   cout << "printing top element " << s.top() << endl;

  //   s.empty() ? cout << "YES" << endl : cout << "NO" << endl;

  Stack st(5);

  st.push(43);
  st.push(45);
  st.push(46);
  //   st.pop();
  //   st.pop();
  //   st.pop();
  cout << st.peek() << endl;
  if (st.isEmpty()) {
    cout << "Stack is empty" << endl;
  } else {
    cout << "Stack is not empty" << endl;
  }
  return 0;
}