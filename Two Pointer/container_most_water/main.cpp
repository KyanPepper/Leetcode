#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
}
int maxArea(vector<int> &height)
{
    int leftbound = 0;
    int rightbound = 0;
    int lastdistance = 0;
    int i = 0;
    int j = height.size() - 1;
    while (i <= j)
    {
        if (leftbound == 0 || (area(height[i], rightbound, (j - i)) > area(leftbound, rightbound, lastdistance)))
        {
            leftbound = height[i];
            lastdistance = j - i;
        }
        if (rightbound == 0 || (area(height[j], leftbound, (j - i)) > area(leftbound, rightbound, lastdistance)))
        {
            rightbound = height[j];
            lastdistance = j - i;
        }

        if (area(height[j], height[i], (j - i)) > area(leftbound, rightbound, lastdistance))
        {
            rightbound = height[j];
            leftbound = height[i];
            lastdistance = j - i;
        }

        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return (area(leftbound, rightbound, lastdistance));
}

int area(int l, int r, int b)
{
    if (l >= r)
    {
        return r * b;
    }
    return l * b;
}