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
void selection_sort (std::vector <int>& mercedes) {
        int i, j, min;
        for (i = 0; i < mercedes.size() - 1; i++) {
            min = i;
            for (j = i + 1; j <mercedes.size(); j++)
                if (mercedes[j] < mercedes[min])
                    min = j;
            std::swap(mercedes[i], mercedes[min]);
        }
    std::cout << "selection-sorted vector is " <<std::endl;
    print(mercedes);
    }
int main()
{
    std::vector<int> mercedes;
    filling(30, mercedes);
    selection_sort(mercedes);
}
