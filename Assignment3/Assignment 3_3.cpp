#include <iostream>
using namespace std;
class Matrix
{
private:
    int r;
    int c;
    int **data;

public:
    Matrix(int r, int c) : r(r), c(c)
    {
        data = new int *[r];
        for (int i = 0; i < r; i++)
        {
            data[i] = new int[c];
        }
    }

    Matrix() : r(2), c(2)
    {
        data = new int *[r];
        for (int i = 0; i < r; i++)
        {
            data[i] = new int[c];
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < r; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    void accept()
    {
        cout << "Enter matrix elements " << r << "x" << c << ":" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void print()
    {
        cout << "Matrix " << r << "x" << c << ":" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix add(Matrix &M)
    {
        Matrix result(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                result.data[i][j] = this->data[i][j] + M.data[i][j];
            }
        }
        return result;
    }
    Matrix subtract(Matrix &M)
    {
        Matrix result(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                result.data[i][j] = this->data[i][j] - M.data[i][j];
            }
        }
        return result;
    }
    Matrix multiply(Matrix &M)
    {
        Matrix result(r, c);
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                result.data[i][j] = 0;
                for (int k = 0; k < c; ++k)
                {
                    result.data[i][j] += this->data[i][k] * M.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose()
    {
        Matrix result(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }
};

int main()
{
    Matrix M1(2, 2);
    // Matrix M1,M2;
    M1.accept();
    Matrix M2(2, 2);
    M2.accept();
    M1.print();
    M2.print();

    Matrix sum = M1.add(M2);
    Matrix diff = M1.subtract(M2);
    Matrix mul = M1.multiply(M2);
    Matrix tran = M1.transpose();

    cout << "Addition is:" << endl;
    sum.print();
    cout << "Subtraction is:" << endl;
    diff.print();
    cout << "Multiplication is:" << endl;
    mul.print();
    cout << "Transpose is:" << endl;
    tran.print();

    return 0;
}