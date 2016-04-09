#include <stdio.h>
#include <math.h>

double pi(void);

int main(void) {
	
	printf("Valor de PI: %f\n", pi() );

}

double pi(void) {
	
	double valorpi = 0, key;
	int n;


	for (n = 0; n < 10000000; n++){

	key = 4 * pow(-1, n) / (2 * n + 1);
	valorpi = key + valorpi;

	}


	return valorpi;
}