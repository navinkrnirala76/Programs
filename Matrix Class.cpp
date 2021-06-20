#include<iostream>
using namespace std;

class matrix{
    private:
        int rows;
        int columns;
        int **mat;
    public:
        matrix();   // Default Constructor
        matrix(int r, int c);  // This constructor will initialize Rows and Columns
        matrix(matrix &m1);   //Copy Constructor
        void getdata();   // Accept the data in matrix
        void putdata();   // Shows the data of matrix
};

matrix::matrix()
{
    rows = columns = 0;
    mat = NULL;
}

matrix::matrix(int r, int c)
{
    rows = r;
    columns = c;
    mat = new int*[rows];
    for(int i=0; i<rows; i++)
        mat[i] = new int[columns];
}

matrix::matrix(matrix &m1)
{
    rows = m1.rows;
    columns = m1.columns;
    mat = new int*[rows];
    for(int i=0; i<rows; i++)
        mat[i] = new int[columns];
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++)
            mat[i][j] = m1.mat[i][j];
}

void matrix::getdata()
{
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++)
            cin>>mat[i][j];
}

void matrix::putdata()
{
    for(int i=0; i<rows; i++)
    {
        cout<<"\n";
        for(int j=0; j<columns; j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
}

int main()
{
    matrix m1(3,3);
    m1.getdata();
    matrix m2 = m1;
    m2.putdata();
    matrix m3;
    m3.putdata();
    return 0;
}