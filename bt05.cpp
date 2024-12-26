#include <stdio.h>

int main() {
    int arr[] = {9,5,7,15,10,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int key;
    printf("nhap so nguyen can tim trong mang: ");
    scanf("%d", &key);
    
    int left = 0, right = n - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            result = mid;
            break;
        }
        
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (result != -1) {
        printf("so %d o vi tri %d trong mang\n", key, result);
    } else {
        printf("so %d ko co trong mang.\n", key);
    }
    
    return 0;
}

