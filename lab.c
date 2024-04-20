#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>
int main(){
    srand(time(0));
    int arr[10];
    int sum = 0, a;
    printf("Array is :");
    for(int i = 0; i < 10; i++){
        arr[i] = (rand()%5) + 3;
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 1; i++){
        printf("%d ", arr[i]);
        printf("  %d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 2; i++)
    printf("%d ", arr[i]);

    for(int i = 0; i < 2; i++)
    
     {
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
            
        }
    
    }
    printf("  %d", sum);
        
    printf("\n");
    
   for(int i = 0; i < 3; i++)
    printf("%d ", arr[i]);

    for(int i = 0; i < 3; i++)
    {
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }

    printf("  %d ", sum);

    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 4; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 5; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
    printf("\n");

    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 6; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
    printf("\n");

    for(int i = 0; i < 7; i++)
        {
            printf("%d ", arr[i]);
        }
    for(int i = 0; i < 7; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 8; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
   
    printf("\n");

    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);}
    for(int i = 0; i < 9; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);
 
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 10; i++){
        while(arr[i] != 0){
            a = arr[i] %10;
            sum += a;
            arr[i] = arr[i]/10;
        }
    }
    printf("  %d", sum);


}