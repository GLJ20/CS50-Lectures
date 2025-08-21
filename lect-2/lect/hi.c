#include <stdio.h>

int main(void)
{
  char c1 = 'H';
  char c2 = 'I';
  char c3 = '!';
  //or this can be "%i %i %i" since chars are also numbers! ACSII and we will see 72 73 33
  printf("%c%c%c\n", c1, c2 ,c3);

  //strings are like an array of characters, a sequence of chars
  //how does a computer know when a string ends if it is a sequence of chars? 
  //cause it uses an extra byte filled with all zeros to act as a signal
  string s = "HI!"
  printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
  //s[3] will print 0 which is nul
}
