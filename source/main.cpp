#include <iostream>
#include <fstream>
#include <string>
#include "file.h"
using namespace std;
int main()
{
    int suma_a = 0;
    int suma_b = 0;
    int suma_c = 0;
    int suma_d = 0;
    int suma_e = 0;
    Pytanie p[15];

    for (int i = 1; i <= 13; i++)
    {
        p[i].nr_pytania = i;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma_a += p[i].ilosc_a;
        suma_b += p[i].ilosc_b;
        suma_c += p[i].ilosc_c;
        suma_d += p[i].ilosc_d;
        suma_e += p[i].ilosc_e;
    }

    cout << "KONIEC QUIZU!" << endl;

   /*  cout << "a:" << suma_a << endl;
    cout << "b:" << suma_b << endl;
    cout << "c:" << suma_c << endl;
    cout << "d:" << suma_d << endl;
    cout << "e:" << suma_e << endl; */

    cout << "____________________________________________" << endl;

    float intro = (suma_a)*2 + suma_b;
    float ekstra = (suma_e)*2 + suma_d;
    float wynik = intro + ekstra + suma_c;

    /* cout<< "wynik"<<wynik<< endl;
    cout<< "intro"<<intro<< endl;
    cout<< "ekstra"<<ekstra<< endl;
     */
    if (intro > ekstra)
        cout << "Jestes introwertykiem! " << ((intro / wynik) * 100) << "%." << endl;

    else if (ekstra > intro)
        cout << "Jestes ekstrawertykiem! " << (ekstra / wynik) * 100 << "%." << endl;
    else
        cout << "Jestes dziwakiem! " << endl;

    int d = 0;
    cin >> d;

    return 0;
}

/*
    fstream myFile;
    // korzystanie z biblioteki fstream
    myFile.open("file.txt", ios::in);

    if (myFile.is_open())
    {
        string line;
        int i = 1;
        while (getline(myFile, line))
        {

            cout << i << ": ";
            cout << line << endl;
            ++i;
        }
        myFile.close();
    }
 */

/*


    //ios czyli inpuit output stream
    myFile.open("file.txt", ios::out);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello!" << endl;
        myFile.close();
    }


 myFile.open("file.txt", ios::app);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello2!" << endl;
        myFile.close();
    }


 */
