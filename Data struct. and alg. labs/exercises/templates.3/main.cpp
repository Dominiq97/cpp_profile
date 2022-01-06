#include <iostream>
using namespace std;

template<typename T>
class Matrix{
    public:
        int row;
        int col;
	    T mat[3][3]; //generic member

	Matrix(int row, int col)
	{
	 this->row=row;
	 this->col=col;
	 }

	 Matrix()
	 {

	 }

	~Matrix() {};

	int getRow(){
		return row;
	}
    int getCol(){
        return col;
	}

	T getValue(int row, int col){
		return value[row][col];
    }

	void setRow (int row){
	    this->row = row;
 	}
 	void setCol (int col){
        this->col = col;
 	}

	void setValue (int row, int col, T val){
		this->value[row][col] = val;
	}

	void printMatrix(){
	    for(int i=0;i<3;i++){
            for(int j = 0;j<3;j++){
                cout<<this->value[i][j]<<" ";
            }
            cout<<"\n";
	    }

	}
};




int main()
{
//Everything happens at compilation

    int mat[3][3];
    int v;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>v;
            mat[i][j].setValue(i,j,v);
        }
    }



    return 0;
}
