#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

int main(){

    
    int num_totest;
    char marker[10];

    scanf( "%d", &num_totest);

    if(num_totest % 2 == 0)
    {
        strcpy(marker, "even");
    }
    else
    {
        strcpy(marker, "odd");
    }

    printf("the number %d is %s", num_totest, marker);

    return 0;
}