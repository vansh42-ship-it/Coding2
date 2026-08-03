#include <iostream>
using namespace std;

int getLength(char name[]) {
  int count = 0;
  int i = 0;
  while (name[i] != '\0') {
    count++;
    i++;
  }
  return count;
}
void reverse(char name[], int n) {
  int s = 0;
  int e = n - 1;
  while (s < e) {
    swap(name[s++], name[e--]);
  }
}

int main() {
  //   // REVERSE A STRING
  //   char name[20];
  //   cin >> name;
  //   int n = getLength(name);
  //   reverse(name, n);
  //   cout << "reverse of the name is: " << name;
  //   string s = "vansh";
  //   s.push_back('n');
  //   cout << s;

  //
  //   string s;
  //   cin >> s;
  //   int arr[26] = {0};
  //   for (int i = 0; i < s.length(); i++) {
  //     char ch = s[i];
  //     // lowercase
  //     int number = 0;
  //     if (ch >= 'a' && ch <= 'z') {
  //       number = ch - 'a';
  //     } else {
  //       number = ch - 'A';
  //     }
  //     arr[number]++;
  //   }
  //   int maxi = -1;
  //   int ans = 0;
  //   for (int i = 0; i < s.length(); i++) {
  //     if (maxi < arr[i]) {
  //       ans = i;
  //       maxi = arr[i];
  //     }
  //   }
  //   char finalAns = 'a' + ans;
  //   cout << finalAns;
  //   return finalAns;
}