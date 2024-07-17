#include <iostream>
#include <string>
#include "RequestManager.h"
using namespace std;

int main() {
    RequestManager manager;
    int choice;
    string destination, passenger_name, departure_date, start_date, end_date;
    int request_id;

    do {
        cout << "\nMenu:\n"
            << "1. Add Request\n"
            << "2. Remove Request\n"
            << "3. Print Requests by Destination\n"
            << "4. Print Requests in Date Range\n"
            << "5. Print All Requests\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter destination: ";
            cin >> destination;
            cout << "Enter passenger name: ";
            cin >> passenger_name;
            cout << "Enter departure date: ";
            cin >> departure_date;
            manager.addRequest(destination, passenger_name, departure_date);
            break;

        case 2:
            cout << "Enter request ID to remove: ";
            cin >> request_id;
            manager.removeRequest(request_id);
            break;

        case 3:
            cout << "Enter destination: ";
            cin >> destination;
            manager.printRequestsByDestination(destination);
            break;

        case 4:
            cout << "Enter destination: ";
            cin >> destination;
            cout << "Enter start date: ";
            cin >> start_date;
            cout << "Enter end date: ";
            cin >> end_date;
            manager.printRequestsInRange(destination, start_date, end_date);
            break;

        case 5:
            manager.printAllRequests();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;


}
