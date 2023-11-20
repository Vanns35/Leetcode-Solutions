class Solution {
public:
    // Function to calculate the difference between the product and sum of digits of a number
    // Time Complexity: O(log10(n)), where n is the input number. This is because the number of digits in n is proportional to lon10(n).
    // Space Complexity: O(1), as the space used is constant regardless of the input size.
    int subtractProductAndSum(int n) {

        // Initialize sum and product varibales
        int sum = 0, product = 1;
        
        // Loop until the entire number is processed
        while(n != 0) {

            // Extract the last digit of the number
            int rem = n%10;

            // Update the sum and product
            sum = sum + rem;
            product = product * rem;

            // Remove the last digit from the number
            n = n/10;
        }

        // Calculate the result ( product - sum ) and return
        return product - sum;
    }
};
