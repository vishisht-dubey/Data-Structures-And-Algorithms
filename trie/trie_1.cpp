#include <bits/stdc++.h>
using namespace std;

// Implementation of Trie
struct TrieNode {
    TrieNode *children[26];
    bool isEnd;
    TrieNode() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};

// Search in Trie
bool search(TrieNode *node,string& key) {
    int n = key.length();
    for(int i=0;i<n;i++){
        int index = key[i] - 'a';
        if(node->children[index] == NULL)
            return false;
        node = node->children[index];
    }
    return node->isEnd;
}

// Insert in Trie
void insert(TrieNode *node,string& key) {
    int n = key.length();
    for(int i=0;i<n;i++){
        int index = key[i] - 'a';
        if(node->children[index] == NULL)
        {
            node->children[index] = new TrieNode();
        }
        node = node->children[index];
    }
    node->isEnd = true;
    return ;
}

// check whether the node is empty or not
bool isEmpty(TrieNode* node){
    if(node == NULL)
    return true;
    for(int i=0;i<26;i++){
        if(node->children[i]!=NULL)
        return false;
    }
    return true;
}

// delete a word from the TrieNode
TrieNode* deleteWord(TrieNode* node,int i,string& key) {
       if(node == NULL)
       return NULL;
       if(i==key.length()){
        node->isEnd = false;
        if(isEmpty(node)){
            delete node;
            node = NULL;    
        }
        return node;
       }
       int k = key[i] - 'a';
       node->children[k] = deleteWord(node->children[k],i++,key);
       if(isEmpty(node) && node->isEnd == false){
        delete node;
        node = NULL;
       }
       return node;
}

int main(){
    return 0;
}