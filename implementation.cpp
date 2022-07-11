#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int a[100005];
int seg[4 * 100005];

void build(int index,int low,int high)
{   
    if(low == high)
    {
        seg[index] == a[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * index + 1, low, mid);
    build(2 * index + 2, mid + 1, high);
    seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);

}
int query(int index,int low,int high,int l ,int r)
{
    // completely lie
    if(low>=l && high<=r)
    {
        return seg[index];
    }
    // if node does not lie
    if(high<l || low>r)
    {
        return INT_MIN;
    }
    int mid = (low + mid) / 2;
    int left = query(2 * index + 1, low, mid, l, r);
    int right = query(2 * index + 2, mid + 1, high, l, r);
    return max(left, right);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    build(0, 0, n - 1);

    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r) << endl;
    }
}
