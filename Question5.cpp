//Sadam Farah
//CS303
//12-08-2022
//Assignment 3 

#include<iostream>
#include <map>
#include <iterator>
#include<string> 
#include"Question5.h"

using namespace std;

//A function that will print the map on the screen
void printMap(map<string, string> stateDataMap)
{
	map<string, string>::iterator itr;
	for (itr = stateDataMap.begin(); itr != stateDataMap.end(); ++itr) {
		cout << itr->first << "  :   " << itr->second << endl;
	}
}

//A function that will ask user to enter a name of state and then print its capital
void searchForCapital(map<string, string> stateDataMap)
{
	string state;
	cout << "Please enter state name whose capital you want to know: ";
	getline(cin, state);

	map<string, string>::iterator itr = stateDataMap.find(state);
	if (itr != stateDataMap.end())
		cout << "Capital of " << state << " is : " << itr->second << endl;
	else
		cout << "State does not exist" << endl;
}

int main()
{
	//Creating map
	map<string, string> stateDataMap;

	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	printMap(stateDataMap);

	map<string, string>::iterator itr = stateDataMap.find("California");
	if (itr != stateDataMap.end())
		itr->second = "Los Angeles";

	cout << endl;
	searchForCapital(stateDataMap);
}