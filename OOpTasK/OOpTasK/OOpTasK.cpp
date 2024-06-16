#include <iostream>
#include <fstream>
#include <vector>

class TextTool {
protected:
    std::string name;
    std::string description;
    std::string content;

public:
    TextTool(std::string name, std::string description, std::string content) : name(name), description(description), content(content) {}

    void printData() {
        std::cout << "Tool Name: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Content: " << content << std::endl;
    }

    void setContent(std::string newContent) {
        content = newContent;
    }

    void showContent() {
        std::cout << "Content: " << content << std::endl;
    }

    virtual void execute() = 0;
};

class TextEditorTool : public TextTool {
public:
    TextEditorTool(std::string name, std::string description, std::string content) : TextTool(name, description, content) {}

    void execute() {
        showMenu();
    }

    void showMenu() {
        int choice;
        do {
            std::cout << "Text Editor Menu:" << std::endl;
            std::cout << "1. Insert Text" << std::endl;
            std::cout << "2. Delete Text" << std::endl;
            std::cout << "3. Save Document" << std::endl;
            std::cout << "4. Load Document" << std::endl;
            std::cout << "5. Show Content" << std::endl;
            std::cout << "6. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
            case 1: {
                std::string newText;
                std::cout << "Enter text to insert: ";
                std::cin >> newText;
                insertText(newText);
                break;
            }
            case 2: {
                int start, length;
                std::cout << "Enter start position for deletion: ";
                std::cin >> start;
                std::cout << "Enter length of text to delete: ";
                std::cin >> length;
                deleteText(start, length);
                break;
            }
            case 3: {
                std::string fileName;
                std::cout << "Enter file name to save: ";
                std::cin >> fileName;
                saveDocument(fileName);
                break;
            }
            case 4: {
                std::string fileName;
                std::cout << "Enter file name to load: ";
                std::cin >> fileName;
                loadDocument(fileName);
                break;
            }
            case 5:
                showContent();
                break;
            default:
                break;
            }
        } while (choice != 6);
    }

    void insertText(std::string newText) {
        content += newText;
        std::cout << "Text: " << newText << " inserted successfully." << std::endl;
    }

    void deleteText(int start, int length) {
        content.erase(start, length);
        std::cout << "Text deleted successfully." << std::endl;
    }

    void saveDocument(std::string fileName) {
        std::ofstream file(fileName);
        file << content;
        file.close();
        std::cout << "Document saved successfully." << std::endl;
    }

    void loadDocument(std::string fileName) {
        std::ifstream file(fileName);
        std::string loadedContent;
        file >> loadedContent;
        content = loadedContent;
        file.close();
        std::cout << "Document loaded successfully." << std::endl;
    }
};

class SearchReplaceTool : public TextTool {
public:
    SearchReplaceTool(std::string name, std::string description, std::string content) : TextTool(name, description, content) {}

    void execute() {
        searchAndReplace();
    }

    void searchAndReplace() {
        std::string search, replace;
        std::cout << "Executing Search and Replace Tool..." << std::endl;
        std::cout << "Current content: " << content << std::endl;
        std::cout << "Enter the text to search: ";
        std::cin >> search;
        std::cout << "Enter the replacement text: ";
        std::cin >> replace;
        size_t pos = content.find(search);
        if (pos != std::string::npos) {
            content.replace(pos, search.length(), replace);
        }
        std::cout << "Result content: " << content << std::endl;
    }
};

class FormattingTool : public TextTool {
private:
    std::string textColor;
    int fontSize;
    std::string fontStyle;

public:
    FormattingTool(std::string name, std::string description, std::string content, std::string textColor, int fontSize, std::string fontStyle)
        : TextTool(name, description, content), textColor(textColor), fontSize(fontSize), fontStyle(fontStyle) {}

    void execute() {
        showMenu();
    }

    void showMenu() {
        int choice;
        do {
            std::cout << "Formatting Menu:" << std::endl;
            std::cout << "1. Change Font Style" << std::endl;
            std::cout << "2. Change Font Size" << std::endl;
            std::cout << "3. Change Text Color" << std::endl;
            std::cout << "4. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
            case 1: {
                std::cout << "Enter new font style: ";
                std::cin >> fontStyle;
                break;
            }
            case 2: {
                std::cout << "Enter new font size: ";
                std::cin >> fontSize;
                break;
            }
            case 3: {
                std::cout << "Enter new text color: ";
                std::cin >> textColor;
                break;
            }
            default:
                break;
            }
        } while (choice != 4);

        std::cout << "Font Style: " << fontStyle << std::endl;
        std::cout << "Font Size: " << fontSize << std::endl;
        std::cout << "Text Color: " << textColor << std::endl;
    }
};

class ToolBox {
private:
    std::vector<TextTool*> tools;

public:
    ToolBox() {}

    void addTool(TextTool* tool) {
        tools.push_back(tool);
    }

    void printToolNames() {
        for (const auto& tool : tools) {
            // can't access the name
            std::cout << "Tool Name: " << tool->name << std::endl;
        }
    }

    void executeAllTools() {
        for (const auto& tool : tools) {
            tool->execute();
        }
    }
};

int main() {
    TextEditorTool textEditor("Text Editor Tool", "Tool for editing text", "");
    SearchReplaceTool searchReplace("Search Replace Tool", "Tool for search and replace", "some text here");
    FormattingTool formatting("Formatting Tool", "Tool for text formatting", "Lorem Ipsum", "red", 12, "italic");

    ToolBox toolbox;
    toolbox.addTool(&textEditor);
    toolbox.addTool(&searchReplace);
    toolbox.addTool(&formatting);

    toolbox.printToolNames();
    toolbox.executeAllTools();

    return 0;
}