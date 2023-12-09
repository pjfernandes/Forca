#include <iostream>
#include <string>

const std::string PALAVRA_SECRETA = "MELANCIA";

bool letraExiste(char chute, std::string palavra) {
    for(auto letra : palavra) {
        if (letra == chute) {
            return true;
        }
    }
    return false;
}

int main() {
    //std::cout << palavraSecreta << std::endl;

    bool naoAcertou = true;
    bool naoEnforcou = true;

    while(naoAcertou && naoEnforcou) {
        char chute;
        //std::cout << "Digite o chute: " << chute;
        std::cin >> chute;


        if (letraExiste(chute, PALAVRA_SECRETA)) {
            std::cout << "Seu chute está na palavra!" << std::endl;
        } else {
            std::cout << "Seu chute não está na palavra!" << std::endl;
        }
    }

    return 0;
}
