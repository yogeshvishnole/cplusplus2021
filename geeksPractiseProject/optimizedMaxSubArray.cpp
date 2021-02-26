#include <iostream>
using namespace std;
#include <unordered_map>

int findMaxSubArray(int arr[], int n)
{
    unordered_map<int, int> hm;
    int sum = 0;
    int maxLen = -1;
    int endingIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            sum -= 1;
        }
        else
        {
            sum += 1;
        }
        if (sum == 0)
        {
            maxLen = i + 1;
            endingIndex = i;
        }

        if (hm.find(sum) != hm.end())
        {
            if (maxLen < (i - hm[sum]))
            {
                maxLen = i - hm[sum];
                endingIndex = i;
            }
        }
        else
        {
            hm[sum] = i;
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

    cout << findMaxSubArray(a, n) << endl;
}