#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

  ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        int n =  lists.size();
        if(n == 0)
        {
            return NULL;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0 ;i<n;i++)
        {
            ListNode* temp = lists[i];
            while(temp != NULL)
            {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        
        while(!pq.empty())
        {
            ListNode* node = new ListNode(pq.top());
            pq.pop();
            head->next = node;
            head = node;
        }
        
        return ans->next;
    }