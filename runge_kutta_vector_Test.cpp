#include <iostream>
#include <boost/numeric/odeint.hpp>
#include <Eigen/Dense>
using namespace boost::numeric::odeint;
using namespace Eigen;
typedef VectorXd state_type;
void myFun(const state_type &x, state_type &dxdt, double t) {
    dxdt = x;
}
int main() {
    state_type x(6);
    x.fill(1.0);  
    auto stepper = make_controlled< runge_kutta_fehlberg78<state_type> >(1.0e-12, 1.0e-12);
    integrate_adaptive(stepper, myFun, x, 0.0, 1.0, 0.01, [](const state_type &x, double t) 
    {
        std::cout << t;
        for (int i = 0; i < x.size(); ++i) 
        {
                std::cout << "\t" << x(i);
        }
        std::cout << std::endl;
        });
    return 0;
}


// #include <iostream>
// #include <Eigen/Dense>

// int main() {
//     Eigen::MatrixXd mat1(2, 2);
//     Eigen::MatrixXd mat2(2, 2);

//     mat1 << 1, 2,
//             3, 4;
//     mat2 << 2, 3,
//             1, 4;

//     std::cout << "Matrix 1:\n" << mat1 << "\n\n";
//     std::cout << "Matrix 2:\n" << mat2 << "\n\n";

//     // 행렬 덧셈
//     std::cout << "Matrix 1 + Matrix 2:\n" << mat1 + mat2 << "\n\n";

//     // 행렬 곱셈
//     std::cout << "Matrix 1 * Matrix 2:\n" << mat1 * mat2 << "\n\n";

//     // 행렬 1의 역행렬
//     std::cout << "Inverse of Matrix 1:\n" << mat1.inverse() << "\n";

//     return 0;
// }

// #include <iostream>
// #include <Eigen/Dense>

// int main() {
//     Eigen::MatrixXd U(3, 3);
//     U << 1, 2, 3,
//          0, 2, 3,
//          0, 0, 1;
    
//     Eigen::VectorXd b(3);
//     b << 14, 11, 3;

//     Eigen::VectorXd x = U.triangularView<Eigen::Upper>().solve(b);

//     std::cout << "Solution x: \n" << x << std::endl;

//     return 0;
// }
