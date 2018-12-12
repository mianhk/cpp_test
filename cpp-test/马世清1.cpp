#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream ifile1, ifile2;
    int SIZE_M, SIZE_N, T, SIZE_S;
    ifile1.open("d:\\arrayA.txt");
    ifile2.open("d:\\arrayB.txt");
    ifile1 >> SIZE_M >> SIZE_N;
    ifile2 >> T >> SIZE_S;
    int matrix_a[SIZE_M][SIZE_N] = {0}; //a矩阵2X3
    int matrix_b[T][SIZE_S] = {0};
    int matrix_result[SIZE_M][SIZE_S]; //结果矩阵2X4
    string temp;
    int i = 0, temp_int;
    while (ifile1 >> temp_int)
    {
        ++i;
        matrix_a[(i) / SIZE_M][(i) % SIZE_M] = temp_int;
    }
    i = 0;
    while (ifile2 >> temp_int)
    {
        ++i;
        matrix_b[(i) / SIZE_N][(i) % SIZE_N] = temp_int;
    }
    for (int m = 0; m < SIZE_M; m++)
    {
        for (int s = 0; s < SIZE_S; s++)
        {
            matrix_result[m][s] = 0; //变量使用前记得初始化,否则结果具有不确定性
            for (int n = 0; n < SIZE_N; n++)
            {
                matrix_result[m][s] += matrix_a[m][n] * matrix_b[n][s];
            }
        }
    }
    ofstream ofile; //定义输出文件
    ofile.open("d:\\arrayC.txt");
    for (int m = 0; m < SIZE_M; m++)
    {
        for (int s = 0; s < SIZE_S; s++)
        {
            ofile << matrix_result[m][s] << '\t';
        }
        ofile << '\t';
    }
    return 0;
}
