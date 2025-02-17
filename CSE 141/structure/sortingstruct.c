#include <stdio.h>

struct Student {
    int student_id;
    float cgpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %f", &students[i].student_id, &students[i].cgpa);
    }

    // Bubble sort based on cgpa in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].cgpa > students[j + 1].cgpa) {
                // Swap the students if their cgpa is in the wrong order
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Print the sorted student IDs based on cgpa
    for (int i = 0; i < n; i++) {
        printf("%d\n", students[i].student_id);
    }

    return 0;
}
