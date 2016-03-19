#include <iostream>
#include <fstream>
#include "lab2.h"
#include <cstdlib>
using namespace std;

int main(){
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "file open failure" << endl;
		exit(1);
	}
	BMI bmi;
	float h,w;
	ofstream outFile("file.out",ios::out);
	while(inFile >> h >> w && h!=0 && w!=0){
		bmi.setHeight(h);
		bmi.setMass(w);
		bmi.BMI_cal();
		outFile << bmi.getBMI() << "\t";
		outFile << bmi.category() <<endl;
	}
	return 0;
}
