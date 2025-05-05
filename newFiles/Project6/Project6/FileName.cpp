#include<iostream> 
#include<iomanip> 
#include<cmath> 
#include<cstdlib> 
#include<ctime> 
#include<string>
using namespace std;


void print(string word);

void print(int zn);

void mas_uk(int m, int n, int *&A);

void mas2(int m, int n, int* A[]);

void vmas(int m, int n, int* A[]);

int main()
{
    setlocale(0, "");
    print("При вводе m и n, не должны совпадать");
    int m, n;
    print ("Введите m : ");
    cin >> m;
    print("Введите n:");
    cin >> n;

    mas_uk(m, n, A);
    print("Введите элементы матрицы A: ");
    mas2(m, n, A);
    print("Матрица A:");
    vmas(m, n, A);
    int C;
    print("Введите значение C: ");
    cin >> C;
    int* B = new int[m];
    for (int i = 0; i < m; ++i)
    {
        bool found = false;
        for (int j = 0; j < n; ++j)
        {
            if (A[i][j] > C)
            {
                B[i] = A[i][j];
                found = true;
                break;
            }
        }
        if (!found) {
            B[i] = 0;
        }
    }
    print("Массив B:");
    for (int i = 0; i < m; ++i)
    {
        print(B[i]);
    }
    for (int i = 0; i < m; ++i)
    {
        delete[] A[i];
    }
    delete[] A;
    delete[] B;

    cout << "djhi";
    return 0;
}

void print(string word) {
    cout << word << endl;
}

void print(int zn) {
    cout << zn << endl;
}

void mas_uk(int m, int n, int* &A) {
    int** A = new int* [m];
    for (int i = 0; i < m; i++)
    {
        A[i] = *new int[n];
    }
}

void mas2(int m, int n, int* A[]) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
}

void vmas(int m, int n, int* A[]) {
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
