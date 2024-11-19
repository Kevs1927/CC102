#include <iostream>

using namespace std;

int main()
{
    int age;
    bool parents;
    double money;
    char withParents;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter money: ";
    cin >> money;
    if (age < 13) {
        cout << "With parents? (y/n): ";
        cin >> withParents;
        cout << (parents ? "Rated G and PG" : "Rated G") << endl;
    }
    else if (age >= 13 && age < 16) {
        cout << "With parents? (y/n): ";
        cin >> withParents;
        parents = (withParents == 'y' || withParents == 'Y');
        cout << (parents ? "Rated G, PG and R" : "Rated G and PG") << endl;
    }
    else {
        cout << "Rated G, PG, and R" << endl;
    }
    cout << (money < 7.50 ? "Not enough money!" : (money < 10.50 ? "Can go to matinee show!" : "Can go to matinee or evening!")) << endl;
    return 0;
}
