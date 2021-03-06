//===-- XCoreMCAsmInfo.h - XCore asm properties ----------------*- C++ -*--===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the declaration of the XCoreMCAsmInfo class.
//
//===----------------------------------------------------------------------===//

#ifndef XCORETARGETASMINFO_H
#define XCORETARGETASMINFO_H

#include "llvm/MC/MCAsmInfoELF.h"

namespace llvm {
  class StringRef;
  class Target;

  class XCoreMCAsmInfo : public MCAsmInfoELF {
    void anchor() override;
  public:
    explicit XCoreMCAsmInfo(StringRef TT);
  };

} // namespace llvm

#endif
