#include "Request.h"

Request::Request(int request_id, string destination, string passenger_name, string departure_date)
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
