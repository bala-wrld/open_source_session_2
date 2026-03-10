/*
Hint for students

The program has duplicate logic in two functions.
Refactor the code to avoid repetition.
*/
#include <stdio.h>

void findMaxMin(int arr[], int n)
{
    int i,j,temp;

    for(i = 0; i < n; i++)
    {
        for(j=0;j<n-i-1;j++){
        if(arr[j] > arr[j+1])
        {
           temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }

    printf("Maximum = %d\nMinimum= %d",arr[n-1],arr[0]);
}


int main()
{
    int arr[5] = {60, 70, 80, 90, 50};

    printf("Max: %d\n", findMax(arr, 5));
    printf("Min: %d\n", findMin(arr, 5));

    return 0;
}
