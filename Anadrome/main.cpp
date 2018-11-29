#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
int i,l,j=0;
char s[100],s1[100];
bool isPalindrome(char *str);
int check_anagram(char [], char []);
int main()
{


    cout<<"\nEnter Any String:";
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        s1[j]=s[l-i-1];
        j++;
    }
    s1[j]='\0';

    if(isPalindrome(s1))
    {
        cout<<"Its palindrome"<<endl;
        if (check_anagram(s, s1) == 1)
        {
            cout<<"The String Is Anadrome "<<s<<" "<<s1<<endl;
        }
    }
    else
    {
        cout<<"Its not palindrome"<<endl;
    }

    return 0;
}
int check_anagram(char a[], char b[])
{
    int first[26] = {0}, second[26] = {0}, c=0;

  // Calculating frequency of characters of first string

  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }

  c = 0;

  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }

  // Comparing frequency of characters

  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }

  return 1;
}
bool isPalindrome(char *str)
{
    char &str1 = *str;
    for(i=0;i<l;i++)
    {
       if(str1==s[i])
       {

          // cout<<"\Its Palindrome= "<<s1;
           return true;
           break;
       }
       else

           //cout<<"its not palindrome "<<s1;
           return false;
       break;
    }

}
