// #include <stdio.h>

// int main(void)
// {
//   char c1 = 'H';
//   char c2 = 'I';
//   char c3 = '!';
//   //or this can be "%i %i %i" since chars are also numbers! ACSII and we will see 72 73 33
//   printf("%c%c%c\n", c1, c2 ,c3);

//   //strings are like an array of characters, a sequence of chars
//   //how does a computer know when a string ends if it is a sequence of chars? 
//   //cause it uses an extra byte filled with all zeros to act as a signal
//   string s = "HI!"
//   printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
//   //s[3] will print 0 which is nul

//   string t = "BYE!";

//   printf("%s\n", s);
//   printf("%s\n", t);

//   //it will print bye and hi but the point is that even bye will have \0 or nul with it
//   //and why is it double quotes for strings? to let the computer know this is a string
//   //and cause a SINGLE char having SINGLE quotes makes sense

//   string words[2];
//   words[0] = "YO";
//   words[1] = "LO";
//   //to print every char we can access the first word with word[0] then add another [] to access
//   //the first char in that string
//   printf("%c%c\n", words[0][0], words[0][1]);
//   printf("%c%c\n", words[1][0], words[1][1]);
// }
