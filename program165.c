#include<stdio.h>


void pattern(int iNo)
{

    int i=1;
    int j=0;
    int a=1;

    for(i=1;i<iNo;i++)

        {
            for(j=1;j<iNo;j++){

            printf("%d \t",2*a);
            a++;
            }
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



