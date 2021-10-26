#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define n 5 //(macro definition)
int arr[n]; //global declare
int front =-1;
int rear = -1;


void enqueue(){
    int x =0;
    cout<<"Enter the value which you want to entered:"<<endl;
    cin>>x;
    if(rear == n-1){
        cout<<"Overflow..."<<endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else{
        rear++;
        arr[rear] = x;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        cout<<"Underflow..."<<endl;
    }
    else if(front==rear){
        cout<<"Deleted items: ";
        cout<<arr[front]<<endl;
        front=rear=-1;
    }
    else{
        cout<<"Deleted items: ";
        cout<<arr[front]<<endl;
        front = front+1;
    }
}


void peek(){
    if(front == -1 && rear == -1){
        cout<<"Underflow..."<<endl;
    }
    else{
        cout<<"Peek value: "<<arr[front]<<endl;
    }
}


void display(){
    if(front == -1 && rear == -1){
        cout<<"Underflow...";
    }
    else{
        for(int i = front ; i <= rear ; i++){
            cout<<arr[i];
        }
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
