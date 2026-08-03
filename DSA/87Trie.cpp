#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
  char data;
  TrieNode *children[26];
  bool isTerminal;

  TrieNode(char ch) {
    data = ch;
    for (int i = 0; i < 26; i++) {
      children[i] = nullptr;
    }
    isTerminal = false;
  }
};
class Trie {
public:
  TrieNode *root;
  Trie() { root = new TrieNode('\0'); }

  bool hasNoChildren(TrieNode *node) {
    for (int i = 0; i < 26; i++) {
      if (node->children[i] != NULL) {
        return false;
      }
    }
    return true;
  }

  TrieNode *deleteUtil(TrieNode *current, string word) {
    if (current == NULL) {
      return NULL;
    }
    if (word.length() == 0) {
      current->isTerminal = false;
      if (hasNoChildren(current)) {
        delete current;
        current = NULL;
      }
      return current;
    }
    int index = word[0] - 'A';
    current->children[index] =
        deleteUtil(current->children[index], word.substr(1));
    if (hasNoChildren(current) && current->isTerminal == false &&
        current != root) {
      delete current;
      current = NULL;
    }
    return current;
  }
  void deleteWord(string word) { root = deleteUtil(root, word); }
  void insertUtil(TrieNode *root, string word) {
    // base case
    if (word.length() == 0) {
      root->isTerminal = true;
      return;
    }
    // ASSUMPTION WORD WILL BE IN CAPS
    int index = word[0] - 'A';
    TrieNode *child;
    // present
    if (root->children[index] != NULL) {
      child = root->children[index];
    } else {
      child = new TrieNode(word[0]);
      root->children[index] = child;
    }
    insertUtil(child, word.substr(1));
  }
  void insertWord(string word) { insertUtil(root, word); }
  bool searchUtil(TrieNode *root, string word) {
    // base case
    if (word.length() == 0) {
      return root->isTerminal;
    }
    int index = word[0] - 'A';
    TrieNode *child;
    // present hai
    if (root->children[index] != NULL) {
      child = root->children[index];
    } else {
      return false;
    }
    return searchUtil(child, word.substr(1));
  }
  bool searchWord(string word) { return searchUtil(root, word); }
};
int main() {
  Trie *t = new Trie();
  t->insertWord("ABCD");
  t->deleteWord("ABCD");
  cout << "Present or Not " << t->searchWord("ABCD") << endl;
  return 0;
}