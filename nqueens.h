#ifndef NQUEENS_H
#define NQUEENS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print_board(int board[], int n);
bool is_safe(int board[], int row, int col, int n);
bool solve_nqueens_util(int board[], int col, int n);
void solve_nqueens(int n);

#endif // NQUEENS_H
