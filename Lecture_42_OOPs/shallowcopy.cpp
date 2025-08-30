#include<iostream>
#include<cstring>
using namespace std;

class Hero {
private:
    int health;

public:
    char *name;
    char level;

    Hero() {
        cout << "Simple Constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health) {
        this->health = health;
        name = new char[100];
    }

    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];
    }

    // deep copy constructor
    Hero(Hero& temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;

        // Allocate new memory and copy string
        this->name = new char[strlen(temp.name) + 1];
        strcpy(this->name, temp.name);
    }

    void print() {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]" << endl;
        cout << endl;
    }

    // setters
    void setHealth(int h) { health = h; }
    void setLevel(char ch) { level = ch; }
    void setName(char name[]) { strcpy(this->name, name); }
};

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // uses default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='G';
    hero1.print();

    hero2.print();

    return 0;
}
