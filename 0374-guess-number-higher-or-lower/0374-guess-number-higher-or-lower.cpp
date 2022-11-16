/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int h= n, l= 1;
        while (true) 
        {
            int mid = (h-l)/2+l;
            int ans = guess(mid);
            if (ans== 0) 
                return mid;
            else if (ans == 1)
                l= mid+ 1;
            else 
                h= mid-1;
        }
    }
};