#include <iostream>
#include <string>
using namespace std;

string Quartersbetweentwodates(string strArr[], int arrLength) {
  
   int startYear = (strArr[0][0]-'0')*1000+ (strArr[0][1]-'0')*100+ (strArr[0][2]-'0')*10+ (strArr[0][3]-'0')*1;
  int endYear = (strArr[1][0]-'0')*1000+ (strArr[1][1]-'0')*100+ (strArr[1][2]-'0')*10+ (strArr[1][3]-'0')*1;
  int startMonth =  (strArr[0][5]-'0')*10+ (strArr[0][6]-'0')*1;
  int endMonth =  (strArr[1][5]-'0')*10+ (strArr[1][6]-'0')*1;
    int k = endYear-startYear;
    strArr[0]="";
    for(int i=0;i<=k;i++){
        if(i==k)
    {
      while(startMonth<=endMonth){
      if(startMonth<=3){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(3)+" ";
        startMonth=startMonth+3;
        if(startMonth>endMonth&&endMonth>=4&&endMonth<=6){
          strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(6)+" ";
        }
      }
      else if(startMonth<=6){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(6)+" ";
          startMonth=startMonth+3;
          if(startMonth>endMonth&&endMonth>=7&&endMonth<=9){
          strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(9)+" ";
        }
      }
      else if(startMonth<=9){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(9)+" ";
          startMonth=startMonth+3;
          if(startMonth>endMonth&&endMonth>=10&&endMonth<=12){
          strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(12)+" ";
        }
      }
      else if(startMonth<=12){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+to_string(12)+" ";
          startMonth=startMonth+3;
      }
    }
    }
    else {
      while(startMonth<=12){
      if(startMonth<=3){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(3)+" ";
        startMonth=startMonth+3;
      }
      else if(startMonth<=6){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(6)+" ";
          startMonth=startMonth+3;
      }
      else if(startMonth<=9){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+"0"+to_string(9)+" ";
          startMonth=startMonth+3;
      }
      else if(startMonth<=12){
        strArr[0]=strArr[0]+to_string(startYear)+"-"+to_string(12)+" ";
          startMonth=startMonth+3;
      }
    }
    startMonth=1;
    startYear++;
    }
    }
  return strArr[0];

}


long long divisorSum(int N,long long &sum){
       
        if(N<=0)
        return sum;
        
        for(int i=1;i<N/2;i++){
          if(N%i==0){
              sum=sum+i;
          }
        }
        divisorSum(N-1,sum);
        return sum;
    }

    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = 0;
        long long result = divisorSum(N,sum);
        return result;
    }

int main(void) { 
   
  // keep this function call here
  string A[2] = {"2018-02-12","2020-01-21"};
  int arrLength = 2;
  // cout << Quartersbetweentwodates(A, arrLength)<<endl;

  cout<<sumOfDivisors(15)<<endl;
  return 0;
    
}