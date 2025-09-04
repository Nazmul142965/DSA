// Consider the following sorted array

// 2 4 7 9 13 15 21 23

// Write a code to search the value 4 following Binary Search algorithm.


#include<stdio.h>

int main(){
int array[] = {2, 4, 7, 9, 13, 15, 15, 21, 23};
int beg = 0, end = 8, key = 9, mid ;

while(beg <= end){
mid = (beg + end) / 2;

if (array[mid] == key){
    printf("%d", mid);
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