#include <iostream>
using namespace std;

int main() {
    int health = 100;

    void hit(int&, int);

    cout << "Your adventure begins! You start with " << health << " health." << endl;

    // First attack
    cout << "A goblin hits you for 10 damage!" << endl;
    hit(health , 10);

    // Second attack (duplicated code!)
    cout << "A skeleton shoots an arrow for 15 damage!" << endl;
    hit(health, 15);

    // Third attack (duplicated again!)
    cout << "A dragon breathes fire for 25 damage!" << endl;
    hit(health, 25);

    // Fourth attack (duplicated AGAIN!)
    cout << "An orc smashes you for 20 damage!" << endl;
    hit(health, 20);

    cout << "Game over!" << endl;

    return 0;
}

void hit(int &x, int damage)
{
    x = x - damage;
    cout << "You now have " << x << " health left." << endl;
}