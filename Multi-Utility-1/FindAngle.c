// Shree Ganeshay namah 
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input from user
    printf("Enter First Angle: ");
    scanf("%d", &angle1);
    
    printf("Enter Second Angle: ");
    scanf("%d", &angle2);

    // Formula to find the third angle
    angle3 = 180 - (angle1 + angle2);

    // Output result
    printf("Third Angle: %d\n", angle3);

return 0;
}