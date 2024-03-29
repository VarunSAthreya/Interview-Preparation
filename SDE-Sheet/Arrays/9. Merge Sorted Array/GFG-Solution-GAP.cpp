int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int gap = (n + m);

    while (gap)
    {
        gap = nextGap(gap);
        int i = 0;
        while (i + gap < m + n)
        {
            if (i >= n)
            {
                if (arr2[i - n] > arr2[i + gap - n])
                    swap(arr2[i - n], arr2[i + gap - n]);
            }
            else if (i + gap >= n)
            {
                if (arr1[i] > arr2[i + gap - n])
                    swap(arr1[i], arr2[i + gap - n]);
            }
            else
            {
                if (arr1[i] > arr1[i + gap])
                    swap(arr1[i], arr1[i + gap]);
            }

            i++;
        }
    }
}
