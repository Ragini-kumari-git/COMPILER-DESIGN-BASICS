#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

class ExpressionEvaluator {
private:
    string expr;
    size_t pos;

    char peek() {
        return pos < expr.size() ? expr[pos] : '\0';
    }

    char get() {
        return pos < expr.size() ? expr[pos++] : '\0';
    }

    // Skip whitespaces
    void skipWhitespace() {
        while (isspace(peek())) get();
    }

    // Parse number (integers)
    int parseNumber() {
        skipWhitespace();
        int number = 0;
        while (isdigit(peek())) {
            number = number * 10 + (get() - '0');
        }
        return number;
    }

    // Parse factor: for now, just numbers
    int parseFactor() {
        skipWhitespace();
        return parseNumber();
    }

    // Parse term: handles *, /
    int parseTerm() {
        int value = parseFactor();
        while (true) {
            skipWhitespace();
            char op = peek();
            if (op == '*' || op == '/') {
                get(); // consume operator
                int right = parseFactor();
                if (op == '*')
                    value *= right;
                else {
                    if (right == 0) {
                        throw runtime_error("Division by zero");
                    }
                    value /= right;
                }
            } else {
                break;
            }
        }
        return value;
    }

    // Parse expression: handles +, -
    int parseExpression() {
        int value = parseTerm();
        while (true) {
            skipWhitespace();
            char op = peek();
            if (op == '+' || op == '-') {
                get(); // consume operator
                int right = parseTerm();
                if (op == '+')
                    value += right;
                else
                    value -= right;
            } else {
                break;
            }
        }
        return value;
    }

public:
    int evaluate(const string& input) {
        expr = input;
        pos = 0;
        return parseExpression();
    }
};

int main() {
    ExpressionEvaluator evaluator;
    string input;

    cout << "Simple Arithmetic Expression Evaluator (without parentheses)" << endl;
    cout << "Enter an expression (e.g., 2 + 3 * 4 - 5): ";
    getline(cin, input);

    try {
        int result = evaluator.evaluate(input);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
