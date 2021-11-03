#if defined(POL) && defined(ENG)
#error Please define at least one of the language
#elif !(defined(POL)|| defined(ENG))
#warning please define a languge between ENG/POL
#endif

#include <iostream>
using namespace std;
int main() {
    int number, sum = 0, container;
    int maxVal = 0, val, maxSum = 0;

#ifdef POL
    cout << " POL wprowadz liczby naturalne (0 jesli gotowe): ", cin >> number;
#elif defined(ENG)
    cout << " ENG enter a natural number (0 if done): ", cin >> number;
#endif

    while (number != 0) {
        val = number;

        while (number > 0) {
            container = number % 10;
            sum += container;
            number /= 10;

        }
        if (sum > maxSum) {
            maxSum = sum;
            maxVal = val;
        }

        sum = 0;

#ifdef POL
        cout << " POL wprowadz liczby naturalne (0 jesli gotowe): ", cin >> number;
#elif defined(ENG)
        cout << " ENG enter a natural number (0 if done): ", cin >> number;
#endif


    }
  cout << "Max sum of digits was " << maxSum << " for " << maxVal;
    return 0;
}
