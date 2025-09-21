#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int pyto(long long num1, long long num2, long long num3, long long num4, 
        long long* adja, long long* oppo, long long* hypo){
        *adja = num1 * num4;
        *oppo = 2 * num2 * num3;
        *hypo = (num1 * num3) + (num2 * num4);
        return 0;
    }

int main(){
    long long adja, oppo, hypo;
    cout << "Fibonacci Sequence from 1-100\n";
    long long i = 1;

    while (true){ // values of fibonacci sequence starting from 1 - 100 (first term)
        long long value2 = (pow(1.618034, i) - pow((1 - 1.618034), i)) / sqrt(5);
        long long value1 = (pow(1.618034, i - 1) - pow((1 - 1.618034), i - 1)) / sqrt(5);
        i++;

        if (value1  > 100){
            break;
            long long j = i - 2;
        }

        long long value3 = value1 + value2;
        long long value4 = value2 + value3;
        pyto(value1, value2, value3, value4, &adja, &oppo, &hypo);

        if (&adja != &oppo && value4 <= 1000){
            cout << "Index [" << i - 1 << "]: " <<
            adja << "^2 + " << oppo << "^2 = " <<
            hypo << "^2" << endl;
        }else{
            continue;
        }

    }
    

    return 0;
}