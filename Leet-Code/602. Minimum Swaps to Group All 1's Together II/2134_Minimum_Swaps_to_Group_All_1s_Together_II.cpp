
class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int n = nums.size();
        int total_ones = 0, max_window = 0;

        for (auto item : nums)
            if (item)
                total_ones++;

        int no_of_ones_cur_window = 0, left = 0;

        // upto (n*2), to get the circular adjacent connection
        for (int i = 0; i < n * 2; i++)
        {
            if (nums[i % n])
                no_of_ones_cur_window++;

            // we know that, our window can't be greater than total_ones
            if (i - left + 1 > total_ones)
            {
                no_of_ones_cur_window -= nums[left % n];
                left++;
            }

            max_window = max(max_window, no_of_ones_cur_window);
        }

        return total_ones - max_window;
    }
};