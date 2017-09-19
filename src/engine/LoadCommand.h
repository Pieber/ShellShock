// Generated by dia2code
#ifndef ENGINE__LOADCOMMAND__H
#define ENGINE__LOADCOMMAND__H

#include <string>

namespace engine {
  class Command;
}

#include "Command.h"

namespace engine {

  /// class LoadCommand - Command load
  class LoadCommand : public engine::Command {
    // Attributes
  protected:
    std::string file_name;
    // Operations
  public:
    LoadCommand (const char* f);
    const char* getFileName () const;
    int getCategory () const;
    int getCharacter () const;
  };

};

#endif
