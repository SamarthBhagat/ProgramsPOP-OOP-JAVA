#include<stdio.h>

typedef int BOOL;
#define true 1
#define false 0

int Check(int iNo)
{
 if((iNo %5 )== 0)
 {
     return true;
 }
 else
 {
     return false;
 }
}
int main()
{
 int ivalue=0;
 BOOL bret=false;

 printf("enter the number");
 scanf("%d",&ivalue);
 bret=Check(ivalue);
 if(bret==true)
 {
    printf("Divisible By 5");
 }

 else
    {
    printf(" Not Divisible By 5");
 }
 return 0;
}
