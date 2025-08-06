#include <array>

#include <uuid/uuid.h>

std::array<unsigned char, 16> make_uuid() {
  std::array<unsigned char, 16> uuid;
  uuid_generate(uuid.data());
  return uuid;
}
