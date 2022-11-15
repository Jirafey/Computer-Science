#include <iostream>

using namespace std;
// can make a program to put all of the text into arrays and put inside the functions and template

// PĘTLE

// 1. Napisz program wczytujący ze standardowego wejścia dwie dodatnie liczby całkowite n i m, i wypisujący w
// kolejnych wierszach na standardowym wyjściu wszystkie dodatnie wielokrotności n mniejsze od m.
int n, m;
int * addresses[2] = {&n,&m};

int * zad1(){
    
    
    

    while (true) {
    cout << "Enter 2 positive integers" << endl;
    cin >> n;
    if (n < 0) continue;
    cin >> m;
    if (m < 0) continue;
    break; 
    }
    return  addresses[2];
}
int zad1_2()
    {
    int n, m;
    for (n;n<m;n++){
        if (m%n == 0){

            cout << n<< endl;
        }
        }

    }

// 2. Napisz program wczytujący ze standardowego wejścia dwie dodatnie liczby całkowite n i m, i wypisujący na
// standardowym wyjściu m pierwszych wielokrotności liczby n.
void zad2(){
    zad1();

    printf("%d\n", *addresses[0]);
    cout << (*addresses[1]) << endl;
    // cout << (zad1()[0],zad1()[1]) <<endl;
    for (*addresses[0];*addresses[1]<*addresses[0];*addresses[1]++){
        // 24 n
        // 3 m
        if (*addresses[0]%*addresses[1] == 0){
            cout << *addresses[0] << endl;
        }
    }
}
// 3. Napisz program wczytujący ze standardowego wejścia trzy dodatnie liczby całkowite n, m i k, i wypisujący w
// kolejnych wierszach wszystkie wielokrotności n większe od m i mniejsze od k.

void zad3(){
    
}
// 4. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu liczbę n!.
void zad4(){
    
}
// 5. Napisz program, który wczytuje ze standardowego wejścia nieujemną liczbę całkowitą n i wypisuje na
// standardowym wyjściu sumę kwadratów liczb od 0 do n, czyli wartość 02 + 12 + 32 + ... + n2.
void zad5(){
    
}
// 6. Napisz program, który wczytuje ze standardowego wejścia liczbę całkowitą n (n > 2) i wypisuje na
// standardowym wyjściu iloczyn liczb parzystych z zakresu od 2 do n (czyli 2 ∗ 4 ∗ . . . ∗ n dla n parzystych i 2 ∗
// 4 ∗ . . . ∗ (n − 1) w przeciwnym wypadku).
void zad6(){
    
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
    // zad1();
    // printf("Zad.1\n");
    
    printf("Zad.2\n");
    zad2();

    zad3();
    
    zad4();
    
    zad5();
    
    zad6();
    
    zad7();
    
    zad8();
    
    zad9();
    
    zad10();
    
    zad11();
    
    zad12();
    
    zad13();
    
    zad14();
}



 