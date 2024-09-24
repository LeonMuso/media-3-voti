#include <stdio.h>

int main(void) {
    float num1;
    float num2;
    float num3;
    float media;
    printf("inserisci un numero: ");
    scanf("%f", &num1);
    printf("inserisci un numero: ");
    scanf("%f", &num2);
    printf("inserisci un numero: ");
    scanf("%f", &num3);
    media = (num1 + num2 + num3) / 3;
    printf("media = %f", media);
    return 0;
}
