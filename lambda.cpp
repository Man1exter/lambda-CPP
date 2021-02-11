#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto lambda1 = []{
cout << "Po pozniejszym wywolaniu(w main) ~ lambda" << endl;
};

auto lambda2 = []{
    int wciagana_lambda = 1;
    cout << "Ze zmienna w srodku" << wciagana_lambda << endl;
};

auto licznik = [ i = 0]() mutable { cout << "To jest " << ++i << " wywolanie licznika" << endl;};

int main(){
    lambda1();

    lambda2();

    licznik();
    licznik();
    licznik();
    licznik();


    return 0;
}



