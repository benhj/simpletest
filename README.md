A extremely simple and lightweight C++ unit testing framework
------------------------------------------------------------

- Provides a very simple assertion macro for testing simple program logic
- It's as simple as just adding `ASSERT_EQUAL(a, b, "Comment");` to whatever you want to test
- For when far better testing frameworks (e.g. CPPUNIT, google..) are just too heavy...

To use, simply include SimpleTest.hpp. Example usage is shown in test.cpp.
Requires some of the boost headers (format and progress).

See my other project, [knoxcrypt](https://github.com/benhj/knoxcrypt) for a real-world example of using 
simpletest for unit testing.

Main caveat
-----------
No exception handling
