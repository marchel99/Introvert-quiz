#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pytanie
{
public:
    string tresc;
    string a, b, c, d, e;
    string poprawna;
    string odpowiedz;

    int ilosc_a;
    int ilosc_b;
    int ilosc_c;
    int ilosc_d;
    int ilosc_e;

    int nr_pytania;
    int punkt; // 0 lub 1

    void wczytaj(); // wczytuje dane z konsoli
    void zadaj();   // pobierz odpowiedz od uzytkownika
    void sprawdz(); // sprawdz czy ta odp jest dobra
};