#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

int main(){


    int num_totest;
    char marker[10];

    scanf( "%d", &num_totest);

    if(num_totest % 2 ==0)
    {
        strcpy(marker, "even");
    }
    else if(num_totest % 3 ==0)
    {
        strcpy(marker, "odd");
    }
    else
    {
        printf("invalid input");
        return 1;
    }

    printf("the number %d is %s", num_totest, marker);

    return 0;
}