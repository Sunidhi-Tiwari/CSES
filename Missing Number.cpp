#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

void solve()
{              
              
              int n;
              cin>>n;
              
              int x = 1;
              for(int i = 2; i<=n; i++) x = x^i;
              
              for(int i = 0; i<n-1; i++) 
              {
                                            int num;
                                            cin>>num;
                                            x = x^num;
              }
              
              cout<<x<<"\n";
              return;
              
}

signed main()
{   IOS
   
    solve();
    return 0;
}


