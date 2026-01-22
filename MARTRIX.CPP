#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num1[3][3],num2[3][3],num3[3][3],tot=0;
clrscr();
printf("Enter the A martrix:");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("\n%d",&num1[i][j]);
}
}
printf("Enter the B martrix:");
for(i=0;i<3;i++)
{
scanf("\n%d",&num2[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
num3[i][j]=num1[i][j]+num2[i][j];
}
}
printf("\n");
printf("Result martrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",num3[i][j]);
}
printf("\n");
}
getch();
}