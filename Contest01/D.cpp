#include<bits/stdc++.h>

using namespace std;

const int N = 100001, MOD = 1e9+7;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0, mn = 1e7;
        for(int i=1 ; i<=n; i++){
                int x;
                cin>>x;
                sum += x;
                mn = min(mn, x);
        }
        cout<<(sum-(mn*n))<<endl;
    }
    return 0;
}
