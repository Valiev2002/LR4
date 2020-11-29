#include<iostream>
#include<algorithm>
using namespace std;
    void rand(int a[])
    {
        for (int i = 0; i < 30; ++i) {
            a[i] = rand() % 201 - 100;
            cout << a[i] << " ";
        }
        cout << endl;
    }
int main() {
    int *arr; // указатель для выделения памяти под массив
    int size; // размер массива
    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        cerr << "enter value" << endl;
        return 1;
    }

    arr = new int[size]; // выделение памяти под массив

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int temp; // временная переменная для обмена элементов местами

    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // освобождение памяти;
//selection


    const int length = 5;
    int array[length] = {30, 50, 20, 10, 40};

    for (int startIndex = 0; startIndex < length - 1; ++startIndex) {
        int smallestIndex = startIndex;
        //элемент поменьше в остальной части
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) {
            //меньше нашего наименьшего элемента,
            if (array[currentIndex] < array[smallestIndex])
                // то запоминаем его
                smallestIndex = currentIndex;
        }

        swap(array[startIndex], array[smallestIndex]);
    }
    for (int index = 0; index < length; ++index)
        cout << array[index] << ' ';


        return 0;
    }

