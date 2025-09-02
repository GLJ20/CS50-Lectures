#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  //if we write hI, we want s to be hI but t to be HI
  string s = get_string("s: ");
  string t = s;

  make the first letter uppercase
  t[0] = toupper(t[0]);

  //However, this will print HI for both because string s is nothing but char *s so a pointer
  //and this s is taking 8 bytes in the memory and it has the address of the char h in another
  //byte so even tho t is another var that occupies space, it is occupying and carrying
  //the same value as s so the address of char h, which means both s and t will be changed
  //if this is the case then how can we copy the values of s into t without copying the address
  //of s into t? using malloc which is memory allocation
  printf("s: %s\n", s);
  printf("t: %s\n", t);
}
