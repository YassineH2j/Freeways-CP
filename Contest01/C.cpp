#include<bits/stdc++.h>

using namespace std;

const int N = 100001, MOD = 1e9+7;


int main() {


    int t ; cin>>t ;
    while(t--){

        int n ; cin>>n ;
        string s ; cin>>s ;

        int ans = 0 ;
        for(int i = n/2 ; i<n ; i++){
            if(s[i]==s[n/2]){
                ans += 2 ;
            }
            else{
                break ;
            }
        }

        cout<<ans - n%2<<endl;
    }

    return 0;
}
