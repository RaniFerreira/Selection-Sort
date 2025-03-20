#include <iostream>

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) { // Garante que só troca se necessário
            std::swap(array[i], array[min_index]);
        }
    }
}

int main() {
    int lista[] = {11, 4, 30, 22, 7, 26};
    int n = sizeof(lista) / sizeof(lista[0]);

    std::cout << "Antes da ordenação: ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(lista, n);

    std::cout << "Depois da ordenação: ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
