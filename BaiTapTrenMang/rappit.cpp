/*Thỏ và cà rốt
Trong một khu vườn dc mô tả như một lưới hình chữ nhật gồm M dòng, N cột.
Các dòng đánh số từ 1 đến M từ trên xuống. Các cột đánh số từ 1 đến N từ trái sang. Mỗi ô của lưới có một số củ cà rốt.
Thỏ Vova sống ở ô (1, 1), thỏ Masa sống ở ô (M, N). Hôm nay thỏ Vova quyết định đến thăm thỏ Masa, trên đường đi Vova muốn kiếm được càng nhiều cà rốt càng tốt để làm qua cho Masa. Mỗi bước, thỏ Vova chỉ đi sang ô kề cạnh bên phải hoặc bên dưới ô hiện tại.
Em hãy tìm lộ trình đi để Vova có thể kiếm được càng nhiều cà rốt càng tốt.

Input Format

    Dòng đầu chứa hai số nguyên M, N.
    Dòng thứ i trong M dòng sau chứa N số nguyên mô tả số củ cà rốt tại mỗi ô trên lưới.

Constraints

    1 ≤ M, N ≤ 1000
    0 ≤ Số củ cà rốt tại mỗi ô ≤ 1000

Output Format

In ra số củ cà rốt tối đa mà Vova có thể kiếm được trên đường đi

Sample Input 0

4 11
4 13 4 12 7 10 3 8 2 1 3 
5 18 0 18 14 16 15 8 3 13 9 
9 8 17 10 4 9 10 17 10 16 15 
4 10 5 1 1 15 0 14 8 18 8 

Sample Output 0

177

*/


#include <bits/stdc++.h>

using namespace std;

int n,m,dp[2003][2003],ans=0;



int main(){

    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++){
            cin>>dp[i][j];
        }
    }

     for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++){
           dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + dp[i][j]; 
        }
    }
    

cout<<dp[n][m];
 

     

    

}

