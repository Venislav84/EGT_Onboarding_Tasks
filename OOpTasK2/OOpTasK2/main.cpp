#include <iostream> 
#include "TextTool.h" 
#include "TextEditorTool.h" 
#include "ToolBox.h"

int main() {
	TextTool* tool1 = new TextTool("Tool1", "Description1", "Content1"); 
	TextEditorTool* tool2 = new TextEditorTool("Tool2", "Description2", "Content2");


	ToolBox toolbox;
	toolbox.addTool(tool1);
	toolbox.addTool(tool2);

	toolbox.printToolNames();
	toolbox.executeAllTools();

	delete tool1;
	delete tool2;

	return 0;
}