#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#include<stack>
#include<map>



int evaluatePostfix(char*exp)
{
    // Your code here
  struct Stack* stack = createStack(strlen(exp));
    int i;
 
    // See if stack was created successfully
    if (!stack) return -1;
 
    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
 
        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}