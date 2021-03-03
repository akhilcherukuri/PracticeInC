#include <stdio.h>

#define PI 3.1415
#define Area_Circle(r) (PI*r*r)

int main(void){
float area = Area_Circle(10);
printf("Area_Circle = %.2f \n",area);
printf("Current time: %s \n",__TIME__);

return 0;
}