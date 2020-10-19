
#include <iostream>
#include <ctime>
/// СДЕЛАЛ ТОЛЬКО КОКТЕЛЬ,ПОЗЖЕ РАЗБЕРУСЬ С ДРУГИМИ
void rand_ins(int a[]) {
    for (int i = 0; i < 30; ++i) {
        a[i] = std::rand() % 201 - 100;
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void show_a(int a[]) {
    for (int i = 0; i < 30; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void cocktail(int arr[], int n) {
    int8_t f = 1;
    int strt = 0;
    int end = n - 1;
    while (f) {
        for (int i = strt; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                int k = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = k;
                f = 1;
            }  
        }
    if (!f) break;
    f = 0;
    end--;
    for (int i = end - 1; i >= strt; --i) {
        if (arr[i] > arr[i + 1]) {
            int k = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = k;
            f = 1;
        }
    }
    strt++;
    }        
}
