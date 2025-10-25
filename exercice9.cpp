#include<iostream>
#include<cmath>

using namespace std;

class vecteur3d{
public:
float x,y,z;


};

vecteur3d v;

void inisialization(vecteur3d v){
	v.x=0;
	v.y=0;
	v.z=0;
}

void affichage(vecteur3d v){
	cout << "le x est" << v.x << endl;
	cout << "le y est" << v.y << endl;
	cout << "le z est" << v.z << endl;
}

void somme(vecteur3d v ,vecteur3d v2){
	float x, y, z;
	
	x = v.x +v2.x;
	y = v.y +v2.y;
	z = v.z + v2.z; 
}

void produit (vecteur3d v , vecteur3d v2){
	float pr;
	pr = (v.x * v2.x ) + (v.y * v2.y ) + (v.z * v2.z);  
}

void coincide(vecteur3d v , vecteur3d v2){
	if (v.x == v2.x && v.y == v2.y && v.z == v2.z ){
		cout << "le vecteur est mêmes composantes." << endl;
		 
	}
	else {
		cout << "le vecteur n'ont mêmes composantes." << endl ;
	}
}

float norme (vecteur3d v2){
	int pr;
	pr = pow(v2.x , 2) + pow( v2.y , 2) + pow ( v2.z ,2);
	float nr ;
	nr = sqrt(pr);
	
	return nr;
	
} 

void normax(vecteur3d v2,vecteur3d v){
	if ( norme(v2 ) > norme(v)){
		cout << "le norme de premier vecteur est plus grand" << endl ;
	}
	if ( norme (v2) == norme(v)){
		cout << "ils sont memes" << endl ;
	}
	if( norme(v2) < norme(v)) {
		cout << "le norme de deuxieme vecteur est le plus grand" << endl ;
	}

	
}




int main(){
	v.x = 5;
	v.y = 6 ;
	v.z = 9 ;
	
	vecteur3d v2;
	v2.x = 4;
	v2.y = 3;
	v2.z = 6 ;

	

}
