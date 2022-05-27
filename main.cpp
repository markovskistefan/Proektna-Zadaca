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
    vector<Covek*> vektor;
    ofstream fout("INKI832.Stefan.txt");

    vektor.push_back(new Covek(3, "Filip", 3.6));
    vektor.push_back(new Covek(2, "Kristijan", 7.3));
    vektor.push_back(new Covek(6, "Vladimir", 5.4));
    vektor.push_back(new Covek(7, "Dime", 10.2));
    vektor.push_back(new Covek(4, "Nikola", 1.9));
    vektor.push_back(new Covek(1, "Ivan", 9.5));
    vektor.push_back(new Covek(5, "Mario", 8.8));

    for(const auto* c: vektor){
        cout<<c->Ime<<" - "<<c->poeni<<endl;
    }

    sort(vektor.begin(), vektor.end(), sortiranjePoeni());

    cout<<endl<<endl;
    cout<<"Sortirana sodrzina na vektorot:"<<endl;
    fout<<"Sortirana sodrzina na vektorot:"<<endl;
    for(const auto* c: vektor){
        cout<<c->Ime<<" - "<<c->poeni<<endl;
        fout<<c->Ime<<" - "<<c->poeni<<endl;
    }

    fout.close();
    return 0;
}
