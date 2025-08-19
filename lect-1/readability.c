// #include <cs50.h>
// #include <ctype.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>

// int count_letters(string para);
// int count_words(string para);
// int count_sentences(string para);

// int main(void)
// {
//     string para = get_string("Text: ");

//     int letters = count_letters(para);
//     printf("%d\n", letters);
//     int words = count_words(para);
//     printf("%d\n", words);
//     int sentences = count_sentences(para);
//     printf("%d\n", sentences);
//     float L = ((float) letters / words) * 100;
//     float S = ((float) sentences / words) * 100;

//     int cli = round(0.0588 * L - 0.296 * S - 15.8);
//     // we need to handle decimals

//     if (cli == 16 || cli > 16)
//     {
//         printf("Grade 16+\n");
//     }
//     else if (cli <= 1)
//     {
//         printf("Before Grade 1\n");
//     }
//     else
//     {
//         printf("Grade %d\n", cli);
//     }
//     // round up i think?
// }

// int count_letters(string para)
// {
//     int len = strlen(para);
//     int lettercount = 0;

//     for (int i = 0; i < len; i++)
//     {
//         char singlechar = para[i];
//         if (isalpha(singlechar))
//         {
//             lettercount++;
//         }
//     }

//     return lettercount;
// }

// int count_words(string para)
// {
//     int wordcount = 1;
//     int charCount = 0;

//     int len = strlen(para);

//     for (int i = 0; i < len; i++)
//     {
//         char singlechar = para[i];
//         // I was checking if it is not blank increment which meant it will increment for each char!
//         // Another thing i forgot to add was to check for the strings after the space for the last word basically
//         if (singlechar == ' ' && (singlechar + 1 != ' '))
//         {
//             wordcount++;
//         }
//     }

//     return wordcount;
// }

// int count_sentences(string para)
// {
//     int sentencecount = 0;
//     int len = strlen(para);

//     for (int i = 0; i < len; i++)
//     {
//         char singlechar = para[i];

//         if (singlechar == '.' || singlechar == '!' || singlechar == '?')
//         {
//             sentencecount++;
//         }
//     }
//     return sentencecount;
// }
