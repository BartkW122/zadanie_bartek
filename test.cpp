#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int tab[12];
 srand(time(NULL));

    for(int i = 0;i<12;i++){
        tab[i]=rand() % 25 + 1;
    }
    for(int i = 0;i<12;i++){
        cout<<tab[i]<<" ";
    }
    return 0;
}

