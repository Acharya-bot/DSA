#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define n 5
int arr[n]; //global declare
int top = -1;

void push()
{
	//int n = 5;
	int x; // Variable store the data...
	cout << "Enter the data..." << endl;
	cin >> x;
	//check overflow
	if (top == n - 1)
	{
		cout << "Overflow..." << endl;
	}
	else
	{
		top++; //-1 becomes 0 then insertion process done...
		arr[top] = x;
	}
	cout<<"congratulations data successfully entered...";
}

void pop()
{
	int num;
	// check underflow
	if (top == -1)
	{
		cout << "Under flow..." << endl;
	}
	else
	{
		num = arr[top];
		top--;
		cout << "The deleted item is:" << num << endl;
	}
}

void peek(){
	if(top == -1){
		cout<<"Under_flow..."<<endl;
		cout<<"No data present..."<<endl;
	}
	else{
		cout<<"The peek element:"<<arr[top]<<endl;
	}
}

void display()
{
	cout << "Elements present in stack:";
	for (int i = top; i >= 0; i--)
	{
		cout << arr[i];
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
