#include <stdio.h>

#define PI 3.1415
#define Area_Circle(r) (PI*r*r)

int main(void){
float area = Area_Circle(10);
printf("%.2f",area);

return 0;
}