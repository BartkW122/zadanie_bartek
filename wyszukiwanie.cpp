
#include <iostream>


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
    cout << "wyszukiwanie z wartownikiem: Liczba " << szukanna << " nie znajduje się w tablicy.";
}

}

void wyszkiwanie_binarne(int tab[],int rozmiar){
int szukanna = 23;
int mid = rozmiar/2;
int srodek =tab[mid];
 cout<<"\n"<<srodek;
 
 for(int i = 0;i<rozmiar;i++){
    if(tab[i]==tab[mid]){
        cout << "wyszukiwanie z wartownikiem: Liczba " << szukanna << " znajduje się w tablicy na indeksie " << i;
    }
    if(szukanna>tab[mid]){
         
    }
 }


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
    return 0;
}
