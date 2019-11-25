#include<cstdio>

using namespace std;

double moja_pow(double liczba, int p) {
	double potega = 1;
	if (p == 0) {
		return potega;
	}
	else if (p < 0) {
		for (int i = 0; i < -p; i++) {
			potega *= potega;
		}
		return 1.0 / potega;
	}
	else {
		for (int i = 0; i < p; i++) {
			potega *= potega;
		}
		return potega;
	}
}


int main() {

}