#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include<math.h>
int main(){
//       Declare a list of 10 elements. Initialize elements at random (with any range of your
// choice).
// Print elements in single line. Find and print average. Subtract all element from average. Print
// elements again in single line. Next, count and print number of negative elements and number of
// positive
// elements



  srand(time(0));
  int arr[10];
  int sum = 0, pve_count = 0, nve_count = 0;
 printf("10 elements are :\n");
  for(int i = 0; i <= 10; i++){
    arr[i]= rand()%20 +1;
   
     printf("%d  ", arr[i]);
    sum += arr[i];
  }
 
    int avg = sum /10;
    printf("\n avarage of an array is : %d", avg);
  printf("\n");
   printf("array after sub from avg is :\n");
    for(int i = 0; i <= 10; i++){
        int sub = arr[i] - avg;
       
        printf("%d  ", sub);
    }
    for(int i = 0; i <= 10; i++)
{
    if(avg < arr[i]){
        pve_count++;
    }
    else{
        nve_count++;
    }
} 
printf("\n");
printf("+ve  numbers : %d\n", pve_count);
printf("-ve numbers : %d", nve_count); 
    return 0;

    
     
}