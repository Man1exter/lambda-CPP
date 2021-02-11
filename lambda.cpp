#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Funktor{
    public:
    int pole;
    int operator()(int a)const{
        return a * pole;
    }
};

auto lambda1a = []{
cout << "Po pozniejszym wywolaniu(w main) ~ lambda" << endl;
};

auto lambda2 = []{
    int wciagana_lambda = 1;
    cout << "Ze zmienna w srodku" << wciagana_lambda << endl;
};

auto licznik = [ i = 0 ]() mutable { cout << "To jest " << ++i << " wywolanie licznika" << endl;};

auto lambda3 = [wciagana_liczba = 5](int a, const double& b){
    return (wciagana_liczba + a) * b;
};


auto lambda4 = [kolejna_wciagana = 10](int a, const double& b) -> long int{
    return (long int)((kolejna_wciagana + a) * b);
};



int main(){

    Funktor funktorBazy1, funktorBazy2;
    funktorBazy1.pole = 5;
    funktorBazy2.pole = 7;

    cout << "funktor1 z polem(klasa): " << funktorBazy1.pole << endl;
    cout << "funktor2 z polem(klasa): " << funktorBazy2.pole << endl;

    cout << "funktor1 z wartoscia: " << funktorBazy1(10) << endl;
    cout << "funktor2 z wartoscia: " << funktorBazy2(20) << endl;

    lambda1a();

    lambda2();

    licznik();
    licznik();
    licznik();
    licznik();

    cout << "wynik lambda3: " << lambda3(5, 10.5) << endl;

    cout << "wynik wymuszany typ lambda4: " << lambda4(3, 3.33) << endl;

    return 0;
}



