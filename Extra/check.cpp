bool check(vector<int> &nums)
{
    int count = 0;
    int i = 1;
    int n = nums.size();
    while (i < n)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
        i++;
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    return count <= 1;
}