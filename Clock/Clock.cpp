#include <iostream>
#include <chrono>
#include <thread>


int main()
{
    int hour = 0;
    int min = 0;
    int second = 0;

    while (true)
    {
        std::cout << hour << " : " << min << " : " << second<< std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "\x1B[2J\x1B[H";
        second++;
        
        if (second == 60)
        {
            second = 0;
            min++;
        }

        if (min == 60)
        {
            min = 0;
            hour++;
        }
        
    }
}


// g�r en klocka som g�r upp i tid s� varje 60 sec s� g�r en minut up och var 60 min s� g�r en timme up