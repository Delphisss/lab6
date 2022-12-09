#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a){
    return a*(M_PI/180.00);
}
double rad2deg(double a){
    return a*(180.00/M_PI)
}
double findXComponent(double la,double lb,double a,double b){
    double x,y,z;
    x=la+cos(a);
    y=lb+cos(b);
    z=x+y;
    return z;
}
double  findYComponent(double la,double lb,double a,double b){
    double x,y,z;
    x=la+sin(a);
    y=lb+sin(b);
    z=x+y;
    return z;
}
double  Function pythagoras(double x,double y){
    double z;
    return z=sqrt(pow(x,2)+pow(y,2));
}
void shorResult(double a,double b){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout << "Length of the resultant vector = "<< a <<endl;
    cout << " Direction of the resultant vector (deg) = " << b <<endl;
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
