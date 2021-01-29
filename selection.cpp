#include<iostream>
#include<vector>
//на каждом щаге находим минимум и меняем местами если етсь меньше
void print(std::vector<int>&mercedes, int n)
{
    for(int i = 0; i<n; i++)
        std::cout << mercedes[i] << " ";
    std::cout << std::endl;
}
void selectionSort(std::vector<int>&mercedes, int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (mercedes[j] < mercedes[min])
                min = j;
       std::swap(mercedes[i], mercedes[min]);
    }
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
    int n;
    std::cin>>n;
    print(mercedes,n);
    selectionSort(mercedes,n);
    return 0;
}
