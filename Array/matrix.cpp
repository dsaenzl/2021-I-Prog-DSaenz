#include <iostream>
#include <cstdlib>

int main(int argc,char *argv[]){
    const int M =std::atoi(argv[1]);
    const int N =std::atoi(argv[2]);
    const int P =std::atoi(argv[3]);
    int A[M][N];
    int B[N][P];
    int C[M][P];
    //Inicializarlas
    for(int ii=0;ii<M;ii++){ //A
        for(int jj=0;jj<N;jj++){
            A[ii][jj]=ii*N+jj;
        }
    }
    for(int ii=0;ii<N;ii++){ //B
        for(int jj=0;jj<P;jj++){
            B[ii][jj]=ii*P+jj;
        }
    }
    //Multiplicación
    for(int jj=0;jj<P;jj++){
        for(int ii=0;ii<M;ii++){
            int s=0;
            for(int k=0;k<N;k++){
                s+=A[ii][k]*B[k][jj];
            }
            C[ii][jj]=s;
        }
    }
    //Probar
    for(int ii=0;ii<M;ii++){
        for(int jj=0;jj<P;jj++){
            std::cout << C[ii][jj] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}