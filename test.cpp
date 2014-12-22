#include "SimpleTest.hpp"

#include <boost/progress.hpp>

// examples
int testA()
{
    ASSERT_EQUAL(1, 1, "testA test 1");
    ASSERT_EQUAL("hello", "goodbye", "testA test 2");
}

int testB()
{
    ASSERT_EQUAL((10 / 2), 5, "testB test 1");
}

int main()
{

    // for timing how long tests take, add a boost progress timer
    {
        boost::progress_timer timer;
        testA();
        testB();
    }

    showResults();
}
