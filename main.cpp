//g++ -O0 main.cpp -o main
#include <vector>
#include <iostream>
#include <cinttypes>
#include <string>
using namespace std;
int main(int argc, char**argv) {
    size_t G = std::atoi(argv[1]);
    cout << G << "\n";
    G *= 1000000000;
    vector<uint8_t> V(G);
    for(int i = 0 ; i < 2 ; ++i){
        //if (i % 100 == 0)
            cout << i << "\n";
        for(auto& x : V)
            x = 0;
    }
}