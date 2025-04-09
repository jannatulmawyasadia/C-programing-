/*
Project name : Array Multiplication
Creating date : 31/03/2025
Created by : Jannatul Mawya Sadia
Student ID : 0182420012101239
GitHub ID :
Course Instructor : Md. Jehadul Islam Mony
Department : Computer Science & Engineering
Institution : Leading University,Sylhet
/*
#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice, value, old_value, new_value, i, j, found;

    while (1) {
        printf("\n------ MENU ------\n");
        printf("1. Insert a number\n");
        printf("2. Update a number (by value)\n");
        printf("3. Delete a number (by value)\n");
        printf("4. Search a number\n");
        printf("5. Find largest and smallest\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: 
                if (n >= 100) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter number to insert: ");
                    scanf("%d", &value);
                    arr[n] = value;
                    n++;
                    printf("Number inserted.\n");
                }
                break;

            case 2:
                printf("Enter the number you want to update: ");
                scanf("%d", &old_value);
                printf("Enter the new value: ");
                scanf("%d", &new_value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == old_value) {
                        arr[i] = new_value;
                        found = 1;
                        printf("Number updated.\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Number not found to update.\n");
                }
                break;

            case 3: 
                printf("Enter the number to delete: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        for (j = i; j < n - 1; j++) {
                            arr[j] = arr[j + 1];
                        }
                        n--;
                        found = 1;
                        printf("Number deleted.\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Number not found to delete.\n");
                }
                break;

            case 4: 
                printf("Enter number to search: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Number found at position %d (index %d)\n", i + 1, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Number not found.\n");
                }
                break;

            case 5: 
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    int max = arr[0], min = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Largest = %d, Smallest = %d\n", max, min);
                }
                break;

            case 6: 
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }

        // Show array
        if (n > 0) {
            printf("Current array: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else {
            printf("Array is empty.\n");
        }
    }

    return 0;
}