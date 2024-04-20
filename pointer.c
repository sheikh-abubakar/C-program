#include <stdio.h>
// void sq(int n);
// void _sq(int *n);
void swap(int a, int b);
int main(){
    //Pointers these are variables that store address of other variable
    // syntax
    // int age =a;
    // int *file = &age;
    // int_age = *file;
    // printf("%p", &age);
    // printf("%p", file);
    // printf("%p", &*file);
    // to print value of pointer we use %d and astaric with pointer bcz * mean value at pinter
    // int age =22;
    // int *ptr = &age;
    // printf("%p\n", &age);
    // printf("%u\n", ptr);
    // printf("%u\n", &age);
    // printf("%u\n", &ptr);
    // printf("%d\n", *ptr );
    // //OR
    // printf("%d\n", *(&age));
    //u is unsigned integer
    // int x;
    // int *ptr;
    // ptr = &x;
    // *ptr = 1;
    // printf("x = %d\n", x);
    // printf("ptr = %d\n", *ptr);
    // *ptr += 3;
    // printf("x = %d\n", x);
    // printf("ptr = %d\n", *ptr);
    // (*ptr)++;
    // printf("x = %d\n", x);
    // printf("ptr = %d\n", *ptr);
//From pointer to pointer
// int i = 5;
// int *ptr = &i;
// int **pptr = &ptr;
// printf("Value of i = %d\n", i);
// printf("Value available at ptr = %d\n", *ptr);
// printf("Value available at pptr = %d\n", **pptr);
    // int number = 4;
    // sq(number);
    // printf("%d\n", number);
    // _sq(&number);
    // printf("number is %d\n",number );
   int x =3 ;
   int y= 4;
   swap(x,y);
   printf("x = %d y = %d\n", x, y);
   
    return 0;
}// swap
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d b = %d", a, b);

}
//cal by value
// void sq(int n){
//     n = n*n;
//     printf(" square : %d\n", n);
//     }
//     //call by refernce 
//     void _sq(int *n){
//         *n = (*n) * (*n);
//         printf("square = %d\n", *n);
    