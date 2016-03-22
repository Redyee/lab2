#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

class Bmi{
	public:
		float bmi(float height, float weight);
		string show(float s);
		

private:
		float weight;
		float height;
};
