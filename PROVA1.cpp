#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    double H = 0.0;
    for (int i = 1; i <= N; ++i) {
        H += 1.0 / i;
    }

    cout << "O valor de H com " << N << " termos é: " << H << endl;

    return 0;
}