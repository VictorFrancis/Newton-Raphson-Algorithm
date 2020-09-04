#include <iostream>

using namespace std;

float horner(float polyCo[], float x, int num){

	float horn=0;

	for(int i=0; i<num; i++){
		horn=(horn*x)+polyCo[i];
	}

	return horn;
}

int main(){

    int Size=100;
	float polyCo[Size], polyCoDx[Size];
	int numCoeff, numCoeffDx;

	cout<<"Enter Number of Coeffecient and Number of dy/dx Coeffecient: ";
	cin>>numCoeff>>numCoeffDx;

	for(int i=0; i<numCoeff; i++){
		cin>>polyCo[i];
	}

	for(int i=0; i<numCoeffDx; i++){
		cin>>polyCoDx[i];
	}

	int numNewVal;

	cin>>numNewVal;

	float xvalue;

	cin>>xvalue;

	float nextVal = xvalue;

	for(int i=0; i<numNewVal; i++)
		nextVal=nextVal-horner(polyCo,nextVal,numCoeff)/horner(polyCoDx,nextVal,numCoeffDx);

	cout<<nextVal<<endl;

	return 0;
}
