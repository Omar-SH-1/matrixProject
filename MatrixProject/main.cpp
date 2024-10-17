
#include "matrix.h"
int main() {
    Matrix<double> m(3,4);
    std::cin >> m;
    std::cout << m.GetRows() << "\n";
    std::cout << m.GetColumns() << "\n"; 
    std::cout << m.GetColumns() << "\n"; 

   // double element = m[0][1];
    m[1][1] = 11;
    m(1, 1) = 1;
    
   std::cout<<m;
    return 0;
}


