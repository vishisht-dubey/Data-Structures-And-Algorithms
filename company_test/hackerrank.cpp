#include <bits/stdc++.h>
using namespace std;
string getPhoneNumber(string s) {
     string a[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
     string b[10] = {"double zero","double one","double two","double three","double four","double five","double six","double seven","double eight","double nine"};
     string c[10] = {"triple zero","triple one","triple two","triple three","triple four","triple five","triple six","triple seven","triple eight","triple nine"};
     string result = "";
     for(int i=0;i<s.length();i++){
        string k1 = s.substr(i,3);
        string k2 = s.substr(i,4);
        string k3 = s.substr(i,5);
        string k4 = s.substr(i,10);
        string k5 = s.substr(i,11);
        string k6 = s.substr(i,12);
        if(k1=="one"){
            result=result+"1";
            i=i+2;
        }
        else if(k1=="two"){
            result = result+"2";
            i=i+2;
        }
        else if(k1=="six"){
            result = result+"6";
            i=i+2;
        }
        else if(k2=="zero"){
            result=result+"0";
            i=i+3;
        }
        else if(k2=="four"){
            result=result+"4";
            i=i+3;
        }
        else if(k2=="five"){
            result=result+"5";
            i=i+3;
        }
        else if(k2=="nine"){
            result=result+"9";
            i=i+3;
        }
        else if(k3=="three"){
            result=result+"3";
            i=i+4;
        }
        else if(k3=="eight"){
            result = result+"8";
            i=i+4;
        }
        else if(k3=="seven"){
            result = result+"7";
            i=i+4;
        }
        else if(k4=="double one"){
            result=result+"11";
            i=i+9;
        }
        else if(k4=="double two"){
            result = result+"22";
             i=i+9;
        }
        else if(k4=="double six"){
            result = result+"66";
             i=i+9;
        }
        else if(k5=="double zero"){
            result=result+"00";
             i=i+10;
        }
        else if(k5=="double four"){
            result=result+"44";
             i=i+10;
        }
        else if(k5=="double five"){
            result=result+"55";
            i=i+10;
        }
        else if(k5=="double nine"){
            result=result+"99";
            i=i+10;
        }
        else if(k6=="double three"){
            result=result+"33";
            i=i+11;
        }
        else if(k6=="double eight"){
            result = result+"88";
            i=i+11;
        }
        else if(k6=="double seven"){
            result = result+"77";
            i=i+11;
        }
        else if(k4=="triple one"){
            result=result+"111";
            i=i+9;
        }
        else if(k4=="triple two"){
            result = result+"222";
            i=i+9;
        }
        else if(k4=="triple six"){
            result = result+"666";
            i=i+9;
        }
        else if(k5=="triple zero"){
            result=result+"000";
            i=i+10;
        }
        else if(k5=="triple four"){
            result=result+"444";
            i=i+10;
        }
        else if(k5=="triple five"){
            result=result+"555";
            i=i+10;
        }
        else if(k5=="triple nine"){
            result=result+"999";
            i=i+10;
        }
        else if(k6=="triple three"){
            result=result+"333";
            i=i+11;
        }
        else if(k6=="triple eight"){
            result = result+"888";
            i=i+11;
        }
        else if(k3=="triple seven"){
            result = result+"777";
            i=i+11;
        }
     }
     return result;
}

int main(){
    cout<<getPhoneNumber("six four eight three")<<endl;
    return 0;
}