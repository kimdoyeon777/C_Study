//
// Created by HDW on 2018-11-20.
//

#include <stdio.h>

void compare(double *, double *, double *);
int main()
{
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
    {
        compare(&a, &b, &c);
        printf("%lf %lf %lf\n", a, b, c);
    }
}

void compare(double * a, double * b, double * c)
{
    double tmp;

    if (*a > *b)
    {
        tmp = *b;
        *b = *a;
        *a = tmp;
    }

    if (*b > *c)
    {
        tmp = *c;
        *c = *b;
        *b = tmp;

        if (*a > *b)
        {
            tmp = *b;
            *b = *a;
            *a = tmp;
        }
    }
}