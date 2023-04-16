#include <iostream>
#include "file.h"
using namespace std;

void Pytanie::wczytaj()
{
    fstream file;
    file.open("file.txt", ios::in);

    if (file.is_open())
    {

        string line;
        int nr_linii = (nr_pytania - 1)  + 1;
        int aktualny_nr = 1;

        while (getline(file, line))
        {

            if (aktualny_nr == nr_linii)
                tresc = line;
            
            aktualny_nr++;
        }
        file.close();
    }
}

void Pytanie::zadaj()
{
    cout << endl;
     cout << "____________________________________________" << endl;
      cout   << tresc << endl;
    cout << "1-Calkowicie sie zgadzam" << endl;
    cout << "2-Zgadzam sie" << endl;
    cout << "3-Nie wiem"<< endl;
    cout <<  "4-Nie zgadzam sie"<< endl;
    cout << "5-Calkowicie sie zgadzam " << endl;
    cout << "____________________________________________" << endl;
    cout << endl
         << "Odpowiedz: ";
    cin >> odpowiedz;
}

void Pytanie::sprawdz()
{

    if (odpowiedz == "1")
    {
        ilosc_a = 1;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 0;
        ilosc_e = 0;
    }
    else if (odpowiedz == "2")
    {
        ilosc_a = 0;
        ilosc_b = 1;
        ilosc_c = 0;
        ilosc_d = 0;
        ilosc_e = 0;
    }
    else if (odpowiedz == "3")
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 1;
        ilosc_d = 0;
        ilosc_e = 0;
    }

    else if (odpowiedz == "4")
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 1;
        ilosc_e = 0;
    }
    else if (odpowiedz == "5")
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 0;
        ilosc_e = 1;
    }
    else
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 0;
        ilosc_e = 0;
    }
}
