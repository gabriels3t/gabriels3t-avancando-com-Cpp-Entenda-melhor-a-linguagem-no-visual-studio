#include "nao_acertou.hpp"
// & é a referencia de aonde a variavel esta na memoria do computador 
bool nao_acertou(std::string& palavra_secreta, std::map<char, bool>& chutou){
    for(char letra : palavra_secreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}