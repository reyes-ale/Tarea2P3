
#include <iostream>
using namespace std;

void forito_ascendente(int i) {
	if (i > 1) 
		forito_ascendente(i-1);
		cout << i << " ";
}

int main() {
	forito_ascendente(10);
}
