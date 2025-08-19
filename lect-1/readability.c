first find number of words since numbers of words is needed
in both average of letters and average num of sentences 

ok so how do we find the number of words in a string? 

after we find each word we can use len to finf the number of letters 
in a single word then sum all of the letters in that string?

string para;

int words = count_words(para);
int letters = count_letters(para);
int sentences = count_sentences(para);

int L = (letters/words) * 100;
int S = (sentences/words) * 100;

int cli = 0.0588 * L - 0.296 * S - 15.8;

if(cli == 16 or higher)
{
  printf("grade 16+");
} else if(cli <= 1)
{
  printf("below grade level 1")
}
else
{
  printf(Grade: cli)
}
//round up i think? 

count letters is the single character right? ok well
so maybe we can use isBlank to check and if the character is blank 
then we dont add it to the count of letters?
int len = strlen(para)
int count;
for(int i = 0; i < len; i++)
{
   char singlechar = para[i];
   if(isalpha(singlechar))
   {
	count++;
   }
}
return count

for checking sentences, how to deal with a full stop in a word 
but it is not end of sentence?

For example here:
Existing computer programs that measure readability are based largely 
upon subroutines which estimate number of syllables, usually by counting 
vowels. The shortcoming in estimating syllables is that it necessitates 
keypunching the prose into the computer. There is no need to estimate 
syllables since word length in letters is a better predictor of 
readability than word length in syllables. Therefore, a new 
readability formula was computed that has for its predictors 
letters per 100 words and sentences per 100 words. Both 
predictors can be counted by an optical scanning device, 
and thus the formula makes it economically feasible for 
an organization such as the U.S. Office of Education to 
calibrate the readability of all textbooks for the public school system.

Here there is U.S., if i were to use the . as the split, how
would I deal with full stop being somewhere else

count words
int wordcount = 1;
int charCount = 0;

int len = len(para)
for(i = 0; i < len; i++)
{
   char singlechar = para[i];
   printf(singlechar);
   if(!isBlank(singlechar))
   {
   	wordcount++;
   }
   
}
return wordcount;

count sentences

int len = len(para)
for(i = 0; i < len; i++)
{
   char singlechar = para[i];
   printf(singlechar);
   if(!singlechar == '.')
   {
   	wordcount++;
   }
   
}
