#include <stdio.h>
int main(void)
{
    char name[50];
    
    printf("Waht is your name\n");
    scanf("%[^\n]s", name);
    printf("%s", name);
}
