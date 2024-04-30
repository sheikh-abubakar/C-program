
   #include <stdio.h>
   #include<stdlib.h>
   #include<time.h>
   int main(){
      // Array task 07
      srand(time(0));
      int arr1[100];
      int arr2[100];
      int sum1=0, sum2=0;
      int max1=arr1[0], min1=arr1[0];
      int max2=arr2[0], min2=arr2[0];

    printf("First array is : ");
    for(int i = 0; i<15; i++){
      arr1[i]= rand()%15+1;
      printf("%d  ", arr1[i]);
    }
    printf("\n");

    printf("Second array is : ");

    for(int i = 0; i<15; i++){
      arr2[i]= rand()%15+1;
      printf("%d  ", arr2[i]);
    }
    
    for(int i =0; i <15; i++){
      sum1+=arr1[i];
      sum2+=arr2[i];
    }
   //Caclulate Sum
    printf("\n sum if first array is : %d", sum1);
    printf("\n sum if second array is : %d", sum2);
   
   //Caclulate Max and Min
   for(int i =0; i <15; i++){
     if(max1<arr1[i])
     max1=arr1[i];
      if(min1 > arr1[i])
      min1 = arr1[i];
   }

   printf("\n max of First array is : %d", max1);

   printf("\n min of first array is : %d", min1);
   printf("\n");

   for(int i =0; i <15; i++){
      if(max2 < arr2[i])
      max2 = arr2[i];
      if(min2 > arr2[i])
      min2 = arr2[i];
   }

   printf("\n max of Second array is : %d", max2);
   printf("\n min of second array is : %d", min2);

   printf("\n");  

   //creating a list of common elements between both lists
    printf("common elements are : ");
    for(int i =0; i <15; i++){
      if(arr1[i] == arr2[i])
      printf("%d ", arr1[i]);
    }










   }