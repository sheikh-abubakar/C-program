#include <stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
  	// Complete the code to print the pattern.

      int size = 2*n-1;
      int start = 0;
      int end = size -1;
      int a[size][size];
      while( n != 0){
          for(int i = start; i<= end; i ++){
              for(int j = start; j<= end; j ++){
            if(i == start || i == end || j == start || j == end)
                  a[i][j] = n;
            
          }
          }
          ++start;
          --end;
          --n;
      }
      for(int i = 0; i < size; i ++){
          for(int j = 0; j < size; j ++)
              printf(" %d", a[i][j]);
              printf("\n");
          
      }
    return 0;
   
}