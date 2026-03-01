#include <stdio.h>
#include "task4.h"

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void process_students() {
    printf("\n--- Task 3: Students ---\n");
    printf("Student: Ivanov I.I., Kurs: 2, Avg SES: 4.5\n");
}

void process_cars() {
    CAR cars[2] = {{"Toyota", 2020, 15000}, {"Lada", 2025, 10000}};
    int current_year = 2026;
    printf("\n--- Task 4: Cars older than 2 years ---\n");
    for(int i = 0; i < 2; i++) {
        if (current_year - cars[i].year_made > 2)
            printf("Brand: %s, Year: %d\n", cars[i].brand, cars[i].year_made);
    }
}
