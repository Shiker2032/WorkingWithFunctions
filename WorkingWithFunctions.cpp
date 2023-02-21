#include <iostream>

void fillArray(int arr1[], int leng1, int arr2[], int leng2) {

    printf("input first array elements\n");

    for (int i = 0; i < leng1; i++) {
        scanf_s("%i", &arr1[i]);
    }

    for (int i = 0; i < leng1; i++) {
        printf("%i", arr1[i]);
    }

    printf("\ninput second array elements\n");

    for (int i = 0; i < leng2; i++) {
        scanf_s("%i", &arr2[i]);
    }

    for (int i = 0; i < leng2; i++) {
        printf("%i", arr2[i]);
    }

}

int main()
{
    int arr1[3] = {}, arr2[2] = {};
    int leng1 = 3, leng2 = 2;
    fillArray(arr1, leng1, arr2, leng2);

}


