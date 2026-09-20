#include <iostream>

void my_sort(int *arr, const int size);

// TODO Интерфейс пользователя должен быть на русском языке
int main() {
    // TODO Пользователь вводит размер массив и элементы массива
	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "Введите " << size << " элементов массива:\n";
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	// TODO вызвается void my_sort(int *arr, int size)
	// TODO Выводится первоначальный массив и отсортированный
	std::cout << "Исходный массив: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	my_sort(arr, size);

	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	// Хорошая практика: освободить память, которую мы выделили через new
    delete[] arr;
    
    return 0;
}

void my_sort(int *arr, const int size) {
	// TODO
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
