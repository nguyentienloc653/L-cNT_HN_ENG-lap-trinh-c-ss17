#include<stdio.h>
void addArray(int *n, int *arr);
void printArray(int n, int *arr);
int arrayLength(int n, int *arr);
void sumArray(int n, int *arr);
int Max(int n, int *arr, int max);
int main(){
	int menu, length, max, sum;
	int n=0, arr[100];
  	  do{
		printf("MENU\n");
		printf("1.Nhap vao so phan tu va tung phan tu.\n");
		printf("2.Hien thi cac phan tu trong mang.\n");
		printf("3.Tinh do dai mang.\n");
		printf("4.Tinh tong cac phan tu trong mang.\n");
		printf("5.Hien thi phan tu lon nhat.\n");
		printf("6.Thoat.\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				addArray(&n, arr);
				break;
			case 2:				
				printArray(n, arr);
				break;
			case 3:
				arrayLength(n, arr);
				break;
			case 4:
				sumArray(n, arr);
				break;
			case 5:
				Max(n, arr, max);
				break;
			case 6:
			    break;
		}
	}while(menu!=6);
}

void addArray(int *n, int *arr){
	printf("Hay nhap do dai mang: ");
	scanf("%d", n);
	for(int i=0; i<*n; i++){
		printf("Hay nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void printArray(int n, int *arr){
	for(int i=0; i<n; i++){
		printf("[%d]",arr[i]);
	}
}

int arrayLength(int n, int *arr){
	printf("Mang co do dai la %d\n", n);
}

void sumArray(int n, int *arr) {
    int sum = 0;  // Initialize sum to 0
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Tong cac phan tu la: %d\n", sum);
}

int Max(int n, int *arr, int max){
	max=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Phan tu lon nhat la: %d", max);
	return 0;
}
