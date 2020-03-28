
#include <iostream>
using namespace std;

class Vehice {
    int passengers;
    int fuelcap;
    int mpg;
public:

    Vehice(int p, int f, int m) {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    ~Vehice() {
        cout << "Разрушай " << passengers << endl;
    }

    int range() {
        return mpg * fuelcap;
    }
    int get_passengers() { return passengers; }
    int get_fuelcap() { return fuelcap; }
    int get_mpg() { return mpg; }
};


int main()
{
    setlocale(LC_ALL, "rus");
    Vehice p1(7,6,15);
    Vehice p2(20,21,22);
    Vehice p3(20, 21, 22);
    int range1, range2;
    range1 = p1.range();
    range2 = p2.range();
    cout << p1.get_passengers() << endl;
    cout << p2.get_passengers() << endl;
    cout << range1<<endl;
    cout << range2 << endl;
    return 0;
}

