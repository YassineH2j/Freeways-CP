#include<bits/stdc++.h>

using namespace std;

const int N = 100001, MOD = 1e9+7;

int occ[200001];

int main() {
    int t;
    cin>>t;
    for(int j=1; j<=t; j++){
        int n, res = -1;
        cin>>n;
        for(int i=1; i<=n; i++){
            occ[i] = 0;
        }
        for(int i=1; i<=n; i++){
                int x;
                cin>>x;
                occ[x] = occ[x]+1;
                if(occ[x] >= 3){
                    res = x;
                }
        }
        cout<<res<<endl;
    }
    return 0;
}
