#include <iostream>
#include "matrix.h"
int main(){
	Matrix<int> m({
		{1,2,3},
		{4,5,6}
	});
	std::cout<<m.GetRows()<<"\n";
	std::cout<<m.GetColumus()<<"\n";
	std::cout<<m.GetColumus()<<"\n";
    int element = m[0][1]; 
    m[1][1]= 11;
    m(1,1)=1;
}
