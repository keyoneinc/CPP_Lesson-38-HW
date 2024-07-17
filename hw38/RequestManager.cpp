#include "RequestManager.h"

void RequestManager::addRequest(const string& destination, const string& passenger_name, const string& departure_date)
{
	requests.insert(Request(destination, passenger_name, departure_date));
}

void RequestManager::removeRequest(int request_id)
{
    auto it = find_if(requests.begin(), requests.end(), [request_id](const Request& req) {
        return req.getRequestID() == request_id;
        });
    if (it != requests.end()) {
        requests.erase(it);
        cout << "Request #" << request_id << " removed successfully.\n";
    }
    else {
        cout << "Request #" << request_id << " not found.\n";
    }
}

void RequestManager::printRequestsByDestination(const string& destination) const
{
    bool found = false;
    for (const auto& req : requests) {
        if (req.getDestination() == destination) {
            cout << req << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No requests found for destination: " << destination << "\n";
    }
}

void RequestManager::printRequestsInRange(const string& destination, const string& start_date, const string& end_date) const
{
    bool found = false;
    for (const auto& req : requests) {
        if (req.getDestination() == destination && req.getDepartureDate() >= start_date && req.getDepartureDate() <= end_date) {
            cout << req << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No requests found for destination: " << destination << " in the specified date range.\n";
    }
}

void RequestManager::printAllRequests() const
{
    if (requests.empty()) {
        cout << "No requests available.\n";
    }
    else {
        for (const auto& req : requests) {
            cout << req << "\n";
        }
    }
}
