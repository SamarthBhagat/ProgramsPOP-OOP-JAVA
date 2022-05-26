// Accept N number from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int ilength)
{
    int icnt=0;
    int ieven=0;
    int iodd=0;
    int idiff=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
        if((Arr[icnt] % 2 )== 0)
        {
            ieven= Arr[icnt]+ieven;
        }
        else
        {
            iodd= Arr[icnt]+ iodd;
        }
    }
    idiff= ieven -iodd;


return idiff;
}

int main()
{
    int icnt=0;
    int *ptr=NULL;
int iret=0;
    int isize=0;

    printf("Enter The Array Elements");
    scanf("%d",&isize);

   ptr=(int*)malloc(isize * sizeof(int));
       if(ptr == NULL)
    {
        printf("Unable to allocate the memoery");
        return -1;
    }

    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);

    }
   iret=Difference(ptr,isize);

printf("%d",iret);


    return 0;
}
