#include<stdio.h>
#include<conio.h>
void main()
{
 int noc=0,now=0,nol=0;
 FILE *fw,*fr;
 char fname[20],ch;
 clrscr();
printf("\n enter the source file name");
gets(fname);
 fr=fopen(fname,"r");
 if(fr==NULL)
{
printf("\n error \n");
exit(0);
}
ch=fgetc(fr);
while(ch!=EOF)
{
noc++;
if(ch==' ');
now++; 
if(ch=='\n')
{
nol++;
now++;
}
ch=fgetc(fr);
}
fclose(fr);
printf("\n total no of character=%d",noc);
printf("\n total no of words=%d",now);
printf("\n total no of lines=%d",nol);
getch();
}

 
