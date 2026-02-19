#include <stdio.h>

int calcular_mcd(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}


int calcular_mcm(int a, int b) {
    int mcd = calcular_mcd(a, b);
    return (a * b) / mcd;
}

int main() {
    int num1, num2, mcd, mcm;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Los números deben ser positivos.\n");
        return 1;
    }

    mcd = calcular_mcd(num1, num2);
    mcm = calcular_mcm(num1, num2);

    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);
    printf("El MCM de %d y %d es: %d\n", num1, num2, mcm);

    return 0;
}