#pragma once

#include <vector> 
#include "TextTool.h"

class ToolBox 
{ 
private: 
std::vector<TextTool*> tools; 
public: 
	void addTool(TextTool* tool); 
	void printToolNames(); 
	void executeAllTools(); 
};


