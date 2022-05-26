#include<stdio.h>


void pattern(int iNo)
{
    char ch='A';
    int icnt=0;

    for(icnt=0;icnt<iNo;icnt++)

    {
        printf("%c \t",ch);
        ch++;
    }
}







int main()
{
    int ivalue=0;
    printf("Enter The Number");
    scanf("%d",&ivalue);
    pattern(ivalue);


    return 0;
}
