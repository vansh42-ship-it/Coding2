#include <iostream>
using namespace std;
#include <vector>

// //Sieve of Eratosthenes

// int countPrime(int n) {

//   int cnt = 0;
//   vector<bool> prime(n + 1, true);
//   prime[0] = prime[1] = false;
//   for (int i = 2; i < n; i++) {
//     if (prime[i]) {
//       cnt++;

//       for (int j = 2 * i; j < n; j = j + i) {
//         prime[j] = false;
//       }
//     }
//   }
//   return cnt;
// }
// int main() { cout << "number of primes " << countPrime(41); }

// //NEED to find a^b in less time complexity than O(b) --> faster
// exponentiation int modularExponentiation(int x, int n, int m) { 	int res = 1;
// 	while(n>0){
// 		if(n&1){
// 			//odd
// 			res = (1LL*(res)*(x)%m)%m;
// 		}
// 		x = (1LL *(x)%m*(x)%m)%m;
// 		n = n>>1;
// 	}
// 	return res;
// }

// //FIND FACTORIAL USING MODULAR ARITHMETIC

// vector<int> factorialMod(int n, int m) {
//     vector<int> fact(n + 1);
//     fact[0] = 1;
//     for (int i = 1; i <= n; i++) {
//         fact[i] = (1LL * fact[i - 1] * i) % m;
//     }
//     return fact;
// }
