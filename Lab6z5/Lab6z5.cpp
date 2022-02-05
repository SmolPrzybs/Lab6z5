#include <iostream>

void potega(int* wsk_a, int* wsk_b, int* wsk_c) {
    for (int i = 1; i < *wsk_b; i++) {
        *wsk_a *= *wsk_c;
    }
}

int main()
{
    int a, b, c;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    cout << "Podaj jej potege" << endl;
    cin >> b;

    c = a;

    int* wsk_a = &a;
    int* wsk_b = &b;
    int* wsk_c = &c;

    potega(wsk_a, wsk_b, wsk_c);

    cout << "wynik potegowania to: " << *wsk_a;
}