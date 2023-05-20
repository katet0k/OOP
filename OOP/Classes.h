#include "menu.h"
class LambdaSort
{
public:
    LambdaSort(const std::vector<int>& data) : m_data(data) {}

    void sortAscending()
    {
        std::sort(m_data.begin(), m_data.end(), [](int a, int b) {
            return a < b;
            });
    }

    void sortDescending()
    {
        std::sort(m_data.begin(), m_data.end(), [](int a, int b) {
            return a > b;
            });
    }

    void printData() const
    {
        for (const auto& value : m_data) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> m_data;
};
