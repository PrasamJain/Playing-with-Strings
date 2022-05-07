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
}
