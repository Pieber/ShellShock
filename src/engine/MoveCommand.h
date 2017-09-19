// Generated by dia2code
#ifndef ENGINE__MOVECOMMAND__H
#define ENGINE__MOVECOMMAND__H


namespace engine {
  class Command;
}

#include "Command.h"

namespace engine {

  /// class MoveCommand - Command Move
  class MoveCommand : public engine::Command {
    // Attributes
  protected:
    int character;
    int Xmove;
    int Ymove;
    // Operations
  public:
    MoveCommand (int c, int xmove, int ymove);
    int getCharacter () const;
    int getCategory () const;
    int getXmove () const;
    int getYmove () const;
  };

};

#endif
