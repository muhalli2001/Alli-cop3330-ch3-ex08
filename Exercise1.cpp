#include <iostream>
#include <cstring>
#include "std_lib_facilities.h"
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