// Good Question for stack a conceptual question

#include <bits/stdc++.h>
using namespace std;

class Solution{
    int minEle;
    stack<int> s;

    int getMin(){
        if(s.empty())
        return -1;

        return minEle;
    }
   
    int pop(){
        if(s.empty())
        return -1;
        // Keeps the record of next minimum element if the previous minimum element is removed
        int x = s.top();
        s.pop();
        if(x<minEle){

            int k= minEle;
            minEle=2*minEle-x;
            return k;
        }
        return x;
    }

    void push(int x){
        if(s.empty())
        {minEle=x;
            s.push(x);}
            // Keeps the record of next minimum element if the previous minimum element is removed
        if(x<minEle){
            s.push(2*x-minEle);
            minEle=x;
        }
        else
        s.push(x);
    }

};

int main(){
    return 0;
}