#include <iostream>
#include "LabBmi.h"
#include <fstream>
#include <cstring>
using namespace std;
int main() {

	float height , weight;
	Bmi B;
	float s ;
	string cate;
	ifstream  ifs( "file.in",ifstream::in);
	ofstream  outFile("file.out",ios::out);
	while(ifs >> height >>weight ){
		if (height==0 && weight==0  )break;
		s=B.bmi( height , weight);
		outFile<<s<< B.show(s)<<endl;
}
	return 0;
}
