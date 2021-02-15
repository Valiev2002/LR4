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
void merge_sort (std::vector <int>& mercedes) {
    if (mercedes.size() != 1) {
        std::vector<int> left;
        std::vector<int> right;
        int temp;
        for (int i = 0; i < (mercedes.size() / 2); i++) {
            temp = mercedes[i];
            left.push_back(temp);
        }
        for (int i = mercedes.size() / 2; i < mercedes.size(); i++) {
            temp = mercedes[i];
            right.push_back(temp);
        }
        merge_sort(left);
        merge_sort(right);
        int L = 0;
        int R = 0;
        int M = 0;
        while (L < left.size() && R < right.size()) {
            if (left[L] < right[R]) {
                mercedes[M] = left[L];
                L++;
            } else{
                mercedes[M] = right[R];
                R++;
            }
            M++;
        }
        while (L < left.size())
        {
            mercedes[M] = left[L];
            L++;
            M++;
        }
        while (R < right.size()) {
            mercedes[M] = right[R];
            R++;
            M++;
        }
    }
    std::cout << "merge-sorted vector is " <<std::endl;
    print(mercedes);
}
int main()
{
std::vector<int> mercedes;
filling(30, mercedes);
merge_sort(mercedes);
}
