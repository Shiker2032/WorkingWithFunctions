#include <iostream>

void fillArray(int arr[], int leng) {

	int step = 1;
	for (int i = 0; i < leng; i++) {
		arr[i] = step;
		step++;
	}

	for (int i = 0; i < leng; i++) {
		printf("%i ", arr[i]);
	}
}

int main()
{
	int arr[100] = {};

	printf("first array\n");
	fillArray(arr, 10);
	printf("\nsecond array\n");
	fillArray(arr, 20);
}


