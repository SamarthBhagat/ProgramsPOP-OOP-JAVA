//Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo";
#include<stdio.h>
 void Display(int iNo)
{

if(iNo<10)
{

    printf("Hello");

}
else
{
   printf("Demo");
}

}



int main()

{
    int ivalue=0;

    printf("Please Enter No: ");
    scanf("%d",&ivalue);
    Display(ivalue);

    return 0;
}

