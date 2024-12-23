#include<stdio.h>

int main() {
	
	int arr[5] = {1, 2, 3, 4, 5};
	int check, a = 0;
	printf("moi nhap phan tu can kiem tra ");
	scanf("%d", &check);
	
	for(int i = 0; i < check; i++){
		if(check == arr[i]){
			a = 1;
			printf("phan tu co ton tai trong mang");
		break;
		}
	}
	if(!a){
		printf("phan tu khong ton tai trong mang");
		}

	return 0;
}
