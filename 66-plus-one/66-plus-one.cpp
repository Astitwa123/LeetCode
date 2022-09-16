class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=(digits.size()-1);i>=0;i--)
        {
            int num=digits[i]+carry;
            digits[i]=num%10;
            carry=num/10;
        }
        if(carry>0)
        {
            digits.push_back(0);
            for(int i=(digits.size()-1);i>0;i--)
            {
                digits[i-1]=digits[i];
            }
            digits[0]=carry;
                
        }
        return digits;
    }
};