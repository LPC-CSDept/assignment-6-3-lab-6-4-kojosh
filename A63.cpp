#include <iostream>
using namespace std;

int getSum(int);

int main()
{
    int n, result;
    int num;
    cout << "Enter number of inputs: ";
    cin >> n;
    result = getSum(n);
    cout << "Sum: " << result << endl;

}

int getSum(int N)
{
    int sum = 0;
    int min, max, num;

    for (int i = 0; i < N; i++) {
        cout << "Enter your value: ";
        cin >> num;
        sum += num;
        if (i == 0)
            min = max = num;
        min = (min > num)? num : min;
        max = (max < num)? num : max;
    }
    sum = sum - min - max;
    return sum;

}