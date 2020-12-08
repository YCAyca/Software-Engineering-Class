#include <iostream>

using namespace std;

class Rectangle // Ex1
{
    private:
        double edge1, edge2;
    public:
        Rectangle(double e1, double e2):edge1(e1),edge2(e2){};
        double Area(){return this->edge1*this->edge2;}
};     


class EX2 // Ex2
{
    public:
        int var1, var2;
        EX2(int v1 = 0, int v2 = 0):var1(v1),var2(v2){}; // a default contructor is which can be called 
};

class Complex_Numbers
{
    public:
        double real, imaginary;
        Complex_Numbers()=default;
        Complex_Numbers(double r, double i):real(r),imaginary(i){};
        Complex_Numbers Addition(Complex_Numbers number2)
        {
            Complex_Numbers tmp;
            tmp.real = this->real + number2.real;
            tmp.imaginary = this->imaginary + number2.imaginary;
            return tmp;
        }
};

int main()
{
    // Ex1
    Rectangle rect(3.2, 5.3);
    cout << rect.Area() << endl;
    
    // Ex2
    int in1,in2;
    
    cout << "input 2 integers" << endl;
    cin >> in1 >> in2; 
    
    EX2 ex2(in1, in2);
    cout << "addition of these 2 integers is :" << ex2.var1 + ex2.var2 << endl;
    
    Complex_Numbers num1, num2 ,tmp;
    cout << "input first complex number (a bi)" << endl;
    cin >> num1.real >> num1.imaginary; 
    cout << "input second complex number (a bi)" << endl;
    cin >> num2.real >> num2.imaginary; 
    tmp = num1.Addition(num2);
    
    if(tmp.imaginary >= 0)
        cout << "addition of " << num1.real << "+" << num1.imaginary << "i and " << num2.real << "+" << num2.imaginary << 
        "i is: " << tmp.real << "+" << tmp.imaginary << "i" << endl;
    else 
        cout << "addition of " << num1.real << "+" << num1.imaginary << "i and " << num2.real << "+" << num2.imaginary << 
        "i is: " << tmp.real << " " << tmp.imaginary << "i" << endl;
}
