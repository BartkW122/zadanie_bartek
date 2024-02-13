#include <iostream>
#include <algorithm>

using namespace std;





void bombelkowe(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                swap(tab[j], tab[j + 1]);
            }
        }
    }

    cout << "\nSortowanie bombelkowe: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
}

void wyszkiwanie_liniowe(int tab[],int rozmiar){
int szukanna = 3;
for(int i = 0 ;i<rozmiar;i++){
    if(szukanna==tab[i]){
            cout<<endl;
        cout<<"wyszukiwanie liniowe:"<<"Liczba "<<szukanna<<" zanjduje sie w tablicy na indeksie "<<i;
    }
}
}
void wyszkiwanie_z_wartowniekiem(int tab[],int rozmiar){
int szukanna = 10;
int indeks = -1; 

for(int i = 0; i < rozmiar; i++) {
    if(szukanna == tab[i]) {
        indeks = i; 
        break; 
    }
}
cout<<endl;
if (indeks != -1) {
    cout << "wyszukiwanie z wartownikiem: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << indeks;
} else {
    cout << "wyszukiwanie z wartownikiem: Liczba " << szukanna << "znajduje się w tablicy na indeksie -1";
}

}

void wyszkiwanie_binarne(int tab[],int rozmiar){
    int szukanna = 100;
    int lewy = 0;
    int prawy = rozmiar - 1;
    int indeks =-1;

   do{
        int mid = lewy + (prawy - lewy) / 2;

        if (tab[mid] == szukanna) {
            indeks = mid;
            break;
        }
        else if (tab[mid] < szukanna) {
            lewy = mid + 1;
        }
        else {
            prawy = mid - 1;
        }
    }while(lewy <= prawy);
    cout<<endl;
   if (indeks != -1) {
        cout <<"wyszukiwanie binarne: Liczba "<< szukanna << " znajduje się w tablicy na indeksie " << indeks ;
    } else {
        cout <<"wyszukiwanie binarne: Liczba "<< szukanna << " znajduje się w tablicy na indeksie -1" ;
    }
    
}
void wyszukiwanie_skokowe(int tab[], int rozmiar) {
    int szukanna = 10;
    int poczatek = 0;
    int koniec = rozmiar - 1;
    int srodek = poczatek + ((szukanna - tab[poczatek]) * (koniec - poczatek)) / (tab[koniec] - tab[poczatek]);
    cout<<endl;

    if (szukanna == tab[srodek]) {
        cout << "wyszukiwanie skokowe: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << srodek << endl;
        return;
    }

    for (int i = 0; i < rozmiar; i++) {
        if (szukanna == tab[i]) {
            cout << "wyszukiwanie skokowe: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << i << endl;
            return;
        }
    }

    cout << "wyszukiwanie skokowe: Liczba " << szukanna << "  znajduje się w tablicy na indeskie -1" ;
}
void wyszukiwanie_interpolacyjne(int tab[], int rozmiar) {
    int szukanna =  23;
    int poczatek =  0;
    int koniec= rozmiar-1;
    int szacowana = poczatek + ((szukanna - tab[poczatek]) * (koniec - poczatek)) / (tab[koniec] - tab[poczatek]);
    
        if (szukanna == tab[szacowana]) {
        cout << "wyszukiwanie skokowe: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << szacowana ;
        return;
    }
    cout<<endl;
    for (int i = 0; i < rozmiar; i++) {
        if (szukanna == tab[i]) {
            cout << "wyszukiwanie skokowe: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << i ;
            return;
        }
    }

    cout << "wyszukiwanie skokowe: Liczba " << szukanna << "  znajduje się w tablicy na indeskie -1" ;
}
int main() {
    const int rozmiar= 12;
    int tab[rozmiar]={12,3,45,65,18,23,45,13,10,27,49,1};
    cout<<"Przed sortowaniem:";
    for(int i =0 ;i<rozmiar;i++){
        cout<<tab[i]<<" ";
    }
    bombelkowe(tab,rozmiar);
    wyszkiwanie_liniowe(tab,rozmiar);
    wyszkiwanie_z_wartowniekiem(tab,rozmiar);
    wyszkiwanie_binarne(tab,rozmiar);
    wyszukiwanie_skokowe(tab,rozmiar);
    wyszukiwanie_interpolacyjne(tab,rozmiar);
    return 0;
}
