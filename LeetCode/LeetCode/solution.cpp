


class Solution {
public:
    int arrangeCoins(int n) {
        int coins = 1;
        int completeRowNum = 0;
        while (true)
        {
            if (n >= coins)
            {
                n -= coins;
                ++completeRowNum;
                ++coins;
            }
            else
            {
                break;
            }
        }
        return completeRowNum;
    }
};