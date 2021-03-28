#include <bits/stdc++.h>

using namespace std;
//using LINT = long long int;
//using PII = pair<int,int>;

//#define PB push_back
//#define FI first
//#define SE second
//#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define REP(i,n) for(int i=0;i<(n);++i)


int socks[100];

int main() {
    int n;
    cin >> n;
    REP(i,n){
        int x;
        cin>>x;
        socks[x]++;
    }

    int ans = 0;
    REP(i,100)ans+=socks[i]/2;
    cout<<ans<<endl;

    return 0;
}