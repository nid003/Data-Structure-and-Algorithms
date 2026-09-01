class Solution {
public:

    int sumSquare(int n) {

        int ans = 0;

        while (n > 0) {
            int num = n % 10;
            ans += num * num;
            n = n / 10;
        }

        return ans;
    }

    bool isHappy(int n) {

        unordered_set<int> st;

        while (n != 1) {

            if (st.count(n))
                return false;

            st.insert(n);

            n = sumSquare(n);
        }

        return true;
    }
};