#include <iostream>
#include <cmath> // version of #include <math.h> for c# but #include <cmath> is for C++
#include <complex> // the way to write complex in C++

int main() {

    std::string name;
    int dog_age;
    int human_years;

    std :: cout <<"Enter the name for your dog: ";
    std :: cin >> name;
    std :: cout <<"Enter the age for your dog: ";
    std :: cin >> dog_age;
    const int dog_years = dog_age - 2; // The way writing this is to not let the value change because is not a known value
    human_years = 21 + (dog_years * 4);
    std :: cout << "Dog's name is: " << name << " and age is: " << human_years;


    int a;
    int b;
    int c;
    double root1;
    double root2;
    double discriminant;
    double complex_real;
    double complex_imag;



    std :: cout <<"\nEnter the coefficient for a, b and c: ";
    std :: cin >> a >> b >> c;
    discriminant = pow(b,2) - 4*a*c;
    root1 = (-b + sqrt(discriminant))/2*a;
    root2 = (-b - sqrt(discriminant))/2*a;
    complex_real = -b/(2*a);
    complex_imag= sqrt(-discriminant)/(2*a);




    if (discriminant > 0) {

       std :: cout << "The two roots are real and different which are  " << root1 << " and " << root2;
    }
    else if (discriminant == 0){
        std :: cout << "The two roots are real and same which is: " << root2;
    }
    else {
        std :: cout <<"The roots are complex which are: " << complex_real << " +" << " " << complex_imag << "j";
        std :: cout <<" and " << complex_real << " -" << complex_imag << "j";
    }

return 0;
}




