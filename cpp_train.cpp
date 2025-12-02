
#include <iostream>
#include <cstdlib>

using namespace std;
/*
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
*/
/*
int main(){
	//Верхняя граница суммы, значение суммы и индексная переменная
	int n = 10, s = 0, k = 1;
	//Оператор цикла для вычисления суммы
	while(k<=n){
		//Добавление нового слагаемого к сумме
		s = s + k * k;
		//Увеличение на 1 значения индексной переменной
		k++;

	}
	//Отображение результата вычислений
	cout<<"Сумма квадратов от 1 до "<<n<<":"<<s<<endl;
	return 0;

}

*/

//Объявление и определение функции
int DemoConsoleOutput() {
	cout << "Простой строковый литерал" << endl;
	cout << "Запись числа пять: " << endl;
	cout << "Выполнение деления 10/5 = " << 10/5 << endl;
	cout << "Пи примерно равно 22/7 = " << 22/7 << endl;
	return 0;
}
int main() {
	//Вызов функции с возвратом результата при выходе
	return DemoConsoleOutput();
}
