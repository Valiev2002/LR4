#include <iostream>
#include <vector>
//проходит много много раз по вектору,если последовательность неправильная,меняет эдеиенты местами
void Bubble_sort(std::vector<int>&mercedes){
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
    for (int i : mercedes)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> mercedes;
    for (int w=0;w<30;+w++)
    {
        int c = std::rand() % 201 - 100;
        mercedes.push_back(c);
    }
    for (int i : mercedes) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    Bubble_sort(mercedes);
    return 0;
}
