#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    //Node *new_node = 0;
};

Node *top = 0;
Node *head = top;
//new_node = new Node();

void push(){
    int x;
    cout<<"Enter the number which you want to entered:";
	cin>>x;
    Node *new_node = NULL;
    new_node = new Node();
	new_node->data= x;
	new_node->next = top;
	top = new_node;
}

void display(){
	Node *temp = NULL;
	temp = new Node();
	temp = top;
	//Check Underflow...
	if(top == 0){
		cout<<"Under flow..."<<endl;
	}
	else{
		cout<<"Data presented in stack linked_list:";
		while (temp!=0)
		{
			cout<<temp->data;
			temp = temp->next;
		}
		
	}
}


void pop(){
	Node *temp = NULL;
	temp = new Node();
	temp = top;
	if(top == 0){
		cout<<"Under flow..."<<endl;
	}
	else{
		cout<<"Deleted item:"<<temp->data;
		top = temp->next;
		temp->next = NULL;
		free(temp);
	}
}

void peek(){
	//Check Underflow...
	if(top == 0){
		cout<<"Under flow..."<<endl;
	}
	else{
		cout<<"Peek data:"<<top->data;
	}
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
			push();
			break;
		case 2:
			pop();
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

