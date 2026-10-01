# Ex 1

    int main() {
        int nbNote = Demander nombre à l'utilisateur
        float notes [nbNote]
    }

    void saisieNote(float notes[], int size) {
        pour i allant de 0 à size, pas de 1 {
            notes[i] =  demander note à l'utilisateur
        }
    }

    float moyenneNote(float notes[], int size) {
        float somme = 0
        pour i allant de 0 à size, pas de 1 {
            somme = somme + notes[i]
        }

        retourner somme / size
    }

    float meilleureNote(float notes[], int size) {
        float max = notes[0]
        pour i allant de 0 à size, pas de 1 {
            si (notes[i] > max) {
                max = notes[i]
            }
        }
        retourner max
    }

    void ajouterPoints(float notes[], int size) {
        pour i allant de 0 à size, pas de 1 {
            si (notes[i] < 7) {
                notes[i] = notes[i] + 3
            }

            si (notes[i] < 10 && notes[i] >= 7) {
                notes[i] = 10
            }
        }
    }

    int countNotes(float notes[], int size, float note) {
        int count = 0
        pour i allant de 0 à size, pas de 1 {
            if(notes[i] == note) {
                count++
            }
        }
        retourner count
    }

    int positionNote(float notes[], int size, float note) {
        pour i allant de 0 à size, pas de 1 {
            if(notes[i] == note) {
                retourner i
            }
        }

        retourner -1
    }

    int countNoteRecursif(float notes[], int size, int position, float note, int count = 0) {
        if(position >= size) {
            retourner count
        }

        if(notes[position] == note) {
            retourner countNoteRecursif(notes, size, position + 1, note, count + 1)
        }

        retourner countNoteRecursif(notes, size, position + 1, note, count)
    }

# Ex2

    int main() {
        int taille = 0
        int tailleTotale = 1000
        int tab[tailleTotale]
    }

    void init1(int tab[], int & taille) {
        taille = 0
    }

    void init2(int xCases, int & taille, int tab[]) {
        taille = xCases
    }

    void init3(int xCases, int yValue, int & taille, int tab[]) {
        for i allant de 0 à xCases -1, pas de 1 {
            tab[i] = yValue
        }
        taille = xCases
    }

    void pushBack(int tab[], int & taille, int value) {
        tab[taille] = value
        taille++
    }

    void popBack(int tab[], int & taille) {
        taille--
    }

# Ex3

    int main() {
        char echiquier[10][10]
    }

    void init(char echiquier[]) {
        pour i allant de 0 à 9, pas de 1 {
            pour j allant de 0 à 9, pas de 1 {
                echiquier[i][j] = " "
            }
        }
    }

    bool checkPion(int ligne, int colonne) {
        if((ligne % 2 == 0 && colonne % 2 == 0) || (ligne % 2 != 0 && ligne % 2 != 0)) {
            retourner vrai
        }
        retourner faux
    }

    bool setPion(char echiquier[], int ligne, int colonne, char color) {
        if(echiquier[ligne - 1][colonne - 1] == " ") {
            echiquier[ligne - 1][colonne -1] = color
            retourner true
        }
        retourner faux
    }

    int[] countPion(char echiquier[]) {
        int countWhite = 0
        int countBlack = 0
        pour i allant de 0 à 9, pas de 1 {
            pour j allant de 0 à 9, pas de 1 {
                if(echiquier[i][j] == "X") {
                    countWhite++
                }
                if(echiquier[i][j] == "O") {
                    countBlack++
                }
            }
        }
        retourner {countWhite, countBlack}
    }

    int[] emptyDiagonales (char echiquier[], int ligne, int colonne) {
        int diagonales[4]
        int index = 0

        pour i allant de -1 à 1, pas de 2 {
            pour j allant de -1 à 1, pas de 2 {
                if(echiquier[ligne + i][colonne + j] == " ") {
                    diagonales[index] = {ligne + i, colonne + j}
                    index++
                }
            }
        }
        retourner diagonales
    }