#include<stdio.h>
int main(){
int angle1,angle2,angle3;
printf("Enter the 1st angle of the tringle");
scanf("%d",&angle1);
printf("Enter the 2nd angle of thr tringle");
scanf("%d",&angle2);
angle3=180-(angle1+angle2);
printf("the 3rd angle of tringle is %d",angle3);
return 0;
}