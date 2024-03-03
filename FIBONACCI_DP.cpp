#include <iostream>
using namespace std;


void  fib(int n,int dp[]){
  
dp[0]=0, dp[1]=1; 

for(int i=2;i<=n;i++)
     dp[i] = dp[i-1]+dp[i-2];
  
 //   return dp[n];
    
}
int main() {
    int n;
    
    int dp[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=0;
        
    }
cout<<"enter the value of n :"<< endl;
cin>>n;

fib(n,dp);

for(int i=0;i<=n;i++){
    cout<<dp[i]<<" ";
}


    return 0;
}
