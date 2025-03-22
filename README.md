# **🚀 Implementando o Selection Sort em C++**

📌 Sobre o Repositório
Este projeto apresenta a implementação do algoritmo de ordenação Selection Sort em C++, incluindo tanto a versão simples quanto a otimizada. O objetivo é comparar o desempenho e a eficiência das duas abordagens. O Selection Sort seleciona repetidamente o menor elemento da lista e o move para sua posição correta. A versão otimizada utiliza funções modernas da STL para melhorar a legibilidade e a eficiência do código.

🎯 Objetivo
Compreender o funcionamento do Selection Sort.
Implementar a versão otimizada, que melhora a eficiência e a legibilidade do código.
Analisar o desempenho medindo o número de trocas e o tempo de execução.

🔧 Implementação
📜 Versão Original (Simples)
O Selection Sort percorre o vetor repetidamente, encontrando o menor elemento e trocando-o com o primeiro elemento não ordenado. Esse processo se repete até que toda a lista esteja ordenada.
Complexidade:
Pior caso: O(n²) (quando a lista está inversamente ordenada)
Melhor caso: O(n²) (pois sempre precisa percorrer a lista)

Implementação:

<div style="display: flex; justify-content: center; gap: 10px;">
    <img src="https://raw.githubusercontent.com/RaniFerreira/Selection-Sort/main/img/SelectionS.png" alt="Selection" width="300" height="250">
    <img src="https://raw.githubusercontent.com/RaniFerreira/Selection-Sort/main/img/selection.png" alt="Selection" width="300" height="250">
</div>

Caso Teste:

<img src="https://github.com/RaniFerreira/Selection-Sort/blob/main/img/CASOTESTE.png" alt="Selection" width="200" height="150">

*⚡ Versão Otimizada*
A versão otimizada melhora a legibilidade do código utilizando std::size() para calcular automaticamente o tamanho do array, e std::swap() diretamente, eliminando verificações extras.

Complexidade:
Melhor caso: Continua sendo O(n²), mas melhora a eficiência em algumas situações.
Pior caso: O(n²), semelhante à versão original.

Implementação:

<div style="display: flex; justify-content: center; gap: 10px;">
    <img src="https://github.com/RaniFerreira/Selection-Sort/blob/main/img/otimizado1.png" alt="Selection" width="300" height="250">
    <img src="https://github.com/RaniFerreira/Selection-Sort/blob/main/img/otimizado2.png" alt="Selection" width="300" height="250">
</div>

Caso Teste 

<img src="https://github.com/RaniFerreira/Selection-Sort/blob/main/img/testeoti.png" alt="Selection" width="200" height="150">

*📊 Testes e Comparação de Desempenho*

O código mede: 

✅ O tempo de execução das duas versões para diferentes tamanhos de entrada. 

✅ O número de comparações realizadas.

📈 Resultados esperados:
Listas ordenadas → Ambas as versões continuam O(n²), mas a otimizada reduz complexidade no código.

🤝 Contribuições

Sinta-se à vontade para abrir issues ou enviar pull requests com melhorias! 😊

📌 Autor: Ranielly Ferreira 









