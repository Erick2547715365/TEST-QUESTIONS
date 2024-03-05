//Write a program that counts the number of vowels in a sentence.

#include <iostream>

using namespace std;

int main() {
string s;
int count = 0;
cout << "Enter a String" <<endl;
getline(cin,s);

for(int i = 0; i < s.length(); i++) {
if(s[i]=='a' ||s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' )
{
count++;
}
}
cout << "Number of Vowels is :" <<count;
}