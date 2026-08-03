#include <iostream>
using namespace std;
#include <map>
#include <unordered_map>

int main() {
  // creation

  unordered_map<string, int> m;

  // insertion

  pair<string, int> p = make_pair("Vansh", 3);

  m.insert(p);

  // 2
  pair<string, int> pair2("Kumar", 4);

  //   m.insert(pair2);
  // 3
  m["Rajput"] = 1;
  // Search
  cout << m["Kumar"] << endl;
  //   cout << m.at("Vansh") << endl;
  //   //   cout << m["NOT"] << endl;

  //   // size
  cout << m.size() << endl;

  //   // to check presence
  //   cout << m.count("Love") << endl;

  // erase
  m.erase("Kumar");
  cout << m.size() << endl;

  // Iterator

  unordered_map<string, int>::iterator it = m.begin();
  while (it != m.end()) {
    cout << it->first << " " << it->second << endl;
    it++;
  }

  return 0;
}
