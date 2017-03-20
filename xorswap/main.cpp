#include <iostream>

inline void xorSwap(int &a, int &b);

void show(const int &a, const int &b);

int main() {
	int a = 11;
	int b = 33;
	
	show(a,b);
	xorSwap(a,b);
	show(a,b);
	
	return EXIT_SUCCESS;
}

inline void xorSwap(int &a, int &b) {
	a ^= b, b ^= a, a ^= b;
}

void show(const int &a, const int &b) {
	std::cout << "A = " << a << '\t' << "B = " << b << std::endl;
}
