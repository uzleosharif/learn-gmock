

#ifndef SDLCIFACE_H
#define SDLCIFACE_H

enum class ESdlcStatus { kOk, kMissing, kConfigFailed, kDisabled };

class SdlcIface {
public:
  virtual ~SdlcIface() = default;

  [[nodiscard]] virtual ESdlcStatus PatchExtendTime(float extend_time) = 0;
};

#endif
