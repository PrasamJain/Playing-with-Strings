#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   string input, word;
   cout<<"statement : ";
   getline(cin, input);
   cout<<"word : ";
   cin >> word;

   int a = input.find(word);
   if (a == 0)
   {
      for (int i = 0; i < word.size(); i++)
      {
         cout << input[i];
      }
      cout << " : is present in input string from index: " << a << " to " << (word.size() + a) << endl;
   }

   else if (a > 0)
   {
      if (input[a - 1] == ' ' && (input[word.size() + a] == ' ' || input[word.size() + a] == '\0'))
      {
         for (int i = a; i < word.size() + a; i++)
         {
            cout << input[i];
         }
         cout << " : is present in input string from index: " << a << " to " << (word.size() + a-1) << endl;
      }
   }
   else
	    cout << "No result found!!" << endl;
 

   return 0;
}
