#include <iostream>
#include <cstdlib>

using namespace std;

double getDistMile(){
	double dist;
	cout<<"Укажите расстояние в милях: ";
	cin>>dist;
	return dist;
}

double getDistKm(double dist){
	double kmInMile = 1.609344;
	return dist*kmInMile;
}

int main(){
	system("clear");
	double distMile=getDistMile();
	cout<<"Расстояние (в км):"<<getDistKm(distMile)<<endl;
	system("date");
	return 0;
}
