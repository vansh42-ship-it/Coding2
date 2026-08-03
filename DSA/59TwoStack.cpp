#include <bits/stdc++.h>
class TwoStack {
  int *arr;
  int top1;
  int top2;
  int size;

public:
  // Initialize TwoStack.
  TwoStack(int s) {
    this->size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
  }

  // Push in stack 1.
  void push1(int num) {
    if (top2 - top1 > 1) {
      top1++;
      arr[top1] = num;
    } else {
      // cout<<"No space available "<<endl;
    }
  }

  // Push in stack 2.
  void push2(int num) {
    if (top2 - top1 > 1) {
      top2--;
      arr[top2] = num;
    } else {
      // cout<<"No space available"<<endl;
    }
  }

  // Pop from stack 1 and return popped element.
  int pop1() {
    if (top1 >= 0 && top1 < size) {
      int k = arr[top1];
      top1--;
      return k;
    } else {
      // cout<<"stack is empty"<<endl;
      return -1;
    }
  }

  // Pop from stack 2 and return popped element.
  int pop2() {
    if (top2 < size) {
      int k = arr[top2];
      top2++;
      return k;
    } else {
      // cout<<"stack is empty"<<endl;
      return -1;
    }
  }
};
