#include<stdio.h> 
 void main() 
 { 
     int n, a, b, c; 
     printf("Enter a Number:\n"); 
     scanf("%d", &n); 
         a=0; 
         b=1; 
         c=a+b; 
  
     while(c<n) 
     { 
         a=b; 
         b=c; 
         c=a+b; 
     } 
     if (c==n) 
         printf("Enterd number is fibonacci"); 
     else 
         printf("Entered number is not fibonacci"); 
 } 
