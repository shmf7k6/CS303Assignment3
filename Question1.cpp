//Sadam Farah
//CS303
//12-08-2022
//Assignment 3 


#include<iostream>
#include<queue>
using namespace std;

//This function will move pop the front of list and then push it at the rear
queue<int> move_to_rear(queue<int> myList)
{
	int top = myList.front();
	myList.pop();
	myList.push(top);

	return myList;
}

//function to print the queue
void printQueue(queue<int> myList)
{
	queue<int> temp = myList;
	while (!temp.empty()) {
		cout << temp.front() << '\t';
		temp.pop();
	}
	cout << endl;
}

//main function
int main()
{
	queue<int> myList;
	myList.push(1);
	myList.push(5);
	myList.push(7);

	printQueue(myList);
	myList = move_to_rear(myList);
	printQueue(myList);
}