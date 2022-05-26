//Accept N number from user and  display all such  elements which are even and divisible by 5.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int ilength)
{
    int icnt=0;
    for(icnt=0;icnt<ilength;icnt++)
    {
        if((Arr[icnt] % 5)==0)
        {
            if((Arr[icnt] %2) ==0)
                printf("%d",Arr[icnt]);
        }
    }

}


int main()

{
    int icnt=0;
    int isize=0;
    int *ptr=NULL;

    printf("Enter Number The Elements");
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

    Display(ptr,isize);
    return 0;

}
