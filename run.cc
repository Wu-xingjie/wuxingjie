#include <iostream>

#include "cxxopts/cxxopts.hpp"
#include "parser.h"
#include "scanner.h"

using namespace civitasv::json;

std::string read() {
  std::string source;
  getline(std::cin, source);
  return source;
}

void print(const std::string& message) { std::cout << message; }

void repl() {
  // read, eval, print, loop
  while (true) {
    print(">>> ");
    std::string input = read();

    Scanner scanner(input);
    Parser parser(scanner);

    JsonElement* res = parser.Parse();

    std::cout << ";Parse Result: " << res->Dumps();
    print("\n");

    delete res;
  }
}

void parse(int argc, const char* argv[]) {
  cxxopts::Options options(argv[0], "Json Parser");

  // clang-format off
  options.add_options()
    ("f,file", "json file path", cxxopts::value<std::string>())
    ("h,help", "Print usage");
  // clang-format on

  auto result = options.parse(argc, argv);

  if (result.count("help")) {
    std::cout << options.help() << std::endl;
    exit(0);
  }
  if (result.count("file")) {
    auto filepath = result["file"].as<std::string>();
    std::cout << "FILE PATH: " << filepath << '\n';
    exit(0);
  }

  repl();
}

int main(int argc, const char** argv) {
  parse(argc, argv);

  return 0;
}
