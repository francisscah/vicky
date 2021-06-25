//c program to calculate area and perimeter of a rectangle
#include<stdio.h>
int main()
{
float length,width;
float area,perimeter;
printf("enter the length of the rectangle");	
scanf("%f",&length);
printf("enter the width of the rectangle");
scanf("%	f",&width);
area=length*width;
printf("area of the rectangle%f",area);
perimeter=(length+width)*2;
printf("perimeter of the rectangle%f",perimeter);
return 0;
 }
 
 
 