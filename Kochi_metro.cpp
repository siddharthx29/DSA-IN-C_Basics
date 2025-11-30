#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

// Structure for passenger details
struct Passenger {
    char name[50];
    int age;
    char source[30];
    char destination[30];
    float fare;
};

// Kochi Metro Stations
char stations[][30] = {
    "Aluva", "Pulinchodu", "Companypady", "Ambattukavu",
    "Muttom", "Kalamassery", "Cusat", "Pathadipalam",
    "Edappally", "Changampuzha Park", "Palarivattom", "JLN Stadium",
    "Kaloor", "Town Hall", "M.G. Road", "Maharaja's College",
    "Ernakulam South", "Kadavanthra", "Elamkulam", "Vyttila",
    "Thaikoodam", "Petta"
};
int totalStations = 22;

// Function to show stations
void showStations() {
    printf("\n--- Kochi Metro Stations ---\n");
    for (int i = 0; i < totalStations; i++) {
        printf("%2d. %s\n", i + 1, stations[i]);
    }
}

// Function to calculate fare
float calculateFare(int srcIndex, int destIndex) {
    int distance = abs(destIndex - srcIndex);
    float fare = 10 + (distance * 5);  // Base 10 + ?5 per station
    return fare;
}

// Function to print and save ticket
void printTicket(struct Passenger p) {
    FILE *fp;
    fp = fopen("ticket.txt", "a"); // append mode to store multiple tickets
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "\n------------------------------\n");
    fprintf(fp, "     Kochi Metro Ticket\n");
    fprintf(fp, "------------------------------\n");
    fprintf(fp, "Passenger Name : %s\n", p.name);
    fprintf(fp, "Age            : %d\n", p.age);
    fprintf(fp, "From           : %s\n", p.source);
    fprintf(fp, "To             : %s\n", p.destination);
    fprintf(fp, "Fare           : ?%.2f\n", p.fare);
    fprintf(fp, "------------------------------\n\n");

    fclose(fp);

    printf("\n? Ticket saved successfully to 'ticket.txt'!\n");
}

// Function to book ticket
void bookTicket() {
    struct Passenger p;
    int src, dest;

    printf("\nEnter passenger name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);

    showStations();
    printf("\nEnter source station number: ");
    scanf("%d", &src);
    printf("Enter destination station number: ");
    scanf("%d", &dest);

    if (src < 1 || dest < 1 || src > totalStations || dest > totalStations) {
        printf("Invalid station numbers.\n");
        return;
    }

    strcpy(p.source, stations[src - 1]);
    strcpy(p.destination, stations[dest - 1]);
    p.fare = calculateFare(src - 1, dest - 1);

    printf("\n--- Ticket Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("From: %s\n", p.source);
    printf("To: %s\n", p.destination);
    printf("Fare: ?%.2f\n", p.fare);
    printf("------------------------\n");

    // Save to file
    printTicket(p);
}

// Main menu
int main() {
    int choice;

    while (1) {
        printf("\n====== Kochi Metro Ticket Booking System ======\n");
        printf("1. View Stations\n");
        printf("2. Book Ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showStations();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                printf("\nThank you for using Kochi Metro ??\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

