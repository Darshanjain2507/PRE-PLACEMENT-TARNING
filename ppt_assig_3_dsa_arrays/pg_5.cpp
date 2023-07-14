/*💡 Question 5: Increment the large integer represented by an array of digits:

Answer:
*/
vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

