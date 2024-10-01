#include<stdio.h>
#include<conio.h>
int glen,dlen;
void remainder(int[],int[],int[]);
void main()
{
int data[50],ddup[50],gen[50],i,j,tlen,rem[50]={0},count=0;
clrscr();
printf("\n enter the length of the data to be transmitted:");
scanf("%d",&dlen);
printf("\n enter the actual data to be transmitted:");
for(i=0;i<dlen;i++)
{
scanf("%d",&data[i]);
ddup[i]=data[i];
}
printf("\n enter the genertor length:");
scanf("%d",&glen);
printf("\n enter the genertor value:");
for(i=0;i<glen;i++)
scanf("%d",&gen[i]);
tlen=dlen+glen-1;
for(i=dlen,j=0;j<glen-1;j++,i++)
ddup[i]=0;
remainder(ddup,gen,rem);
for(i=0;i<dlen;i++)
ddup[i]=data[i];
for(i=dlen,j=0;j<glen;j++,i++)
ddup[i]=rem[j+1];
remainder(ddup,gen,rem);
for(i=0;i<glen;i++)
{
if(rem[i]!=0)
count++;
}
if(count==0)
printf("\n frame is received correctly");
else
printf("\n frame is not received correctly");
getch();
}
void remainder(int ddup[],int gen[],int rem[])
{
int n=0,i,j,a[50],k,temp;
for(i=0;i<dlen;i++)
{
temp=i;
if(ddup[i]==1)
{
for(j=0;j<glen;j++)
{
if(ddup[temp]==gen[j])
{
ddup[temp]=0;
rem[j]=0;
}
else
{
ddup[temp]=1;
rem[j]=1;
}
temp++;
}
}
}
}
