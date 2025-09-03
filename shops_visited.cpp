#include <iostream>
using namespace std;

int main()
{
    int s[10], e[10];
    int p, n, count = 0;

    cout << "\nEnter no. of shops:";
    cin >> n;

    cout << "\nEnter the start time:";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << "\nEnter the end time:";
    for (int i = 0; i < n; i++)
    {
        cin >> e[i];
    }

    cout << "\nEnter the number of persons:";
    cin >> p;

    // sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    cout << "\nsorted" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << "-" << e[i] << endl;
    }

    int visited[10] = {0}; // free time of person

    for (int i = 0; i < n; i++)
    {
        for (int person = 0; person < p; person++)
        {
            if (s[i] >= visited[person])
            {
                visited[person] = e[i]; // assign shop to this person
                count++;
                break;
            }
        }
    }

    cout << "\nTotal shops visited:" << count << endl;

    return 0;
}