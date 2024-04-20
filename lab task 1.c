#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>
int main(){
    srand(time(0));
    int arr[10];
    printf("Array is : ");
    for(int i = 0; i < 10; i++){
        arr[i] = rand()%7 +1;
    printf("%d  ", arr[i]);
    }for(int i = 0; i < 10; i++){
         if(arr[i] == 1){
     printf("\n*");
    }
    if(arr[i] == 2){
     printf("\n**");
    }
    if(arr[i] == 3){
     printf("\n***");
    }
    if(arr[i] == 4){
     printf("\n****");
    }
    if(arr[i] == 5){
     printf("\n*****");
    }
    if(arr[i] == 6){
     printf("\n******");
    }
    if(arr[i] == 7){
     printf("\n*******");
    }
    }
   
}