#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg) {
    return deg * M_PI / 180.0;
}

double rad2deg(double rad) {
    return rad * 180.0 / M_PI;
}

double findXComponent(double l1, double l2, double r1, double r2) {
    return (l1 * cos(r1)) + (l2 * cos(r2));
}

double findYComponent(double l1, double l2, double r1, double r2) {
    return (l1 * sin(r1)) + (l2 * sin(r2));
}

double pythagoras(double x_comp, double y_comp) {
    return sqrt(pow(x_comp, 2) + pow(y_comp, 2));
}

void showResult(double result_len, double result_deg) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << result_len << endl;
    cout << "Direction of the resultant vector (deg) = " << result_deg << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}