#include <iostream>
#include <string>
using namespace std;


void mainRoom() {
    string command;
    
    cout << "You are in a dark room. There are two doors: one to the north and one to the east." << endl;
    cout << "What do you want to do? (Type 'go north', 'go east', or 'look around')\n";
    

    getline(cin, command);
    
  
    if (command == "go north") {
        cout << "You go north and find yourself in a mysterious forest.\n";
    }
    else if (command == "go east") {
        cout << "You go east and find yourself in a library full of ancient books.\n";
    }
    else if (command == "look around") {
        cout << "You see two doors: one to the north and one to the east.\n";
    }
    else {
        cout << "Invalid command. Try again.\n";
    }
}

void forestRoom() {
    string command;
    
    cout << "You are in a dark, eerie forest. There is a path leading deeper into the woods and a small hut nearby." << endl;
    cout << "What do you want to do? (Type 'go deeper', 'enter hut', or 'look around')\n";
    
  
    getline(cin, command);
    
 
    if (command == "go deeper") {
        cout << "You venture deeper into the woods, but the forest becomes more ominous.\n";
    }
    else if (command == "enter hut") {
        cout << "You enter the hut and find an old man who offers you a magical potion.\n";
    }
    else if (command == "look around") {
        cout << "You see the path leading deeper into the woods and the hut nearby.\n";
    }
    else {
        cout << "Invalid command. Try again.\n";
    }
}


void libraryRoom() {
    string command;
    
    cout << "You are in a dusty library with shelves full of old, mysterious books. There is a desk with a glowing book." << endl;
    cout << "What do you want to do? (Type 'read book', 'take book', or 'look around')\n";
    
    getline(cin, command);
    

    if (command == "read book") {
        cout << "You open the glowing book and discover a secret passage!\n";
    }
    else if (command == "take book") {
        cout << "You take the book from the desk, and it suddenly starts to glow brighter.\n";
    }
    else if (command == "look around") {
        cout << "You see shelves full of books and the glowing book on the desk.\n";
    }
    else {
        cout << "Invalid command. Try again.\n";
    }
}


void startGame() {
    string command;
    
    cout << "Welcome to the Adventure Game!\n";
    

    mainRoom();
    
    
    while (true) {
        cout << "\nWhere would you like to go next? (Type 'go north' to the forest or 'go east' to the library)\n";
        getline(cin, command);
        
        if (command == "go north") {
            forestRoom();
        }
        else if (command == "go east") {
            libraryRoom();
        }
        else {
            cout << "Invalid command. Try again.\n";
        }
        
   
        cout << "\nDo you want to keep playing? (yes/no)\n";
        getline(cin, command);
        
        if (command == "no") {
            cout << "Thanks for playing! Goodbye!\n";
            break;
        } else if (command == "yes") {
            cout << "Let's continue the adventure...\n";
        } else {
            cout << "Invalid command. Exiting the game...\n";
            break;
        }
    }
}

int main() {
    
    startGame();
    
    return 0;
}
