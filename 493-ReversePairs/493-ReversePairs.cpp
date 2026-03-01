// Last updated: 01/03/2026, 20:21:48
class Solution {
public:
    int merge(vector<int>& nums, int l, int m, int h) {
        int i = l, j = m + 1;
        int c = 0;

        // Count reverse pairs
        while (i <= m) {
            while (j <= h && nums[i] > 2LL * nums[j]) {
                j++;
            }
            c += (j - (m + 1));
            i++;
        }

        // Merge step
        vector<int> result(h - l + 1);
        int tempi = l, tempj = m + 1, k = 0;

        while (tempi <= m && tempj <= h) {
            if (nums[tempi] <= nums[tempj]) {
                result[k++] = nums[tempi++];
            } else {
                result[k++] = nums[tempj++];
            }
        }

        while (tempi <= m) {
            result[k++] = nums[tempi++];
        }

        while (tempj <= h) {
            result[k++] = nums[tempj++];
        }

        // Copy sorted data back to original array
        for (int i = l; i <= h; i++) {
            nums[i] = result[i - l];
        }

        return c;
    }

    void merge_sort(vector<int>& nums, int l, int h, int& c) {
        if (l >= h) {
            return;
        }
        int m = (l + h) / 2;
        merge_sort(nums, l, m, c);
        merge_sort(nums, m + 1, h, c);
        c += merge(nums, l, m, h);
    }

    int reversePairs(vector<int>& nums) {
        int c = 0;
        merge_sort(nums, 0, nums.size() - 1, c);
        return c;
    }
};
