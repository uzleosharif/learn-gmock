

#ifndef SDLCIFACEIMPL_H
#define SDLCIFACEIMPL_H

#include "SDLCIface.h"

class SdlcIfaceImpl final : public SdlcIface {
public:
  [[nodiscard]] auto PatchExtendTime(float extend_time) noexcept
      -> ESdlcStatus override {
    extend_time_ = extend_time;
    return ESdlcStatus::kOk;
  }

private:
  float extend_time_{0.0};
};

#endif
