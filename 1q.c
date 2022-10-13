#include<stdio.h>
#include<stdlib.h>

int sum(int arr[], int size);

float average(int sum, int size);

int product(int arr[], int size);

int main(int argc, char*argv[]) {

    int add, prd;
    float avg;

    int size=argc-1, temp, arr[size];

    for(int i=0; i<=size; i++) {

        temp = atoi(argv[i]);
        arr[i-1]= temp;
    }

    add = sum(arr, size);
    avg = average(add, size);
    prd = product(arr,size);
    printf("sum = %d, average = %.2f, product = %d\n", add, avg, prd);

    return 0;

}

int sum(int arr[], int size) {
    int i, sum_of_element=0;
    for(int i=0; i<size; i++) {
        sum_of_element += arr[i];
    }
    return sum_of_element;

}

float average(int sum, int size) {
    float result= 0;
    return result = (float)sum/size;
}

int product(int arr[], int size) {

    int product_of_elements = 1;
    for(int i=0; i<size; i++) {
        product_of_elements *= arr[i];
    }
    return product_of_elements;

}

