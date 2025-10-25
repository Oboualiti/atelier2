#include <iostream>
using namespace std;


void echanger(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}


bool dejaVu(char chaine[], int debut, int i) {
    for (int j = debut; j < i; j++) {
        if (chaine[j] == chaine[i]) return true;
    }
    return false;
}


void permuter(char chaine[], int debut, int fin) {
    if (debut == fin) {
        cout << chaine << endl;
    } else {
        for (int i = debut; i <= fin; i++) {

            if (!dejaVu(chaine, debut, i)) {
                echanger(chaine[debut], chaine[i]);
                permuter(chaine, debut + 1, fin);
                echanger(chaine[debut], chaine[i]);
            }
        }
    }
}

int main() {
    char chaine[100];
    cout << "Entrez une chaine de caracteres : ";
    cin >> chaine;

    int longueur = 0;
    while (chaine[longueur] != '\0') longueur++; 

    cout << "Les permutations uniques sont :" << endl;
    permuter(chaine, 0, longueur - 1);

    return 0;
}

