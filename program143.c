//program which accept number from user and display all its non factors

#include<stdio.h>
void Displaynonfact(int iNo)
{

int icnt=0;
    for(icnt=1;icnt<iNo;icnt++)
    {

 if( (iNo % icnt) != 0)
 {

    printf("%d        ",icnt);
 }

}
}

int main()
{
    int ivalue=0;

    printf("Enter The Number:");
    scanf("%d",&ivalue);
    Displaynonfact(ivalue);

    return 0;

}
