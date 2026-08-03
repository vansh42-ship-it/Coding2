#include <bits/stdc++.h>
using namespace std;

// int main() {

//   // queue<int> q;

//   // q.push(11);
//   // q.push(34);
//   // q.push(45);

//   // cout << q.size() << endl;
//   // cout << q.front() << endl;
//   // q.pop();
//   // cout << q.front() << endl;

//   // implementing queue using array
//   //
//   https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

// }

int main() {
  // IMPLEMENTING DOUBLY ENDED QUEUE
  deque<int> d;

  d.push_front(12);
  d.push_back(14);

  cout << d.front() << endl;
  cout << d.back() << endl;

  d.pop_front();
  cout << d.front() << endl;
  cout << d.back() << endl;
}

// DOUBLE ENDED QUEUE IMPLEMENTATION LINK -

//[
//https://www.naukri.com/code360/problems/deque_1170059?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION
//]
