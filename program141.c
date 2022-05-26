//program which accept number from user and display all its non factors.
#include<stdio.h>

 void Displaynonfactors(int iNo)
{
     int icnt=0;
     if(iNo < 0){
            iNo= -iNo;

     }
  for(icnt=1;icnt<iNo;icnt++)

 {
     if(((iNo % icnt)) != 0)
     {
         printf("%d    ",icnt);
     }
 }


}


int main()

{

    int ivalue=0;

    printf("Enter number:\n");
    scanf("%d",&ivalue);
    Displaynonfactors(ivalue);
    return 0;

}

