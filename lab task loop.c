#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
//     srand(time(0));
//     int arr[30];
//    int sum = 0;
//    printf("marks of students are: ");
//     for(int i = 0; i <= 30; i++){
//         arr[i] = rand() % 100+1;

//         printf("%d ", arr[i]);
//     }
//     for(int i = 0; i <= 30; i++){
//         sum += arr[i];
//     }
//     printf("\n");
//     int avg = sum / 30;
//     printf("average is : %d", avg);
//     printf("\n");
//     printf("marks of fail students are: ");
//    for(int i = 0; i <=30; i++){
//     if (arr[i]< 50){
//         printf(" %d ", arr[i]);
//     }
//    }
//    printf("\n");
//    printf("marks of students above avg : ");
//    for(int i = 0; i <=30; i++){
//     if (arr[i]>avg){
//         printf(" %d ", arr[i]);
//     }
//    }
//       printf("\n");
//    printf("marks of students below avg : ");
//    for(int i = 0; i <=30; i++){
//     if (arr[i]<avg){
//         printf(" %d ", arr[i]);
//     }
//    }
   

   // with different loop


    srand(time(0));
    int arr[30];
   int sum = 0;
   printf("marks of students are: ");
    for(int i = 0; i < 30; i++){
        arr[i] = rand() % 100+1;

        printf("%d ", arr[i]);
    }
    
    for(int i = 0; i <= 30; i++){
        sum += arr[i];
    }
    printf("\n");
    int avg = sum / 30;
    printf("average is : %d", avg);
    printf("\n");
    printf("marks of fail students are: ");
   for(int i = 0; i <=30; i++){
    if (arr[i]< 50){
        printf(" %d ", arr[i]);
    }
   }
   printf("\n");
   printf("marks of students above avg : ");
   int i = 0;
   while(i < 30){
    if (arr[i]<=avg){
         i++; 
    }
    else {
         printf(" %d ", arr[i]);
         i++;
    }
   }
   printf("\n");
   printf("marks of students below avg : ");


     for(int i = 0; i <=30; i++){
     if (arr[i]<avg){
         printf(" %d ", arr[i]);
     }
   }

     
      
    
    
    return 0;
}