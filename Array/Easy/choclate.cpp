#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

long long findMinDiff(long long a[], long long n, long long m){
   
      if (m == 0 || n == 0)
        return 0;

      sort(a, a + n);

      if (n < m)
          return -1;

      long long min_diff = INT_MAX;

      for (int i = 0; i + m - 1 < n; i++)
      {
          long long diff = a[i + m - 1] - a[i];
          if (diff < min_diff)
              min_diff = diff;
    }
    return min_diff;
    
    }  

int main()
{
    long long n;
    cin >> n; // no of packets
    long long arr[n];
    long long  m;
    cin >> m;//no of students
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    cout << findMinDiff(arr, n, m) << endl;
}