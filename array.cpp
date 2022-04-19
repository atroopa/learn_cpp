#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <iostream>
using namespace std;


int main () {

    using namespace boost::numeric::ublas;

    matrix<double> m (3, 3); // Init 2d matrix 

    for (unsigned i = 0; i < m.size1 (); ++ i)
        for (unsigned j = 0; j < m.size2 (); ++ j)
            m (i, j) = 3 * i + j;

    cout << m << endl; // this is matrix
    //cout << m(2,1) << endl; // This is one Index of 2d Array

    for (int n=0 ; n<m.size1() ; n++){
        cout << m(n) << endl;
    }

}