#include"Classes.h"

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    Menu* menu = new Menu;
    menu->Vmenu();
    char switch_on;
    do
    {
        switch_on = _getch();
        switch (switch_on)
        {
        case '1': {
            double passengerArrivalRate = 0.2;
            double busArrivalRate = 0.1;
            bool isTerminalStop = true;
            int maxCapacity = 30;

            BusStopSimulation simulation(passengerArrivalRate, busArrivalRate, isTerminalStop, maxCapacity);

            double averagePassengerTime = simulation.simulateAveragePassengerTime();
            std::cout << "Average passenger time: " << averagePassengerTime << std::endl;

            double safeInterval = simulation.getSafeInterval(maxCapacity, passengerArrivalRate);
            std::cout << "Safe interval between buses: " << safeInterval << std::endl;

        }break;
        case '2':{

            PrinterQueue printer;
            printer.addPrintRequest(PrintRequest("User1", 2));
            printer.addPrintRequest(PrintRequest("User2", 1));
            printer.addPrintRequest(PrintRequest("User3", 3));
            printer.addPrintRequest(PrintRequest("User4", 2));
            printer.addPrintRequest(PrintRequest("User5", 3));

            printer.processPrintQueue();

            printer.printStatistics();

            }break;
        default:
            break;
        }

    } while (switch_on != '0');
    
    return 0;
}