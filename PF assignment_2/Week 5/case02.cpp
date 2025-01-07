#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

struct SalesRecord {
    string product;
    int quantity;
    double price;
};

bool readData(const string& filename, SalesRecord records[], int& recordCount, int maxRecords) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return false;
    }

    string line;
    recordCount = 0;
    while (getline(inputFile, line) && recordCount < maxRecords) {
        stringstream ss(line);
        getline(ss, records[recordCount].product, ',');
        ss >> records[recordCount].quantity;
        ss.ignore(1);
        ss >> records[recordCount].price;
        recordCount++;
    }

    inputFile.close();
    return true;
}

void writeResults(const string& filename, double totalSales) {
    ofstream outputFile(filename);
    if (!outputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return;
    }

    outputFile << "Total Sales: $" << fixed << setprecision(2) << totalSales << endl;
    outputFile.close();
}

double calculateTotalSales(const SalesRecord records[], int recordCount) {
    double totalSales = 0;
    for (int i = 0; i < recordCount; ++i) {
        totalSales += records[i].quantity * records[i].price;
    }
    return totalSales;
}

int main() {
    const int MAX_RECORDS = 1000;
    SalesRecord records[MAX_RECORDS];
    int recordCount = 0;
    string inputFilename, outputFilename;

    cout << "Enter the input file name: ";
    cin >> inputFilename;
    cout << "Enter the output file name: ";
    cin >> outputFilename;

    if (!readData(inputFilename, records, recordCount, MAX_RECORDS)) {
        cout << "Failed to read data. Exiting program." << endl;
        return 1;
    }

    if (recordCount == 0) {
        cout << "No data to process. Exiting program." << endl;
        return 1;
    }

    double totalSales = calculateTotalSales(records, recordCount);
    cout << "Total Sales: $" << fixed << setprecision(2) << totalSales << endl;

    writeResults(outputFilename, totalSales);
    cout << "Results written to " << outputFilename << endl;

    return 0;
}
