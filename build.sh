#!/usr/bin/env bash
# Build script that uses the existing CMakePresets.json
# Usage: ./build.sh [preset]

PRESET=${1:-macos-release}

echo "Configuring with preset ${PRESET}..."
cmake --preset "${PRESET}" || exit $?

echo "Building..."
cmake --build build || exit $?

exit 0
