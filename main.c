#include <stdio.h>
#define NumI 5
#define NumJ 8
int main(void) {
	float arr[NumI][NumJ];
	//indexx
	for (int i = 0;i < NumI;i++) {
		for (int j = 0;j < NumJ;j++) {
			printf("Enter arr[%d][%d]:", i, j);
			scanf_s("%f", &arr[i][j]);
		}
	}
	//vkazivniki
	for (float* ptr = &arr[0][0]; ptr < &arr[0][0] + (NumI * NumJ) - 2 * NumJ;ptr++) {
		*ptr = *(ptr + 2 * NumJ);
	}
	//tez vkazivniki
	for (float* ptr = &arr[NumI - 2][0];ptr < &arr[0][0] + NumI * NumJ;ptr++) {
		*ptr = 0.0;
	}
	//unnaming
	for (int i = 0;i < NumI;i++) {
		for (int j = 0;j < NumJ;j++) {
			printf("%f", *(*(arr + i) + j));
		}
		printf("\n");
	}
	return 0;
}
	/*for (int i = 0;i < NumI - 2;i++) {
		for (int j = 0;j < NumJ;j++) {
			arr[i][j] = arr[i + 2][j];
		}
	}
	for (int i = NumI - 2; i < NumI; i++) {
		for (int j = 0; j < NumJ; j++) {
			arr[i][j] = 0.0;
		}
	}
	for(int i=0;i<NumI;i++){
		for(int j=0;j<NumJ;j++){
			printf("%f ",arr[i][j]);
		}
		printf("\n");
	}

	

	return 0;
}
*/