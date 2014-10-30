#include <stdio.h>

int main () {

    int i, n;

    printf ("Verificando se um char code eh vogal\n");
    
    for (i = 0; i < 128; i++) {
        if ((i >= 65 && i <= 85) || (i >= 97 && i <= 117)) {
            n = i | 32;
            if ((((n - 97 - 6) % 6) == 2) || ((n - 97) <= 4 && (n - 97) % 4 == 0)) {
                printf ("%c ", i);
            }
        }
    }

    printf ("\n");

    return 0;
}
