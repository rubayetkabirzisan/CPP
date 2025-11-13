#include <iostream>

class Series {
public:
    int calculateSeries(int n) {
        return 0;
    }
};

class SeriesA : public Series {
public:
    int calculateSeries(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
};

class SeriesB : public Series {
public:
    int calculateSeries(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i * i;
        }
        return sum;
    }
};

class SeriesC : public Series {
public:
    int calculateSeries(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i * i * i;
        }
        return sum;
    }
};

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    SeriesA seriesA;
    int sumA = seriesA.calculateSeries(n);
    std::cout << "Series A Sum: " << sumA << std::endl;

    SeriesB seriesB;
    int sumB = seriesB.calculateSeries(n);
    std::cout << "Series B Sum: " << sumB << std::endl;

    SeriesC seriesC;
    int sumC = seriesC.calculateSeries(n);
    std::cout << "Series C Sum: " << sumC << std::endl;

    return 0;
}

