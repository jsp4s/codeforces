#include <iostream>
int main()
{
    int d, sumTime, sumMinTime = 0, sumMaxTime = 0;
    std::cin >> d;
    std::cin >> sumTime;
    
    int timeLimits[d][2]; //Array to store min and max time studied each day
    for (int i = 0; i < d; i++)
    {
        std::cin >> timeLimits[i][0];
        sumMinTime += timeLimits[i][0];
        std::cin >> timeLimits[i][1];
        sumMaxTime += timeLimits[i][1];
    }
    if (sumTime <= sumMaxTime && sumTime >= sumMinTime)
    {
        std::cout << "YES\n";
        sumTime = sumTime - sumMinTime; //sumTime now represents the remaining hours to be allocated
        
        int curIndex = 0;
        while (sumTime > 0)
        {
            while (timeLimits[curIndex][0] < timeLimits[curIndex][1] && sumTime > 0)
            {
                timeLimits[curIndex][0]++;
                sumTime--;
            }
            curIndex++;
        }
        for(int i = 0; i < d; i++)
        {
            std::cout << timeLimits[i][0] << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}
