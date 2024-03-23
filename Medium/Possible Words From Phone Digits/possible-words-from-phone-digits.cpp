//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
   void solve(int a[], string& outputs, int index, vector<string>& ans, string mapping[], int N) {
    if (index >= N) {
        ans.push_back(outputs);
        return;
    }
    int number = a[index];
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++) {
        outputs.push_back(value[i]);
        solve(a, outputs, index + 1, ans, mapping, N);
        outputs.pop_back();
    }
}

            
        
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;
        string outputs;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(a,outputs,index,ans,mapping,N);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends