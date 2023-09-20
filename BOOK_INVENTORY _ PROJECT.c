#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    double price;
};


void addBook(struct Book inventory[], int *count) {
    if (*count >= 100) {
        printf("Inventory is full. Cannot add more books.\n");
        return;
    }

    struct Book newBook;
    printf("Enter book title: ");
    scanf(" %[^\n]", newBook.title);
    printf("Enter author name: ");
    scanf(" %[^\n]", newBook.author);
    printf("Enter price: ");
    scanf("%lf", &newBook.price);

    inventory[*count] = newBook;
    (*count)++;
    printf("Book added to inventory.\n");
}


void viewInventory(struct Book inventory[], int count) {
    if (count == 0) {
        printf("Inventory is empty.\n");
        return;
    }

    printf("Inventory:\n");
    for (int i = 0; i < count; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", inventory[i].title);
        printf("Author: %s\n", inventory[i].author);
        printf("Price: $%.2lf\n", inventory[i].price);
        printf("\n");
    }
}


void removeBook(struct Book inventory[], int *count, int index) {
    if (index < 0 || index >= *count) {
        printf("Invalid book index.\n");
        return;
    }

    for (int i = index; i < *count - 1; i++) {
        inventory[i] = inventory[i + 1];
    }

    (*count)--;
    printf("Book removed from inventory.\n");
}

int main() {
    struct Book inventory[100];
    int count = 0;

    while (1) {
        printf("\nOptions:\n");
        printf("1. Add a book\n");
        printf("2. View inventory\n");
        printf("3. Remove a book\n");
        printf("4. Quit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(inventory, &count);
                break;
            case 2:
                viewInventory(inventory, count);
                break;
            case 3:
                if (count == 0) {
                    printf("Inventory is empty. Cannot remove a book.\n");
                } else {
                    int index;
                    printf("Enter the index of the book to remove: ");
                    scanf("%d", &index);
                    removeBook(inventory, &count, index - 1);
                }
                break;
            case 4:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
