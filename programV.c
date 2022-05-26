//Accept number From User And Check Whether Number is even or odd.

#include<stdio.h>

typedef int BOOL;
#define true 1
#define false 0

int ChkEven(int iNo)
{
 if((iNo % 2)== 0)
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
 bret=ChkEven(ivalue);
 if(bret==true)
 {
    printf("NO is Even");
 }

 else
    {
    printf(" No is Odd");
 }
 return 0;
}
