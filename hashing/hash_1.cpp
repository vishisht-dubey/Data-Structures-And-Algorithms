// Chaining method

#include <bits/stdc++.h>
using namespace std;

struct MyHash{
   int BUCKET;
   list<int> *table;

   MyHash(int b){
    BUCKET = b;
    table = new list<int>[b];
   }

   void insert_element(int key){
     int i = key%BUCKET;
     table[i].push_back(key);
     return ;
   }

    bool search(int key){
     int i = key%BUCKET;
     for(auto x:table[i]){
        if(x==key)
        return true;
     }
     return false;
   }
    void remove_element(int key){
     int i = key%BUCKET;
     table[i].remove(key);
     return ;
   }

//    vector<int> print_element(){
//     int i = key%BUCKET;
//     vector<int> v;
//     bool present = false;
//      for(auto x:table[i]){
//         // if(x==key)
//         // {   present = true;
//         //     // cout<<key<<endl;
//         //     return key;
//         //     }
//         v.push_back(x);
//      }
//     //  if(!present){
//     //     cout<<-1<<endl;
//     //  }
//      return v;
//    }

};

int main(){
    int arr[9] = {10,23,45,32,42,68,98,77,19};
    MyHash m(19);
    m.insert_element(190);
    m.insert_element(8990);
    bool result = m.search(190);
    m.remove_element(190);
    cout<<result<<endl;
    result = m.search(190);
    cout<<result<<endl;
    // for(int i=0;i<11;i++)
    // int x = m.print_element(8990);
    // cout<<x<<endl;
    return 0;
}