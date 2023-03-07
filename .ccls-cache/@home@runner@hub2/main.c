#include <stdio.h>
#define PI 3.141
int square_area(float s)
{
 return s*s;
  // int n=square

}
int circle_area(float radius)
{
  return PI*(radius*radius);
  
}
int main() {
  int ch;
  float value;
  // int store;
  printf("enter 1 for square\nentsr 2 for circle\nenter 3 for exit\n");
  while(1)
    {
      printf("\nenter you choose ");
      scanf("%d",&ch);

      if(ch==3 ||ch>4){
        printf("EXITED");
        break;
      }
      

      switch(ch){
        case 1:
              printf("enter number ");
              scanf("%f",&value);
              int store=square_area(value);
              printf("the square root of number is:%.2f is : %d",value,store);
        break; 
        case 2:
              printf("enter radius: ");
              scanf("%f",&value);
              int store2=circle_area(value);
              printf("the square root of number is:%.2f is : %d",value,store2);
        break;
        
      }

      
    }
  
}