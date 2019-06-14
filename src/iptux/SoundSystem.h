//
// C++ Interface: SoundSystem
//
// Description:
// 声音系统
//
// Author: Jally <jallyx@163.com>, (C) 2009
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef IPTUX_SOUNDSYSTEM_H
#define IPTUX_SOUNDSYSTEM_H

#include "iptux/config.h"
#include "iptux/Models.h"

namespace iptux {

class SoundSystem {
 public:
  SoundSystem();
  ~SoundSystem();

  void InitSuzblayer() {}
  void AdjustVolume(double value);
  void Playing(const char *file);
  void Stop();

 private:  
  struct timeval timestamp;  //时间戳
  bool persist;              //声音系统占用标记   
};

}  // namespace iptux

#endif
