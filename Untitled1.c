#include<stdio.h>
#include<conio.h>
main()
{
int days;
printf("enter the number of days the member is late to return the book:");
scanf("%d",&days);
if(days<=5)
printf("/n you must pay 50 paisa fine:");
else if(days>=6&&days<=10)
printf("/n you must pay 1 ruppee fine:");
else if(days>10&&days<30)
printf("/n you must pay 5 ruppee fine:"):
else if(days>=30)
printf("/n your membership is cancelled...");
getch();
}
