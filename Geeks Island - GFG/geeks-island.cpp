//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:

    void dfs(vector<vector<int>> &mat,vector<vector<int>>&x,int i, int j,int m, int n,int num)
    {
        if(x[i][j]==num || x[i][j]==3)
        {
               return;
        }
        x[i][j]+=num;
        if(i+1<m && mat[i+1][j]>=mat[i][j])
        {
            dfs(mat, x,i+1,j,m,n,num);
        }
        if(i-1>=0 && mat[i-1][j]>=mat[i][j])
        {
            dfs(mat, x,i-1,j,m,n,num);
        }
        if(j+1<n && mat[i][j+1]>=mat[i][j])
        {
            dfs(mat, x,i,j+1,m,n,num);
        }
        if(j-1>=0 && mat[i][j-1]>=mat[i][j])
        {
            dfs(mat, x,i,j-1,m,n,num);
        }
    }




    int water_flow(vector<vector<int>> &mat,int m,int n){
    // Write your code here.
    vector<vector<int>>x(m,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        dfs(mat,x,i,0,m,n,1);
        
    }
    for(int i=0;i<n;i++)
    {
        dfs(mat,x,0,i,m,n,1);
        
    }
    for(int i=0;i<m;i++)
    {
        dfs(mat,x,i,n-1,m,n,2);
    }
    for(int i=0;i<n;i++)
    {
        dfs(mat,x,m-1,i,m,n,2);
        
    }
    int count=0;
    
    for(auto i:x)
    {
        for(auto j:i)
        {
                if(j==3)
                {
                    count++;
                }
        }
        //cout<<endl;
        
    }
    return count;
    
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends