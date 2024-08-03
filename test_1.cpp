// just for test

#include <bits/stdc++.h>
using namespace std;
string decodedString(string s){
        stack<int> k;
        stack<string> num;
        string result = "";
         string temp = "";
        int index1=-1,index2=-1;
        string freq="0";
        for(int i=0;i<s.length();i++){
            if((s[i]-'0')>=0&&(s[i]-'0')<=9)
            {temp=temp+s[i];}
            else{
                if(temp!="")
                {num.push(temp);}
                temp="";
            }
            if(s[i]=='[')
            k.push(i);
            else{
                if(!k.empty()){
                    index1 = k.top();
                    k.pop();
                    index2 = i;
                    freq=num.top();
                    num.pop();
                }
            }
            while(!num.empty()){
                cout<<num.top()<<endl;
                num.pop();
            }
            if(index1>=0&&index2>=0){string sub = "";
            int n = stoi(freq);
            while(n>0){
                sub = sub+s.substr(index1+1,index2-index1-1);
                n--;
            }
        
            s.replace(index1-freq.length(),index2-index1+2,sub);}
            
        }
        return s;
    }
int main(){
    string test = "3[b2[ca]]";
    string result = decodedString(test);
    cout<<result<<endl;
    return 0;
}