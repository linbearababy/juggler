#include <iostream>
using std::cout; using std::cin; using std::endl; using std::fixed;
#include <cmath>
int main() {
    long low, high, length_num_1, length = -100, max_num, length_value;
    long num, max = -1000000;
    cin >> low >> high;
    // judge the input. check wether they are valid.
    if (low >= high) {
        cout << "Error" << endl;
        return 0;
    }
    // if the inputs are valid, do the sequence.
    else {
        for ( num=low; low< high; low += 1) {
            num=low;
            int length_num = 0;
            // while the result is not equal to 1, continue the loop.
            while (num != 1) {

                if (num % 2 == 0) {
                    num = floor(sqrt(num));
                    length_num += 1;
                }
                if (num % 2 != 0) {
                    num = floor(pow(num, 1.5));
                    length_num += 1;
                }
                //check the max value.
                    if (num > max) {
                        max = num;
                        max_num = low;
                    }
                // get the max length of the number.
                length_value = length_num;
                if (length_value > length) {
                    length = length_num -1;
                    length_num_1 = low;
                }

            }
        }
        cout << length_num_1 << " " << length <<endl;
        cout << max_num << " " << max ;
        return 0;
    }
}
