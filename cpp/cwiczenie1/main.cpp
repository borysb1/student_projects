#include <iostream>

using namespace std;

int main(){
	/*int x=3;
	
	for(int i=0;i<x;i++){
		cout<<"*";
	}*/
	/*for(int i =0;i<5;i++){
		cout<<"\n";
		for(int j = 0;j<5;j++){
			cout<<"*";
		}
	}*/

	cout<<"wpisz liczbe: "<<endl;
	int liczba;
	cin>>liczba;

	if(liczba<2){
		cout<<"liczba nie jest pierwsza"<<endl;
	}else{
		for(int i=2; i<liczba; i++){
			if(liczba%i==0){
				cout<<"Nie jest pierwsza"<<endl;
			}else{
				cout<<"puierwsa"<<endl;
			}
	}}
	
	return 0;
	
	
}
