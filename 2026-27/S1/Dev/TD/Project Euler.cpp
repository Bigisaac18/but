#include <iostream>
#include <string>

int pr0() {
    int64_t somme = 0;
    for(int64_t i = 1; i < 894000; i++) {
        if((i*i) % 2 == 1) {
            somme = somme + (i*i);
        }
    }
    std::cout<<somme;
}

int pr1() {
    int64_t sum = 0;
    for(int64_t i = 0; i < 1000; i++) {
        if((i % 3 == 0) || (i % 5 == 0)) {
            sum = sum + i;
        }
    }
    std::cout<<sum;
}

int pr2() {
    int64_t nb2 = 0;
    int64_t nb1 = 1;
    int64_t nb = nb1 + nb2;
    int64_t sum = 0;

    while (nb < 4000000) {
        nb2 = nb1;
        nb1 = nb;
        nb = nb1 + nb2;
        if(nb % 2 == 0) {
            sum = sum + nb;
        }
        // std::cout<<nb<<std::endl;
    }
    std::cout<<sum<<std::endl;
}

int pr3() {
    int64_t prime = 2;
    int64_t nb = 600851475143;
    
    while (nb != 1) {
        if(nb % prime == 0) {
            nb = nb / prime;
            std::cout<<"Diviseur : "<<prime<<" "<<"Nombre : "<<nb<<std::endl;
        }
        prime++;
    }
}

int pr4() {
    int64_t nb = 0;
    std::string strNb = "0";
    for(int i = 100; i < 1000; i++) {
        for(int j = 100; j < 1000; j++) {
            if(i*j > nb) {
                nb = i * j;
            }
            strNb = std::to_string(nb);
            bool palindrome = true;
            for(int l = 0; l < strNb.length(); l++) {
                if(strNb[l] != strNb[strNb.length() - l - 1]) {
                    palindrome = false;
                }
            }
            if(palindrome) {
                std::cout<<nb<<std::endl;
            }
        }
    }
}

int main() {
    pr4();
}
