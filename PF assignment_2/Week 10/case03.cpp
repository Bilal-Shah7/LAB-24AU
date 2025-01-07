#include <iostream>
using namespace std;

void fillData(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}

void processData(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] += 1;
        }
    }
}

void displayData(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 3;
    int data[3][3];

    fillData(data, rows, cols);
    processData(data, rows, cols);
    displayData(data, rows, cols);

    return 0;
}
