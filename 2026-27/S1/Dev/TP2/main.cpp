#include<iostream>
#include <math.h>
#include <ctime>
#include <stdlib.h>

// Ex1
void ex1() {
    int nombre;
    std::cout<<"Entrez un nombre"<<std::endl;
    std::cin>>nombre;
    for(int i = 0; i <= 10; i++) {
        std::cout<<nombre<<" * "<<i<<" = "<<nombre * i<<std::endl;
    }
}

// Ex2
void ex2() {
    int nombre;
    std::cout<<"Entrez un nombre"<<std::endl;
    std::cin>>nombre;
    for(int j = 0; j <= nombre; j++) {
        for(int i = 0; i <= 10; i++) {
            std::cout<<j<<" * "<<i<<" = "<<j * i<<std::endl;
        }
    }
}

// Ex3
void ex3() {
    int min = 20;
    int max = 0;
    int somme = 0;
    int nbNote = 0;
    int note = 0;

    while(note >= 0) {
        std::cout<<"Entrez une note"<<std::endl;
        std::cin>>note;
        if(note >= 0) {
            if(note < min) {
                min = note;
            }
            if(note > max) {
                max = note;
            }
            somme = somme + note;
            nbNote++;
        }
    }
    std::cout<<"Min : "<<min<<"\nMax : "<<max<<"\nMoyenne : "<<somme/nbNote<<std::endl;
}

// Ex4
void ex4() {
    int nb2 = 0;
    int nb1 = 1;
    int nb = nb1 + nb2;
    int reccurrence;

    std::cout<<"Entrez un nombre : "<<std::ends;
    std::cin>>reccurrence;
    std::cout<<nb2<<"\n"<<nb1<<std::endl;
    for(int i = 0; i < reccurrence; i++) {
        std::cout<<nb<<std::endl;
        nb2 = nb1;
        nb1 = nb;
        nb = nb1 + nb2;
    }
}

// Ex5
void ex5() {
    srand(time(NULL));

    bool found = false;
    int field;

    std::cout<<"Entrez le champ de jeu"<<std::endl;
    std::cin>>field;
    int nb = rand() % (field + 1);
    int userNb;

    std::cout<<"Entrez un nombre : "<<std::endl;
    while(!found) {
        std::cin>>userNb;
        if(userNb == nb) {
            std::cout<<"Bravo, vous avez trouvé, le nombre était : "<<nb<<std::endl;
            found = true;
        }
        if(userNb > nb) {
            std::cout<<"Plus petit"<<std::endl;
        }
        if(userNb < nb) {
            std::cout<<"Plus grand"<<std::endl;
        }
    }
}

// Ex6
void ex6() {
    int size;
    bool symbol = true;

    std::cout<<"Entrez la taille du damier : "<<std::endl;
    std::cin>>size;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(symbol) {
                std::cout<<"*  ";
            } else {
                std::cout<<"-  ";
            }
            symbol = !symbol;
        }
        std::cout<<"\n";
    }
}

// Ex7
void ex7() {
	int nb;

	std::cout<<"Entrez un nombre : "<<std::endl;
	std::cin>>nb;

	for(int i = 1; i <= nb; i++) {
		int somme = 0;
		for(int j = 1; j <= i; j++) {
			if(i%j == 0) {
				somme = somme + j;
			}
		}

		if(somme / 2 == i) {
			std::cout<<i<<std::endl;
		}
	}
}

// Ex8
// ça fonctionne paaaas
void ex8() {
	int nb;
	std::string binaire = "";

	std::cout<<"Entrez un nombre : ";
	std::cin>>nb;

	while(nb > 0) {
		nb = nb/2;
		if(nb % 2) {
			binaire = binaire + "1";
		} else {
			binaire = binaire + "0";
		}
	}

	std::cout<<binaire;
}

int main() {
    ex8();
}