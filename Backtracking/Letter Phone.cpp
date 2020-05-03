string charmap[10];

void generateHelper(string &current, int index, string &digits, vector<string> &ans) {
    if (index == digits.length()) {
        ans.push_back(current);
        return;
    }
    int digit = digits[index] - '0';
    for (int i = 0; i < charmap[digit].length(); i++) {
        current.push_back(charmap[digit][i]);
        generateHelper(current, index + 1, digits, ans);
        current.pop_back();
    }
    return;
}

vector<string> Solution:: letterCombinations(string digits) {
    charmap[0] = "0";
    charmap[1] = "1";
    charmap[2] = "abc";
    charmap[3] = "def";
    charmap[4] = "ghi";
    charmap[5] = "jkl";
    charmap[6] = "mno";
    charmap[7] = "pqrs";
    charmap[8] = "tuv";
    charmap[9] = "wxyz";
    vector<string> ans;
    string current = "";
    generateHelper(current, 0, digits, ans);
    return ans;
}