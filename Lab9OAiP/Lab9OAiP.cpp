
#include <iostream>
#include <cmath>
  using namespace std;
int main() {
  
    setlocale(LC_CTYPE, "RUSSIAN");
    //double a = 3.0, b = 6.0; 
    //int n = 200;            

    //
    //if (n % 2 != 0) {
    //    cout << "Число n должно быть четным для метода парабол." <<endl;
    //    return 1;
    //}

    //double h = (b - a) / n; 
    //double Strapec = 0.0; 
    //double Sparab = 0.0;

    //
    //for (int i = 0; i < n; ++i) {
    //    double x = a + i * h;       
    //    double x_next = x + h;      
    //    double y1 = pow(x, 3) + 3;  
    //    double y2 = pow(x_next, 3) + 3; 
    //    Strapec += (y1 + y2) / 2 * h; 
    //}

    //
    //for (int i = 0; i <= n; ++i) {
    //    double x = a + i * h;      
    //    double y = pow(x, 3) + 3;   
    //    if (i == 0 || i == n) {
    //        Sparab += y;         
    //    }
    //    else if (i % 2 == 0) {
    //        Sparab += 2 * y;     
    //    }
    //    else {
    //        Sparab += 4 * y;     
    //    }
    //}
    //Sparab *= h / 3;

    //
    //cout << "Площадь методом трапеций: " << Strapec << endl;
    //cout << "Площадь методом парабол: " << Sparab << endl;

    //
    //double difference = fabs(Strapec - Sparab);
    //cout << "Разница между методами: " << difference << endl;




    double a = 3,b = 6,e = 0.0001,fa,fb,x,fx; 
     fa = sin(a) + a * a * a; 
     fb = sin(b) + b * b * b; 

    if (fa * fb >= 0) {
       cout << "Функция имеет одинаковый знак в точках a и b. Попробуйте другие значения." << endl;
        return 1; 
    }
    while (fabs(a - b) > 2 * e) {
        x = (a + b) / 2; 
        fx = sin(x) + x * x * x; 
        if (fx * fa <= 0) {
            b = x; 
            fb = fx; 
        }
        else {
            a = x; 
            fa = fx; 
        }
    }

    cout << "Приближенное значение корня: " << x;
}
