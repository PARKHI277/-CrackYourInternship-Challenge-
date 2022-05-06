#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>



// brut force
// Space complexity = O(n*m)
// Time complexity = O(n*m*(n+m))

// void setmatrix(int arr[][],int m,int n)
// {
//    int temp[m][n];
//    for (int i = 0; i < m;i++)
//    {
//        for (int j = 0; j < n;j++)
//        {
//            temp[i][j] = 1;
//        }
//    }

//    for (int i = 0; i < m;i++)
//    {
//        for (int j = 0; j <n;j++)
//        {
//            if(arr[i][j] == 0)
//            {
//                for (int k = 0; k< m;k++)
//                {
//                    temp[k][j] = 0;
//                }
//                for (int k = 0; k < n;k++)
//                {
//                    temp[i][k] = 0;
//                }
//            }
//        }
//    }

//    for (int i = 0; i < m;i++)
//    {
//        for (int j = 0; j <n;j++)
//        {
//            arr[i][j] = temp[i][j];
//        }
//    }
// }

// using hash table
// time complexity - O(N+M)+O(N*M)+O(N*M)
// space complexity - O(M+N)


void setmatrix(int arr[][],int m,int n)
{
      bool row[m],col[n];
      for (int i = 0; i < m;i++)
      {
          row[i] = false;
      }
      for (int j = 0; j < n;j++)
      {
          col[j] = false;
      }

      for (int i = 0; i < m;i++)
      {
          for (int j = 0; j < n;j++)
          {
              if(arr[i][j] == 0)
              {
                  row[i] = 0;
                  col[i] = 0;
              }
          }
      }

      for (int i = 0; i < m;i++)
      {
          for (int j = 0; j < n;j++)
          {
               if(row[i] == true or col[j] == true)
               {
                   arr[i][j] = 0;
               }
          }
      }
}



int main()
{
    int r;
    int c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r;i++)
    {
        for (int j = 0; j < c;j++)
        {
            cin >> arr[i][j];
        }
    }
    setmatrix(arr,r,c);

    for (int i = 0; i < r;i++)
    {
        for (int j = 0; j < c;j++)
        {
            cout << arr[i][j] << "";
        }
    }
}