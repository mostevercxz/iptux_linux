//
// C++ Implementation: SoundSystem
//
// Description:
//
//
// Author: Jally <jallyx@163.com>, (C) 2009
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "config.h"
#include "SoundSystem.h"


#include <sys/time.h>
#include <cstring>
#include <glib/gi18n.h>

#include "iptux/UiProgramData.h"
#include "iptux/output.h"
#include "iptux/utils.h"
#include "iptux/global.h"

using namespace std;

namespace iptux {
/**
 * 类构造函数.
 */
SoundSystem::SoundSystem() : persist(false) {  
  gettimeofday(&timestamp, NULL);
}

/**
 * 类析构函数.
 */
SoundSystem::~SoundSystem() {
  LOG_WARN("%s", __PRETTY_FUNCTION__);
}

/**
 * 初始化声音系统.
 */
void SoundSystem::InitSublayer() {
  LOG_WARN("%s", __PRETTY_FUNCTION__);
}

/**
 * 调整音量.
 * @param value 音量值
 */
void SoundSystem::AdjustVolume(double value) {
  LOG_WARN("%s,%f", __PRETTY_FUNCTION__, value);  
}

/**
 * 播放音频文件.
 * @param file 音频文件
 * @note 如果时间间隔过短，系统将会忽略后一个请求.
 */
void SoundSystem::Playing(const char *file) {
  LOG_WARN("%s,%s", __PRETTY_FUNCTION__, file);
}

/**
 * 停止播放.
 */
void SoundSystem::Stop() {
  LOG_WARN("%s,%s", __PRETTY_FUNCTION__, file);
}
