#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>
int main(){
    srand(time(0));
    int arr[10];
    int count_even=0, count_odd=0;
   printf("Array is : ");
    for(int i =0 ; i < 10; i++){
        arr[i]= rand()%100 +1;
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("even array is : ");
    for(int i =0 ; i < 10; i++){
        if (arr[i] % 2== 0){
            printf("%d ", arr[i]);
            count_even++;
        }

    }
        printf("\n");
         printf("odd array is : ");
        for(int i = 0; i < 10; i++){
            if(arr[i] %2 !=0){
            printf("%d ", arr[i]);
            count_odd++;
        }
        }
      printf("\n"); 
   
    if(count_even>count_odd){
        for(int i =0; i < 10; i++){
            if(arr[i] %2 !=0){
                arr[i] -=1;
            }
        }
    }
    else if (count_odd>count_even){
        for(int i =0 ; i < 10; i++){
            if(arr[i] % 2 == 0){
                arr[i] +=1;
            }
        }
    }
    printf("Array is : ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    
}