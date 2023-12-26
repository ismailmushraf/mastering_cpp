#include<iostream>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int max_sum = -1000000;
    int min_index = 0;
    int firstNumInSeq = arr[0]; 
    int runningKSum = firstNumInSeq; 

    for (int i = 1; i < N; i++)
    {
        runningKSum += arr[i]; 
        if (i >= K-1)
        {
            if (runningKSum > max_sum)
            {
              max_sum = runningKSum;
              min_index = i - (K-1);
            }
            firstNumInSeq = arr[i-(K-1)]; 
            runningKSum -= firstNumInSeq;  
        }
    }
    cout << min_index << " " << min_index + K - 1 << " " << max_sum << endl;
    return 0;
}
