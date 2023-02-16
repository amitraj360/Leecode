//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    
    
    int check(int x)
    {
        string s=to_string(x);
        int l=s.length();
        l--;
        int i=0;
        while(i<=l)
        {
            if(s[i]!=s[l])
            {
                return 0;
            }
            else
            {
                i++;
                l--;
            }
        }
        return 1;
    }
    
    
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++)
    	{
    	    int d=check(a[i]);
    	    if(d==0)
    	    return 0;
    	}
    	
    	return 1;
    	
    	
    	
    	
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends