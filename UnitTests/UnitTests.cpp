#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width); 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(getPerimeterTestMethod)
		{
			//arrange
			int length = 15;
			int width = 5;
			const int EXPECTED = 40;

			//act
			int actual = getPerimeter(&length, &width);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(getAreaTestMethod)
		{
			//arrange
			int length = 30;
			int width = 10;
			const int EXPECTED = 300;

			//act
			int actual = getArea(&length, &width);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(setLengthTestMethod1)
		{
			//arrange
			int input = 10;
			int length = 1;
			const int EXPECTED = 10;

			//act
			setLength(input, &length);

			//assert
			Assert::AreEqual(EXPECTED, length);
		}
		TEST_METHOD(setLengthTestMethod2)
		{
			//arrange
			int input = -2;
			int length = 1;
			const int EXPECTED = 1;

			//act
			setLength(input, &length);

			//assert
			Assert::AreEqual(EXPECTED, length);
		}
		TEST_METHOD(setLengthTestMethod3)
		{
			//arrange
			int input = 110;
			int length = 1;
			const int EXPECTED = 1;

			//act
			setLength(input, &length);

			//assert
			Assert::AreEqual(EXPECTED, length);
		}
		TEST_METHOD(setWitdhTestMethod1)
		{
			//arrange
			int input = 8;
			int width = 1;
			const int EXPECTED = 8;

			//act
			setWidth(input, &width);

			//assert
			Assert::AreEqual(EXPECTED, width);
		}
		TEST_METHOD(setWitdhTestMethod2)
		{
			//arrange
			int input = -89;
			int width = 1;
			const int EXPECTED = 1;

			//act
			setWidth(input, &width);

			//assert
			Assert::AreEqual(EXPECTED, width);
		}
		TEST_METHOD(setWitdhTestMethod3)
		{
			//arrange
			int input = 211;
			int width = 1;
			const int EXPECTED = 1;

			//act
			setWidth(input, &width);

			//assert
			Assert::AreEqual(EXPECTED, width);
		}
	};
}
