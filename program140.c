//program which accept number from user and return  difference between summation of all its factors and non factors.
#include<stdio.h>

 int FctDiff(int iNo)
{
     int icnt=0;
     int isum=0;
     int nsum=0;
     int sub=0;
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

   for(icnt=1;icnt<iNo;icnt++)

 {
     if(((iNo % icnt)) == 0)
     {
         nsum=nsum+icnt;
     }

 }
 sub=nsum-isum;


return sub;

}


int main()

{

    int ivalue=0;
 int iret=0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);

     iret=FctDiff(ivalue);
     printf("%d",iret);
    return 0;

}


