//
// Created by Elek Péter on 2024. 09. 27..
//

#ifndef MISRA_FLOAT_H
#define MISRA_FLOAT_H
#define N 10 //exponent with sign (in chars)
#define M 10 //mantissa/fraction (in chars)

struct FP
{
    // sign: first bit is the sign of the value
    // second bit is the sign of the exponent
    char sign; //contains the sign of the exponent and the mantissa, and the information about errors (nan, +-inf)
    //this is un optimized, but it gives room for error handling (also it gives space for improvement if performance optimization needed)
    char exp[N];
    char man[M];
};

typedef struct FP FP;


FP double2FP(double d);

double FP2double(FP f);

void print(FP a);

void print_bin256(FP a);

FP add(FP a, FP b);

FP sub(FP a, FP b);

FP mul(FP a, FP b);

FP div(FP a, FP b);

FP pow(FP a, FP b);

FP pow_recursive(FP a, FP b); //non MISRA compatible
FP abs(FP a);

FP sqrt(FP a);

FP sin(FP a);

FP cos(FP a);

FP tan(FP a);

FP asin(FP a);

FP acos(FP a);

FP atan(FP a);

FP exp(FP a);

FP log(FP a);

FP sinh(FP a);

FP cosh(FP a);

FP tanh(FP a);

FP asinh(FP a);

FP acosh(FP a);

FP atanh(FP a);

#endif //MISRA_FLOAT_H
