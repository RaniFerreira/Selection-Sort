#include <iostream>
#include <utility> // Para std::swap

void selectionSort(int array[], int n) {
    bool trocou;
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        trocou = false;
        
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
                trocou = true;
            }
        }
        if (trocou) {
            std::swap(array[i], array[min_index]);
        } else {
            break; // Sai do loop se não houver trocas
        }
    }
}

void imprimeArray(const int array[], int n) {
    for (int i = 0; i < n; i++) std::cout << array[i] << " ";
    std::cout << std::endl;
}

int main() {
    int lista[] = {11, 4, 30, 22, 7, 26};
    int n = sizeof(lista) / sizeof(lista[0]); // Correção aqui!

    std::cout << "Antes da ordenação: ";
    imprimeArray(lista, n);

    selectionSort(lista, n);

    std::cout << "Depois da ordenação: ";
    imprimeArray(lista, n);

    return 0;
}
