#include <iostream>
#include <string>
using namespace std;

struct Character {
    string name;
    int health;
    int attack;
    int defense;
};

void createCharacter(Character &charac) {
    cout << "Enter character name: ";
    cin >> charac.name;
    charac.health = 100;
    charac.attack = 20;
    charac.defense = 10;
    cout << "Character " << charac.name << " created with 100 health, 20 attack, and 10 defense!" << endl;
}

void printStatus(const Character &charac) {
    cout << "\nCharacter Status: " << endl;
    cout << "Name: " << charac.name << endl;
    cout << "Health: " << charac.health << endl;
    cout << "Attack: " << charac.attack << endl;
    cout << "Defense: " << charac.defense << endl;
}

void startQuest() {
    cout << "\nYou have accepted a quest to defeat the Dragon!" << endl;
    cout << "Prepare for battle!" << endl;
}

void battle(Character &player) {
    Character enemy;
    enemy.name = "Dragon";
    enemy.health = 150;
    enemy.attack = 30;
    enemy.defense = 15;

    cout << "\nA wild " << enemy.name << " appears!" << endl;

    while (player.health > 0 && enemy.health > 0) {
        cout << "\nYour turn to attack!" << endl;
        int damage = player.attack - enemy.defense;
        if (damage > 0) {
            enemy.health -= damage;
            cout << "You dealt " << damage << " damage to the " << enemy.name << endl;
        } else {
            cout << "Your attack was too weak to harm the " << enemy.name << endl;
        }

        if (enemy.health <= 0) {
            cout << "You have defeated the " << enemy.name << "!" << endl;
            break;
        }

        cout << "\nThe " << enemy.name << " attacks!" << endl;
        damage = enemy.attack - player.defense;
        if (damage > 0) {
            player.health -= damage;
            cout << "The " << enemy.name << " dealt " << damage << " damage to you!" << endl;
        } else {
            cout << "The " << enemy.name << "'s attack was blocked!" << endl;
        }

        if (player.health <= 0) {
            cout << "You have been defeated by the " << enemy.name << "!" << endl;
            break;
        }

        printStatus(player);
    }
}

int main() {
    Character player;
    int choice;

    cout << "Welcome to the Text-based RPG!" << endl;

    createCharacter(player);

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. View Character Status" << endl;
        cout << "2. Start Quest" << endl;
        cout << "3. Start Battle" << endl;
        cout << "4. Exit Game" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printStatus(player);
                break;
            case 2:
                startQuest();
                break;
            case 3:
                battle(player);
                break;
            case 4:
                cout << "Exiting game... Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice, try again!" << endl;
        }

    } while (choice != 4);

    return 0;
}
