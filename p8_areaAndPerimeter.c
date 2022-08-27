// 8. Program to find area and perimeter of a rectangle.
#include <stdio.h> 
/* height and width of a rectangle in inches */

int main() {

    int width;          
    int height;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    int area;           
    int perimeter;      

	height = 7;
	width = 5;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}
