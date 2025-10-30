#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "0. Warszawa\n1. Krakow\n2. Gdansk\n3. Wroclaw\n4. Poznan\n";
    cout << "Wybierz miasto startowe (numer): ";
    int start;
    cin >> start;
    if (start < 0 || start > 4) {
        cout << "Bledne dane!" << endl;
        return 0;
    }

    cout << "0. Warszawa\n1. Krakow\n2. Gdansk\n3. Wroclaw\n4. Poznan\n";
    cout << "Wybierz miasto docelowe (numer): ";
    int cel;
    cin >> cel;
    if (cel < 0 || cel > 4) {
        cout << "Bledne dane!" << endl;
        return 0;
    }

    if (start == cel) {
        cout << "Juz jestes w tym miescie!" << endl;
        return 0;
    }


    int dystans = 0;
    if ((start == 0 && cel == 1) || (start == 1 && cel == 0)) dystans = 300;
    else if ((start == 0 && cel == 2) || (start == 2 && cel == 0)) dystans = 350;
    else if ((start == 0 && cel == 3) || (start == 3 && cel == 0)) dystans = 340;
    else if ((start == 0 && cel == 4) || (start == 4 && cel == 0)) dystans = 310;
    else if ((start == 1 && cel == 2) || (start == 2 && cel == 1)) dystans = 500;
    else if ((start == 1 && cel == 4) || (start == 4 && cel == 1)) dystans = 400;
    else if ((start == 2 && cel == 3) || (start == 3 && cel == 2)) dystans = 450;
    else if ((start == 2 && cel == 4) || (start == 4 && cel == 2)) dystans = 360;
    else if ((start == 3 && cel == 4) || (start == 4 && cel == 3)) dystans = 180;

    cout << "1. Pieszo\n2. Samochodem\n3. Autobusem\n4. Samolotem\n";
    cout << "Wybierz srodek transportu: ";
    int wybor;
    cin >> wybor;
    if (wybor < 1 || wybor > 4) {
        cout << "Bledne dane!" << endl;
        return 0;
    }

    double kosztNa100 = 0;
    double czasNa100 = 0;
    if (wybor == 1) { kosztNa100 = 30; czasNa100 = 5; }
    else if (wybor == 2) { kosztNa100 = 80; czasNa100 = 1 + 20.0/60; }
    else if (wybor == 3) { kosztNa100 = 50; czasNa100 = 2; }
    else if (wybor == 4) { kosztNa100 = 300; czasNa100 = 0.25; }

    double koszt = (dystans / 100.0) * kosztNa100;
    double czas = (dystans / 100.0) * czasNa100;
    int godziny = (int)czas;
    int minuty = (int)((czas - godziny) * 60);

    string nazwaStart, nazwaCel;
    if (start == 0) nazwaStart = "Warszawa";
    else if (start == 1) nazwaStart = "Krakow";
    else if (start == 2) nazwaStart = "Gdansk";
    else if (start == 3) nazwaStart = "Wroclaw";
    else if (start == 4) nazwaStart = "Poznan";

    if (cel == 0) nazwaCel = "Warszawa";
    else if (cel == 1) nazwaCel = "Krakow";
    else if (cel == 2) nazwaCel = "Gdansk";
    else if (cel == 3) nazwaCel = "Wroclaw";
    else if (cel == 4) nazwaCel = "Poznan";

    cout << "Podroz z " << nazwaStart << " do " << nazwaCel << " (" << dystans << " km):\n";
    cout << "Koszt: " << koszt << " zl\n";
    cout << "Czas: " << godziny << " godz. " << minuty << " min.\n";

    return 0;
}
