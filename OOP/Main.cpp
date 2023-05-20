#include"menu.h"

void performWork(int id)
{
    std::cout << "Thread " << id << " is performing work." << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    Menu* menu = new Menu;

    const int numThreads = 4;
    std::vector<std::thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(performWork, i);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    std::cout << "All threads have completed their work." << std::endl;

    return 0;
}
