#include <iostream>
#include <string>
#include <cmath>
//biblioteka zawierająca generatory liczb pseudolosowych
#include <cstdlib>
// bibloteka implementująca metody daty i czasu
#include "time.h"

// wykorzystuję przestrzeń std
using namespace std;


void cppIntro() {
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

void sizeOfType() {
    cout << "Int size: " << sizeof(int) << endl;
    cout << "Short size: " << sizeof(short) << endl;
    cout << "Bool size: " << sizeof(bool) << endl;
    cout << "String size: " << sizeof(string) << endl;
}

void constController() {
    // wartość stała PI
    // wartość zmienna r
    const double PI = 3.14;
    // modyfikacja wartości stałej
    // PI = 3.15; -> błąd
    double r;
    cout << "Input radius: " << endl;
    cin >> r;
    // Obicz pole koła
    cout << "Result PI*r^2 = " << PI * pow(r, 2) << endl;
}

void exerciseC1() {
    string name, lastname, birthdate, possition;
    double salary_net;
    cout << "Input: name, lastname, date of birth (YYYY-MM-DD), possition, salary_net" << endl;
    cin >> name >> lastname >> birthdate >> possition >> salary_net;
    // instrukcja warunkowa
    if (!cin.fail()) {
        cout << "Name: " << name << endl;
        cout << "Lastname: " << lastname << endl;
        cout << "Date of birth: " << birthdate << endl;
        cout << "Possition: " << possition << endl;
        cout << "Salary (net / gross): " << salary_net << " PLN" << " / " << salary_net * 1.23 << " PLN" << endl;
    } else {
        cout << "Upsss" << endl;
    }
}

void exerciseC2() {
    int a, b, c;
    cout << "Input three numbers: " << endl;
    cin >> a >> b >> c;
    if (cin.fail()) {
        cout << "Invalid numbers " << endl;
    } else {
        // konwersja rozszerzająca
        double avg = ((double) a + b + c) / 3;
        // konwersja zawężająca
        cout << "AVG: " << ((int) avg) << endl;
    }
}

void checkNumber() {
    int a = 5;
    // sprawdź czy a jest prarzyste
    if (a % 2 == 0) {
        cout << "P" << endl;
    } else {
        cout << "NP" << endl;
    }
}

void assignNumberToIntervals() {
    // I     liczby < 0
    // II    liczba = 0
    // III   liczby > 0
    int number = 0;
    if (number < 0) {
        cout << "I lvl" << endl;
    } else if (number == 0) {
        cout << "II lvl" << endl;
    } else {
        cout << "III lvl" << endl;
    }
}

void increment() {
    int x = 2;
    int y = 3;
    // preinkrementacja -> najpierw zwiększ potem wypisz
    cout << "Aktualna x: " << ++x << endl;
    cout << "Po inkrementacji x: " << x << endl;
    // postinkrementacja -> najpierw wypisz potem zwiększ
    cout << "Aktualna y: " << y++ << endl;
    cout << "Po inkrementacji: " << y << endl;

    int a = 1, b = 2;
    cout << "Example: " << ((++a) - 1.) / ((b--) * (a++)) << endl;
}

void logMeIn() {
    string login, password;
    cout << "Input login and password" << endl;
    cin >> login >> password;
    if (login == "admin" && password == "admin") {
        cout << "logged" << endl;
    } else {
        cout << "bad credentials" << endl;
    }
}

void roundVsConvert() {
    double x = 45.99999;
    // rzutowanie
    cout << (int) x << endl;
    // zaokrąglanie math
    cout << round(x) << endl;
}

void exerciseC5() {
    int w, h;
    cout << "Input weight [kg] & height [cm]" << endl;
    cin >> w >> h;
    float bmi = w / pow(h / 100., 2);

    cout << "Math round: " << round(bmi) << endl;
    cout.precision(3);
    cout << "Precision XX.X: " << bmi << endl;
    cout << "BMI precision: " << sizeof(bmi) << endl;
}

void exerciseC6() {
    // umożliwia losowanie za każdym razem nowej wartości
    srand(time(NULL));
    int generated = 0;
    while (generated != 49) {
    generated = ((rand() % 49) + 1);
    cout << generated << endl;
    }
    cout << "Jest!!!" << generated << endl;
}
void grades(){
    int mathGrades [6] = {2,1,4,3,5};
    cout << "All grades: " << mathGrades[0] << "," << mathGrades[1] << "," << mathGrades[2] << "," << mathGrades[3] << "," << mathGrades[4] << endl;
    cout << "Add new grade: " << endl;
    cin >> mathGrades[5];
    cout << "All grades: " << mathGrades[0] << "," << mathGrades[1] << "," << mathGrades[2] << "," << mathGrades[3] << "," << mathGrades[4]
    << "," << mathGrades[5] << endl;
    cout << "Last grade: " << mathGrades[(sizeof(mathGrades)/ sizeof(int)) - 1] << endl;
}

int main() {
    // wywołanie zawartości metody
    grades();
    return 0;
}
