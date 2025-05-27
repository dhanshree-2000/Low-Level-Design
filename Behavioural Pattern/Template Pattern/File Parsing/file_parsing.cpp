#include <iostream>
#include <fstream>
#include <string>

// Abstract class DataParser
class DataParser {
public:
    DataParser(const std::string& filename) : filename(filename) {}

    // Template Method defines the steps of the algorithm
    void parse() {
        if (!openFile()) {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }
        parseData();
        closeFile();
    }

protected:
    std::ifstream fileStream;
    std::string filename;

    // Open the file
    virtual bool openFile() {
        fileStream.open(filename);
        if (fileStream.is_open()) {
            std::cout << "Opening file: " << filename << std::endl;
            return true;
        }
        return false;
    }

    // Close the file
    virtual void closeFile() {
        if (fileStream.is_open()) {
            fileStream.close();
            std::cout << "Closing file: " << filename << std::endl;
        }
    }

    // Pure virtual function to parse data
    virtual void parseData() = 0;
};

// CSV Parser
class CSVParserII : public DataParser {
public:
    CSVParserII(const std::string& filename) : DataParser(filename) {}

protected:
    void parseData() override {
        std::cout << "Parsing CSV Data:" << std::endl;
        std::string line;
        while (std::getline(fileStream, line)) {
            // Simple CSV parsing by splitting on commas
            size_t start = 0;
            size_t end = 0;
            while ((end = line.find(',', start)) != std::string::npos) {
                std::cout << line.substr(start, end - start) << " | ";
                start = end + 1;
            }
            std::cout << line.substr(start) << std::endl;
        }
    }
};

// JSON Parser (very basic, just prints lines)
class JSONParserII : public DataParser {
public:
    JSONParserII(const std::string& filename) : DataParser(filename) {}

protected:
    void parseData() override {
        std::cout << "Parsing JSON Data (line by line):" << std::endl;
        std::string line;
        while (std::getline(fileStream, line)) {
            // Just print the JSON lines (real parsing would require a JSON library)
            std::cout << line << std::endl;
        }
    }
};

int main() {
    // Provide paths to your CSV and JSON files
    DataParser* csvParser = new CSVParserII("data.csv");
    DataParser* jsonParser = new JSONParserII("data.json");

    // Using Template Method
    csvParser->parse();
    std::cout << std::endl;
    jsonParser->parse();

    delete csvParser;
    delete jsonParser;

    return 0;
}

