#include<bits/stdc++.h>

using namespace std;

int tab[100001];

int main() {
    int n, q;
    cin>>n>>q;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        cin>>tab[i];
        cnt += tab[i];
    }
    while(q--){
        int type, x;
        cin>>type>>x;
        if(type == 1){
            if(tab[x] == 0){
                tab[x] = 1;
                cnt++;
            }
            else {
                tab[x] = 0;
                cnt--;
            }
        }
        else{
            if(x > cnt) cout<<0<<endl;
            else        cout<<1<<endl;
        }
    }
    return 0;
}
