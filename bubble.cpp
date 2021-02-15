#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>
#include <cstdlib>
void print(std::vector<int> &mercedes)
{
    for(int i = 0; i<mercedes.size(); i++)
        std::cout << mercedes[i] << " ";
    std::cout << std::endl;
}
void filling(int n, std::vector <int>& mercedes)
{
    srand (time(nullptr));
    int b;
    for (int i = 0; i < n; i++){
        b = rand() % 201 - 100;
        mercedes.push_back(b);
    }
    std::cout << "The initial vector is " <<std::endl;
    print(mercedes);
}
void bubble_sort(std::vector<int>&mercedes){
    for (int i=0;i<mercedes.size()-1;i++)
    {
        for (int w=0;w<mercedes.size()-1;w++)
        {
            if (mercedes[w-1]>mercedes[w])//вот где неправильно
            {
                std::swap (mercedes[w],mercedes[w-1]);//меняем
            }
        }
    }
    std::cout << "Bubble-sorted vector is " <<std::endl;
    print(mercedes);
}
int main()
{
    std::vector<int> mercedes;
    filling(30, mercedes);
    bubble_sort(mercedes);
    return 0;
}
