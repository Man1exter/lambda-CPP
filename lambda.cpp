#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

auto lambda1 = []{
cout << "Po pozniejszym wywolaniu(w main) ~ lambda" << endl;
};

int main(){

    lambda1();

    return 0;
}
