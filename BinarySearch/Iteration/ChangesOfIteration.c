// Consider the following unsorted array

// 7 3 4 2 9 21 15 23

// ii) Display the changes of the value of mid-point for each iteration.
// Example Output: Iteration 1, Mid = 3

#include<stdio.h>
#include<stdlib.h>

int main(){
int array[] = {7, 3, 4, 2, 9, 21, 15, 23};
int beg = 0, end = 7, key = 23, mid , temp, itar = 0;

//bubble sort
for(int i = 0; i < 7; i++){
for(int j = 0 ; j < 7 -i -1; j++){

if(array[j] > array[j+1]){
temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
}
}
}

//binary search
while(beg <= end){
mid = (beg + end) / 2;
itar++;
printf("Iteration: %d ", itar);
printf("Mid: %d \n", mid);
if (array[mid] == key){
printf("Tarrgeted Position: %d", mid);
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