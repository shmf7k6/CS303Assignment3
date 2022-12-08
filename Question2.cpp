//Sadam Farah
//CS303
//12-08-2022
//Assignment 3 

#include<iostream>
#include "Question2.h"
using namespace std;

//it will return true if word is palindrome and false if not
bool isPalindrome(string word)
{
	//base case
	if (word.size() <= 0)
		return true;

	//check if first and last character are equal
	if (word[0] == word[word.size() - 1])
		return isPalindrome(word.substr(1, word.size() - 2));
	else
		return false;
}

int main()
{
	//Creating objects and testing them
	string str1 = "madam";
	if (isPalindrome(str1))
		cout << str1 << " is palindrome\n";
	else
		cout << str1 << " is not palindrome\n";


	str1 = "My Name";
	if (isPalindrome(str1))
		cout << str1 << " is palindrome";
	else
		cout << str1 << " is not palindrome";
}