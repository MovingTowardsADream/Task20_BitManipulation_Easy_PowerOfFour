#include <iostream>

class Solution {
public:
    static bool isPowerOfFour(int n) {
        // 1
        if (!n) return 0;
        int count = 0;
        while (n != 1) {
            if (n & 1) {
                return 0;
            }
            n = n >> 1;
            count++;
        }
        if (count % 2 == 1) {
            return 0;
        }
        return 1;
        // 2
        //return (n > 0 && ((n & (n - 1)) == 0) && (n % 3 == 1));
    }
};

int main()
{
    std::cout << Solution::isPowerOfFour(16);
}