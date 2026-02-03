class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res = 0;
        int max = letters.size()-1, min = 0, curr = (min+max)/2;

        while(min <= max) {
            if(letters[curr] <= target) {
                min = curr +1;
            } else if (letters[curr] > target) {
                res = letters[curr];
                max = curr-1;
            }

            curr = (min+max)/2;
        }

        return res ? res : letters[0];
    }
};
