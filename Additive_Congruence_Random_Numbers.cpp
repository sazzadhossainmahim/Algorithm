

#include <bits/stdc++.h>
using namespace std;

void additiveCongruentialMethod(
    int Xo, int m, int c,
    vector<int> &randomNums,
    int noOfRandomNums)
{

    randomNums[0] = Xo;
    for (int i = 1; i < noOfRandomNums; i++)
    {

        randomNums[i] = (randomNums[i - 1] + c) % m;
    }
}

// Driver Code
int main()
{
    int Xo = 1;
    int m = 1;
    int c = 2;

    int noOfRandomNums = 20;

    vector<int> randomNums(noOfRandomNums);

    additiveCongruentialMethod(
        Xo, m, c,
        randomNums,
        noOfRandomNums);

    for (int i = 0; i < noOfRandomNums; i++)
    {
        cout << randomNums[i] << " ";
    }

    return 0;
}
