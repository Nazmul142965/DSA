#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of subjects:");
    scanf("%d", &n);

    int marks[n], i;

    printf("Enter the marks of students:");

    for(i=0; i<n; i++){
        scanf("%d",&marks[i]);
    }
    int lowest = marks[0];
    for (i=1; i<n ; i++){
        if(marks[i]<lowest){
           lowest= marks[i];
        }
    }
    printf("The lowest mark: %d", lowest);

    return 0;
}
