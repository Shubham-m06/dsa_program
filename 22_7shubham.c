#include<stdio.h> 
  
 /* STRUCTURE OF TIME */ 
 struct time 
 { 
     int hr; 
     int min; 
     int sec; 
 }; 
  
 void main() 
 { 
     /* INPUT OF FIRST TIME */ 
     struct time t1; 
         printf("Enter 1st time values:\n"); 
         printf("Enter the hours:"); 
         scanf("%d", &t1.hr); 
  
         printf("Enter the minutes:"); 
         scanf("%d", &t1.min); 
         printf("Enter the seconds:"); 
         scanf("%d", &t1.sec); 
         printf("\n\n"); 
  
     /* INPUT OF SECOND TIME */ 
     struct time t2; 
         printf("Enter 1st time values:\n"); 
         printf("Enter the hours:"); 
         scanf("%d", &t2.hr); 
  
         printf("Enter the minutes:"); 
         scanf("%d", &t2.min); 
         printf("Enter the seconds:"); 
         scanf("%d", &t2.sec); 
         printf("\n\n"); 
  
     /* CODE OF ADDITION OF TIMES */ 
     /* ADDITION OF SECONDS */ 
         t1.sec+=t2.sec; 
         if(t1.sec>60) 
         { 
             t1.sec-=60; 
             t1.min++; 
         } 
     /* ADDITION OF MINUTES */ 
         t1.min+=t2.min; 
         if(t1.min>60) 
         { 
             t1.min-=60; 
             t1.hr++; 
         } 
  
 }
