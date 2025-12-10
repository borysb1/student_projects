#include <iostream>

using namespace std;

int main(){
	char tab1[3][3] = {
		{'W','W','W'},
		{'W','W','W'},
		{'W','W','W'}
	};
	int wiersze = 3;
	int kolumny = 3;
	for(int i = 0;i<wiersze;i++){
		for(int j=0;j<kolumny;j++){
			cout<<tab1[i][j];
		}
		cout<<endl;
	}

	
	return 0;
}
