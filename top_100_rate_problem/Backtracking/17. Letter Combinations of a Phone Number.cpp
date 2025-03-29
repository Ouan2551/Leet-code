class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            // contain list or num and character
            char two[3] = {'a', 'b', 'c'}, three[3] = {'d', 'e', 'f'}, four[3] = {'g', 'h', 'i'}, five[3] = {'j', 'k', 'l'},
            six[3] = {'m', 'n', 'o'}, seven[4] = {'p', 'q', 'r', 's'}, eight[3] = {'t', 'u', 'v'}, nine[4] = {'w', 'x', 'y', 'z'};
            int count = digits.size(); vector<int> check_num_have;
            // check string have what num
            for (int i = 0; i < count; i++)
            {
                if (digits[i] == '2')
                {
                    check_num_have.append(2);
                }
                else if (digits[i] == '3')
                {
                    check_num_have.append(3):
                }
                else if (digits[i] == '4')
                {
                    check_num.have.append(4);
                }
                else if (digits[i] == '5')
                {
                    check_num.have.append(5);
                }
                else if (digits[i] == '6')
                {
                    check_num.have.append(6);
                }
                else if (digits[i] == '7')
                {
                    check_num.have.append(7);
                }
                else if (digits[i] == '8')
                {
                    check_num.have.append(8);
                }
                else if (digits[i] == '9')
                {
                    check_num.have.append(9);
                }
            }
            // go output letter from num
            int count = check_num_have.size();
            for (int i = 0; i < count; i++)
            {
                if (check_num_have[i] == 2)
                {
                    /* code */
                }
                
            }
            
        }
    };