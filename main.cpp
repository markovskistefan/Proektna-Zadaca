#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Covek {
    int redbroj;
    string Ime;
    float poeni;

    Covek(int redbroj, const string& Ime, float poeni) : redbroj(redbroj), Ime(Ime), poeni(poeni){}

    bool operator> (Covek c) const{
        return poeni > c.poeni;
    }
};

struct sortiranjePoeni {
    bool operator() (Covek* x, Covek* y) const{
        return *x > *y;
    }
};

int main()
{
    vector<Covek*> v1;
    ofstream fout("INKI832.Stefan.txt");

    v1.push_back(new Covek(3, "Filip", 3.6));
    v1.push_back(new Covek(2, "Kristijan", 7.3));
    v1.push_back(new Covek(6, "Vladimir", 5.4));
    v1.push_back(new Covek(7, "Dime", 10.2));
    v1.push_back(new Covek(4, "Nikola", 1.9));
    v1.push_back(new Covek(1, "Ivan", 9.5));
    v1.push_back(new Covek(5, "Mario", 8.8));

    return 0;
}
