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

void grades() {
    int mathGrades[6] = {2, 1, 4, 3, 5};
    cout << "All grades: " << mathGrades[0] << "," << mathGrades[1] << "," << mathGrades[2] << "," << mathGrades[3]
         << "," << mathGrades[4] << endl;
    cout << "Add new grade: " << endl;
    cin >> mathGrades[5];
    for (int i = 0; i < sizeof(mathGrades) / sizeof(int); i++) {
        cout << mathGrades[i] << ", ";
    }
    cout << "Last grade: " << mathGrades[(sizeof(mathGrades) / sizeof(int)) - 1] << endl;
}

void mathGrades() {
    int allMathGrades[3][3] = {
            {2, 3},
            {2, 1},
            {3, 4}
    };
    cout << "Student 0 has grades: " << allMathGrades[0][0] << ", " << allMathGrades[0][1] << endl;
    cout << "Student 1 has grades: " << allMathGrades[1][0] << ", " << allMathGrades[1][1] << endl;
    cout << "Student 2 has grades: " << allMathGrades[2][0] << ", " << allMathGrades[2][1] << endl;
}

void decimalToRoman() {
    int index;
    string toRoman[] = {"N/A", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    cout << "Input decimal digit: " << endl;
    cin >> index;
    if (index >= 0 && index <= 9) {
        cout << index << " in roman notation: " << toRoman[index] << endl;
    } else {
        cout << "Out of bound" << endl;
    }

}

// W zależności od podanego wieku użytkownika odpowiednio zaklasyfikować jesgo dostęp do treści na stronie internetowej
// -> jeżeli więk zawiera się w przedziale od 0 do 120 -> jaśteś człowiekiem
//          --> jeżeli wiek < 18 --> nie jesteś pełnoletni
//          --> jeśeli wiek >= 18 --> jesteś pełnoletni
// -> w przeciwnym razie -> komunikat błędu
void contentManager() {
    cout << "Podaj swoj wiek" << endl;
    int user_age;
    cin >> user_age;
    if (cin.fail()) {
        cout << "Blad typu danych" << endl;
    } else if (user_age <= 0 || user_age >= 120) {
        cout << "Nie jestes czlowiekiem" << endl;
    } else {
        if (user_age < 18) {
            cout << "Nie jestes pelnoletni" << endl;
        } else {
            cout << "Jestes czlowiekiem" << endl;
        }
    }

}

void switchCalc() {
    int num1, num2;
    char sign;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> num1;
    cout << "Wybierz operator: (+,-,*,/) " << endl;
    cin >> sign;
    cout << "Podaj druga liczbe: " << endl;
    cin >> num2;
    // switch - case
    if (!cin.fail()) {
        switch (sign) {
            case '+':
                cout << "Wynik dodawania: " << (num1 + num2) << endl;
                break;
            case '-':
                cout << "Wynik odejmowania: " << (num1 - num2) << endl;
                break;
            case '*':
                cout << "Wynik mnozenia: " << (num1 * num2) << endl;
                break;
            case '/':
            case '%':
                cout << "Wynik dzielenia: " << ((double) num1 / num2) << endl;
                break;
            default:
                cout << "Bledny operator" << endl;
                break;
        }
    } else {
        cout << "bladne dane" << endl;
    }
}

void getTipOfTheDay() {
    // lista tipów
    string tips[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    // losowanie
    srand(time(NULL));
    int generatedIndex = rand() % ((sizeof(tips) / sizeof(string)) - 1);
    // Wypisanie całej zawartości tablicty za pomocą pętli
    for (int i = 0; i < sizeof(tips) / sizeof(string); i++) {
        if (tips[i] != "D") {
            cout << "TIP " << (i + 1) << " = " << tips[i] << endl;
        }
    }
//    for(string tip : tips){
//        if(tip != "D") {
//            cout << tip << endl;
//        }
//    }
    // publikacja
    cout << "Wylosowane: " << tips[generatedIndex] << endl;
}
void generateGroups(){
    string participants [] = {"Weronika", "Kasia", "Kacper", "Konrad", "Julia", "Ala", "Kaja",
                              "Maciek", "Kuba", "Sara", "Asia", "Dominika"};
    string groupedParticipants [12];
    srand(time(NULL));
    // tasowanie
    for(int i =0; i < 100; i++){
        // losowanie indeksu do podmiany z indeksem zero -> pierwszym elementem
        int index = rand() % ((sizeof(participants) / sizeof(string)));
        // pobranie wartości, która ma być podmieniona -> żeby jej nie stracić
        string element = participants[index];
        // zamiana wartości indeks zerowy z wylosowanym
        participants[index] = participants[0];
        participants[0] = element;
    }
    // prezentacja
    for(int i = 0; i < sizeof(participants) / sizeof(string); i++){
        if(i % 2 == 0) {
            if (i == 0 || i == 1) {
                cout << "GRUPA 1 " << endl;
            } else if (i == 2 || i == 3) {
                cout << "GRUPA 2 " << endl;
            } else if (i == 4 || i == 5) {
                cout << "GRUPA 3 " << endl;
            } else if (i == 6 || i == 7) {
                cout << "GRUPA 4 " << endl;
            } else if (i == 8 || i == 9) {
                cout << "GRUPA 5 " << endl;
            } else {
                cout << "GRUPA 6 " << endl;
            }
        }
        cout << participants[i] << endl;
    }
}
int main() {
    // wywołanie zawartości metody
    generateGroups();
    return 0;
}




