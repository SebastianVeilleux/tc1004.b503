#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a = 20;
    int pd = fork();

    while (1) {
        int pd = fork();
        int pd2 = fork();
        int pd3 = fork();
        int pd4 = fork();

        if (pd == 0) {
            a = 30;
            printf("Soy el proceso hijo a: %d\n", a);
            // Operaciones matemáticas intensivas
            for (int i = 0; i < 1000000; i++) {
                double result = sin(i) * cos(i) * tan(i);
            }
        }

        printf("Soy el proceso padre a: %d\n", a);
        printf("Mi hijo es pid: %d\n", pd);

        // Más operaciones intensivas
        for (int i = 0; i < 999999999999; i++) {
            double result = pow(i, 3) * sqrt(i);
        }
    }

    return 0;
}
