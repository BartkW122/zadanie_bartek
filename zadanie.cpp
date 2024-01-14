
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void wypelnianie(int tab[],int rozmiar){

srand(time(NULL));

    for(int i = 0;i<rozmiar;i++){
        tab[i]=rand() % 25 + 1;
    }

}
void wyswietlanie(int tab[],int rozmiar){

     cout<<"Przed sortowaniem:";
    for(int i = 0;i<rozmiar;i++){
    cout<<tab[i]<<" ";
    }
}
void bombelkowe(int tab[], int rozmiar){

    for (int i = 0; i < rozmiar - 1; i++) {
    for (int j = 0; j < rozmiar - i - 1; j++) {
    if (tab[j] > tab[j + 1]) {
            swap(tab[j], tab[j + 1]);
        }
    }
}

    cout << "sortowanie bombelkowe: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }

}
void przypisywanie_do_sortowania(int tab[], int lewa_s, int srodek, int prawa_s) {
    int l = srodek - lewa_s + 1;
    int p = prawa_s - srodek;
    int tab_lewa[l];
    int tab_prawa[p];

    for (int i = 0; i < l; i++) {
        tab_lewa[i] = tab[lewa_s + i];
    }

    for (int i2 = 0; i2 < p; i2++) {
        tab_prawa[i2] = tab[srodek + 1 + i2];
    }

    int i = 0;
    int i2 = 0;
    int j = lewa_s;

    while (i < l && i2 < p) {
        if (tab_lewa[i] <= tab_prawa[i2]) {
            tab[j++] = tab_lewa[i++];
        } else {
            tab[j++] = tab_prawa[i2++];
        }
    }

    while (i < l) {
        tab[j++] = tab_lewa[i++];
    }

    while (i2 < p) {
        tab[j++] = tab_prawa[i2++];
    }
}

void sortowanie_przez_scalanie(int tab[],int lewa_s,int prawa_s){
    if(lewa_s<prawa_s){
        int srodek = lewa_s +(prawa_s-lewa_s)/2;
    sortowanie_przez_scalanie(tab,lewa_s,srodek);
    sortowanie_przez_scalanie(tab,srodek+1,prawa_s);
    przypisywanie_do_sortowania(tab,lewa_s,srodek,prawa_s);
    }
}
int main() {
   const int rozmiar=12;
    int tab[rozmiar];
    wypelnianie(tab,rozmiar);
    wyswietlanie(tab,rozmiar);
    cout<<endl;
    bombelkowe(tab,rozmiar);
    cout<<"\nsortowanie przez zcalanie:";
    sortowanie_przez_scalanie(tab,0,rozmiar-1);
    for(int i = 0;i<rozmiar;i++){
    cout<<tab[i]<<" ";
    }
    return 0;
}

