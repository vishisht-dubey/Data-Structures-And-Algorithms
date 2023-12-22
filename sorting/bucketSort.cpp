#include <bits/stdc++.h>
using namespace std;

void bucketSort(int arr[], int k, int n)
{
    int max_value = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_value = max(max_value, arr[i]);
    }
    max_value++;
    vector<vector<int>> buckets(k); 
    for (int j = 0; j < n; j++)
    {
        int bucketIndex = (k * arr[j]) / max_value;
        buckets[bucketIndex].push_back(arr[j]);
    }
    for (int j = 0; j < k; j++)
    {
        sort(buckets[j].begin(), buckets[j].end());
    }
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            arr[index] = buckets[i][j];
            index++;
        }
    }
    return ;
}

int main()
{
    int arr[7] = {30, 40, 10, 80, 5, 12, 70};
    bucketSort(arr, 4, 7);
    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}