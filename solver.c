#include "nqueens.h"

bool solve_nqueens_util(int board[], int col, int n) {
    if (col >= n) {
        print_board(board, n); // Print the current solution
        return true;           // indicate at least one solution exists
    }

    bool found = false;        // track if any solution is found at this level

    for (int i = 0; i < n; i++) {
        if (is_safe(board, i, col, n)) {
            board[col] = i; // Place the queen
            if (solve_nqueens_util(board, col + 1, n)) {
                found = true; // do NOT return; keep searching for all solutions
            }
            board[col] = -1; // Backtrack
        }
    }
    return found; // true if any solutions were found deeper
}
// Wrapper function to solve N-Queens
void solve_nqueens(int n) {
    int *board = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        board[i] = -1;

    printf("Solutions for N = %d:\n", n);
    solve_nqueens_util(board, 0, n);

    free(board);
}
