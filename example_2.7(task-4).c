Example-2.7(task-4)

#include<stdio.h>
int main(void)
{
    float radius,area,circumference;
    float pi=3.1416;

    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    area=pi*radius*radius;
    circumference=2*pi*radius;

    printf("Circle Area is %.3f\n",area);
    printf("Circle Circumference is %.3f",circumference);

    return 0;
}
