#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int i, Array11[10];
    for(i = 0; i < 10; i++)
    {
        cout << Array11[i] << " ";
    }
    cout << endl;


    srand(time(0));
    int Array12[10];
    for (i = 0; i < 10; i++)
    {
        Array12[i] = rand()%21-10;
        cout << Array12[i] << " ";
    }
    cout << endl;


    int n, Array13[5];
    cout << "Введите пять чисел для массив:\n";
    for (i = 0; i < 5; i++)
    {
        cin >> n;
        Array13[i] = n;
        
    }
    for (i = 0; i < 5; i++)
    {
        cout << Array13[i] << " ";
    }
    cout << endl;
    cout << endl;


    int Array14[10];
    for (i = 0; i < 10; i++)
    {
        if (Array12[i] % 2 == 0)
        {
            Array14[i] = Array12[i] * 3;
        }
        else
            Array14[i] = Array12[i] * 5;

    }

    for (i = 0; i < 10; i++)
    {
        cout << Array14[i] << " ";
    }
    cout << endl;



    int j, Array2[5][5];
    srand(time(0));
    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {
            Array2[i][j] = rand() % 21 - 10;
            cout << Array2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    

    int S;
    for (i = 0; i < 5; i++) {
        S = 0;
        for (j = 0; j < 5; j++) {
            S += Array2[i][j];
        
        }

        cout << i <<"-я строки: " << S<< endl;
    }

   

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (Array2[i][j] < 0) {
                Array2[i][j] = 0;
            }
            cout << Array2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}