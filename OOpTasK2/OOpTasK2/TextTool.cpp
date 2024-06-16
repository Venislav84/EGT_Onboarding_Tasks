#include "TextTool.h" 
#include <iostream>

TextTool::TextTool(std::string n, std::string desc, std::string cont) 
{ 
	name = n; 
	description = desc; 
	content = cont; 
}

void TextTool::setContent(std::string cont) 
{ 
	content = cont; 
}

void TextTool::showContent() 
{ 
	std::cout << "Content: " << content << std::endl; 
}

void TextTool::execute() 
{ 
	std::cout << "Executing tool: " << name << std::endl; 
}