#include <iostream>
using namespace std;

struct Covek {
    int redbroj;
    string Ime;
    float poeni;

    Covek(int redbroj, const string& Ime, float poeni) : redbroj(redbroj), Ime(Ime), poeni(poeni){}

    bool operator> (Covek p) const{
        return poeni > p.poeni;
    }
};
