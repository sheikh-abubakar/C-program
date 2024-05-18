#include<stdio.h>
int main()
{
    int list[100];
    int search;
    int n;
    int location;
    
    printf("Enter the element you want to search in the list: ");
    scanf("%d",&search);

    printf("enter number of values: ");
    scanf("%d",&n);

    printf("enter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
        if(list[i]==search)
        {
          location=i+1;
          break;
        }
        else
        {
            location=-1;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(list[i]==search){
            count++;
        }
    }

       
        
    
       printf("Location of first %d in list is :%d",search,location);
       printf("\n%d",count);
return 0;

}