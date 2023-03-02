#include "pch.h"
#include "CppUnitTest.h"
#include "../../Source/Search/include/search.h"
#include "../../Source/Search/src/search.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFunction
{
	TEST_CLASS(TestFunction)
	{
	public:
		
		TEST_METHOD(TestMethod1){
			int arr[] = { 2,3,4,10,40 };
			int n = sizeof(arr) / sizeof(arr[0]);
			int x = 10;
			int result = binary_search(arr, 0, n - 1, x);
			Assert::AreEqual(result, 3);
		}
		TEST_METHOD(TestMethod2) {
			int arr[] = { 2,3,4,10,40 };
			int n = sizeof(arr) / sizeof(arr[0]);
			int x = 40;
			int result = binary_search(arr, 0, n - 1, x);
			Assert::AreEqual(result, 1);

		}
	};
}
