#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

void solve()
{
               
               string s;
               cin>>s;
               int c = 1;
               int ma = 1;
               
               for(int i = 1; i<s.length(); i++)
               {
                                             if(s[i] == s[i-1])
                                             {                             c++;
                                                                           ma = max(c,ma);
                                                                           
                                             }
                                             else
                                             {
                                                                           ma = max(c,ma);
                                                                           c = 1;
                                                                           
                                             }
               }
               
               cout<<ma;
              
              
              return;
              
}

signed main()
{   IOS
    
    solve();
    return 0;
}


