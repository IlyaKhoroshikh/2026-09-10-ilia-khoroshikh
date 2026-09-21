#include <iostream>

void my_sort(int *arr, const int size);
void print_array(const char* comment, int* arr, const int size);

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    
    int* arr = new int[size];
    std::cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    print_array("Исходный массив:", arr, size);

    my_sort(arr, size);

    print_array("Отсортированный массив:", arr, size);
    
    delete[] arr;
    return 0;
}

void print_array(const char* comment, int* arr, const int size) {
    std::cout << comment << " ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}