#include <iostream>
#include "letra_existe.hpp"
#include "chuta.hpp"
void chuta(std::map<char, bool>& chutou, std::vector<char>& chutes_errados, std::string& palavra_secreta){
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;
    chute = toupper(chute);
    chutou[chute] = true;

    if(letra_existe(chute, palavra_secreta)){
        std::cout << "Voce acertou! Seu chute esta na palavra." << std::endl;
    }
    else{
        std::cout << "Voce errou! Seu chute nao esta na palavra." << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}