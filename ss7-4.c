#include<stdio.h>

int main(){
	int i;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d", &i);
	
	int arr[i];
	printf("Nhap cac phan tu cua mang:\n");
	int j; 
    for (j = 0; j < i; j++) {
        printf("Nhap phan tu %d: ", j + 1);
        scanf("%d", &arr[j]);
    }

    printf("Cac phan tu trong mang la:\n"); 
    for ( j = 0; j < i; j++) {
        printf("Phan tu %d: %d\n", j + 1, arr[j]);
    }

	return 0; 
}
