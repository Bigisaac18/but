# TD3
## ex6
### 1
    entier nombre;
    entier diviseur = 1;
    nombre = Demander nombre

    tant que diviseur < nombre faire
        si !(nombre % diviseur) faire
            afficher diviseur
        diviseur = diviseur + 1

### 2
    entier nombre;
    entier diviseur = 1;
    nombre = Demander nombre

    tant que diviseur < nombre faire
        si !(nombre % diviseur) faire
            si (diviseur != 1 && diviseur != nombre) faire
                retourner false
        diviseur = diviseur + 1
    retourner true

## ex7
    entier nombre2 = 0;
    entier nombre1 = 1;
    entier nombre = nombre1 + nombre2;
    entier reccurrence;
    reccurrence = demander nombre;
    pour (entier i = 0; i < reccurrence; i++) faire
        afficher nombre
        nombre2 = nombre1
        nombre1 = nombre
        nombre = nombre1 + nombre2

## ex8
    entier nombre
    pour (entier i = 1; i <= nombre; i++) faire
        pour (entier j = 1; j <= i; j++) faire
            afficher "*"
        afficher retour à la ligne

## ex9
    entier nombre = 1
    tant que nombre >= 0 faire
        nombre = demander nombre

        tant que diviseur < nombre faire
            si !(nombre % diviseur) faire
                si (diviseur != 1 && diviseur != nombre) faire
                    afficher "Pas premier"
            diviseur = diviseur + 1
        afficher "Premier"

## ex10
### 1
    entier k = demander nombre
    entier nombre = 0;
    pour (entier i = 0; i < k; i++) faire
        afficher nombre
        nombre = nombre + 5
### 2
    entier k = demander nombre
    entier nombre = 0;
    pour (entier i = 0; i < k; i++) faire
        afficher nombre
        nombre = nombre - 2
### 1
    entier k = demander nombre
    entier nombre = 15;
    pour (entier i = 0; i < k; i++) faire
        afficher nombre
        nombre = nombre + 12

## ex11
    entier x = demander nombre
    entier soustraction = demander nombre
    tant que x > 0 faire
        x = x - soustraction
    afficher x