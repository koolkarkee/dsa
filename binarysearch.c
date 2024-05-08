#include<stdio.h>
int binarysearch(int[], int, int);

int binarysearch(int a[], int size, int num){
    int lower, upper, mid;
    lower = 0;
    upper = size;
    printf("\nSize = %d", size);

    //printf("\nLower = %d, mid = %d, and upper = %d", lower, upper, mid);

    while (lower <= upper)
    {
        mid = (lower + upper)/2;
        printf("\nLower = %d, mid = %d, and upper = %d", lower, mid, upper);
        printf("\nMiddle = %d", a[mid]);

        if(num == a[mid]){
            return mid;
        }
        if(num > a[mid]){
            lower = mid + 1;
            printf("\nLower = %d, mid = %d, and upper = %d", lower, upper, mid);
            printf("\n-------------------");
        }
        if(num < a[mid]){
            upper = mid - 1;
            printf("\nLower = %d, mid = %d, and upper = %d", lower, upper, mid);
            printf("\n-------------------");
        }
    }

    printf("\n-------------------");
    return -1;
}

int main(){
    int arr[] =  {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    int num, pos;

    printf("\nEnter the number to search : ");
    scanf("%d", &num);

    pos = binarysearch(arr, 11, num);
    printf("\n-------------------");

    if(pos == -1){
        printf("\nNumber is not in the array.");
    }else{
        printf("\nNumber is at position %d in the array.", pos);
    }
    
    return 0;
}