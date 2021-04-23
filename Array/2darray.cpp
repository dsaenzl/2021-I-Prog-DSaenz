#include <iostream>
#include <cstdlib>

int main(int argc,char *argv[]){
    int M =std::atoi(argv[1]);
    int N =std::atoi(argv[2]);
    int mat[M][N];
    for(int ii=0;ii<M;ii++){
        for(int jj=0;jj<N;jj++){
            mat[ii][jj]= ii*N +jj;
        }
    }
    for(int ii=0;ii<M;ii++){
        for(int jj=0;jj<N;jj++){
            std::cout << mat[ii][jj] << " ";
        }
        std::cout << std::endl;
    }
}