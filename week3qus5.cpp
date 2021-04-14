#include <stdio.h> 
#include <math.h> 
int reverse (int ); 
int ispalindrome (int num); 
int main() 
{
  int num; 
  printf("enter any number:"); 
  if(ispalindrome(num)==1)  
  {
   printf("%d is palindrome number.\n", num) ; 
} 
else 
{
  printf("%d is not palindrome number .\n,num"); 
} 

 return 0 ; 
} 
 
 int ispalindrome (int num) 
 {
  
  
  if(num==reverse(num)) 
  {
  return 1 ;
} 
return 0; 
}

  
