#include "letra_maiuscula.hpp"

std::string palavra_maiuscula(std::string palavra) {
    std::string palavra_minuscula = palavra;
    std::string palavra_maiuscula;
    for (char letra : palavra) {
        palavra_maiuscula += toupper(letra);
    }
    return palavra_maiuscula;
}