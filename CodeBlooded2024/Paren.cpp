//// CodeBlooded2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//#include <stack>
//
//int main()
//{
//    std::string input;
//	std::stack<char> stack;
//
//	std::cin >> input;
//
//	for (char& c : input) 
//	{
//			char out;
//		if(stack.size() !=0)
//			out = stack.top();
//
//		switch (c)
//		{
//		case'{':
//		case'(':
//		case'[':
//			stack.push(c);
//			break;
//		case'}':
//
//			if (stack.size() == 0 || out != '{')
//			{
//				std::cout << "False";
//				stack.push(c);
//				return 0;
//				break;
//			}
//
//			stack.pop();
//			break;
//		case')':
//
//			if (stack.size() == 0 || out != '(')
//			{
//				std::cout << "False";
//				stack.push(c);
//				return 0;
//				break;
//			}
//
//			stack.pop();
//			break;
//		case']':
//
//			if (stack.size() == 0 || out != '[')
//			{
//				std::cout << "False";
//				stack.push(c);
//				break;
//				return 0;
//			}
//
//			stack.pop();
//			break;
//		default:
//			std::cout << "False";
//			return 0;
//			break;
//		}
//
//	}
//	if(stack.size()== 0)
//		std::cout << "True";
//	else
//	{
//		std::cout << "False";
//
//	}
//}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
