// to solve sudoku

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solveSudoku(vector<vector<char>> &board) {
    int row = 0, col = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                row = i;
                col = j;
                break;
            }
        }
        if (row != 0) break;
    }
    if (row == 0) return;
    int num = 1;
    while (true) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num + '0';
            solveSudoku(board);
            if (isSolved(board)) return;
            board[row][col] = '.';
        }
        num++;
    }
}

bool isValid(vector<vector<char>> &board, int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) return false;
        if (board[row][i] == num) return false;
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num) return false;
    }
    return true;
}

bool isSolved(vector<vector<char>> &board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') return false;
        }
    }
    return true;
}
