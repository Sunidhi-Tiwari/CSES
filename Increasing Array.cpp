#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
void solve()

{             
                              int n;
                              cin>>n;
                              
                              int arr[n];
                              int moves = 0;
                              
                              for(int i = 0; i<n; i++) cin>>arr[i];
                              
                              for(int i = 1; i<n; i++) 
                              {
                                                            if(arr[i] < arr[i-1])
                                                            {
                                                                                          moves += arr[i-1] - arr[i];
                                                                                          arr[i] = arr[i-1];
                                                            }
                              }
                              
                              cout<<moves;
              
              
              return;
              
}

signed main()
{   IOS
    
    solve();
    return 0;
}


