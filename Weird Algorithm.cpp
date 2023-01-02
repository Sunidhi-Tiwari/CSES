#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

void solve()
{
              int n;
              cin>>n;
              
              while(n!=1)
              {
                                            cout<<n<<" ";
                                            
                                            if(n%2) n = 3*n + 1;
                                            else n = n/2;
              }
              
              cout<<n;
              return;
              
}

signed main()
{   IOS
   
    solve();
    return 0;
}


