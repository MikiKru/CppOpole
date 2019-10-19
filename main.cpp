#include <iostream>
#include <string>
#include <cmath>
// wykorzystuję przestrzeń std
using namespace std;


void cppIntro(){
    // deklaracja - rezerwacja pamięci
    int age;
    // przypisanie wartości do zadeklarowanej zmiennej
    age = 20;
    // prezentacja wartości
    cout << "Age: " << age << endl;
    // modyfikacja wartości dla zmiennej
    age = 21;
    cout << "Updated age: " << age << endl;
    // ZADANIE! ZADEKLARUJ ZMIENNĄ DO KTÓREJ PRZYPISZESZ ZWOJE IMIĘ
    // WYPISZ WARTOŚĆ ZMIENNEJ OSADZONĄ W COUT
    // NP. Witaj {Michał}!

    // deklaracja i przypisanie
    string name = "Michal";
    cout << "Witaj " << name << endl;
}

void sizeOfType(){
    cout << "Int size: " << sizeof(int) << endl;
    cout << "Short size: " << sizeof(short) << endl;
    cout << "Bool size: " << sizeof(bool) << endl;
    cout << "String size: " << sizeof(string) << endl;
}
void constController(){
    // wartość stała PI
    // wartość zmienna r
    const double PI = 3.14;
    // modyfikacja wartości stałej
    // PI = 3.15; -> błąd
    double r = 5;
    // Obicz pole koła
    cout << "Result PI*r^2 = " <<  PI * pow(r,2) << endl;
}

int main() {
    // wywołanie zawartości metody
    constController();
    return 0;
}
