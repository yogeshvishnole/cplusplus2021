#include <iostream>
using namespace std;

int maxSubArray(int *arr, int size)
{
    int sum = 0;

    int maxLen = -1, startIndex;

    for (int i = 0; i < (size - 1); i++)
    {

        sum = (arr[i] == 0) ? -1 : 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == 0)
            {
                sum -= 1;
            }
            else
            {
                sum += 1;
            }
            if (sum == 0)
            {
                if ((j - i + 1) > maxLen)
                {
                    startIndex = i;
                    maxLen = j - i + 1;
                }
            }
        }
    }

    return maxLen;
}

int main()
{

    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << maxSubArray(a, n) << endl;
}