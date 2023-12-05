#include <iostream>
#include <cmath>

auto f(long double x) {
	return std::expl(std::expl(x));
}

auto sumasRiemannIzq(int a, int b, int n) {
	long double deltaX = (b - a) / (long double)n;
	long double c_i = 0;
	long double suma = 0;

	for (size_t i = 1; i <= n; i++) {
		c_i = a + (i - 1) * deltaX;
		suma += f(c_i) * deltaX;
	}

	return suma;
}

int main() {
	using std::printf; 

	auto suma = sumasRiemannIzq(0, 1, 1000);

	printf("Suma de Riemann de e^(e^x) = %llf", suma);
	return 0;
}