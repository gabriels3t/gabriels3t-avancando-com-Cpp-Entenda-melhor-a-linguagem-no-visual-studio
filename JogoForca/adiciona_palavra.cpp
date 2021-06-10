#include <iostream>
#include <vector>
#include <string>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "letra_maiuscula.hpp"

void adiciona_palavra(){
    std::cout << "Digite a nova palavra." << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;
    nova_palavra = palavra_maiuscula(nova_palavra);
    std::vector<std::string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}
