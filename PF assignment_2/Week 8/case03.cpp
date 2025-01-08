#include <iostream>
#include <string>
using namespace std;

const int MAX_RESPONSES = 100;  // Maximum number of survey responses

void getSurveyResponses(string responses[], int &numResponses) {
    cout << "Enter the number of survey responses (max " << MAX_RESPONSES << "): ";
    cin >> numResponses;
    
    if (numResponses < 1 || numResponses > MAX_RESPONSES) {
        cout << "Invalid number of responses. Please enter a number between 1 and " << MAX_RESPONSES << "." << endl;
        numResponses = 0;  // Reset numResponses in case of invalid input
        return;
    }
    
    // Clear input buffer before reading strings
    cin.ignore();
    
    for (int i = 0; i < numResponses; ++i) {
        cout << "Enter response " << (i + 1) << ": ";
        getline(cin, responses[i]);
    }
}

void displaySurveyResponses(const string responses[], int numResponses) {
    cout << "\nSurvey Responses:" << endl;
    for (int i = 0; i < numResponses; ++i) {
        cout << "Response " << (i + 1) << ": " << responses[i] << endl;
    }
}

int main() {
    string surveyResponses[MAX_RESPONSES];
    int numResponses;

    // Get survey responses safely
    getSurveyResponses(surveyResponses, numResponses);
    
    // If valid responses were entered, display them
    if (numResponses > 0) {
        displaySurveyResponses(surveyResponses, numResponses);
    }

    return 0;
}
