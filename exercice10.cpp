#include<iostream>
#include<cmath>
using namespace std ;

class nbcomplexe{
public:	
	int reelle ;
	int imaginaire;
	
};


void egalite (nbcomplexe n1 , nbcomplexe n2){
	if(n1.reelle == n2.reelle && n1.imaginaire == n2.imaginaire){
		cout << "les nombres sont egaux" << endl ;
	}
	else {
		cout << "les nombres ne sont pas egaux" << endl ;
	}
}

void addition(nbcomplexe n1 , nbcomplexe n2){
	int reelle , imaginaire;
	reelle = n1.reelle + n2.reelle;
	imaginaire = n1.imaginaire + n2.imaginaire;
	cout << "l'addition est :" << reelle << "+" << imaginaire << "i" << endl ;
}

void soustraction(nbcomplexe n1 , nbcomplexe n2){
	int reelle , imaginaire;
	reelle = n1.reelle - n2.reelle;
	imaginaire = n1.imaginaire - n2.imaginaire;
	cout << "la soustraction est :" << reelle << "+" << imaginaire << "i" << endl ;
}

void multiplication (nbcomplexe n1 , nbcomplexe n2){
	int reelle , imaginaire;
	reelle = ( n1.reelle * n2.reelle  ) - (n1.imaginaire *n2.imaginaire);
	imaginaire = ( n1.reelle * n2.imaginaire )  +(  n2.reelle * n1.imaginaire  );
	cout << "la multiplication est :" << reelle << "+" << imaginaire << "i" << endl ;
}
void division (nbcomplexe n1 , nbcomplexe n2 ){
    float reelle , imaginaire;
	reelle =(  ( n1.reelle * n2.reelle  ) + (n1.imaginaire *n2.imaginaire)  ) / (pow(n2.reelle , 2) + pow(n2.imaginaire , 2));
	imaginaire = (  ( n1.imaginaire * n2.reelle )  - (  n1.reelle * n2.imaginaire  )  ) / (pow(n2.reelle , 2) + pow(n2.imaginaire , 2)) ; 
	cout << "la division est :" << reelle << "+" << imaginaire << "i" << endl ;
	
}
void choisir(nbcomplexe n1 , nbcomplexe n2){
	int i ;
	cout << "1-egalite" << endl;
	cout << "2-addition" << endl;
	cout << "3-soustraction" << endl;
	cout << "4-multiplication" << endl;
	cout << "5-division" << endl;
	cout << "choisir le nombre de votre operation : " ;
	cin >> i ;
	while(i<0 || i>5){
		cout << "entre un autre nombre" ;
		cin >> i;
		
	} 
	if( i == 1){
		egalite(n1, n2);
	}
	if( i == 2){
		addition(n1, n2);
	}
	if( i == 3){
		soustraction(n1, n2);
	}
	if( i == 4){
		multiplication(n1, n2);
	}
	if( i == 5){
		division(n1, n2);
	}
}


int main (){
	nbcomplexe n1,n2;
	cout << "donne partie reelle de la premier nombre" ;
	cin >> n1.reelle ;
	cout << "donne partie imaginaire de la premier nombre" ;
	cin >> n1.imaginaire ;
	cout << "donne partie reelle de deuxieme nombre" ;
	cin >> n2.reelle ;
	cout << "donne partie imaginaire de  deuxieme nombre" ;
	cin >> n2.imaginaire ;
	
		
	
	choisir(n1, n2);

}
