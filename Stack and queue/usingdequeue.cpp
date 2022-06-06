#include <bits/stdc++.h>
using namespace std;
#include<stack>
 

struct DQueNode {
    int value;
    DQueNode* next;
    DQueNode* prev;
};
 

class Deque {
private:
    DQueNode* head;
    DQueNode* tail;
public:

Deque()
{
    head = tail = NULL;
}
bool isEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    return false;
}
int size()
{
    if(!isEmpty())
    {
        DQueNode *temp = head;
        int len = 0;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    return 0;
}
void insert_first(int element)
{
    DQueNode *temp = new DQueNode[sizeof(DQueNode)];
    temp->value = element;
    if(head == NULL)
    {
        head = tail = temp;
        temp->next = temp->prev = NULL;
    }
    else
    {
        head->prev = temp;
        temp->next = head;
        temp->prev = NULL;
        head = temp;
    }
}
void insert_last(int element)
{
    DQueNode *temp = new DQueNode[sizeof(DQueNode)];
    temp->value = element;
    if (head == NULL)
    {
        head = tail = temp;
        temp->next = temp->prev = NULL;
    }
    else
    {
        tail->next = temp;
        temp->next = NULL;
        temp->prev = tail;
        tail = temp;
    }
}
void remove_first()
{
    if(!isEmpty())
    {
        DQueNode *temp = head;
        head = head->next;
        if(head)
            head->prev = NULL;
        delete temp;
        if(head == NULL)
            tail = NULL;
        return;
    }
    cout << "List isEmpty" << endl;
}

void remove_last()
{
    if(!isEmpty())
    {
        DQueNode *temp = tail;
        tail = tail->prev;
        if(tail)
        {
            tail->next = NULL;
        }
        delete temp;
        if(tail == NULL)
        {
            head = NULL;
        }
    }
    cout
     << "List is Empty" << endl;
}

void display()
{
    if (!isEmpty()) {
            DQueNode* temp = head;
            while (temp != NULL) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
            return;
        }
        cout << "List is Empty" << endl;

};

class Queue : public Deque {
public:
    // enqueue to insert element at last
    // using insert at last function of deque
    void enqueue(int element)
    {
        insert_last(element);
    }
 
    // dequeue to remove element from first
    // using remove at first function of deque
    void dequeue()
    {
        remove_first();
    }
};
 
// Driver Code
int main()
{
    // object of Stack
    Stack stk;
 
    // push 7 and 8 at top of stack
    stk.push(7);
    stk.push(8);
    cout << "Stack: ";
    stk.display();
 
    // pop an element
    stk.pop();
    cout << "Stack: ";
    stk.display();
 
    // object of Queue
    Queue que;
 
    // insert 12 and 13 in queue
    que.enqueue(12);
    que.enqueue(13);
    cout << "Queue: ";
    que.display();
 
    // delete an element from queue
    que.dequeue();
    cout << "Queue: ";
    que.display();
 
    cout << "Size of Stack is " << stk.size() << endl;
    cout << "Size of Queue is " << que.size() << endl;
    return 0;
}