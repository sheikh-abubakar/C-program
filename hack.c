#include <stdio.h>
//  int max_of_four(int a, int b, int c, int d){
//     return (a>b && a>c && a>d) ? a :(b>c && b>d) ? b:(c>d) ? c : d;
    //ternary operators
    //void max(int n , int k);
 
int main() {
    // char c, s[50], sen[100];
    // scanf("%c", &c);
    //    scanf("%s\n", s);
    //    scanf("%[^\n]s", &sen);
    // //    it is used to scan input when new line will begin%[^\n]s
    //    printf("%c\n", c);
    //    printf("%s", s);
    //    printf("\n%s", sen);
    // int a, b;
    // printf("enter these numbers ");
    // scanf("%d %d", &a, &b);
    // float c, d;
    // printf("enter these numbers ");
    // scanf("%f %f", &c, &d);
    // printf("%d %d", a+b, a-b);
    // printf("\n%0.1f %0.1f", c+d, c-d);
    // // o.1 mean rounded to one decimal place
    // int sum =0;
    // int max = sum;
    // for(int i = 0; i < 5; i++){
    //   sum = sum + i;
    //     if(sum > max)
    //         max = sum;
    // }
    // printf("%d", max);

    // return 0;
   


    // int a, b, c, d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // int ans = max_of_four(a, b, c, d);
    // printf("%d", ans);

    
    
    //  char binary[32];
    //  printf("enter binary number :  ");
    //  scanf("%s", &binary);
    
    //  if(binary[] == '0'){printf("%s", '1');}
    //  else{printf("%s", '0');}
    //program to sum of input five digit number
    //  int n,  sum =0, a;
    //  printf("enter number ");
    //  scanf("%d", &n);

    // while(n != 0){
    //     a = n % 10;
    //     sum = sum + a;
    //     n = n / 10;

    //  }
    //  printf("%d", sum);
   
    int n, k, i, j, and, or, xor;
    scanf("%d %d", &n, &k);
    for(i = 1; i <n; i++){
        for(j = i +1; j <=n; j++){
             if((i & j)< and && (i&j)<k)
        and = i & j;
    if((i | j)< and && (i|j)<k)
        or = i | j;
    if((i ^ j)< and && (i^j)<k)
        xor = i ^ j;
        }
       
      }
      printf("%d\n  %d\n %d\n", and, or, xor);
    
        return 0;
    }
    //void max(int n , int k){
    //   for(i = 1; i <n; i++){
    //     for(j = i +1; j <=n; j++)^{
    //          if((i & j)< and && (i&j)<k)
    //     and = i & j;
    // if((i | j)< and && (i|j)<k)
    //     or = i | j;
    // if((i ^ j)< and && (i^j)<k)
    //     xor = i ^ j;
    //     }
       
    //   }
    //   printf("%d\n  %d\n %d\n", and, or, xor);
    // }
       
    


// int max_of_four(int a, int b, int c, int d){
//     int max = a;
//     if(b > max)
//         max = b;
//     if(c > max)
//         max = c;
//     if(d > max)
//         max = d;
//     return max;
// }
