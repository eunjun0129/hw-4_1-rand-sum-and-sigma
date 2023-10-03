#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    const int arraySize = 20;
    int x[arraySize];
    int sum = 0;
    int sigma = 0;
    for (int i = 0; i < arraySize; ++i) {
        x[i] = rand() % 100;
    }

    for (int i = 0; i < arraySize; ++i) {
        cout << x[i] << " ";
    }
    for (int i = 0; i < arraySize; ++i) {
        sum += x[i];
    }
    cout << "\n" << "평균은" << sum / arraySize << endl;
    for (int i = 0; i < arraySize; i++) {
        int sigma = (x[i] - sum / arraySize);
    }
    cout <<  "표준편차는" << sigma / (arraySize-1) << endl;
    return 0;
}
