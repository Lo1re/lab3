#include <stdio.h>
#define SIZE 20
int main(void) {
	float arr[SIZE], sum = 0, average;
	int num;
    float* ptr = arr;
    //вказівники
    for (;ptr < arr + SIZE;ptr++) {
		printf("Enter number %d: ", (int)(ptr - arr + 1));
		scanf_s("%f", ptr);
	}//m
	float max = arr[0];
	num = 0;
    //індексація
    for (int i = 0;i < 20;i++) {
        if (arr[i] > max) {
            max = arr[i];
            num = i;
        }
        sum += arr[i];
    }
	average =sum / SIZE;
	for(float* ptr = arr + num + 1;ptr < arr + SIZE;ptr++) {
        *ptr += average;
	}
    //array unnamed
	for(int i=0;i<SIZE;i++)
        printf("	%f	", *(arr+i));
	
	return 0;
}




/*
#include <stdio.h>
#define SIZE 20 

int main(void) {
    float arr[SIZE], sum = 0, average;
    int num, n;

    
    do {
        printf("Enter number of elements (1-%d): ", SIZE);
        scanf("%d", &n);
    } while (n < 1 || n > SIZE);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf_s("%f", &arr[i]);
    }

    float max = arr[0];
    num = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
            num = i;
        }
    }

    average = sum / n;

    for (int i = num + 1; i < n; i++) {
        arr[i] += average;
    }
    printf("\nResult:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/