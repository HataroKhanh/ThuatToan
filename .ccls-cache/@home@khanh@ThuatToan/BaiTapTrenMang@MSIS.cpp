/*Dãy con tăng dần có tổng lớn nhất (Maximum Sum Increasing Subsequence - MSIS)

Cho một dãy A[0..n-1] gồm các số nguyên.
Viết chương trình tìm tổng lớn nhất của dãy con B (không nhất thiết liên tiếp) của dãy A mà các phần tử của dãy B có giá trị tăng dần.
Ví dụ: A = {1, 101, 2, 3, 100, 4, 5} => B = {1, 2, 3, 100}

Input Format

    Dòng đầu chứa số nguyên n
    Dòng sau chứa các phần tử của dãy A, các số cách nhau bởi dấu cách

Constraints

    1 <= n <= 10 000
    |Ai| <= 10 000

Output Format

In ra một số nguyên duy nhất là kết quả của bài toán

Sample Input 0

7
1 101 2 3 100 4 5

Sample Output 0

106

Sample Input 1

4
3 4 5 10

Sample Output 1

22



*/




#include <bits/stdc++.h>
using namespace std;
int n,a[10004],s[10004],ans=0;
int main(){
    cin>>n;
    for (int i =1;i<=n;i++){ 
        cin>>a[i];
        s[i] = a[i];
    }

    for (int i=1;i<=n;i++){
        int smax = 0;
        for (int j=1;j<i;j++){
            if (a[j]<a[i]){
                smax = max(smax,s[j]);
            }
        }
                    s[i]+=smax;

    }
    
    cout<<*max_element(s,s+n+1);
}

