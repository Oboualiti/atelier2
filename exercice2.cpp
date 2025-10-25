#include<iostream>

using namespace std;


int multiple2( int n ){
	if (n%2 == 0){
		
		cout << "le nombre est multipe de 2 " << endl;
		return n;
			
	}
	return 0;


}
int multiple3( int n ){
	if (n%3 == 0){
		
		cout << "le nombre est multipe de 3 " << endl;
		return n;
			
	}
	return 0;


}

int main (){
	int n ;
	cout << "donner un nombre " ;
	cin >> n;
	
	if(multiple2(n)){
		cout << "il est pair \n";
	}
	;	
	if(multiple3(n)%6 == 0 && n >= 6){
		cout << "il est divise par 6";
	}

	
}
