//program which accept number from user and return difference summation  all its  factors and non factors.
#include<stdio.h>

 int Sumnonfact(int iNo)
{
     int icnt=0;
     int isub=0;
     int ffact=0;
     int nfact=0;
     if(iNo < 0){
            iNo= -iNo;

     }
  for(icnt=1;icnt<iNo;icnt++)

 {
     if(((iNo % icnt)) != 0)
     {
         nfact=nfact+icnt;
     }
 }

 for(icnt=1;icnt<iNo;icnt++)

 {
     if(((iNo % icnt)) == 0)
     {
         ffact=ffact+icnt;
     }
 }
 isub=ffact-nfact;
return isub;

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



