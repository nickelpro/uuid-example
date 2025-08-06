#include <array>

#include <lib.hpp>

int main() {
  auto uuid = make_uuid();
  return (std::array<unsigned char, 16> {}) == uuid;
}
