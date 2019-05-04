#ifndef IPTUX_COMMAND_MODE_H
#define IPTUX_COMMAND_MODE_H

#include <string>

namespace iptux {

class CommandMode {
public:
  explicit CommandMode(int mode): mode(mode) {}
  std::string toString() const;
private:
  int mode;
};

}

#endif
