//Accept one Number from user and print that number of * on screen
#include<stdio.h>
 void Display(int iNo)
{


     while(iNo>0)
     {
         printf("* \n");
         iNo--;
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
