#include <iostream>
#include <string>

void pr0() {
    int64_t somme = 0;
    for(int64_t i = 1; i < 894000; i++) {
        if((i*i) % 2 == 1) {
            somme = somme + (i*i);
        }
    }
    std::cout<<somme;
}

void pr1() {
    int64_t sum = 0;
    for(int64_t i = 0; i < 1000; i++) {
        if((i % 3 == 0) || (i % 5 == 0)) {
            sum = sum + i;
        }
    }
    std::cout<<sum;
}

void pr2() {
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

void pr3() {
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

void pr4() {
    int64_t nb = 0;
    std::string strNb = "0";
    for(int i = 100; i < 1000; i++) {
        for(int j = 100; j < 1000; j++) {
            if(i*j > nb) {
                nb = i * j;
            }
            strNb = std::to_string(nb);
            bool palindrome = true;
            for(unsigned int l = 0; l < strNb.length(); l++) {
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

void pr5() {
    for(int i = 1; i < 100000; i++) {
        std::cout<<i<<std::endl;
    }
}

void pr6() {
    long long sumSquare = 0;
    long long squareSum = 0;

    for(int i = 1; i <= 100; i++) {
        sumSquare = sumSquare + (i * i);
        squareSum = squareSum + i;
    }    
    std::cout<<(squareSum * squareSum) - sumSquare<<std::endl;
}

void pr7() {
    long long currentNumber = 0;
    int iNumber = 0;
    for(int j = 2; iNumber < 10001; j++) {
        bool prime = true;
        for(long long i = 2; i < j; i++) {
            if(j%i == 0) {
                prime = false;
                break;
            }
        }
        if(prime) {
            iNumber++;
            currentNumber = j;
        }
    }
    std::cout<<currentNumber<<std::endl;
}

int main() {
    pr7();
}
