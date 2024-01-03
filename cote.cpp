#include <iostream>
// #include <boost/numeric/odeint.hpp>
// #include <Eigen/Dense>
#include "type_definition.h"
#include "runge_kutta.h"

// using namespace boost::numeric::odeint;
// using namespace Eigen;
// typedef VectorXd state_type;
void myFun(const state_type &x, state_type &dxdt, double t) {
    dxdt = x;
}

int main()
{
    // input args
    double initial_step = -1.0;
    double current_jd = 2457748.33489583; 
    

    runge_kutta = RungeKuttaFehlberg()
    // local var
    double tol = 1.0e-1;
    double h_min = initial_step / 1.0e9;
    double h_max = initial_step * 100;





}
// int main() {
//     state_type x(6);
//     x.fill(1.0);  
//     auto stepper = make_controlled< runge_kutta_fehlberg78<state_type> >(1.0e-12, 1.0e-12);
//     integrate_adaptive(stepper, myFun, x, 0.0, 1.0, 0.01, [](const state_type &x, double t) 
//     {
//         std::cout << t;
//         for (int i = 0; i < x.size(); ++i) 
//         {
//                 std::cout << "\t" << x(i);
//         }
//         std::cout << std::endl;
//         });
//     return 0;
// }









// state_space_model init
// sec = 212349456134.99973
// matrix_state  = [6883033.782856819, 195623.33562399092, -796909.403231605, -834.1242656395137, -1033.9379913151993, -7465.462373177463]


//rungekutta.ode78(self.state_space_model,
                // current_jd * 86400.0,
                // next_jd * 86400.0,
                // matrix_state,
                // tol,
                // current_step, h_min, h_max, None)

//current_jd
















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


//     std::cout << "Matrix 1 + Matrix 2:\n" << mat1 + mat2 << "\n\n";


//     std::cout << "Matrix 1 * Matrix 2:\n" << mat1 * mat2 << "\n\n";


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