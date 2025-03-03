#include<bits/stdc++.h>
using namespace std;

int digits(long long n){
    return to_string(n).length();
}

int main(){
    long long a,b,x;
    cin>>a>>b>>x;
    long long l=0;
    long long r=1e9+1;
    while(r-l>1){
        long long mid=(r+l)/2;
        if(((a*mid)+(b*digits(mid)))<=x){
            l=mid;

           }
        else{
            r=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}
