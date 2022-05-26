//Accept one Number from User and Print that number of * on Screen

#include<stdio.h>
 void Display(int iNo)
{

     int icnt=0;
     for(icnt=1;icnt<=iNo;icnt++)
     {
         printf("* \n");
     }
}



int main()

{
    int ivalue=0;

    printf("Please Enter No");
    scanf("%d",&ivalue);
    Display(ivalue);

    return 0;
}
