# Ex 1
## 1
OS : Linux
Distro : Ubuntu 

## 2
Thu Jun  5 18:30:46 UTC 2025

## 3
64 bits

## 4
Elle affiche le nom de la machine sur le reseau, soit INFO-NEV2-22-16. gethostname permet de faire la meme chose

## 5
Vitesse d'horloge du processeur : 3096.010 MHz
Taille de la RAM : 8015048 kB

## 6
fg960360

## 7
cal affiche le mois en cours
cal 10 2022 affiche le 10eme mois de 2022
Je suis né un vendredi

## 8
echo « Hello world » et echo Hello world fait la meme chose, mais il est recommandé de mettre le texte entre guillements pour éviter les erreurs

# Ex2
## 1
### a
affiche tous les fichiers et répertoires, comme ls
### b
affiche tous les fichiers et répertoires deux fois, séparés par "_"
### c
permet d'afficher tous les fichiers dont le nom commence par a ou par b
### d
permet d'afficher tous les fichiers dont le nom ne commence pas par a ou par b
### e
permet d'afficher tous les fichiers et répertoires commançant par "c"
### f
permet d'afficher tous les fichiers et répertoires avec le meme nombre de charactères dans leur nom que le nombre de "?"

## 2
    fg960360@INFO-NEV2-22-16:~$  echo *
    Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir
    fg960360@INFO-NEV2-22-16:~$ echo * _ *
    Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir _ Annee2 annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon mkdir
    fg960360@INFO-NEV2-22-16:~$  echo [ab]*
    annee1 annee4 annee41 annee45 annee510 annee_banane annee_saucisse bonbon
    fg960360@INFO-NEV2-22-16:~$ echo [!ab]*
    Annee2 mkdir
    fg960360@INFO-NEV2-22-16:~$ echo c*
    c*
    fg960360@INFO-NEV2-22-16:~$ echo ??????
    Annee2 annee1 annee4 bonbon

## 3
### a
    echo *5
### b
    echo annee4*
### c
    echo annee4 annee4?
### d
    echo annee[!0-9]
### e
    echo *ana*
### f
    echo [aA]*cd
### g
    echo *[41]? 

## 4
    echo /*/*/[Ww]*.h

# Ex3
## 1
### a
    ls | wc -l
### b
    ls -d | wc -l
### c
    ls | wc -l
## 2
### a
    fg960360@INFO-NEV2-22-16:~$ grep -c "bash" /etc/passwd
    2
### b
    fg960360@INFO-NEV2-22-16:~$ grep "bash" /etc/passwd
    root:x:0:0:root:/root:/bin/bash
    fg960360:x:1000:1000::/home/fg960360:/bin/bash
### c
    grep -E '[eh].*bash' /etc/passwd

# Ex4
