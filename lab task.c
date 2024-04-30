#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{


    srand(time(0));
    printf("Sales of one year : ");
    int arr[12];
        int sum = 0, FHsum =0, NHsum = 0, SinQ1 = 0, SinQ2 = 0, SinQ3 = 0, SinQ4 = 0;
    for(int i = 0; i < 12; i++){
        //random_number = (rand() % (UPPER_LIMIT - LOWER_LIMIT + 1)) + LOWER_LIMIT;
        arr[i]= (rand()%1000) + 1000;

        printf("%d ", arr[i]);
    }
      printf("\n");
    printf("total sum: ");
    for(int i = 0; i< 12; i++){
     sum += arr[i];
 }
 printf("%d", sum);
    printf("\n");
    printf("sales in Two Halves : ");
    for(int i = 0; i< 6; i++){
     FHsum += arr[i];
 }
 printf("\n");
 printf("First Half : %d", FHsum);


 printf("\n");
 for(int i = 6; i < 11; i++){
    NHsum += arr[i];
 }
 printf("Second Half  : %d", NHsum);

 printf("\n");
 printf("Quarter wise Sales :");
 for(int i = 0; i < 3; i++){
   SinQ1 += arr[i];
 }
 printf("\n");
 printf("Sale in Quarter 1 : %d", SinQ1);


 printf("\n");
 
 for(int i = 3; i < 6; i++){
   SinQ2 += arr[i];
 }
 printf("Sale in Quarter 2 : %d", SinQ2);


 printf("\n");

 for(int i = 6; i < 9; i++){
   SinQ3 += arr[i];
 }
 printf("Sale in Quarter 3 : %d", SinQ3);

 printf("\n");

 for(int i = 9; i < 12; i++){
   SinQ4 += arr[i];
 }
 printf("Sale in Quarter 4 : %d", SinQ4);


 return 0;
}