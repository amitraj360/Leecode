//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<pair<int,int>>x;
        vector<int>v(n,-1);
        for(int i=0;i<n;i++)
        {
            if(!x.empty() && x.top().first>arr[i])
            {
                while(!x.empty() && x.top().first>arr[i])
                {
                    v[x.top().second]=arr[i];
                    x.pop();
                }
                
            }
            x.push(make_pair(arr[i],i));
        }
        return v;
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends