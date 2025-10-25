#include<iostream>

using namespace std;

int main (){
	
	
		// 1ere methode
			int T[10];
	for (int i =0 ;i<10;i++){
		cout << "donner le " << i+1 << "nombre" << endl;
		cin >> T[i];
	}
	

	int max , min;
      max = T[0] ;
	for (int i=1;i<10;i++){
		if (max < T[i]){
			max = T[i];
		}
	}
	min = T[0];
	for (int i=1;i<10;i++){
		if (min > T[i]){
			min = T[i];
		}
	} 
	cout << "le max est " << max << endl;
	cout << "le min est " << min << endl;
	
	

	
		// 2eme methode
		
    	int *A = new int[10];
	for (int i =0 ;i<10;i++){
		cout << "donner le " << i+1 << " nombre" << endl;
		cin >> *(A+i);
	}
	

	int max,min;
      max = *(A) ;
	for (int i=1;i<10;i++){
		if (max < *(A+i)){
			max = *(A+i);
		}
	}
	min = *(A);
	for (int i=1;i<10;i++){
		if (min > *(A+i)){
			min = *(A+i) ;
		}
	} 
	cout << "le max est " << max << endl;
	cout << "le min est " << min  << endl;		

} 
