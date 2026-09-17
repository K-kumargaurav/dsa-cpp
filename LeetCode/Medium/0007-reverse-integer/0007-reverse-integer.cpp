class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;

        while(x != 0) { // works for negative numbers
            int lastDigit = x % 10;
            x /= 10;
            
            // overflow checks
            if (reverseNum > INT_MAX / 10 || (reverseNum == INT_MAX / 10 && lastDigit > 7))
                return 0;
            if (reverseNum < INT_MIN / 10 || (reverseNum == INT_MIN / 10 && lastDigit < -8))
                return 0;

            reverseNum = (reverseNum * 10) + lastDigit;
        }

        return reverseNum;
    }
};