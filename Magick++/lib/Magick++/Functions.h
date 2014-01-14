// This may look like C code, but it is really -*- C++ -*-
//
// Copyright Bob Friesenhahn, 1999, 2000, 2001, 2003
//
// Simple C++ function wrappers for often used or otherwise
// inconvenient ImageMagick equivalents
//

#if !defined(Magick_Functions_header)
#define Magick_Functions_header

#include "Magick++/Include.h"
#include <string>

namespace Magick
{
  // Pixel cache threshold in bytes. Once this memory threshold is exceeded,
  // all subsequent pixels cache operations are to/from disk.
  MagickPPExport void CacheThreshold(const MagickSizeType threshold_);
  MagickPPExport MagickSizeType CacheThreshold(void);

  // Clone C++ string as allocated C string, de-allocating any existing string
  MagickPPExport void CloneString(char **destination_,
    const std::string &source_);

  // Disable OpenCL acceleration (only works when build with OpenCL support)
  MagickPPExport void DisableOpenCL(void);

  // Enable OpenCL acceleration (only works when build with OpenCL support)
  MagickPPExport void EnableOpenCL(const bool useCache_=true);

  // C library initialization routine
  MagickPPExport void InitializeMagick(const char *path_);
}
#endif // Magick_Functions_header
