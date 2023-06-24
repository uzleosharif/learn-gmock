

#ifndef SDLCIFACE_H
#define SDLCIFACE_H

enum class ESdlcStatus { kOk, kMissing, kConfigFailed, kDisabled };

class SdlcIface {
public:
  SdlcIface() = default;
  SdlcIface(const SdlcIface&) = default;
  SdlcIface(SdlcIface&&) = default;
  auto operator=(const SdlcIface&) -> SdlcIface& = default;
  auto operator=(SdlcIface&&) -> SdlcIface& = default;
  virtual ~SdlcIface() = default;

  [[nodiscard]] auto virtual PatchExtendTime(float extend_time) noexcept
      -> ESdlcStatus = 0;
};

#endif
