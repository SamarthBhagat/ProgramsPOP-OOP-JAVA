#include<stdio.h>

int Display(int iNo)
{
    int iDigit=0;
     int isum=0;
while(iNo>0)
{
  iDigit = iNo % 10;
  if((iDigit % 2)== 0)
  {
      isum++;
  }

  iNo= iNo/10;
}

    return isum;
}



int main()

{
  int ivalue=0;
 int iret=0;
   printf("Enter The Value:");
   scanf("%d",&ivalue);
   iret=Display(ivalue);
printf("%d",iret);
   return 0;

}
