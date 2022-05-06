// change character in any string and replaced with another character.


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string : ";
	getline(cin,s);
	int n = s.length();
	char x,y;
	cout<<"character to find : ";
	fflush stdin;
	cin>>x;
	cout<<"Replace with : ";
	cin>>y;
	for(int i=0;i<n;i++)
	{
		if(x == s[i])
			s[i] = y;
	}
    cout<<"Modified string are : "<<s;
    return 0;
}
