#include<stdio.h>
int main()
{
    int size,i,j;
    printf("Enter the size of a array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the values of the array to be sort:");
    for (i = 0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 0 ; i < size - 1 ;i++)
    {
        int flag = 0;
        for(j = 0 ; j < size - 1 - i ;j++)
        {
            if(array[j]>array[j+1])
            {
                //swap the values
                int temporary = array[j];
                array[j]= array[j+1];
                array[j+1] = temporary;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    printf("Array after bubble sort:");
    for(i = 0; i<size;i++)
    {
        printf("%d ",array[i]);

    }
    return 0;
}
