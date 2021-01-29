#include <iostream>
#include <vector>
int Partition (std::vector <int> &vec, int begin, int end)
{
    int value = vec[end];
    int position = begin;
    for(int i = begin; i < end; i++)
    {
        if (vec[i] <= value)
        {
            int temp = vec[i];
            vec[i] = vec[position];
            vec[position] = temp;
            position++;
        }
    }
    vec[end] = vec[position];
    vec[position] = value;
    return position;
}
void Quick_sort(std::vector<int> &mercedes, int begin, int end)
{
    if(begin> end)
    {
        return;
    }
    int part = Partition(mercedes, begin, end);
    Quick_sort(mercedes, begin, part-1);
    Quick_sort(mercedes, part + 1, end);
}
    int main()
    {

        std::vector<int> mercedes;
        for (int w=0;w<30;w++) {
            int c = (std::rand() % 201) - 100;
            mercedes.push_back(c);
        }
        int n=30;
        int c=n-1;
        for (int i : mercedes)//проход по ветору
        {
            std::cout << i << " ";
        }
        std::cout << "\n";
        Quick_sort(mercedes,0,c);
        for (int i : mercedes) {
            std::cout << i << " ";
        }
        std::cout << "\n";
        return 0;
    }