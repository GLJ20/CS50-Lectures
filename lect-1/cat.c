// #include <stdio.h>
// #include <cs50.h>

// //void means no input or output is expcted from it
// // void meow(void)
// // {
// //     printf("meow\n");
// // }

// //this is function protoype, when program compiled, it identifies that this is prototype so
// //it adds it to a table that could represent promises. Meaning, this will let it think
// //ik meow exists and I have all info about it like name, return type, parameters
// // void meow(void);

// void meow(int n);

// int main(void)
// {
//     // int i = 0;
//     // //count up to the number so count up to 3
//     // while(i < 3)
//     // {
//     //     printf("meow\n");
//     //     i++;
//     // }
//     //print forever
//     // while(true)
//     // {
//     //     printf("meow\n");
//     // }

//     // for(int i = 0; i < 3; i++)

//         //compiler checks list of promises and sees meow is on it, so lets this slide
//         //then compiler generates machine code to tell program when it reaches here
//         //go to the memeory address of this function but it still doesnt know so it puts placeholder
//         meow(3);

// }
// //then something called linker takes over after compiler is done
// //it connects eveyrhting so it finds where meow is and knows about the machine code
// //it then replaces the memory address placeholder with actual memory adress
// void meow(int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("meow\n");
//     }
// }

// //somehow computers also make main and meow be these seperate pieces? so like it connects
// //main with meow?
