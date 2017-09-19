// Generated by dia2code
#ifndef SERVER__USERSERVICE__H
#define SERVER__USERSERVICE__H

#include "json/json.h"

namespace server {
  class UserDB;
  class AbstractService;
}

#include "HttpStatus.h"
#include "AbstractService.h"

namespace server {

  /// class UserService - 
  class UserService : public server::AbstractService {
    // Attributes
  protected:
    UserDB& userDB;
    // Operations
  public:
    UserService (UserDB& userDB);
    HttpStatus get (Json::Value& out, int characterSender, int characterAsked) const;
    HttpStatus remove (int id);
  };

};

#endif
