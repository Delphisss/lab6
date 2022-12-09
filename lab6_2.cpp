#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg);
double rad2deg(double rad);
double findXComponent(double length1,double rad1 ,double length2,double rad2 );
double findYComponent(double length1,double rad1 ,double length2,double rad2 );
double pythagoras(double X_all , double Y_all);
void showResult(double resule , double reg);

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

double deg2rad(double deg){
    double rad = deg*M_PI /180 ;
    return rad ;
}
double rad2deg(double rad){
    double deg = rad*180/M_PI;
    return deg ;
}
double findXComponent(double l1,double l2 ,double r1,double r2 ){
    double Xcompo1 = l1*cos(r1);
    double Xcompo2 = l2*cos(r2);
    double Xcompo_all = Xcompo1+Xcompo2;
    return Xcompo_all;
}
double findYComponent(double l1,double l2 ,double r1,double r2 ){
    double Ycompo1 = l1*sin(r1);
    double Ycompo2 = l2*sin(r2);
    double Ycompo_all = Ycompo1+Ycompo2;
    return Ycompo_all;
}
double pythagoras(double X_all , double Y_all){
    double Resule = sqrt(pow(X_all,2)+pow(Y_all,2));
    return Resule;

}
void showResult(double resule , double reg){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << resule <<endl;
    cout << "Direction of the resultant vector (deg) = "<< reg << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}