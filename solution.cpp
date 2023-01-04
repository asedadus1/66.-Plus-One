class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int length = digits.size() - 1;
        int number = digits[length];
        int sum;
        if(number == 9){
            while(true){
                sum = digits[length] +1;
                carry = sum/10;
                digits[length] = sum%10;
                if(length == 0){
                    digits.insert(digits.begin(), 1);
                    break;
                }
                else if(digits[length - 1]  == 9){
                    length--;
                }
                else{
                    length--;
                    digits[length] = digits[length] +1;
                    break;
                }
                
                
            }

        }
        else{
            digits[length] = digits[length] +1;
        }
        return digits;
    }
};
