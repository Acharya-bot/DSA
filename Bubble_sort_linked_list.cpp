#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node* head = 0;
Node* temp = 0;
void push(){
    int x;
    cout<<"Enter the number which you want to entered: ";
    cin>>x;
    Node* first = NULL;
    first = new Node();
    first->data = x;
    first->next = NULL;
    if(head == 0 && temp == 0){
        head = temp = first;
    }
    else{
        temp->next = first;
        temp = first;
    }
}
void bubble(){
    Node *current = NULL;
    current = head;
    int emp , flag , count = 0;
    while (current!=NULL)
    {
        count++;
        current = current->next;
    }
    do
    {
        flag = 0;
        Node *cur = head;
        while (cur->next != NULL)
        {
           if(cur->data > cur->next->data){
               emp = cur->data;
               cur->data = cur->next->data;
               cur->next->data = emp;
               flag = 1;
           }
           cur = cur->next;
        }
    } while (flag==1);
    cout<<"\t\t\t\tPress 3 for view the shorted linked list...";
}
void display(){
	Node *emp = NULL;
	emp = new Node();
    emp = head;
    if (head == NULL && temp== NULL){
        cout << "No link...Under flow..." << endl;
    }
    else
    {
        while (emp != NULL)
        {
            cout << emp->data << " ";
            emp = emp->next;
        }
    }
}
main()
{
	int value;
	while (true)
	{
		cout << "\nPress 1 for enter data" << endl;
		cout << "Press 2 to Bubble sort" << endl;
		cout << "Press 3 to display the data" << endl;

		cin >> value;
		switch (value)
		{
		case 1:
			push();
			break;
		case 2:
			bubble();
			break;
		case 3:
			display();
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}
