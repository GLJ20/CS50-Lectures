#include <stdio.h>

// int main(void)
// {
//   for(int i=0; i < 4; i++)
//   {
//     printf("?");    
//   }
//   printf("\n")
// }
int main(void)
{
  for(int row = 0; row < 3; row++)
  {
    for(int col = 0; col < 3; col++)
    {
      printf("#");
    }
    printf("#\n");
  }
}
