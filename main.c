//
// Created by Elek Péter on 2024. 09. 27.
//
#include <stdio.h>
//#include <stdlib.h> //no go in MISRA
#include "Misra-float.h"

int main()
{
    FP val;
    print_bin256(val);
    printf("\n");
    print(val);

    return 0;
}
