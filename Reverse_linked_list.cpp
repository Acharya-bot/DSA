#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head;
    Node *fist = NULL;
    Node *second = NULL; //Creating pointer
    Node *third = NULL;
    Node *four = NULL;

    // allocate 3 nodes in the heap
    fist = new Node();
    second = new Node(); //dynamic allocation(Dynamic Memory Allocation for Objects)
    third = new Node();  //(Pointer_Name = new Class_Name())
    four = new Node();

    fist->data = 1;      // assign data in first node
    fist->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = four;

    four->data = 5;
    four->next = NULL;

    //printList(fist);
    head = fist;
    //head->next=NULL;

    Node *cur = NULL;
    Node *pre = NULL;
    Node *next = NULL;

    cur = head;

    while (cur != NULL)
    {
        next = cur->next;
        //cout << cur->next->data;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    head = pre;

    if (head == NULL)
    {
        cout << "No link..." << endl;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }

    return 0;
}
