#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    int i=0,c=0;
    for (int j=0;j<b.size();j++){
        if (a[i]==b[j]){
            i++;
            c++;
        }
    }
    if (c!=a.size()){
        cout<<"NO";
    }
    else cout<<"YES";
}
