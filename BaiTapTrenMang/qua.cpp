#include <bits/stdc++.h>
using namespace std;

int n,S,dp[1000003][103],a[103];


int nt(int n){
    if (n<=1) return false;
    else{
        for (int i=2;i*i<=n;i++){
            if (n%i==0) return false;
        }
        return true;
    }
}
int main(){
    cin>>n;
    
    memset(dp,-1,sizeof(dp));    
    
    for (int i=1;i<=n;i++) cin>>a[i];
    
    cin>>S;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=S;j++){
            if (j%a[i]==0 && nt(j)){
                dp[i][j] = dp[i-1][j]+1;
            }
        } 
    }
}
