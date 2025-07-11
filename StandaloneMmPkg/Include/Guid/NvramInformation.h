/** @file

  Copyright 2024 Cix Technology Group Co., Ltd. All Rights Reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _NVRAM_INFORMATION_H_
#define _NVRAM_INFORMATION_H_

#define NVRAM_INFORMATION_GUID \
  { \
    0x4C8167FC, 0x5A9D, 0x468E, {0xA9, 0x42, 0x86, 0x1F, 0xB5, 0x0A, 0xB5, 0x39} \
  }

#pragma pack(1)
typedef struct {
  UINT64    VariableBase;
  UINT64    FtwWorkingBase;
  UINT64    FtwSpareBase;
  UINT32    VariableSize;
  UINT32    FtwWorkingSize;
  UINT32    FtwSpareSize;
} NVRAM_INFORMATION_HOB_DATA;
#pragma pack()

extern EFI_GUID  gNvramInformationHobGuid;

#endif
