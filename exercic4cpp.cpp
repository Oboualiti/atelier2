#include<iostream>
#include <cmath>
#include<cstddef>

using namespace std;

int main (){
	// question 1 
	int taille = 4;
	int tab[taille];
	tab[0] = 2;
	tab[1] = 1;
	tab[2] = 8;
	tab[3] = 5;
	int *Tableau = new int[taille];
	int i ;
	for (i =0 ; i<taille ; i++){
		*(Tableau +i) = tab[i];
	}

	
	
	// question 2 
	int *carre = new int[taille];
	for (i=0; i<taille ; i++){
		*(carre +i) = pow(*(Tableau+i ), 2)
	;

	}
	
	// question 3
	delete[] Tableau;

	
	
		for (i=0; i< taille ; i++){
		cout << *(carre+i) << "\n";
			
		
	}
	delete[] carre;
	
	return 0;
	
	
}
