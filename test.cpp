#include "SimpleTest.hpp"

#include <boost/progress.hpp>

// examples
void testA()
{
    using namespace simpletest;
    ASSERT_EQUAL(1, 1, "testA test 1");               // will pass
    ASSERT_EQUAL("hello", "goodbye", "testA test 2"); // will fail
}

void testB()
{
    using namespace simpletest;
    ASSERT_EQUAL((10 / 2), 5, "testB test 1");        // will pass
}

int main()
{

    // for timing how long tests take, add a boost progress timer
    {
        boost::progress_timer timer;
        testA();
        testB();
    }

    simpletest::showResults();

    return 0;

}
