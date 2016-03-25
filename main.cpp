#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    //using O(1) additional memory
    //http://e-maxx.ru/algo/factorization best but difficult way, even so we will have O(n) speed
    int n;
    ifstream in;
    in.open("INPUT.TXT");
    in >> n;
    in.close();
    
    ofstream out;
    out.open("OUTPUT.TXT");
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) out << i << endl;
    }
    out.close();
    
    return 0;
}

