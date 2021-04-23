#include <iostream>
#include <vector>

int main(void){
    const int N=4;
    std::vector<int> mat(N*N);
    std::vector<int> matT(N*N);
    //Declariación de la primera matriz
    for(int ii=0;ii<N;ii++){
        for(int jj=0;jj<N;jj++){
            mat[ii*N+jj]=ii*N+jj;
        }
    }
    //De la Transpuesta
    for(int ii=0;ii<N;ii++){
        for(int jj=0;jj<N;jj++){
            matT[ii*N+jj]=mat[jj*N+ii];
        }
    }
    //Print primera
    std::cout << "La matriz es:\n";
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            std::cout << mat[i*N+j] << " ";
        }
        std::cout << std::endl;
    }
    //Print la transpuesta
    std::cout << "La trasnpuesta es:\n";
    for(int ii=0;ii<N;ii++){
        for(int jj=0;jj<N;jj++){
            std::cout << matT[ii*N+jj] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}