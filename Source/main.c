#include <stdio.h>
#include <string.h>
//#include "search.h"

int main()
{
    printf("Program Begin!\n");

    // Static library

    // int arr[] = { 2, 3, 4, 10, 40 };

    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 10;

    // int result = binary_search(arr, 0, n - 1, x);
    // (result == -1) ? printf("Element is not present in array\n")
    //     : printf("Element is present at index %d\n", result);

    // Debug in Visual Studio

    int a = 10;
    a += 1;

    const char* str = "Hello World!";
    int len = (int)strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = str[i];
        printf("%c\n", c);
    }

    printf("Program End!\n");
    return 0;
}
