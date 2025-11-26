#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int l1 = rand() %10+1;
	int guess;
	cout<<"Zgadnij liczba: ";
	cin>>guess;
	if(guess==l1){
		cout<<"Zgadles wowowowowowo";
	}else{
		cout<<"Nie zgadles :(";
	}
	return 0;
}
