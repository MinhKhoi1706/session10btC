#include <stdio.h>

int main() {
    int arr[] = {9,5,7,15,10,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int key;
    printf("nhap so nguyen can tim trog mang: ");
    scanf("%d", &key);
    
    int positions[n];
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i;
            count++;
        }
    }
    
    if (count > 0) {
        printf("cac vi tri cua %d trong mang la: ", key);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("so %d khong co trong mang.\n", key);
    }
    
    return 0;
}

