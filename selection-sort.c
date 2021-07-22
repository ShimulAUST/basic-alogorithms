//Selection Sort
//time complexity O(n^2)
//space complexity O(1)

#include<stdio.h>
int main()
{
    int size,i,j;
    printf("Enter the size of a array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the values of the array to be sort:");
    for (i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    //outer loop for iterate all elements of the array
    for(i = 0 ; i < size ; i++)
    {
        int min_index = i;
        //inner loop for checking minimum value index
        for(j = i + 1 ; j < size ; j++)
        {
            if(array[j]<array[min_index]){
                min_index = j;
            }
        }
        //swap the values
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    printf("Array after selection sort:");
    for(i = 0; i<size;i++)
    {
        printf("%d ",array[i]);

    }
    return 0;
}
