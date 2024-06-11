/*Tam giác Pascal
Trong toán học, Tam giác Pascal là một mảng hình tam giác của hệ số nhị thức trong tam giác. Thuật toán được đặt theo tên của nhà toán học Pháp nổi tiếng Blaise Pascal
https://www.hackerrank.com/contests/quy-hoach-dong/challenges/hvtpascaltriangle
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000+5],n;
int main(){
    cin>>n;
    dp[500] = 1;

    for (int i =2;i<=n;i++){
        for (int j=0;j<=1000;j++){
            dp[j] = dp[j] + dp[j+1];
        }
    }
    for (int i=0;i<=1000;i++){
        if (dp[i]!=0)cout<<dp[i]<<' ';
    }
}


