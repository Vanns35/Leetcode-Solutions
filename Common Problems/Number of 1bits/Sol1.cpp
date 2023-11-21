class Solution {
public:
    // Function to calculate total number of 1 bits in given number
    // Time Complexity: O(logN), where n is the input number. This is because the bits of decimal digit in n is proportional to log(n) 
    // Space Complexity: O(1), as the space used is constant regardless of the input size.

    int hammingWeight(uint32_t n) {
        //Initialize totalBits variable to store the count of set bits
        int totalBits = 0;

        // Loop until the entire number is processed 
        while(n > 0) {
            // Check the rightmost bit ( Update totalBits if it's set )
            if(n&1) totalBits++;

            // Right shift the number to examine next bit
            n = n>>1;
        }
        
        // return total number of 1 bits
        return totalBits;
    }
};
