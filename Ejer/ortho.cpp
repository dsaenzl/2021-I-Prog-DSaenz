#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

bool is_orthogonal(const std::vector<double> &  M, const double eps);

int main(int arg, char *argv[])
{
const int N = 4;
const double EPS = std::atof(argv[1]);
std::vector<double> A = {1, 0, 0, 0,
             0, 0.8, 0.3, -0.52,
             0, -0.6, 0.4, -0.69,
             0, 0, 0.86, 0.5};
std::cout << is_orthogonal(A, EPS) << std::endl;

return 0;
}
bool is_orthogonal(const std::vector<double> &  M, const double eps)
{
// Fill here
const int N=std::sqrt(M.size());
std::vector<double> AT(N*N);
// calcule la transpuesta, puede crear una nueva matriz
for(int ii=0;ii<N;ii++){
    for(int jj=0;jj<N;jj++){
        AT[ii*N+jj]=M[jj*N+ii];
    }
}
// haga la multiplicacion entre la matriz y la original. Puede crear una nueva matriz o ir comparando cada elemento.
// calcule la diferencia relative comparando con la identidad, teniendo en cuenta no dividir por cero
for(int ii=0;ii<N;ii++){
    for(int jj=0;jj<N;jj++){
        double s=0.0;
        double diff=0.0;
        for(int k=0;k<N;k++){
            s+=M[ii*N+k]*AT[k*N+jj];
        }
        if(ii==jj){
            diff=std::fabs(1-s);
        }
        else{
            diff=std::fabs(s);
        }
        if(diff>eps){
            return false;
        }
    }
}
// retorne true o false de acuerdo a lo anterior
return true;
}