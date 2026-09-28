// Victoria Levačić Tkalec
// LV2 - nije korišteni AI


#include <iostream>
#include <string>
using namespace std;

//ZADATAK 1
//Funkcija prima : tri cijela broja 
//Funkcija vraća : cijeli broj 
int senzoriRobota(int a, int b, int c)
{
    if (a <= b && a >= c || a <= c && a >= b) return a;
    if (b <= a && b >= c || b <= a && b >= c ) return b;
    else return c;
}
//ZADATAK 2
//Funkcija prima : cijeli broj, neki broj i točnu ili ne točnu vrijenost
// Funkcija vraća : točnu ili ne točnu vrijenost
string popust(int bodovi, double iznosRacuna, bool iskoristeniPopust)
{
    if (bodovi >= 12 && iznosRacuna <= 30 && iskoristeniPopust == 0) return "DA";
    else return "NE";
}

int main()
{
   //ZADATAK 1
   cout << senzoriRobota(4, 9, 6)<<endl;
   cout << senzoriRobota(8, 8, 3) << endl;
   cout << senzoriRobota(5, 5, 5) << endl;
   cout << senzoriRobota(9, 1, 6) << endl;
   //MOJ TEST 
   cout << senzoriRobota(7, 2, 5) << endl; //Očekivani izlaz "5"

    //ZADATAK 2
    cout << popust(12,30,0) << endl;
    cout << popust(11,100,0) << endl;
    cout << popust(15,29.99,0) << endl;
    cout << popust(15,40,1) << endl;
    cout << popust(20,30,0) << endl;
    //MOJ TEST
    cout << popust(14, 26, 1) << endl; //Očekivani izlaz "NE" 
    return(0);
}
