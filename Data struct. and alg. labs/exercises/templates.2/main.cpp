#include <iostream>

using namespace std;

template <class T>
class matrix {
private:
    int row;
    int collumn;
    T value;
public:
    matrix(int row, int collumn, T value){
        matrix[row][collumn] = value;
    }

    int getRow(){
        return row;
    }
    int getCol(){
        return collumn;
    }

    void printMatrix();
 //   void setElement(int row, int col, T value);
 //   void addMatrix(Matrix m);


};

void printMatrix(){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void printMatrix(){
    for(int i = 0; i<4;i++){
        for(int j = 0; j<4; i++){
            cout<<this->matrix()
        }
    }
}

int main()
{
    int mat[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>mat[i,j];
        }
    }
    return 0;
}
