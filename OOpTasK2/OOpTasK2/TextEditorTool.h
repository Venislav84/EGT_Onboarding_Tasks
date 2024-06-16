#pragma once

#include "TextTool.h"

class TextEditorTool : public TextTool 
{ 
public: 
	TextEditorTool(std::string n, std::string desc, std::string cont); 
	void execute(); 
};