#include "ToolBox.h"
#include <iostream>

void ToolBox::addTool(TextTool* tool) 
{ 
	tools.push_back(tool); 
}

void ToolBox::printToolNames() 
{ 
	for (TextTool* tool : tools) 
	{ 
		std::cout << tool << std::endl; 
	} 
}

void ToolBox::executeAllTools() 
{ 
	for (TextTool* tool : tools) 
	{ 
		tool->execute(); 
	} 
}