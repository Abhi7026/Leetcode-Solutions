class Solution {
public:
    bool validMountainArray(vector<int>& A) {
    if (A.size() < 3 || A[0] > A[1]) return false;
    auto peak = false;
    for (auto i = 1; i < A.size(); ++i) {
        if (peak & A[i - 1] < A[i] || A[i - 1] == A[i]) return false;
        peak = A[i - 1] > A[i];
    }
    return peak;
    }
};