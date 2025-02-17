#include <stdio.h>

void generateSeries(int terms) {
    int series[terms];
    series[0] = 0; // First term

    int diff = 5;  // First difference
    int alt = -2;  // Alternating increment

    printf("%d", series[0]);

    for (int i = 1; i < terms; i++) {
        series[i] = series[i - 1] + diff;
        printf(", %d", series[i]);

        diff += alt; // Update the difference
        alt = (alt == -2) ? 6 : -2; // Alternate between -2 and 6
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    generateSeries(n);

    return 0;
}
