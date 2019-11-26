#include<cstdio>
#include <iostream>
#include<iomanip>

using namespace std;

double moja_pow(double liczba, int p) {
	double potega = 1;
	if (p == 0) {
		return potega;
	}
	else if (p < 0) {
		for (int i = 0; i < -p; i++) {
			potega *= liczba;
		}
		return 1.0 / potega;
	}
	else {
		for (int i = 0; i < p; i++) {
			potega *= liczba;
		}
		return potega;
	}
}


int main() {
	double a, wynik;
	int n;

	cout << "Licz potege:\n";
	cout << "Wprowadz liczbe a ktora chcesz podniesc do potegi n: ";
	cin >> a >> n;
	wynik = moja_pow(a, n);
	cout << "\n" << "Potega liczby " << a << " podniesionej do potegi " << n << " = ";
	cout << setprecision(3) << wynik;
}