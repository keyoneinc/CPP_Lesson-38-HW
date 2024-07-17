#include "Request.h"

Request::Request(string destination, string passenger_name, string departure_date)
{
    this->request_id = ++counter;
    this->destination = destination;
    this->passenger_name = passenger_name;
    this->departure_date = departure_date;

}

int Request::getRequestID() const
{
    return request_id;
}

void Request::setDestination(string destination)
{
    this->destination = destination;
}

void Request::setPassengerName(string passenger_name)
{
    this->passenger_name = passenger_name;
}

void Request::setDepatureDate(string depature_date)
{
    this->departure_date = depature_date;
}

string Request::getDestination() const
{
    return destination;
}

string Request::getPassengerName() const
{
    return passenger_name;
}

string Request::getDepartureDate() const
{
    return departure_date;
}

bool Request::operator<(const Request& other) const
{
    if (destination != other.destination)
        return destination < other.destination;
    return departure_date < other.departure_date;
}

ostream& operator<<(ostream& os, const Request& req)
{
    os << "Request ID: " << req.request_id << ", Destination: " << req.destination
        << ", Passenger: " << req.passenger_name << ", Departure Date: " << req.departure_date;
    return os;
}
