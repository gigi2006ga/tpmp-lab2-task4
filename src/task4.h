#ifndef TASK4_H
#define TASK4_H

typedef struct {
    char name[50];
    int kurs;
    int ses[5];
} STUDENT;

typedef struct {
    char brand[30];
    int year_made;
    double price;
} CAR;

int sum_digits(int n);
void process_students();
void process_cars();

#endif
