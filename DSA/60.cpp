#include <bits/stdc++.h>

// SORT A STACK
// void insertSorted(stack<int> &stack, int num){
// 	if(stack.empty()){
// 		stack.push(num);
// 		return;
// 	}
// 	int num2 = 0;
// 	if(stack.top()>num){
// 		num2 = stack.top();
// 		stack.pop();
// 	}
// 	else{
// 		stack.push(num);
// 		return;
// 	}
// 	insertSorted(stack,num);
// 	stack.push(num2);
// 	return;
// }

// void sortStack(stack<int> &stack){
// 	if(stack.empty()){
// 		return;
// 	}

// 	int num = stack.top();
// 	stack.pop();
// 	sortStack(stack);

// 	insertSorted(stack,num);
// 	return;

// }

// FIND MINIMUM NUMBER OF CHANGES TO FIX OPEN AND CLOSE BRACES IN A BALANCED WAY

// int findMinimumCost(string str) {
//   if(str.length()%2==1){
//       return -1;
//   }
//   stack<char> st;
//   for(int i = 0; i<str.length(); i++){
//       char ch = str[i];
//       if(ch =='{'){
//           st.push(ch);
//       }
//       else{
//           if(!st.empty()&& st.top()=='{'){
//               st.pop();
//           }
//           else{
//               st.push(ch);
//           }
//       }

//   }
//   int a=0,b=0;
//   while(!st.empty()){
//       if(st.top()=='{'){
//           a++;
//       }
//       else{
//           b++;
//       }
//       st.pop();
//   }
//   return ((a+1)/2 +(b+1)/2);

// }
