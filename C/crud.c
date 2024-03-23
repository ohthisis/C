#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the data
struct Record {
    int id;
    char name[50];
    int age;
};

// Function to create a new record
void createRecord(struct Record *records, int *count) {
    printf("Enter name: ");
    scanf("%s", records[*count].name);
    printf("Enter age: ");
    scanf("%d", &records[*count].age);
    records[*count].id = *count + 1;
    (*count)++;
}

// Function to read/display all records
void readRecords(struct Record *records, int count) {
    printf("ID\tName\tAge\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\n", records[i].id, records[i].name, records[i].age);
    }
}

// Function to update a record by ID
void updateRecord(struct Record *records, int count) {
    int id, found = 0;
    printf("Enter ID of record to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            printf("Enter updated name: ");
            scanf("%s", records[i].name);
            printf("Enter updated age: ");
            scanf("%d", &records[i].age);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Record not found!\n");
    }
}

// Function to delete a record by ID
void deleteRecord(struct Record *records, int *count) {
    int id, found = 0;
    printf("Enter ID of record to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (records[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                records[j] = records[j + 1];
            }
            (*count)--;
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Record not found!\n");
    }
}

int main() {
    struct Record records[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Create\n2. Read\n3. Update\n4. Delete\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createRecord(records, &count);
                break;
            case 2:
                readRecords(records, count);
                break;
            case 3:
                updateRecord(records, count);
                break;
            case 4:
                deleteRecord(records, &count);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
