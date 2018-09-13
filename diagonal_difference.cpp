#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) 
{
    int n=arr.size();
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(i==j)
                sum1+=arr[i][j];
            if(i==n-j-1)
                sum2+=arr[i][j];
        }
    return abs(sum1-sum2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
