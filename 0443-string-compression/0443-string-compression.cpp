class Solution {
public:
    int compress(vector<char>& chars) {

        // Get the total number of characters in the array
        int len = chars.size();

        // 'index' is the write pointer.
        // It tells us where to write the compressed characters.
        int index = 0;

        // Traverse the array group by group
        for (int i = 0; i < len; i++) {

            // Store the current character
            char ch = chars[i];

            // Count how many times this character appears consecutively
            int count = 0;

            // Count all consecutive occurrences of 'ch'
            while (i < len && chars[i] == ch) {
                count++;
                i++;
            }

            // If the character appears only once,
            // simply write the character.
            if (count == 1) {
                chars[index++] = ch;
            }
            else {

                // Write the character first
                chars[index++] = ch;

                // Convert count to a string
                // Example:
                // count = 12  ->  "12"
                string s = to_string(count);

                // Store each digit separately
                // "12" becomes:
                // chars[index] = '1'
                // chars[index+1] = '2'
                for (char c : s) {
                    chars[index++] = c;
                }
            }

            // The while loop already moved 'i' to the first different character.
            // Since the for loop will increment 'i' again,
            // we decrement it here to avoid skipping a character.
            i--;
        }

        // 'index' is the length of the compressed array.
        return index;
    }
};