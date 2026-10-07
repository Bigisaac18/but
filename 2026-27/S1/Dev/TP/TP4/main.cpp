#include <iostream>
#include <stdlib.h>
#include <cmath>

void init1(int & taille) {
    taille = 0;
}

void init2(int xCases, int & taille) {
    taille = xCases;
}

void init3(int xCases, int value, int & taille, int tab[]) {
    for(int i = 0; i < xCases; i++) {
        tab[i] = value;
    }
    taille = xCases;
}

void pushBack(int tab[], int & taille, int value) {
    tab[taille] = value;
    taille++;
}

void popBack(int tab[], int & taille) {
    taille--;
}

void ex1() {
    int taille = 0;
    const int tailleTotale = 1000;
    int tab[tailleTotale];

    init1(taille);
    init3(50, 5, taille, tab);
}

std::string toCesar(std::string message, int decalage) {
    std::string messageCesar = "";
    for(unsigned int i = 0; i < message.length(); i++) {
        messageCesar.push_back((((message[i] - 97) + decalage) % 26) + 97);
    }
    return messageCesar;
}

std::string toAlphabet(std::string messageCesar, int decalage) {
    std::string message = "";
    for(unsigned int i = 0; i < messageCesar.length(); i++) {
        message.push_back((((messageCesar[i] - 97) + (26 - decalage)) % 26) + 97);
    }
    return message;
}

void ex2() {
    std::cout<<toCesar("azerty", 3)<<std::endl;
    std::cout<<toAlphabet("dchuwb", 3)<<std::endl;
}

std::string inverse(std::string caracteres) {
    std::string inverse = "";
    for(int i = caracteres.length() - 1; i >= 0; i--) {
        inverse.push_back(caracteres[i]);
    }
    return inverse;
}

std::string enleveEspace(std::string caracteres) {
    std::string sansEspace = "";
    for(unsigned int i = 0; i < caracteres.length(); i++) {
        if(caracteres[i] != 32) {
            sansEspace.push_back(caracteres[i]);
        }
    }
    return sansEspace;
}

int occurrence(std::string caracteres, char lettre) {
    int count = 0;
    for(unsigned int i = 0; i < caracteres.length(); i++) {
        if(
            (
                caracteres[i] >= 41 &&
                caracteres[i] <= 90 && 
                (
                    caracteres[i] == lettre ||
                    caracteres[i] == lettre + 32
                )
            )
            ||
            (
                caracteres[i] >= 97 &&
                caracteres[i] <= 122 && 
                (
                    caracteres[i] == lettre ||
                    caracteres[i] == lettre - 32
                )
            )
        ) {
            count++;
        }
    }
    return count;
}

std::string remplace(std::string caracteres, char lettreARemplacer, char lettreRemplacante) {
    std::string caracteresSansLaLettre = caracteres;
    for(unsigned int i = 0; i < caracteresSansLaLettre.length(); i++) {
        if(caracteresSansLaLettre[i] == lettreARemplacer) {
            caracteresSansLaLettre[i] = lettreRemplacante;
        }
    }
    return caracteresSansLaLettre; 
}

void ex3() {
    std::cout<<enleveEspace("couco  uuuu")<<std::endl;
    std::cout<<inverse("coucouuuu")<<std::endl;
    std::cout<<occurrence("J'aime la galette", 'e')<<std::endl;
    std::cout<<remplace("J'aime la galette", 'e', 'z')<<std::endl;
}

bool trouve(std::string phrase, std::string recherche) {
    for(unsigned int i = 0; i < phrase.length(); i++) {
        bool trouve = true;
        for(unsigned int j = 0; j < recherche.length(); j++) {
            if(phrase[i+j] != recherche[j]) {
                trouve = false;
            }
        }
        if(trouve) {
            return true;
        }
    }
    return false;
}

void ex5() {
    std::cout<<trouve("Les montagnes Gandalf !", "Gandalf")<<std::endl;
}

void count(int tab[], std::string phrase) {
    for(unsigned int i = 0; i < phrase.length(); i++) {
        tab[phrase[i]]++;
    }
}

void ex6() {
    int tab[200];
    count(tab, "J'aime les hommes");
    for(int i = 0; i < 200; i++){
        std::cout<<tab[i]<<std::endl;
    }
}

int main() {
    ex5();
}