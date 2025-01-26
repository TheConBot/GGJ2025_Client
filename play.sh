#!/bin/bash
# filepath: /f:/Projects/GGJ2025/GGJ2025_Client/play.sh

# Build the project using make with 8 parallel jobs
make -j8

# Check if the build was successful
if [ $? -ne 0 ]; then
    echo "Build failed."
    exit 1
fi

# Run the built ROM with mGBA on Windows
cmd.exe /c "..\mGBA-0.10.4-win32\mGBA pokeemerald.gba"