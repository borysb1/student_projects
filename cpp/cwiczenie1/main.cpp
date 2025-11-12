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

	if(liczba%liczba==0 &&  liczba%2!=0){
		cout<<"Liczba pierwsza"<<endl;
	}else{
		cout<<"Nie liczba pierwsza"<<endl;
	}
	
	return 0;
}
