// maximize value (fractional knapsack) greedy 2

#include <iostream>
using namespace std;

int main()
{
    int n = 3, w = 50;
    int value[3] = {60, 100, 120};
    int weight[3] = {10, 20, 30};
    double ratio[3];
    for (int i = 0; i < n; i++)
    {
        ratio[i] = value[i] / weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                double tempR = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = tempR;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << value[i] << "->" << weight[i] << endl;
    }

    double sum = 0, wt = 0;
    for (int i = 0; i < n; i++)
    {
        if (wt + weight[i] < w)
        {
            wt = wt + weight[i];
            sum = sum + value[i];
        }
        else
        {
            int remain = w - wt;
            sum += value[i] * ((double)remain / weight[i]);
            break;
        }
    }

    cout << sum;
}