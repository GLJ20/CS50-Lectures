#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n = 50;
  //variable p which is type pointer and it will be address of int because int and using *
  //then &n, get address of n and assign it to p variable
  int *p = &n;
  //use format %p to print pointers
  printf("%p\n", p);
  //or we can do printf("%p\n", &n);
  //we can use the *p to print 50 so printf("%p\n", *p); here it will print 50 even tho *p as 
  //a var is the location of where n is

  string s = "HI!";
  printf("%p\n", s);
  printf("%p\n", &s[0]);
  printf("%p\n", &s[1]);
  printf("%p\n", &s[2]);
  printf("%p\n", &s[3]);

  //print s and &s[0] print the same hexadecimal value. printf goes to the address of s so s is 
  //a pointer essentially? and maybe printf is looping through the chars that make up the string
  //then sends back the "string". and string s basically is the first address of the string
  //so cs50.h library might have made a new type by writng it like this, 
  //typedef char *string
  //cause string s is char *s
  //char *s = "HI!";
  //for (int i = 0; i < 3; i++)
  //{
  //  printf("%s\n", s[i]); or printf("%c\n", *(s + i)); which this is called pointer arithmetic
  //}
  //or printf("%s\n", s + 2); this will print starting at the second char of s since 
  //printing s is the first char of s so it will be I! cause it says start printing 
  //at the second char so all chars from second and after will be printed
}
