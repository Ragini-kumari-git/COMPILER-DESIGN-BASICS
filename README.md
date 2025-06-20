# COMPILER-DESIGN-BASICS

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : RAGINI KUMARI

*INTERN ID* : CT04DN1698

*DOMAIN NMAE* : C++ PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : Neela Santhosh Kumar

## DESCRIPTION ##

*Project Title:* Arithmetic Expression Evaluator – Compiler Design Basics

*Domain:* Compiler Design / Expression Parsing

This project presents a fundamental arithmetic expression evaluator implemented in C++, aimed at reinforcing the core concepts of compiler design. It is a console-based application that accepts user input in the form of a mathematical expression composed of integers and basic arithmetic operators (+, -, *, /), and outputs the evaluated result after parsing and computation. The evaluator strictly follows operator precedence rules and implements a recursive descent parsing technique, which is a key approach in syntax analysis, one of the essential phases in a compiler's front-end design.

The motivation behind developing this application is to gain hands-on experience with expression parsing, tokenization, and evaluation, which are critical building blocks in the creation of compilers and interpreters. The code structure is cleanly organized using object-oriented programming principles. A class named ExpressionEvaluator encapsulates all the parsing logic and exposes a single public method, evaluate, which receives a mathematical expression in string format and returns the computed integer result.

Internally, the parser works by reading characters one by one while maintaining a cursor position in the input string. The peek and get methods handle character inspection and consumption, respectively. The parser ignores white spaces to ensure flexibility in user input formatting. It recognizes numerical tokens and categorizes operators based on their precedence level. The parser supports two levels of precedence: multiplication and division are evaluated before addition and subtraction, adhering to the conventional rules of arithmetic operation.

The class methods are modularized into smaller components like parseNumber, parseFactor, parseTerm, and parseExpression. This structure reflects the recursive nature of expression grammars and closely resembles the construction of abstract syntax trees in compilers. Exception handling is incorporated to catch and report runtime errors such as division by zero, enhancing the robustness of the application.

The application begins by prompting the user to enter a valid arithmetic expression. Once entered, the expression is passed to the evaluator, which parses and evaluates it, returning the final result. If an invalid operation is detected, an error message is displayed instead of a result. This user-friendly interaction ensures that the program handles edge cases gracefully and provides clear feedback.

This expression evaluator serves as a simplified model of the expression evaluation component in full-scale compilers and interpreters. It is particularly relevant in the context of semantic analysis, where expressions are evaluated either at compile time (in case of constant expressions) or used to generate appropriate intermediate or machine code for execution. Although the current version does not support parentheses, floating-point numbers, or variables, it lays the foundation for further extension toward a complete arithmetic parser or a scripting engine.

*Applications:*

The concepts and techniques demonstrated in this project have numerous real-world applications. Similar evaluators are embedded within spreadsheet programs, calculators, and configuration engines. In game development and simulation software, expression parsers are used to evaluate user-defined scripts and event conditions. Additionally, the parser design mirrors that of domain-specific languages (DSLs) and templating systems where simple mathematical expressions are interpreted dynamically.

*Technology Stack:*

. Programming Language: C++

. Development Environment: Visual Studio Code

. Standard Libraries: iostream, string, cctype, sstream

*Conclusion:*

Overall, this project not only reinforces the theoretical concepts studied in compiler design but also provides practical insight into how arithmetic expressions can be parsed and evaluated programmatically. It is a fundamental yet powerful demonstration of parsing logic, recursive function design, and exception handling in the context of language processing systems.

