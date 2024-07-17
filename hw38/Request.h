#pragma once
#include <iostream>
#include <string>
using namespace std;

class Request
{
private:
    int counter;
    int request_id;
    string destination;
    string passenger_name;
    string departure_date;
public:
    Request(string destination, string passenger_name, string departure_date);

    int getRequestID() const;

    void setDestination(string destination);
    void setPassengerName(string passenger_name);
    void setDepatureDate(string depature_date);
    
    string getDestination() const;
    string getPassengerName() const;
    string getDepartureDate() const;

    bool operator<(const Request& other) const;
    friend ostream& operator<<(ostream& os, const Request& req);

};

