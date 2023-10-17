#include<stdio.h>
int main() 
{ 
 int m1, m2, m3, m4, m5, per ;
 label: 
 printf ( "Enter marks in five subjects \n" ) ; 
 scanf ( "%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 ) ; 
 per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;
 if ( per >= 60 ) 
 printf ( "First division \n") ; 
 else 
 { 
 if ( per >= 50 && per <60 ) 
 printf ( "Second division \n") ; 
 else 
 { 
 if ( per >= 40 && per <50) 
 printf ( "Third division \n") ; 
 else 
 printf ( "Fail\n" ) ; 
 } 
 }
 goto label; 
} 