#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();    // row
        int m = matrix[0].size(); // column
        int top = 0;
        int down = n - 1;
        int left = 0;
        int right = m - 1;

        int dir = 0;
        /*
        dir=0: left to right
        dir=1: top to bottom
        dir=2: right to left
        dir=3: down to top
        */
        vector<int> result;

        while (top <= down && left <= right)
        {

            if (dir == 0)
            {
                // left to right
                // constant: row(top)
                for (int i = left; i <= right; i++)
                {
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            if (dir == 1)
            {
                // top to down
                // constant : column (right)

                for (int i = top; i <= down; i++)
                {
                    result.push_back(matrix[i][right]);
                }

                right--;
            }

            if (dir == 2)
            {
                // right to left
                // constant : row (down)

                for (int i = right; i >= left; i--)
                {
                    result.push_back(matrix[down][i]);
                }

                down--;
            }

            if (dir == 3)
            {
                // down to top
                // constant : col (left)

                for (int i = down; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }

                left++;
            }
            dir++;
            if (dir == 4)
            {
                dir = 0;
            }
        }
        return result;
    }
};

int main()
{

    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;

    vector<int> ans = obj.spiralOrder(matrix);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}