#include "nqueens.h"

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid value of N. Please enter a number greater than 0.\n");
        return 1;
    }

    solve_nqueens(n);

    return 0;
}
