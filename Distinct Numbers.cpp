#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int


void solve()
{
              int n;
              cin>>n;
              unordered_set<int> st;
              
              for(int i = 0; i<n; i++)
              {
                                            int x;
                                            cin>>x;
                                            st.insert(x);
              }
              
              cout<<st.size();
              return;
              
}

signed main()
{   IOS
   
    solve();
    return 0;
}


