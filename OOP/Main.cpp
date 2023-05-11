#include"menu.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string path1 = "File.txt";
	ifstream file(path1);
    if (!file.is_open()) {
        cout << "Помилка відкриття файлу!" << endl;
        return 0;
    }

    map<string, int> wordFreq;
    string word;
    while (file >> word) {
        wordFreq[word]++;
    }

    cout << "Словник:" << endl;
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    string mostFreqWord ;
    int maxFreq = 0;
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            mostFreqWord = it->first;
        }
    }

    cout << "Найбільш часто вживане слово: " << mostFreqWord << " (" << maxFreq << " разів)" << endl;

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Помилка відкриття файлу!!" << endl;
        return 0;
    }
    for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) {
        outputFile << it->first << ": " << it->second << endl;
    }

    file.close();
    outputFile.close();
    return 0;
}