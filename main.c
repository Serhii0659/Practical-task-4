#include <stdio.h>
#include <conio.h>

int equalDivisors (int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (n / i == n % i) {
            result++;
        }
    }
    return result;
}

int main () {
    int n;
    do {
    printf ("Enter natural number n: ");
    scanf ("%d", &n);
    if (n <= 1) {
        printf ("n must be greater than 1\n");
    }
    if (n >= 150) {
        printf ("n must be less than 150\n");
    }
    } while (n <= 1 || n >= 150);

    printf ("The number of equal divisors of a number %d: %d\n", n, equalDivisors(n));

    printf ("Press any key to exit the program.");
    getch();
    return 0;
}