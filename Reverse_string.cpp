//One simple solution is to write our own reverse function to reverse a string in C++. [ without using reverse() inbuilt function ]
// we reverse the string 's' and save in another string 'p'. 

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,p = "";
	cout<<"Enter the string : ";
	getline(cin,s);
	int n = s.length();
	for(int i = n-1;i>=0;i--)
	{
		p =p + s[i];
	}
	cout<<"Reversed string are : "<<p;
	return 0;
}

/*__________________________________________________________________________________________________________________________________________________________________*/


// The another method is using inbuilt “reverse” function:-
// There is a direct function in “algorithm” header file for doing reverse that saves our time when programming.

// Reverses elements in [begin, end]
// Syntax : reverse ( BidirectionalIterator begin, BidirectionalIterator end )

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string : ";
	getline(cin,s);
	
	// Reverse str[begin..end]
	reverse(s.begin(), s.end());

	cout<<"Reversed string are : "<<s;
	return 0;
}
