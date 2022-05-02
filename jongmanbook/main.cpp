#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// 최대연속부분구간합

int sum1(vector<int> &a)
{
    return 0;
}

int main()
{
    vector<int> arr({-7, 4, -3, 6, 3, -8, 3, 4});
    clock_t start, t1, t2, t3;

    start = clock();
    int one = sum1(arr);
    t1 = clock() - start;
    // start = clock();
    // int two = sum2(arr);
    // t2 = clock() - start;
    // start = clock();
    // int three = sum3(arr);
    // t3 = clock() - start;
    cout << one << t1 << endl;
    // cout << two << t2 << endl;
    // cout << three << t3 << endl;
    return 0;
}