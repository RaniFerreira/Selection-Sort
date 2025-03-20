#include <iostream>
#include <utility> // Para std::swap
#include <iterator> // Para std::size (C++17)

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        std::swap(array[i], array[min_index]); // Troca sem verificação extra
    }
}

int main() {
    int lista[] = {11, 4, 30, 22, 7, 26};
    int n = std::size(lista); // Usa std::size() (C++17+)

    std::cout << "Antes da ordenação: ";
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSort(lista, n);

    std::cout << "Depois da ordenação: ";
    for (int num : lista) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
