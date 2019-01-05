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
    std::vector<int> vi = {1,2,3,4,5};
    Print(vi);
    return 0;
}
