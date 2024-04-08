#include <iostream>
using namespace std;

/*
pattern 1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
pattern 2;
*
* *
* * *
* * * *
* * * * *
*/
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
pattern3
* * * *
* * *
* *
*

*/
void pattern3(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
pattern5
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/
void pattern6(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // for (int j = i; j <= i; j++)
        // {
        for (int s = 0; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int st = i; st >= 1; st--)
        {
            cout << i << " ";
        }
        cout << endl;
        // }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // for (int j = i; j <= i; j++)
        // {
        for (int s = 0; s <= n - i; s++) // loop 1 for printing spaces only
        {
            cout << " ";
        }
        for (int st = i; st >= 1; st--) // loop 2 for printing stars only
        {
            cout << i << " ";
        }
        cout << endl;
        // }
    }
}

/*
pattern7
* * * * *
*       *
*       *
*       *
* * * * *
*/

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  "; // put double star here
            }
        }
        cout << endl;
    }
}

/*
pattern5
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

void pattern8(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}
int main()
{
    pattern8(4);
    return 0;
}