#include <stdio.h>

int main() {

    int lato1, lato2, lato3;

    printf("inserisci il primo lato:\n");
    scanf("%d", &lato1);
    printf("inserisci il secondo lato:\n");
    scanf("%d", &lato2);
    printf("inserisci il terzo lato:\n");
    scanf("%d", &lato3);

    if(lato1 == lato2)
        if(lato2 == lato3)
            printf("il triangolo e' equilatero");
        else
            printf("il triangolo e' isoscele");
    else if (lato1 == lato3)
         printf("il triangolo e' isoscele");
    else if(lato2 == lato3)
         printf("il triangolo e' isoscele");
    else
        printf("il triangolo e' scaleno");

    return 0;
}
