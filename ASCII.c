#include<stdio.h>
main()
{
int num;
printf(“Printing ASCII values Table…\n\n”);
num = 1;
while(num<=255)
{
printf(“\nValue:%d = ASCII Character:%c”, num, num); 
num++;
}
printf(“\n\nEND\n”);
}
