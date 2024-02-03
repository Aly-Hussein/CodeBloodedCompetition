//// CodeBlooded2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//
//int main()
//{
//    std::string input;
//
//        std::cin >> input;
//
//        if (input.size() < 3 || input.size() > 1000)
//        {
//            std::cout << "input size inappropriate try again\n";
//        }
//        else if ((input[0] == 'h' || input[0] == 'H') && (input[input.size() - 1] == 'y' || input[input.size() - 1] == 'Y'))
//        {
//            std::string inputStripped;
//
//            inputStripped = input.substr(1, input.size() - 2);
//
//            if (inputStripped.find_first_not_of('e', 'E') == std::string::npos) {
//
//                std::cout << input[0];
//
//                for (char& c : inputStripped)
//                {
//                    std::cout << c <<c;
//                }
//
//                std::cout << input[input.size() - 1] << "\n";
//            }
//        }
//        else
//        {
//            std::cout << input<<"\n";
//        }
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
