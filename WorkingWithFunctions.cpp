#include <iostream>

int checkSquare(int num) {
	for (int i = 0; i * i <= num; ++i) {
		if (i * i == num) {
			return true;
		}
	}
	return false;
}

int checkSquare(int num, int* ptr) {
	for (int i = 0; i * i <= num; ++i) {
		if (i * i == num) {
			*ptr = 1;
		}
	}
	return false;
}


int checkSquare(int num, int& ref) {
	for (int i = 0; i * i <= num; ++i) {
		if (i * i == num) {
			ref = 1;
		}
	}
	return false;
}

int main() {
	int value1 = 0, value2 = 0, value3 = 0;
	int counter = 0;
	printf("input 3 values\n");
	scanf_s("%i %i %i", &value1, &value2, &value3);

	//only with valueue =====================  
	if (checkSquare(value1)) {
		counter++;
	}
	// with pointer and valueue =====================
	int* ptrValue2 = &value2;
	checkSquare(value2, ptrValue2);
	if (*ptrValue2 == 1) {
		counter++;
	}
	//with reference and valueue ====================    
	int& refValue3 = value3;
	checkSquare(value3, refValue3);
	if (refValue3 == 1) {
		counter++;
	}

	printf("Square count: %i", counter);
}