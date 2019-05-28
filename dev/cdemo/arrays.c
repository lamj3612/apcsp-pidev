#include <stdio.h>

void arrayAdd();
void main()
{
int arr[100];
for (int a = 0; a < 100; a++)
{
    arr[a] = a * a;
    printf("index = %d, value = %d\n", arr[a]);
} 
    printf("\n");
    arrayAdd(arr, 100, 35);
}

void arrayAdd(int* arr, int f, int n)
{
for(int num = 0; num < f; num++)
{
    arr[num] = arr[num] + n;
    printf("index = %d, value = %d\n",num, arr[num]);
}
}
