#include "menu.h"
class BusStopSimulation {
private:
    double passengerArrivalRate;  
    double busArrivalRate;        
    bool isTerminalStop;          
    int maxCapacity;              

public:
    BusStopSimulation(double passengerRate, double busRate, bool terminal, int capacity)
        : passengerArrivalRate(passengerRate), busArrivalRate(busRate), isTerminalStop(terminal), maxCapacity(capacity) {}

    double getRandomTime(double rate) {
        return -log(1.0 - static_cast<double>(rand()) / (RAND_MAX + 1.0)) / rate;
    }

    double simulateAveragePassengerTime() {
        double totalTime = 0.0;
        int numIterations = 10000;  // Кількість ітерацій для визначення середнього часу
        srand(static_cast<unsigned>(time(0)));  // Ініціалізація генератора випадкових чисел

        for (int i = 0; i < numIterations; i++) {
            double time = getRandomTime(passengerArrivalRate);
            totalTime += time;
        }

        return totalTime / numIterations;
    }

    double getSafeInterval(int maxCapacity, double passengerArrivalRate) {
        return maxCapacity / passengerArrivalRate;
    }
};

class PrintRequest {
private:
    string user;
    int priority;
    time_t timestamp;

public:
    PrintRequest(const std::string& usr, int prio) : user(usr), priority(prio), timestamp(time(nullptr)) {}

    std::string getUser() const {
        return user;
    }

    int getPriority() const {
        return priority;
    }

    time_t getTimestamp() const {
        return timestamp;
    }
};

class PrinterQueue {
private:
    queue<PrintRequest> printQueue;
    queue<PrintRequest> printHistory;

public:
    void addPrintRequest(const PrintRequest& request) {
        printQueue.push(request);
    }

    void processPrintQueue() {
        while (!printQueue.empty()) {
            PrintRequest request = printQueue.front();
            printQueue.pop();

            // Simulate printing
            std::cout << "Printing request: User = " << request.getUser() << ", Priority = " << request.getPriority()
                << ", Time = " << ctime(&request.getTimestamp());

            // Add request to print history
            printHistory.push(request);
        }
    }

    void printStatistics() const {
        std::cout << "Print History:" << std::endl;
        while (!printHistory.empty()) {
            PrintRequest request = printHistory.front();
            printHistory.pop();

            std::cout << "User = " << request.getUser() << ", Priority = " << request.getPriority()
                << ", Time = " << ctime(&request.getTimestamp());
        }
    }
};

