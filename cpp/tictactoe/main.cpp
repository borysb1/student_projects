#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

void wypisz(char tab[3][3]){
	for(int i=0; i<3; i++){
		for(int j=0;j<3;j++){
			cout<<tab[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	
	char tab[3][3]={
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
	};

	wypisz(tab);

	for(int a=0;a<=9;a++){
		
	ruch1:
		cout<<"Gdzie kolo?"<<endl;
		int a1,a2;
		cin>>a1;
		cin>>a2;

		if(tab[a1][a2]!='-'){
			cout<<"Miejsce zajete, wybierz inne"<<endl;
			a--;
			goto ruch1;
		}else{
			tab[a1][a2]='O';
		}
		wypisz(tab);

	ruch2:
		cout<<"Gdzie krzyzyk?"<<endl;
		int b1,b2;
		cin>>b1;
		cin>>b2;

		if(tab[b1][b2]!='-'){
			cout<<"Miejsce zajete, wybierz inne"<<endl;
			a--;
			goto ruch2;
		}else{
			tab[b1][b2]='X';
		}

		wypisz(tab);



	if(tab[0][0]=='O' && tab[0][1]=='O' && tab[0][2]=='O'){
		cout<<"Wygrywa kolo ez?"<<endl;
	}else if(tab[1][0]=='O' && tab[1][1]=='O' && tab[1][2]=='O'){
		cout<<"Wygrywa kolo ez?"<<endl;
	}else if(tab[2][0]=='O' && tab[2][1]=='O'&& tab[2][2]=='O'){
		cout<<"Wygrywa kolo ez?"<<endl;
	}else if(tab[0][0]=='O' && tab[0][1]=='O' && tab[0][2]=='O'){
		cout<<"Wygrywa kolo ez?"<<endl;
	}
	}	
	return 0;
}
