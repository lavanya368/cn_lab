#include<stdio.h>
#include<conio.h>
void main()
{
char sender[50],receiver[50];
int i,winsize;
clrscr();
printf("\n enter the windows size:");
scanf("%d",&winsize);
printf("\n sender window is expanded to store message or window \n");
printf("\n enter the data to be sent:");
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=NULL;
printf("\n message send by the sender:\n");
puts(sender);
printf("\n windows size of recevier is expanded \n");
printf("\n acknowledgement from recevier \n");
for(i=0;i<winsize;i++)
printf("\n ACK:%d",i);
printf("\n message received by receiver is:");
puts(receiver);
printf("\n window size of receiver is shrinked \n");
getch();
}