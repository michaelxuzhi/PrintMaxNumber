#include <stdio.h> 
#include <limits.h> 
int main() 
{ 
int a[10], i, min=INT_MAX, max=INT_MIN, sum = 0; 
for (i = 0; i < 10 ; i++) 
{ 
scanf("%d", a + i); 
if (min > a[i]) min = a[i]; 
if (max < a[i]) max = a[i]; 
sum += a[i]; 
} 
printf("average = %lf\n", sum/10); 
printf("max:%f,min:%f,average:%f",max,min,sum/10);
return 0;  
                                                 
}
