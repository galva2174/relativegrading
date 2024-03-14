#include <stdio.h>

// Function to calculate total marks out of 100
int calculateTotalMarks(int isaMarks, int esaMarks) {
    return isaMarks + esaMarks;
}

int main() {
    int numStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Initialize variables for lower thresholds
    int lowerThresholdS = 90;
    int lowerThresholdA = 80;
    int lowerThresholdB = 70;
    int lowerThresholdC = 60;
    int lowerThresholdD = 50;
    int lowerThresholdE = 40;

    // Process each student
    for (int i = 0; i < numStudents; i++) {
        int isaMarks, esaMarks;
        char actualGrade;

        // Input ISA marks, ESA marks, and actual grade
        printf("\nEnter ISA marks (out of 50) for student %d: ", i + 1);
        scanf("%d", &isaMarks);

        printf("Enter ESA marks (out of 50) for student %d: ", i + 1);
        scanf("%d", &esaMarks);

        printf("Enter the actual grade (S, A, B, C, D, E, F) for student %d: ", i + 1);
        scanf(" %c", &actualGrade);

        // Calculate total marks and predicted grade
        int totalMarks = calculateTotalMarks(isaMarks, esaMarks);
        

        // Adjust lower thresholds based on the difference between actual and predicted grades
        if (actualGrade == 'S' && totalMarks < 90) {
            lowerThresholdS = totalMarks;
        } else if (actualGrade == 'A' && totalMarks < 80) {
            lowerThresholdA = totalMarks;
        } else if (actualGrade == 'B' && totalMarks < 70) {
            lowerThresholdB = totalMarks;
        } else if (actualGrade == 'C' && totalMarks < 60) {
            lowerThresholdC = totalMarks;
        } else if (actualGrade == 'D' && totalMarks < 50) {
            lowerThresholdD = totalMarks;
        } else if (actualGrade == 'E' && totalMarks < 40) {
            lowerThresholdE = totalMarks2
        ;
        }
    }

    // Output the adjusted lower thresholds
    printf("\nAdjusted Lower Thresholds for Grading:\n");
    printf("S: %d\n", lowerThresholdS);
    printf("A: %d\n", lowerThresholdA);
    printf("B: %d\n", lowerThresholdB);
    printf("C: %d\n", lowerThresholdC);
    printf("D: %d\n", lowerThresholdD);
    printf("E: %d\n", lowerThresholdE);

    return 0; // Exit successfully
}
