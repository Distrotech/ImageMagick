/*
  Copyright 1999-2012 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  MagickCore image colorspace methods.
*/
#ifndef _MAGICKCORE_COLORSPACE_H
#define _MAGICKCORE_COLORSPACE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef enum
{
  UndefinedColorspace,
  RGBColorspace,
  GRAYColorspace,
  TransparentColorspace,
  OHTAColorspace,
  LabColorspace,
  XYZColorspace,
  YCbCrColorspace,
  YCCColorspace,
  YIQColorspace,
  YPbPrColorspace,
  YUVColorspace,
  CMYKColorspace,
  sRGBColorspace,
  HSBColorspace,
  HSLColorspace,
  HWBColorspace,
  Rec601LumaColorspace,
  Rec601YCbCrColorspace,
  Rec709LumaColorspace,
  Rec709YCbCrColorspace,
  LogColorspace,
  CMYColorspace
} ColorspaceType;

extern MagickExport MagickBooleanType
  SetImageColorspace(Image *,const ColorspaceType,ExceptionInfo *),
  TransformImageColorspace(Image *,const ColorspaceType,ExceptionInfo *);

static inline MagickBooleanType IsCMYKColorspace(
  const ColorspaceType colorspace)
{
  if (colorspace == CMYKColorspace)
    return(MagickTrue);
  return(MagickFalse);
}

static inline MagickBooleanType IsGrayColorspace(
  const ColorspaceType colorspace)
{
  if ((colorspace == GRAYColorspace) || (colorspace == Rec601LumaColorspace) ||
      (colorspace == Rec709LumaColorspace))
    return(MagickTrue);
  return(MagickFalse);
}

static inline MagickBooleanType IsRGBColorspace(const ColorspaceType colorspace)
{
  if (colorspace == RGBColorspace)
    return(MagickTrue);
  return(MagickFalse);
}

static inline MagickBooleanType IssRGBColorspace(
  const ColorspaceType colorspace)
{
  if ((colorspace == sRGBColorspace) || (colorspace == TransparentColorspace))
    return(MagickTrue);
  return(MagickFalse);
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
