
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
for(int i = 0 ;i<rozmiar;i++){
    if(szukanna==tab[i]){
        cout<<endl;
        cout<<"wyszukiwanie z wartownikiem:"<<"Liczba "<<szukanna<<" zanjduje sie w tablicy na indeksie "<<i;
    }else{
    cout<<"wyszukiwanie z wartownikiem:"<<"Liczba "<<szukanna<<" zanjduje sie w tablicy na indeksie "<<"-1";


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
    return 0;
}
