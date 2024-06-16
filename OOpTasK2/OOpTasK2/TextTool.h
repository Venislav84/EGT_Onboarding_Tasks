#pragma once

#include <string>

class TextTool 
{ 
protected: 
std::string name; 
std::string description; 
std::string content; 
public: 
	TextTool(std::string n, std::string desc, std::string cont); 
	void setContent(std::string cont); 
	void showContent(); 
	void execute(); 
};

