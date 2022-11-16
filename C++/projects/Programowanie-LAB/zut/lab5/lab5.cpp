#include <iostream>

using namespace std;
// can make a program to put all of the text into arrays and put inside the functions and template

// PĘTLE


int num1, num2, num3;
int * addresses[3] = {&num1,&num2, &num3};

int * dodatnie_liczby(int var_num) {
    if (var_num == 3) {
        while (true) {
            cout << "Enter 3 positive integers" << endl;
            cin >> num1;
            if (num1 < 0) {
                continue;
            }
            else {
                cin >> num2;
            }    
            if (num2 < 0) { 
                continue;
            }
            else {
                cin >> num3;
            }
            if (num3 < 0) {
                continue;
            }
            else {
                break;
            }
        }
        printf("\n");
        return  addresses[3];
    }
    
    if (var_num == 2) {
        while (true) {
            cout << "Enter 2 positive integers" << endl;
            cin >> num1;
            if (num1 < 0) {
                continue;
            }
            else {
                cin >> num2;
            }

            if (num2 < 0) {
                continue;
            }
            else {
                break;
            }
        }
        printf("\n");
        return  addresses[2];
    }
    if (var_num == 1) {
        while (true) {
            cout << "Enter 1 positive integer" << endl;
            cin >> num1;
            if (num1 < 0) {
                continue;
            }
            else {
                break;
            }
        }
        printf("\n");
        return  addresses[1];
    }
}
// 1. Napisz program wczytujący ze standardowego wejścia
// dwie dodatnie liczby całkowite n i m, i wypisujący w
// kolejnych wierszach na standardowym wyjściu wszystkie
// dodatnie wielokrotności n mniejsze od m.
void zad1() {
    int multiplied_num= *addresses[0];
    int max = *addresses[1];
    for (int i = 1;multiplied_num*i<max;i++) {
        cout << multiplied_num*i<< endl;
    }
}

// 2. Napisz program wczytujący ze standardowego wejścia dwie dodatnie
// liczby całkowite n i m, i wypisujący na
// standardowym wyjściu m pierwszych wielokrotności liczby n.
void zad2() {
    dodatnie_liczby(2);
    int multiplied_num= *addresses[0];
    int number_of_multiples = *addresses[1];

    printf("\n");
        for (int i = 1; i <= number_of_multiples; i++) {
            cout << multiplied_num*i << endl;
        }
}


// 3. Napisz program wczytujący ze standardowego wejścia trzy dodatnie liczby całkowite n, m i k, i wypisujący w
// kolejnych wierszach wszystkie wielokrotności n większe od m i mniejsze od k.

void zad3() {
    dodatnie_liczby(3);
    int n = *addresses[0];
    int min = *addresses[1];
    int max = *addresses[2];

    for (int i=1; n*i< max; i++) {
        if (n*i > min && n*i < max) {
            cout << n*i << endl;
        }
    }
}
// 4. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu liczbę n!.
void zad4(){
    dodatnie_liczby(1);
    int factiorial_num = *addresses[0];
    int factorial = 1;
    for (int i=1; i<=factiorial_num ;i++) {
        factorial *=i ;
    }
    cout << factorial << endl;
}
// 5. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu sumę kwadratów liczb od 0 do n, czyli wartość 02 + 12 + 32 + ... + n2.
void zad5(){
    dodatnie_liczby(1);
    int number_of_squares= *addresses[0];
    int sum_of_squares = 0;
    for (int i=1; i<=number_of_squares ;i++) {
        sum_of_squares+= i*i;
    }
    cout << sum_of_squares << endl;
}
// 6. Napisz program, który wczytuje ze standardowego 
// wejścia liczbę całkowitą n (n > 2) i wypisuje na
// standardowym wyjściu iloczyn liczb parzystych
// z zakresu od 2 do n (czyli 2 ∗ 4 ∗ . . . ∗ n dla n parzystych i 2 ∗
// 4 ∗ . . . ∗ (n − 1) w przeciwnym wypadku).
void zad6(){
    dodatnie_liczby(1);
    int max = *addresses[0];
    int result = 2;
    for (int i=2; i<=max; i=i+2) {
        result *= i; 
    }
    if (max % 2 == 1) {
        result*= max;
        cout << result << endl;
    }
    else {
        cout << result << endl;
    }
}
// 7. Napisz program, który wczytuje ze standardowego wejścia dwie liczby całkowite n i m (zakładamy, że n < m)
// i wypisuje na standardowym wyjściu liczbę n ∗ . . . ∗ m.
void zad7(){
    
}
// 8. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu element ciągu Fibonacciego o indeksie n.
void zad8(){
    
}
// 9. Napisz program, który wczytuje ze standardowego wejścia dodatnie liczby całkowite n i m, i wypisuje na
// standardowym wyjściu największy wspólny dzielnik tych liczb.
void zad9(){
    
}
// 10. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę n i wypisuje na standardowym
// wyjściu wartość ⌊√n⌋ (wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej). Program
// napisz bez użycia funkcji z biblioteki matematycznej.
void zad10(){
    
}
// 11. Napisz program, który wczytuje ze standardowego wejścia liczby a, b, c, d i:
// a. wypisuje na standardowe wyjście najmniejszą nieujemną liczbę całkowitą x taką, że |a| ∗ x2 + b ∗ x + c >
// d.
// b. wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą x taką, że 5∗x2+a∗x+b < c.
// Zakładamy, że taka nieujemna całkowita liczba x istnieje.
// c. wypisuje na standardowe wyjście największą nieujemną liczbę całkowitą x taką, że 5∗x2+a∗x+b ≤ c.
// Zakładamy, że taka nieujemna całkowita liczba x istnieje.
void zad11(){
    
}
// 12. Napisz program, który wczytuje ze standardowego wejścia dodatnią liczbę n i wypisuje na standardowym
// wyjściu sumę wszystkich liczb mniejszych od n, względnie pierwszych z n.
void zad12(){
    
}
// 13. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu wartość 0! + 1! + . . . + n!.
void zad13(){
    
}
// 14. Napisz program, który wczytuje ze standardowego wejścia liczbę n i wypisuje na standardowym wyjściu
// wszystkie trojki pitagorejskie (tj. trojki liczb całkowitych a, b, c takich, że a2 +b2 = c2), składające się z liczb
// mniejszych od n.
void zad14(){
    
}
int main(){
    // Zad 1
    printf("Zad.1\n");
    dodatnie_liczby(2);
    zad1();

    // Zad 2
    printf("\nZad.2\n");
    zad2();

    // Zad 3
    printf("Zad.3\n");
    zad3();
    
    // Zad 4
    printf("Zad.4\n");
    zad4();
    
    // Zad 5
    printf("Zad.5\n");
    zad5();
    
    // Zad 6
    printf("Zad.6\n");
    zad6();
    
    // Zad 7
    printf("Zad.7\n");
    zad7();
    
    // Zad 8
    printf("Zad.8\n");
    zad8();
    
    // Zad 9
    printf("Zad.9\n");
    zad9();
    
    // Zad 10
    printf("Zad.10\n");
    zad10();
    
    // Zad 11
    printf("Zad.11\n");
    zad11();
    
    // Zad 12
    printf("Zad.12\n");
    zad12();
    
    // Zad 13
    printf("Zad.13\n");
    zad13();
    
    // Zad 14
    printf("Zad.14\n");
    zad14();
}



 