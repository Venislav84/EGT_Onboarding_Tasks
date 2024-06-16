#include "TextEditorTool.h" 
#include <iostream>

TextEditorTool::TextEditorTool(std::string n, std::string desc, std::string cont) : TextTool(n, desc, cont) {}

void TextEditorTool::execute() 
{ 
	std::cout << "Executing text editor tool: " << name << std::endl; 
}