#include<iostream>
using namespace std;

// Bubble Sort
// void bubbleSort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){

//         bool isSwap = false; // for optimization

//         for(int j = 0; j < size - i - 1; j++){
//             if(arr[j] > arr[j + 1]){
//                 // int temp = arr[j];
//                 // arr[j] = arr[j + 1];
//                 // arr[j + 1] = temp;

//                 swap(arr[j], arr[j + 1]); // In built function
//                 isSwap = true;
//             }
//         }
//         if(!isSwap){  // array is already sorted
//             return;
//         }
//     }
// }



//  Selection Sort
// void selectionSort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         int smallestIdx = i; // unsorted part ka starting element
//         for(int j = i + 1; j < size; j++){ // smallest idx ke elements ko traverse karenge and compare karenge
//             if(arr[j] < arr[smallestIdx]){
//                 smallestIdx = j;
//             }
//         }
//         swap(arr[i], arr[smallestIdx]);
//     }
// }



//  Insertion Sort
void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int curr = arr[i];
        int prev = i - 1;
        
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}





void printArrayElements(int arr[] , int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int size = 5;
    int arr[] = {2,6,1,3,7};

    // bubbleSort(arr, size);
    // selectionSort(arr, size);
    insertionSort(arr, size);


    printArrayElements(arr, size);
    
    return 0;
} 



//  To compile and run code in terminal
// g++ Bubble_sort.cpp -o Bubble_sort && ./Bubble_sort
