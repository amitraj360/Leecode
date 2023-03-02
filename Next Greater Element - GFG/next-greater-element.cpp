//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long>heights, int n){
        // Your code here
        stack<pair<long long,int>>s;
        vector<long long >v(n,-1);
        for(int i=0;i<n;i++)
        {
           if(!s.empty() && heights[i]>s.top().first)
           {
               while(!s.empty() && heights[i]>s.top().first)
               {
                   v[s.top().second]=heights[i];
                   s.pop();
               }
               
           }
           s.push(make_pair(heights[i], i));
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends