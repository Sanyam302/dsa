//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
         vector<int>ans;
         int mod=1e9+7;
         int i=2;
        
         int sum=0;
          ans.push_back(0);
          ans.push_back(1);
          int a=0;
          int b=1;
          
         while(i<=n){
              sum=(a+b)%mod;
         ans.push_back(sum);
        
         a=b;
         b=sum;
         
         i++;
         }
         return ans;
         
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends