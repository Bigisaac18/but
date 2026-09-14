# TD4
## ex1
Code 1 :

    fonction Entier f( Entier ref a ) {
        a ← Saisir()
    }  
Code 2 :

    procedure lecture( Entier a ) {
        a ← Saisir()
    }  
Code 3 :

    procedure lecture( Entier ref a ) {
        a ← Saisir()
    }  
Code 4 :

    fonction Entier uneFonctionBool ( bool ref a,   bool ref b, bool ref c ) {
        bool y ← a and b
        y ← y and (b ou c)
        retourner y
    }  