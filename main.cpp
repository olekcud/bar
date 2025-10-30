#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
    srand(time(NULL));
 
    int klienci1, klienci2, klienci3, klienci4, klienci5, klienci6, klienci7;
    int dzienA, dzienB, kasaA, kasaB;
    double posilek1, posilek2, posilek3, posilek4, posilek5, posilek6, posilek7;
    double tygodniowyZysk, zyskCalkowity = 0.0;
 
    const double KOSZT_MIESIAC = 2700.0;   // 2000 lokal + 700 pracownicy
    const double WAKACYJNY_BONUS = 1.3;    // +30% obrotu w wakacje
    const int PIERWSZY_TYDZIEN_WAKACJI = 25;
    const int OSTATNI_TYDZIEN_WAKACJI = 36;
 
    for (int tydzien = 1; tydzien <= 52; ++tydzien) {
 
        klienci1 = rand() % 30 + 1;
        klienci2 = rand() % 30 + 1;
        klienci3 = rand() % 30 + 1;
        klienci4 = rand() % 30 + 1;
        klienci5 = rand() % 30 + 1;
        klienci6 = (rand() % 30 + 1) * 2;
        klienci7 = (rand() % 30 + 1) * 2;
 
       
        dzienA = klienci1 / 2; dzienB = klienci1 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek1 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci2 / 2; dzienB = klienci2 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek2 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci3 / 2; dzienB = klienci3 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek3 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci4 / 2; dzienB = klienci4 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek4 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci5 / 2; dzienB = klienci5 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek5 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci6 / 2; dzienB = klienci6 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek6 = (kasaA + kasaB) * 0.4;
 
        dzienA = klienci7 / 2; dzienB = klienci7 - dzienA;
        kasaA = (rand() % 21 + 10) * dzienA;
        kasaB = (rand() % 81 + 10) * dzienB;
        posilek7 = (kasaA + kasaB) * 0.4;
 
        tygodniowyZysk = posilek1 + posilek2 + posilek3 + posilek4 + posilek5 + posilek6 + posilek7;
        if (tydzien >= PIERWSZY_TYDZIEN_WAKACJI && tydzien <= OSTATNI_TYDZIEN_WAKACJI) {
            tygodniowyZysk *= WAKACYJNY_BONUS;
            cout <<Obroty +30%";
        }
 
        zyskCalkowity += tygodniowyZysk;
        if (tydzien % 4 == 0) {
            cout << ">>> Koszty miesieczne: -2700 zl";
            zyskCalkowity -= KOSZT_MIESIAC;
        }
 
        cout << "Tydzien " << tydzien << " - zysk: " << tygodniowyZysk << " zl";
        cout << "Zysk laczny: " << zyskCalkowity << " zl";
    }
    cout << "Zdzis po roku zarobil lacznie: " << zyskCalkowity << " zl" << endl;
    if (zyskCalkowity > 0)
        cout << "Bar jest oplacalny" << endl;
    else
        cout << "Bar przynosi straty" << endl;
 
    return 0;
}
 