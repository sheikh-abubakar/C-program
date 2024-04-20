#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>
int main(){
    srand(time(0));
    int arr[10];
    int sum =0;
    printf("Array is : ");
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 5 + 3;
        printf("%d ", arr[i]);
     
        sum += arr[i];
    }
    printf("\n");
     int sum2=0;
     for(int i = 0; i < 10; i++){
        sum2 += arr[i];
        for(int j = 0; j <=i; j++){
            printf("%d ", arr[j]);
        }
        printf("= %d\n", sum2);
     }

       printf("\n");
    printf(" sum is %d", sum);
    return 0;
}