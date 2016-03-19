#include "lab2.h"

BMI::BMI(){height = 0; mass = 0;}

void BMI::setHeight(float h){
	height = h;	
}

void BMI::setMass(float w){
	mass = w;
}

float BMI::getHeight(){
	return height;
}

float BMI::getMass(){
	return mass;
}

void BMI::BMI_cal(){
	height = height/100.0;
	b = mass/(height*height);	
}

float BMI::getBMI(){
	return b;
}

string BMI::category(){
	if(b<15){
		type = "Very severely underweight";
	}
	else if(b<16 && b>=15){
		type = "Severely underweight";
	}
	else if(b<18.5 && b>=16){
		type = "Underweight";
	}

	else if(b<25 && b>=18.5){
		type = "Normal";
	}

	else if(b<30 && b>=25){
		type = "Overweight";	
	}

	else if(b<35 && b>=30){
		type = "Obese Class I(Moderately obese)";
	}

	else if(b<40 && b>=35){
		type = "Obese Class II(Severely obese)";
	}

	else{
		type = "Obese Class III(Very severely obese)";
	}

	return type;
}


