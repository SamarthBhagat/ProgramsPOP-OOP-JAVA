// Program which accept number from user and difference between summation of even digits and summation of odd digits

#include<stdio.h>

int Display(int iNo)
{
    int iDigit=0;
    int ieven=0;
    int iodd=0;
    int ians=0;
    while(iNo > 0)
    {
     iDigit= iNo % 10;

     if((iDigit %2) == 0)
     {
         ieven+=iDigit;
     }

     else
    {

         iodd+=iDigit;
     }
     iNo =iNo /10;



    }
ians= ieven - iodd;

    return ians;
}






int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter The Number");
    scanf("%d",&ivalue);

   iret=Display(ivalue);
   printf("%d",iret);

    return 0;
}
