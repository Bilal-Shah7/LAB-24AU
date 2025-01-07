#include <iostream>
#include <string>
using namespace std;

void preparePasta() {
    cout << "Step 1: Boil water in a large pot." << endl;
    cout << "Step 2: Add pasta and cook for 10-12 minutes." << endl;
    cout << "Step 3: Drain the pasta and add sauce of your choice." << endl;
    cout << "Step 4: Serve with grated cheese and enjoy your pasta!" << endl;
}

void prepareSalad() {
    cout << "Step 1: Wash lettuce and chop into bite-sized pieces." << endl;
    cout << "Step 2: Add diced tomatoes, cucumbers, and olives." << endl;
    cout << "Step 3: Drizzle with dressing and toss well." << endl;
    cout << "Step 4: Serve fresh and enjoy your salad!" << endl;
}

void prepareBurger() {
    cout << "Step 1: Grill the burger patty until fully cooked." << endl;
    cout << "Step 2: Toast the burger buns." << endl;
    cout << "Step 3: Assemble the burger with lettuce, tomato, cheese, and condiments." << endl;
    cout << "Step 4: Serve hot and enjoy your burger!" << endl;
}

void prepareSoup() {
    cout << "Step 1: Chop vegetables and sauté in a pot with oil." << endl;
    cout << "Step 2: Add broth and bring to a boil." << endl;
    cout << "Step 3: Simmer for 20-30 minutes until the vegetables are tender." << endl;
    cout << "Step 4: Season with salt and pepper and serve hot." << endl;
}

int main() {
    string order;
    cout << "Welcome to the restaurant kitchen!" << endl;

    while (true) {
        cout << "Please enter the dish you want to prepare (Pasta, Salad, Burger, Soup) or 'exit' to quit: ";
        cin >> order;

        if (order == "Pasta") {
            preparePasta();
        } else if (order == "Salad") {
            prepareSalad();
        } else if (order == "Burger") {
            prepareBurger();
        } else if (order == "Soup") {
            prepareSoup();
        } else if (order == "exit") {
            cout << "Exiting the kitchen. Goodbye!" << endl;
            break;
        } else {
            cout << "Sorry, we don't serve that dish. Please choose from the available options." << endl;
        }
    }

    return 0;
}
