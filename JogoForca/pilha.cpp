#include <iostream>

using namespace std;

void funcao2() {
	cout << "Entrei na funcao 2" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}
	cout << "saindo da funcao 2 " << endl;

}

void funcao1() {
	cout << "Entrei na funcao 1" << endl;
	funcao2();
	cout << "Saindo da funcao 1 " << endl;
}

int main2() {
	cout << "Entrei no main" << endl;
	funcao1();
	cout << "Saindo do main" << endl;
	return 0;
}