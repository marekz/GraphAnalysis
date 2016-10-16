#include <iostream>
#include <cstdlib>

using namespace std;

/*
 *
 */

int main(int argc, char** argv) {

    if (argc != 2)
    {
        cout << "Błędny start programu" << endl;
        cout << "Właściwe wywołanie programu to ./main n, " << endl;

        cout << "Gdzie n - to ilość elementów grafu" << endl;

        exit(123);

    }
    cout << argc;

    char NextOperation;
    NextOperation = 'T';

    while (NextOperation == 'T') {

        std::system("clear");

        cout << "**********************************************************************" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                      Matematyka dyskretna                          *" << endl;
        cout << "*                      Program zaliczeniowy                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl;

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Program generuje losowe grafy o zadanej wielkości." << endl << endl;
        cout << "Możliwe metody obliczania grafu:" << endl;
        cout << "   A - Macierz incydencji" << endl;
        cout << "   B - Macierz przyległości" << endl;
        cout << "   C - Lista krawędzi" << endl;
        cout << "   D - Tablice liniowe" << endl;
        cout << "   E - Lista następników" << endl;

        char wybor;

        cout << endl;

        cout << "Twoja decyzja: ";
        cin >> wybor;

        switch(wybor)
        {
            case 'A':
                cout << "   A - Macierz incydencji" << endl;
                break;

            case 'B':
                cout << "   B - Macierz przyległości" << endl;
                break;

            case 'C':
                cout << "   C - Lista krawędzi" << endl;
                break;

            case 'D':
                cout << "   D - Tablice liniowe" << endl;
                break;

            case 'E':
                cout << "   E - Lista następników" << endl;
                break;

            default:
                cout << "Błędny wybór. Możliwe opcje: A, B, C, D, E" << endl;


        }

        cout << "Czy wkonać następną operację? T/N: ";
        cin >> NextOperation;

    }

    cout << "Koniec programu" << endl;

    return 0;
}

