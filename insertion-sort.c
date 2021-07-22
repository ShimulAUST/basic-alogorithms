//Insertion Sort
//Time complexity O(n^2)
//Space complexity O(1)

#include<stdio.h>
int main()
{
    int size,i,hole,value;
    printf("Enter the size of a array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the values of the array to be sort:");
    for (i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 1 ; i < size ; i++)//n times
    {
        value = array[i];
        hole = i;
        while(hole > 0 && array[hole - 1] > value)//approx n times
        {
            array[hole] = array[hole - 1];
            hole--;
        }
        array[hole] = value;

    }
    printf("Array after insertion sort:");
    for(i = 0; i<size; i++)
    {
        printf("%d ",array[i]);

    }
    return 0;
}
