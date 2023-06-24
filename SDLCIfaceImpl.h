

#ifndef SDLCIFACEIMPL_H
#define SDLCIFACEIMPL_H

#include "SDLCIface.h"

class SdlcIfaceImpl : public SdlcIface {
public:
  [[nodiscard]] ESdlcStatus PatchExtendTime(float extend_time) override {
    extend_time_ = extend_time;
    return ESdlcStatus::kOk;
  }

private:
  float extend_time_{0.0};
};

#endif
