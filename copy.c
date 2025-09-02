#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  //if we write hI, we want s to be hI but t to be HI
  char *s = get_string("s: ");
  //first make var t get same memeory as s by using malloc and strlen + 1 to handle correct bytes of
  //s and add 1 to it to have value \0
  char *t = malloc(strlen(s) + 1);

  if(t == NULL)
  {
    return 1; //if t has no memory dont even try to do the for loop
  }
  //a much shorter way to copy, first is the destination then what we want to copy
  strcopy(t,s);
  //not a good idea to try to capitalize zero, and this zero can come because the user by mistake
  //clicks on enter without writing anything so we need to handle that
  if(strlen(t) > 0)
  {
     //make the first letter uppercase
     t[0] = toupper(t[0]);
  }
 

  //However, this will print HI for both because string s is nothing but char *s so a pointer
  //and this s is taking 8 bytes in the memory and it has the address of the char h in another
  //byte so even tho t is another var that occupies space, it is occupying and carrying
  //the same value as s so the address of char h, which means both s and t will be changed
  //if this is the case then how can we copy the values of s into t without copying the address
  //of s into t? using malloc which is memory allocation
  printf("s: %s\n", s);
  printf("t: %s\n", t);
  //free memeory after we are done so t does not continue occupying memeory
  free(t);
}
//if something went wrong with malloc it will return null, not nul like \0 no null so 0
