#include <iostream>
using namespace std;


void afficherAppel() {
    static int compteur = 0; 
    compteur++;
    cout << "appel numero " << compteur << endl;
}

int main() {
 
    afficherAppel();
    afficherAppel();
    afficherAppel();

    return 0;
}

