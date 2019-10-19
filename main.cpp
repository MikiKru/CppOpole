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
    double r;
    cout << "Input radius: " << endl;
    cin >> r;
    // Obicz pole koła
    cout << "Result PI*r^2 = " <<  PI * pow(r,2) << endl;
}
void exerciseC1(){
    string name, lastname, birthdate, possition;
    double salary_net;
    cout << "Input: name, lastname, date of birth (YYYY-MM-DD), possition, salary_net" << endl;
    cin >> name >> lastname >> birthdate >> possition >> salary_net;
    // instrukcja warunkowa
    if(!cin.fail()){
        cout << "Name: " << name << endl;
        cout << "Lastname: " << lastname << endl;
        cout << "Date of birth: " << birthdate << endl;
        cout << "Possition: " << possition << endl;
        cout << "Salary (net / gross): " << salary_net << " PLN" << " / " << salary_net * 1.23 << " PLN" << endl;
    } else {
        cout << "Upsss" << endl;
    }
}
void exerciseC2(){
    int a, b, c;
    cout << "Input three numbers: " << endl;
    cin >> a >> b >> c;
    if(cin.fail()){
        cout << "Invalid numbers " << endl;
    } else{
        // konwersja rozszerzająca
        double avg = ((double)a + b + c)/3;
        // konwersja zawężająca
        cout << "AVG: " << ((int)avg) << endl;
    }
}

int main() {
    // wywołanie zawartości metody
    exerciseC2();
    return 0;
}
