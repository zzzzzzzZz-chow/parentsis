#include<parenthesisMatch.h>
#include<iostream>

int main() {
	int a(1);
	std::string test = "(1$我锟斤拷-jab2(*烫烫烫dhidoaozzzZzw)-;2(&iwh）中文括号（72))()";
	std::cout << findDeepestParenthesisIndex(test) << std::endl;
//	std::cout << findDeepestParenthesisIndex("((1+2)*3)") << std::endl;
	std::cout << EvaluateString("1+2+3+(4-5)*6") << std::endl;
	std::cout << ReplaceDeepestParenthesisByString("1+2*(3+4)", additionCut(FindDeepestParenthesis("(1+2*(3+4))"))) << std::endl;
}