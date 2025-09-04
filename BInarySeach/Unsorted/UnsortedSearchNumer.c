// Consider the following unsorted array

// 7 3 4 2 9 21 15 23

// i) Write a code to search the value 23 following Binary Search algorithm.


#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[] = {7, 3, 4, 2, 9, 21, 15, 23};
    int beg = 0, end = 7, key = 23, mid , temp;

    // bubble sort
    for(int i = 0; i < 7; i++){
        for(int j = 0 ; j < 7 - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];  // ← Restored line
                array[j+1] = temp;
            }
        }
    }

    // binary search
    while(beg <= end){
        mid = (beg + end) / 2;
        if (array[mid] == key){
            printf("Targeted Position: %d", mid);
            break;
        }
        if(array[mid] < key ){
            beg = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return 0;
}
