#include <iostream>
#include <stdlib.h>
#include <cmath>

void saisie(float & x, float & y) {
    std::cout<<"Entrez valeur x : "<<std::endl;
    std::cin>>x;
    std::cout<<"Entrez valeur y : "<<std::endl;
    std::cin>>y;
}

float distance(float x = 0, float y = 0, float x1 = 0, float y1 = 0) {
    float distance = sqrt(std::pow(x - x1, 2) + std::pow(y - y1, 2));
    return distance;
}

void draw(float x0, float x1, float x2, float y0, float y1, float y2) {
    float tolerance = 1e-3f;
    
    int max_x = std::max(std::max(x0,x1), x2) + 1;
    int max_y = std::max(std::max(y0,y1), y2);
    
    std::cout<<std::endl;
    for(int i = max_y; i >= 0; i--) {
        for(int j = 0; j < max_x; j++) {
            bool point = (
                (std::abs(j - x0) < tolerance) &&
                (std::abs(i - y0) < tolerance)
            ) || (
                (std::abs(j - x1) < tolerance) &&
                (std::abs(i - y1) < tolerance)
            ) || (
                (std::abs(j - x2) < tolerance) &&
                (std::abs(i - y2) < tolerance)
            );
            
            if(point) {
                std::cout<<"x  ";
            } else {
                std::cout<<"-  ";
            }
        }
        std::cout<<std::endl;
    }
}

void crop(float & x0, float & y0, float & x1, float & y1, float & x2, float & y2) {
    float min_x = std::min(std::min(x0, x1), x2);
    float min_y = std::min(std::min(y0, y1), y2);

    x0 = x0 - min_x;
    x1 = x1 - min_x;
    x2 = x2 - min_x;
    
    y0 = y0 - min_y;
    y1 = y1 - min_y;
    y2 = y2 - min_y;
}

void triangle(float & cote0, float & cote1, float & cote2) {
    float x0 = 0;
    float y0 = 0;
    std::cout<<"Sommet 1 :"<<std::endl;
    saisie(x0, y0);
    float x1 = 0;
    float y1 = 0;
    std::cout<<"Sommet 2 :"<<std::endl;
    saisie(x1, y1);
    float x2 = 0;
    float y2 = 0;
    std::cout<<"Sommet 3 :"<<std::endl;
    saisie(x2, y2);

    crop(x0, y0, x1, y1, x2, y2);
    draw(x0,x1,x2,y0,y1,y2);

    cote0 = distance(x0, y0, x1, y1);
    cote1 = distance(x1, y1, x2, y2);
    cote2 = distance(x0, y0, x2, y2);
}

bool estTriangle(float distance1, float distance2, float distance3) {
    if(
        distance1 > distance2 + distance3 ||
        distance2 > distance1 + distance3 ||
        distance3 > distance1 + distance2
    ) {
        return false;
    }
    return true;
}

bool estIsocele(float distance1, float distance2, float distance3) {
    if(
        (distance1 == distance2 && distance1 != distance3) ||
        (distance1 == distance3 && distance1 != distance2) ||
        (distance2 == distance3 && distance2 != distance1)
    ) {
        return true;
    }
    return false;
}

bool estEquilateral(float distance1, float distance2, float distance3) {
    float tolerance = 1e-3f;

    if(
        std::abs(distance1 - distance2) < tolerance &&
        std::abs(distance2 - distance3) < tolerance &&
        std::abs(distance1 - distance3) < tolerance
    ) {
        return true;
    }
    return false;
}

bool estRectangle(float distance1, float distance2, float distance3) {
    float tolerance = 1e-5f;

    if(
        std::abs(std::pow(distance1, 2) - (std::pow(distance2, 2) + std::pow(distance3, 2))) < tolerance ||
        std::abs(std::pow(distance2, 2) - (std::pow(distance1, 2) + std::pow(distance3, 2))) < tolerance ||
        std::abs(std::pow(distance3, 2) - (std::pow(distance1, 2) + std::pow(distance2, 2))) < tolerance
    ) {
        return true;
    }
    return false;
}

bool estPlat(float distance1, float distance2, float distance3) {
    if(
        distance1 == distance2 + distance3 ||
        distance2 == distance1 + distance3 ||
        distance3 == distance1 + distance2
    ) {
        return true;
    }
    return false;
}

bool estQuelconque(float distance1, float distance2, float distance3) {
    if(estEquilateral(distance1, distance2, distance3)) return false;
    if(estIsocele(distance1, distance2, distance3)) return false;
    if(estRectangle(distance1, distance2, distance3)) return false;
    if(estPlat(distance1, distance2, distance3)) return false;
    return true;
}

void affichage(float distance1, float distance2, float distance3) {
    if(!estTriangle(distance1, distance2, distance3)) {
        std::cout<<"Ce n'est pas un triangle"<<std::endl;
    } else {
        std::cout<<"Caracteristiques du triangle : "<<std::endl;
        std::cout<<"Equilateral : "<<estEquilateral(distance1, distance2, distance3)<<std::endl;
        std::cout<<"Isocele : "<<estIsocele(distance1, distance2, distance3)<<std::endl;
        std::cout<<"Rectangle : "<<estRectangle(distance1, distance2, distance3)<<std::endl;
        std::cout<<"Plat : "<<estPlat(distance1, distance2, distance3)<<std::endl;
        std::cout<<"Quelconque : "<<estQuelconque(distance1, distance2, distance3)<<std::endl;
    }
}

int main() {
    float cote0 = 0;
    float cote1 = 0;
    float cote2 = 0;

    triangle(cote0, cote1, cote2);
    affichage(cote0, cote1, cote2);
}