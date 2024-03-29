#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
    
    int r, c;
    
int findmaximum(int arr[][c],int k)
{
   priority_queue<pair<int,int>>pq;
        int ans = INT_MIN;
        pq.push({arr[0][1] - arr[0][0] , arr[0][0]}); // 1, 1
        for(int i = 1;i<arr.size();i++)
        {
            while(pq.size()>0 && (arr[i][0] - pq.top().second >k))
            {
                pq.pop();
            }
            
            if(pq.size()> 0)
            {
                ans = max(ans,pq.top().first + arr[i][0] +arr[i][1]);
            }
            
            pq.push({arr[i][1] -arr[i][0],arr[i][0]});
        }
        
        return ans;
}
int main()
{
    
    int k;
    cin >> k;
    cin >> r >> c;
    int arr[r][c];
    int ans = findmaximum(arr, k);
    cout << ans << endl;
}