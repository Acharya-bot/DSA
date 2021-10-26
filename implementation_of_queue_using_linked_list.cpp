#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    //Node *new_node = 0;
};

Node* front = 0;
Node* rear = 0;

void enqueue(){
    int x;
    cout<<"Enter the number which you want to entered: ";
    cin>>x;
    Node* first = NULL;
    first = new Node();

    first->data = x;
    first->next = NULL;
    if(front == 0 && rear == 0){
        front = rear = first;
    }
    else{
        rear->next = first;
        rear = first;
    }
}


void display(){
    Node* temp = NULL;
    if(front == 0 && rear == 0){
        cout<<"Underflow...";
    }
    else{
        temp = front;
        cout<<"Queue data: ";
        while(temp != 0){
            cout<<temp->data;
            temp = temp->next;
        }
    }
}


void dequeue(){
    Node* emp = NULL;
    if(front == 0 && rear == 0){
        cout<<"Underflow...";
    }
    else{
        emp = front;
        front = front->next;
        cout<<"Deleted item : "<<emp->data;
        emp->next = NULL;
        free(emp);
    }
}


void peek(){
    cout<<"The peek value: "<<front->data;
}

main()
{
	int value;
	while (true)
	{
		cout << "\nPress 1 for enter data" << endl;
		cout << "Press 2 to delete data" << endl;
		cout << "Press 3 to print peek data" << endl;
		cout << "Press 4 to display the data" << endl;

		cin >> value;
		switch (value)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}
	}
}