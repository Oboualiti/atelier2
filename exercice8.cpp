#include<iostream>


using namespace std;

class voiture{

public:
	
	string  marque;
	string  modele;
	int annee;
	float kilometrage;
	float vitesse;
};
voiture v1;

float incrementer(float valeur){
	v1.vitesse += valeur; 
	return v1.vitesse;
}

float freiner(float valeur){
	if ( v1.vitesse <= valeur){
		v1.vitesse = 0;
		
	}
	else{
	v1.vitesse -= valeur;
	}
	
 
	
	return v1.vitesse;
}

void afficherInfo(){
	cout << "le marque est  " << v1.marque << "\n";
	cout << "le modele est  " << v1.modele  << "\n";
	cout << "le annee est  " << v1.annee << "\n";
	cout << "le vitesse est  " << v1.vitesse << "\n";
	cout << "le kilometrage est  " << v1.kilometrage << "\n";
	
}
 
float avancer(float distance){
	v1.kilometrage += distance;
	
}

void message(){
	cout << "la voiture est détruite." << endl;
}

int main(){
	string  marque = "mercedes";
	string  modele ="c220";
	int annee = 2024;
	float kilometrage = 44;
	float vitesse = 70;
	
	
	v1.marque = marque;
	v1.modele = modele;
	v1.annee = annee;	
	v1.kilometrage = kilometrage;
	v1.vitesse = vitesse;
	
	
	incrementer(20);
	freiner(120);
	avancer(30);
	afficherInfo();
	message();
	
			
}


