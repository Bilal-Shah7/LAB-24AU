#include <iostream>
#include <string>
using namespace std;

const int BOARD_SIZE = 8;
char board[BOARD_SIZE][BOARD_SIZE];

void displayBoard() {
    cout << "  A B C D E F G H" << endl;
    for (int i = 0; i < BOARD_SIZE; ++i) {
        cout << 8 - i << " ";
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << 8 - i << endl;
    }
    cout << "  A B C D E F G H" << endl;
}

void initializeBoard() {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = '.';
        }
    }
    for (int i = 0; i < BOARD_SIZE; ++i) {
        board[1][i] = 'P';
        board[6][i] = 'p';
    }
    string whitePieces = "RNBQKBNR";
    string blackPieces = "rnbqkbnr";
    for (int i = 0; i < BOARD_SIZE; ++i) {
        board[0][i] = whitePieces[i];
        board[7][i] = blackPieces[i];
    }
}

bool isValidPosition(int row, int col) {
    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE;
}

bool checkWinCondition(char king) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (board[i][j] == king) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    initializeBoard();
    string move;
    bool whiteTurn = true;
    cout << "Welcome to Chess!" << endl;

    while (true) {
        displayBoard();
        if (checkWinCondition('k')) {
            cout << "White wins! Black's king is captured." << endl;
            break;
        }
        if (checkWinCondition('K')) {
            cout << "Black wins! White's king is captured." << endl;
            break;
        }
        cout << (whiteTurn ? "White's" : "Black's") << " turn. Enter your move (e.g., E2 E4): ";
        cin >> move;
        char fromCol = move[0];
        char fromRow = move[1];
        char toCol = move[3];
        char toRow = move[4];
        int fromRowIdx = 8 - (fromRow - '0');
        int fromColIdx = fromCol - 'A';
        int toRowIdx = 8 - (toRow - '0');
        int toColIdx = toCol - 'A';
        if (isValidPosition(fromRowIdx, fromColIdx) && isValidPosition(toRowIdx, toColIdx)) {
            board[toRowIdx][toColIdx] = board[fromRowIdx][fromColIdx];
            board[fromRowIdx][fromColIdx] = '.';
            whiteTurn = !whiteTurn;
        } else {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    return 0;
}
