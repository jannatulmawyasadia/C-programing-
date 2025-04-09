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
    int choice, value, index;

    while (1) {
    
        printf("\n------ MENU ------\n");
        printf("1. Insert a number (at end)\n");
        printf("2. Update a number (by index)\n");
        printf("3. Delete a number (by index)\n");
        printf("4. Search a number\n");
        printf("5. Find largest and smallest\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // Insert
                if (n >= 100) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter number to insert: ");
                    scanf("%d", &value);
                    arr[n] = value;
                    n++;
                    printf("Number inserted at end.\n");
                }
                break;

            case 2: // Update
                printf("Enter index to update (0 to %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[index] = value;
                    printf("Number updated.\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 3: // Delete
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Number deleted.\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 4: // Search
                printf("Enter number to search: ");
                scanf("%d", &value);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Number found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Number not found.\n");
                }
                break;

            case 5: // Largest and Smallest
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Largest = %d, Smallest = %d\n", max, min);
                }
                break;

            case 6: // Exit
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }

      
        if (n > 0) {
            printf("Current array: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else {
            printf("Array is empty.\n");
        }
    }

    return 0;
}