#include<stdio.h>
void binary_search(int arr[], int size, int key) {
    int low = 1, high = size, mid;
    while(low < high){
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid + 1);
            return;
        }else if(arr[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        if(low > high){
            printf("Element not found\n");
            return; 
        }
    }
}
int main() {
    int arr[] = {11,22,33,44,55,66,77,88};
    int key = 33;
    int size = sizeof(arr)/sizeof(arr[0]);
    binary_search(arr, size, key);

    return 0;
}
