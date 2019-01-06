#include<iostream>

size_t Fibb(size_t n)
{
    if(n == 1 || n == 2) return 1;

    return Fibb(n-1) + Fibb(n-2);
}
