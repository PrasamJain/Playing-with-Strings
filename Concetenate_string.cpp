//The best way to concatenate two strings in C programming is by using the strcat() function.
//However, in this example, we will concatenate two strings manually.
//tt is the operation of joining two strings together.

//Here, two strings s1 and s2 and concatenated and the result is stored in s1.
//It's important to note that the length of s1 should be sufficient to hold the string after concatenation. If not, you may get unexpected output.

#include<iostream>
#include<string.h>
#define N 30
using namespace std;
int main()
{
	char s1[N],s2[N];
	cout<<"Enter S1 : ";
	gets(s1);
	cout<<"Enter S2 : ";
	gets(s2);
	
	char *str1 = s1;
	char *str2 = s2;
	while(*str1)
		str1++;
	
	while(*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	
	cout<<"The string after concatenation is : "<<s1;
	return 0;
}


/*   OUTPUT   */
/*
	Enter string s1: C++ Programming
	Enter string s2:  is awesome.
	Resultant String = C++ Programming is awesome.
*/
