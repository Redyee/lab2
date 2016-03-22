#include"LabBmi.h"
#include<fstream>

float Bmi::bmi(float height, float weight){
	float s;
	s = weight/height/height*100*100;
	return s;
}

ofstream outFile("file.out",ios::out);
string cate;
string Bmi::show(float s){
	if(s<15)cate="  Very severely underweight";
	else if(s>=15&&s<16)cate="  Severely underweight";
		
	else if(s>=16&&s<18.5)cate="  Underweight";
		
	else if(s>=18.5&&s<25)cate="  Normal";
		
	else if(s>=25&&s<30)cate="  Overweight";

	else if(s>=30&&s<35)cate="  Obese Class I(Moderately obese)    ";
	
	else if(s>=35&&s<40)cate="  Obese Class II(Severely obese)";

	else if(s>=40)cate="  Obese Class III(Very severely obese)";
	return cate;
}
