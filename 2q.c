#include<stdio.h>


int sum(int arr[], int size);

float average(int sum, int size);

int product(int arr[], int size);

int main () {
    int i=0, num, arr[1000];

    printf("enter the number \n");

    while(1) {
        scanf("%d", &num);
        if(num==888) break;
        arr[i] = num;
        i++;
    }

    printf("sum is %d\n", sum(arr, i));
    printf("avrage is %.2f\n", average(sum(arr, i), i));
    printf("product is %d\n", product(arr, i));

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