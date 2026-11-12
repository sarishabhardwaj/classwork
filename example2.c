#include <stdio.h>

// Defining the structure with a typedef alias
typedef struct Distance { 
    int feet; 
    float inch; 
} distances; 

int main() { 
    // Declaring structure variables using the alias
    distances d1, d2, sum; 

    // Input for the first distance
    printf("Enter 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    // Input for the second distance
    printf("\nEnter 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    // Adding the feet and inches components
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert excess inches into feet (12 inches = 1 foot)
    if (sum.inch >= 12.0) {
        sum.feet += (int)(sum.inch / 12.0);
        // Using a basic cast, or you can use fmod() from math.h
        sum.inch = sum.inch - ((int)(sum.inch / 12.0) * 12.0);
    }

    // Displaying the result
    printf("\nSum of distances = %d feet, %.2f inches\n", sum.feet, sum.inch);

    return 0;
}
