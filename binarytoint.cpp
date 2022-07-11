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
 
 class Solution {
public:
    
    int getl(ListNode* head)
    {
        int len = 0;
        while(head != NULL)
        {
            len += 1;
            head = head->next;
        }
        
        return len;
    }
    
    int getDecimalValue(ListNode* head) 
    {
        int len = getl(head) - 1;
        ListNode* temp = head;
        int ans = 0;
        while(temp != NULL)
        {
            ans = ans + temp->val * pow(2,len);
            len--;
            temp = temp->next;
        }
        
        return ans;
    }
};