
//Accept N number from user and  display all such  elements which are divisible by  3 and 5.
#include<stdio.h>
#include<stdlib.h>

 void Display(int Arr[], int ilength)
{
    int icnt=0;

    for(icnt=0;icnt<ilength;icnt++)
    {

        if((Arr[icnt] % 5 == 0)  && (Arr[icnt] % 3) ==0)
        {
            printf("%d",Arr[icnt]);
        }

    }

printf("Their is No Such A Number In the Given Numbers system who is Divisible By 3  and 5");
}


int main()

{
    int isize=0;
    int icnt=0;
    int *ptr=NULL;

    printf("Enter The Number");
    scanf("%d",&isize);


    ptr=(int *)malloc(isize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memoery");
        return -1;
    }
     for(icnt=0;icnt<isize;icnt++)
     {

         scanf("%d",&ptr[icnt]);
     }

     Display(ptr,isize);


    return 0;
}
