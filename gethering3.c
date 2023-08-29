#include<stdio.h>

int arr_length(int arr[])
{
    for(i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
  
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n;
  
    n = arr_length(arr);
    printf("Length of array is: %d", n);
  
}
