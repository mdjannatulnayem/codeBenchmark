//Proj.CppTiming

#include <chrono>
#include <iostream>

class Timer{

    private:

    std::chrono::duration<float> duration;
    std::chrono::high_resolution_clock::time_point start,end;

    public:

    Timer(){
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer(){
        end = std::chrono::high_resolution_clock::now();
        duration = end-start;
        float ms = duration.count() * 1000.0f;
        std::cout << "Program ran for " << ms << "ms\n";
    }
};


void function(){
    Timer t;
    //inner functionalities!
}

int main()
{
    function();
    return 0;
}
