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
