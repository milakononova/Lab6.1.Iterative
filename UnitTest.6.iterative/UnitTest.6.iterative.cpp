
#include "pch.h"
#include "CppUnitTest.h"
#include "Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab61Tests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            int a[5] = { 21, 35, 40, 53, 77 };
            Assert::AreEqual(3, Count(a, 5));
        }

        TEST_METHOD(TestSum)
        {
            int a[5] = { 21, 35, 40, 53, 77 };
            Assert::AreEqual(165, Sum(a, 5));
        }

        TEST_METHOD(TestReplace)
        {
            int a[5] = { 21, 35, 40, 53, 77 };

            Replace(a, 5);

            Assert::AreEqual(21, a[0]);
            Assert::AreEqual(0, a[1]);
            Assert::AreEqual(40, a[2]);
            Assert::AreEqual(0, a[3]);
            Assert::AreEqual(0, a[4]);
        }
    };
}
