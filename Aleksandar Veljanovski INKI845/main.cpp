//AleksandarVeljanovskiINKI845
//Kodiranje i Dekodiranje na tekst spored daden kluc 47

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void kodiranje() {
    int brojZaKodiranje, najmalaCifra, pomosenBroj, pomosnaCifra, razlikaSoCifra, izborPosleKodiranje;
    string tekstZaKodiranje, kodiranTekst, dekodiranTekst;
    cout<<"Vnesete broj za kodiranje: ";
    cin>>brojZaKodiranje;
    while (brojZaKodiranje > 9999 || brojZaKodiranje < 1000) {
        cout<<brojZaKodiranje<<" e nevaliden broj! Vnesete nov broj: ";
        cin>>brojZaKodiranje;
    }
    cout<<"Vnesi tekst za kodiranje: ";
    cin.ignore();
    getline(cin, tekstZaKodiranje);
    while (tekstZaKodiranje.length() > 600) {
        cout<<"Tekstot ima poveke od 600 karakteri! Vnesete nov tekst: ";
        getline(cin, tekstZaKodiranje);
    }
    for (int i = 0; i < tekstZaKodiranje.length(); i++) {
        if (!isalpha(tekstZaKodiranje[i]) && !isdigit(tekstZaKodiranje[i]) && !isspace(tekstZaKodiranje[i])) {
          cout<<"Tekstot sodrzi nedozvoleni znaci! Vnesete nov tekst: ";
          getline(cin, tekstZaKodiranje);
          i = -1;
        }
    }

    najmalaCifra = brojZaKodiranje % 10;
    pomosenBroj = brojZaKodiranje / 10;
    for (int i = 0; i < 3; i++) {
        pomosnaCifra = pomosenBroj % 10;
        pomosenBroj /= 10;
        if (pomosnaCifra < najmalaCifra) {
            najmalaCifra = pomosnaCifra;
        }
    }

    razlikaSoCifra = 4 - najmalaCifra;
    for (int i = 0; i < tekstZaKodiranje.length(); i++) {
        kodiranTekst += tekstZaKodiranje[i] + razlikaSoCifra;
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"Vneseniot tekst e: "<<tekstZaKodiranje<<endl;
    cout<<"Kodiraniot tekst e: "<<kodiranTekst<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Izberete (1) za dekodiranje na kodiraniot tekst ili (2) za nazad na pocetok!"<<endl;
        cout<<"1. Dekodiranje\n2. Nazad"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cin>>izborPosleKodiranje;
        if (izborPosleKodiranje != 1 && izborPosleKodiranje != 2) {
            cout<<"Opcijata koja ja izbravte ne postoi! Vnesete druga opcija: ";
            cin>>izborPosleKodiranje;
        }
        if (izborPosleKodiranje ==1) {
            for (int i = 0; i < kodiranTekst.length(); i++) {
                dekodiranTekst += (kodiranTekst[i] - razlikaSoCifra);
            }
             cout<<"-------------------------------------------"<<endl;
             cout<<"Kodraniot tekst e: "<<kodiranTekst<<endl;
             cout<<"Dekodiraniot tekst e: "<<dekodiranTekst<<endl;
             cout<<"-------------------------------------------"<<endl;
        }

}

void dekodiranje() {
    int brojZaDekodiranje, najmalaCifra, pomosenBroj, pomosnaCifra, razlikaSoCifra, izborPosleDekodiranje;
    string tekstZaDekodiranje, dekodiranTekst, kodiranTekst;
    cout<<"Vnesete broj za dekodiranje: ";
    cin>>brojZaDekodiranje;
    while (brojZaDekodiranje > 9999 || brojZaDekodiranje < 1000) {
        cout<<brojZaDekodiranje<<" e nevaliden broj! Vnesete nov broj: ";
        cin>>brojZaDekodiranje;
    }
    cout<<"Vnesi tekst za dekodiranje: ";
    cin.ignore();
    getline(cin, tekstZaDekodiranje);
    while (tekstZaDekodiranje.length() > 600) {
        cout<<"Tekstot ima poveke od 600 karakteri! Vnesete nov tekst: ";
        getline(cin, tekstZaDekodiranje);
    }

    najmalaCifra = brojZaDekodiranje % 10;
    pomosenBroj = brojZaDekodiranje / 10;
    for (int i = 0; i < 3; i++) {
        pomosnaCifra = pomosenBroj % 10;
        pomosenBroj /= 10;
        if (pomosnaCifra < najmalaCifra) {
            najmalaCifra = pomosnaCifra;
        }
    }

    razlikaSoCifra = 4 - najmalaCifra;
    for (int i = 0; i < tekstZaDekodiranje.length(); i++) {
       dekodiranTekst += tekstZaDekodiranje[i] - razlikaSoCifra;
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"Vneseniot tekst e: "<<tekstZaDekodiranje<<endl;
    cout<<"Dekodiraniot tekst e: "<<dekodiranTekst<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Izberete (1) za kodiranje na dekodiraniot tekst ili (2) za nazad na pocetok!"<<endl;
        cout<<"1. Kodiranje\n2. Nazad"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cin>>izborPosleDekodiranje;
        if (izborPosleDekodiranje != 1 && izborPosleDekodiranje != 2) {
            cout<<"Opcijata koja ja izbravte ne postoi! Vnesete druga opcija: ";
            cin>>izborPosleDekodiranje;
        }
        if (izborPosleDekodiranje ==1) {
            for (int i = 0; i < dekodiranTekst.length(); i++) {
                kodiranTekst += (dekodiranTekst[i] + razlikaSoCifra);
            }
             cout<<"-------------------------------------------"<<endl;
             cout<<"Dekodraniot tekst e: "<<dekodiranTekst<<endl;
             cout<<"Kodiraniot tekst e: "<<kodiranTekst<<endl;
             cout<<"-------------------------------------------"<<endl;
        }

}

int main()
{
    int izbor;
    POCETOK:
    cout<<"-------------------------------------------"<<endl;
    cout<<"Programa za kodiranje i dekodiranje!"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Izberete (1) za kodiranje na tekst ili (2) za dekodiranje na tekst!"<<endl;
    cout<<"Za izlez od programata izberete (0)!"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"0. Izlez od programata\n1. Kodiranje\n2. Dekodiranje"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cin>>izbor;
    cout<<"-------------------------------------------"<<endl;
    if (izbor != 0 && izbor != 1 && izbor !=2) {
        cout<<"Opcijata koja ja izbravte ne postoi! Vnesete druga opcija: ";
        cin>>izbor;
    }
    if (izbor == 0) {
        cout<<"Kraj na programata!"<<endl;
        exit(0);
    }
    if (izbor == 1) {
        kodiranje();
        goto POCETOK;
    }
    if (izbor == 2) {
        dekodiranje();
        goto POCETOK;
    }

    return 0;
}
