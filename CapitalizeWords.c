/*
Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.
Examples:
"hi"=> returns "Hi"
"i love programming"=> returns "I Love Programming"
*/


#include<stdio.h>
int main()
{
  int i;
  char a[100];
  printf("\nEnter the Sentence:");
  gets(a);
  printf("\nCapitalized Sentence:");
  if(a[0]>=97&&a[0]<=122)
  {
    a[0]-=32;
  }
  for(i=1;a[i]!='\0';i++)
  {
    if(a[i-1]==32)
    {
        if(a[i]>=97 &&a[i]<=122)
        {
           a[i]-=32;
        }
    }
  }
  puts(a);
  return 0;
}