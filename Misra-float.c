//
// Created by Elek Péter on 2024. 09. 27..
//

#include "Misra-float.h"

#include <stdio.h>


void print(FP a)
{
    if (a.sign % 2 == 1)
    {
        printf("-");
    }
    //else{}

    for (int i = 0; i < M; ++i)
    {
        printf("%i ", a.exp[i]);
    }
    printf("e");
    if ((a.sign/2) % 2 == 1)
    {
        printf("-");
    }
    for (int i = 0; i < N; ++i)
    {
        printf("%i ", a.man[i]);
    }

}

void print_bin256(FP const a)
{
    printf("%i ", a.sign);
    for (int i = 0; i < M; ++i)
    {
        printf("%i ", a.exp[i]);
    }
    for (int i = 0; i < N; ++i)
    {
        printf("%i ", a.man[i]);
    }
}
