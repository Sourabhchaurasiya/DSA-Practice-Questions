long long minTime(int A[], int N, int M)
{
    // if(M>N)return -1;
    long long start = 0, end = 0, mid, ans;
    for (int i = 0; i < N; i++)
    {
        if (start < A[i])
            start = A[i];
        end += A[i];
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        long long pages = 0, count = 1;
        for (int i = 0; i < N; i++)
        {
            pages += A[i];
            if (pages > mid)
            {
                count++;
                pages = A[i];
            }
        }
        if (count <= M)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}