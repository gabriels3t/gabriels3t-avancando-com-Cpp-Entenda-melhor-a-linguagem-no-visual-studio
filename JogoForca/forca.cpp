#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "letra_existe.hpp"
#include "imprime_cabecalho.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "chuta.hpp"
#include "adiciona_palavra.hpp"
#include "nao_acertou.hpp"

using namespace std;
using namespace Forca;

static string palavra_secreta; 
static map<char, bool> chutou;
static vector<char> chutes_errados;

int* funcao() {
    int* j = new int; // Criando um heap
    *j = 5;
    return j;
}

int main () {
    int* i;
    i = funcao();
    cout << *i << endl;
    delete i; //deleta um heap
//#if0 pro compilador ignorar tudo que esta dentro do if
#if 0

    imprime_cabecalho();
    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta,chutou) && chutes_errados.size() < 5){
        Forca::imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta,chutou);

        chuta(chutou,chutes_errados,palavra_secreta);
    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(nao_acertou(palavra_secreta, chutou)){
        cout << "Voce perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Parabens! Voce acertou a palavra secreta!" << endl;

        cout << "Voce deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        resposta = toupper(resposta);
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
#endif
    cin.get();
}