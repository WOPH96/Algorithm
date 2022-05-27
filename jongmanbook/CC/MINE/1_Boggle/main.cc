#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	string alpha[5][5]={
		{U,R,L,P,M},
		{X,P,R,E,T},
		{G,I,A,E,T},
		{X,T,N,Z,Y},
		{X,O,Q,R,S}
	};
	for ( const char &elem : alpha){
		cout << elem << endl;
	}
	return 0;
}

