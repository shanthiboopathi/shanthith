#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define INPT "proj1.txt"
int main(void)
{
int curCh;
int preCh;
int countCh = 0
int isalpha = 0
int isdigit = 0
int ispunct = 0
FILE *fp;
{
if (!(fp = fopen(INPT, "r")))
{
printf( "Error opening proj1.txt for reading");
return (1);
} 
while ((curCh = fgetc(fp)) != EOF)
{
else if (curCh
countisalpha ++;
 else if
countisdigit++;
else
countispunct++;
preCh = curCh;
}
printf ("The number of alphanumeric characters is: %d\n", countalpha);
printf ("The number of digits is: %d\n", countdigit);
printf ("The number of punctuation characters is: %d\n", countpunct);
flose (fp);
system("PAUSE"); 
return 0;
}
