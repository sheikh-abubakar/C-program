#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
     int arr[20];
    int count_children = 0, count_adults = 0, count_seniors = 0;
    printf("Ages : ");
    srand(time(0));
    for(int i =0; i < 20; i++){
        arr[i] = rand()%100 +1;
        printf("%d ", arr[i]);
    }
       
        printf("\n");
        printf("age of children :");

     for(int i = 0; i < 20; i++){
         if(arr[i] <=12 && arr[i] > 0){
            count_children++;
          printf("%d ", arr[i]);
          
        
        
         }
     } 

    printf("\n");
    printf("age of adults :");
     for(int i = 0; i < 20; i++){
    if(arr[i] >=13 && arr[i] <=64){
        count_adults++;
        printf("%d ", arr[i]);
    }

     } 

      printf("\n");
    printf("age of seniors :"); 

     for(int i = 0; i < 20; i++){
    if(arr[i] >=65){
        count_seniors++;
        printf("%d ", arr[i]);
    }
     }
         
}