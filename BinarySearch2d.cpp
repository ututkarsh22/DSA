#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<vector<int>> &mat, int row, int m ){

    int low = 0, high = m - 1;
    int ans = -1;
    while(low<=high)
    {
      int mid = low + (high - low) / 2;

      if(mat[row][mid]==1)
      {
        ans = mid;
        high = mid - 1;
      }
      else 
      low = mid + 1;
    }

    return ans;
}

int rowWithMax1s(vector < vector < int >> & mat, int n , int m ) {

  int maximum = 0;
  int minIndex = -1;
   for(int i = 0;i<n;i++)
   {
     int index = lowerBound(mat, i, m);
     if(index != -1 &&  m - index > maximum){
      maximum = m - index;
      minIndex = i;
     }
    


    }
    return minIndex;
  }
  
  int main()
 {
     int n,m;
     cin>>n>>m;
     vector<vector<int>>mat(n,vector<int>(m));
     
     for(int i = 0;i<n;i++)
     {
         for(int j = 0; j<m; j++)
         {
             cin>>mat[i][j];
         }
     }
     

     
    cout<<rowWithMax1s(mat, n, m);
     
     return 0;
 }