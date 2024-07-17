#pragma once
#include <iostream>
#include <set>
#include <algorithm>
#include "Request.h"
using namespace std;

class RequestManager
{
private:
    multiset<Request> requests;
public:
    void addRequest(const string& destination, const string& passenger_name, const string& departure_date);
    void removeRequest(int request_id);
    void printRequestsByDestination(const string& destination) const;
    void printRequestsInRange(const string& destination, const string& start_date, const string& end_date) const;
    void printAllRequests() const;

};

