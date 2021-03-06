#include <string>
#include <vector>

// Do not edit the class below except
// for the depthFirstSearch method.
// Feel free to add new properties
// and methods to the class.
class Node {
public:
  std::string name;
  std::vector<Node *> children;

  Node(std::string str) { name = str; }

  std::vector<std::string> depthFirstSearch(std::vector<std::string> *array) {
    array->push_back(name);
    for (Node *child : children) {
      child->depthFirstSearch(array);
    }
    return *array;
  }

  Node *addChild(std::string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};
