#include "MultiDimArray.cpp"
#include "NTL/ZZ_p.h"
#include <iostream>

using namespace std;

/******************************************************
*
*       TEST #1
*
*******************************************************/

int main() {
    cout << "Aqui" << endl;

    NTL::ZZ p(11);
    NTL::ZZ_p::init(p);

    typedef NTL::ZZ_p F;
    const int m = 2;

    blitz::Array<F, m> A(2, 2);
    A = (F) 3, (F) 10,
            (F) 1, (F) 8;
    MultiDimArray<F, m> array(A);

    array.RST();

    cout << "Period vector: " << array.period_vector() << endl;

    cout << "Delta: " << array.normalized_complexity() << endl;

    array.draw_lead_monomials();

    return 0;
}