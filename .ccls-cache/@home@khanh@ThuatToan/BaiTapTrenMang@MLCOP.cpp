/*Dãy cặp số dài nhất (Maximum Length Chain of Pairs)
Cho n cặp số nguyên. Trong mỗi cặp, số đầu tiên là luôn nhỏ hơn số thứ hai. Một cặp (c, d) có thể theo sau cặp (a, b) nếu b < c. Dãy cặp có thể được hình thành theo mẫu này.
Tìm dãy dài nhất có thể được hình thành từ một tập hợp các cặp.

Input Format

    Dòng đầu chứa số nguyên n
    Dòng thứ i trong n dòng sau chứa cặp phần tử (xi, yi), các số cách nhau bởi dấu cách

Constraints

    1 <= n <= 10 000
    |xi|, |yi| <= 10 000

Output Format

In ra một số nguyên duy nhất là kết quả của bài toán

Sample Input 0

5
5 24
39 60
15 28
27 40
50 90

Sample Output 0

3

Explanation 0

Dãy kết quả gồm 3 cặp số {5, 24}, {27, 40}, {50, 90}*/


#include <bits/stdc++.h>
using namespace std;
int n,a[10003],x,y;
int main(){
    cin>>n;
    
    for (int i=1;i<=n;i++){
        cin>>x>>y;
        a[i] = [x,y];
    }

}
