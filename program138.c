//program which accept number from user and display its factors in decreasing order
#include<stdio.h>

 int Displaynonfactors(int iNo)
{
     int icnt=0;
     int isum=0;
     if(iNo < 0){
            iNo= -iNo;

     }
  for(icnt=iNo;icnt>=0;icnt--)

 {
     if(((iNo % icnt)) == 0)
     {
         printf("%d",icnt);
     }
 }


}


int main()

{

    int ivalue=0;
 int iret=0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);
    return 0;

}


