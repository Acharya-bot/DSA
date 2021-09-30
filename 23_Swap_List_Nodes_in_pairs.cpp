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
    Node *e =NULL;

    // allocate 3 nodes in the heap
    fist = new Node();
    second = new Node(); //dynamic allocation(Dynamic Memory Allocation for Objects)
    third = new Node(); //(Pointer_Name = new Class_Name())
    e = new Node();

    fist->data = 1;      // assign data in first node
    fist->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = e;

    e->data = 6;
    e->next = NULL;

    //printList(fist);
    head = fist;
    //head->next=NULL;
    Node* temp = NULL;
    temp = head;
    Node* emp = NULL;
    Node* prev = NULL;

    if(head == NULL || head ->next == NULL){
        cout<<"Empty..."<<endl;
    }

     while(temp != NULL && temp->next != NULL)
    {

        emp = temp->next;
        //cout<<emp->data<<endl;
        //cout<<temp->next->data<<endl;
        temp->next = emp->next;
        //cout<<temp->next->data<<endl;
        //cout<<emp->next->data<<endl;
        emp->next = temp;
 
        if (prev == NULL) {
            head = emp;
        }
        else {
            prev->next = emp;
        }
       
        //head = emp;
 
        prev = temp;
        // //cout<<temp->next->data<<endl;
        temp = temp->next;
    }
    


   





    if(head == NULL){
        cout<<"No link..."<<endl;

    }
    else{
        while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    }
    

    return 0;
}

