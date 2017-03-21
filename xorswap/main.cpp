#include <iostream>

inline void xorSwap(int &a, int &b);

double pow(double &num, int &dgr);

void show(const int &a, const int &b);

void init(int &a, int &b);

int main() {
	int a, b;
	initialize(a,b);	
	
	show(a,b);
	xorSwap(a,b);
	show(a,b);
	
	return EXIT_SUCCESS;
}

inline void xorSwap(int &a, int &b) {
	a ^= b, b ^= a, a ^= b;
}

void init(int &a, int &b) {
	a = 11;
	b = 33;
}

void show(const int &a, const int &b) {
	std::cout << "A = " << a << '\t' << "B = " << b << std::endl;
}

double pow(double &num, int &dgr) {
	double result = 1;
	while(dgr) {
		if( dgr & 1) {
			result *= num;
		}
		num *= num;
		dgr >>= 1;
	}
	return result;
}
