#include <iostream>
#include <fstream>
#include "Matrix.h"
using namespace std;

void test(){
    ofstream outfile;
    outfile.open("fout01.txt",ios::out);
    ofstream outBinaryFile;
    outBinaryFile.open("fout01.dat",ios::out | ios::binary);
    string data;
    Matrix testMatrix(6,6);
    testMatrix.randomPopulate();
    data = testMatrix.getMatrixString();
    outfile << data;
    outfile.close();
    double s;
    for(int i = 0; i < 6; i ++) {
        for (int j = 0; j < 6; j++) {
            s = testMatrix.matrix[i][j];
            outBinaryFile.write((char*)&s, sizeof(s));
        }
    }
    outBinaryFile.close();
    fstream inBinaryFile;
    inBinaryFile.open("fout01.dat",ios::in | ios::binary);
    double S;
    for(int i = 0; i < 2; i ++){
        for(int j = 0 ; j < 6; j ++){
            inBinaryFile.read((char *)&S,sizeof(S));
            cout << S << " ";
        }
        cout << endl;
    }
    inBinaryFile.close();
}

int main() {
    test();
    return 0;
}
