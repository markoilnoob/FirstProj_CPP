#include <iostream>
#include "FirstProj.h"
#include "Weapon.h"
//#include "FirstProj.h"

using namespace std;

struct Studente
{
	int anni;
	float mediaVoti;
	string nome;

	//default constructor
	Studente() : anni(0), mediaVoti(.0f), nome("") {
		cout << "default student" << endl;
	}

	//custom
	Studente(const string& newNome, int newAnni, float newMediaVoti) {
		anni = newAnni;
		nome = newNome;
		mediaVoti = newMediaVoti;
	}
};

int main()
{
	//print
	cout << "Hello World!" << endl;

	//a
	cin.get();

	//variables
	int a = -3;
	unsigned int b = 5;
	float c = 3.14f;
	float d = .2f;
	double e = 3.141592653589793;
	char f = 'a';
	bool g = true;

	//get byte dimension from types
	cout << "Dimension: " << sizeof(int) << endl;
	cout << sizeof(int) << endl;

	//more variables
	int array[3] = {1, 2, 3};
	string txt = "Hello World!";
	Studente stud1;
	Studente stud2(txt, a, c);
	stud1.nome = "Pippo";
	stud1.anni = 31;
	stud1.mediaVoti = 8.0f;

	//class
	Rectangle rectangle(5, 10);

	int area = rectangle.GetArea();

	//homework
	cout << "Dimension: " << sizeof(array) << endl;
	Weapon gun1("Desert Eagle", "Handgun", 12, 5.34f, false, 75);

	cin.get();

	return 0;
}
