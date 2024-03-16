//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int a[])
{
    // Your code goes here
    if(a[3]==a[4]){
        return a[4];
    }
    else if(a[4]==a[5]){
        return a[5];
    }
    else if(a[6]==a[5]){
        return a[6];
    }
}