//program which accept number from user and return summation of all its non factors.
#include<stdio.h>

 int Sumnonfact(int iNo)
{
     int icnt=0;
     int isum=0;
     if(iNo < 0){
            iNo= -iNo;

     }
  for(icnt=1;icnt<iNo;icnt++)

 {
     if(((iNo % icnt)) != 0)
     {
         isum=isum+icnt;
     }
 }
return isum;

}


int main()

{

    int ivalue=0;
 int iret=0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);

     iret=Sumnonfact(ivalue);
     printf("%d",iret);
    return 0;

}


