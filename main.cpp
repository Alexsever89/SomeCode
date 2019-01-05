#include<iostream>
#include<vector>

template<typename T>
void Print(const T& container)
{
    for(const auto& elem : container)
        std::cout << elem << " ";
    std::cout << "\n";
}

int main()
{
    return 0;
}
