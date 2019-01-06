#include<iostream>

size_t Fibb(size_t n)
{
    if(n == 1 || n == 2) return 1;

    return Fibb(n-1) + Fibb(n-2);
}

size_t Fibb2(size_t n)
{
    if(n == 1 || n == 2) return 1;

    size_t a = 1, b = 1, result = 0;
    for(size_t i = 3; i <= n; ++i)
    {
        result = a+b;
        a = b;
        b = result;
    }

    return result;
}
