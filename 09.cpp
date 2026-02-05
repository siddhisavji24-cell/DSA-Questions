#include<iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x) 
    {
        if (x < 0) return false;

        int temp = x;
        long rev = 0;  
        while (x > 0)
        {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        return rev == temp;
    }
};
int main()
{
    Solution s;
    cout<<s.isPalindrome(121);
}
 