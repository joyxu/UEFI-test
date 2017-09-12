/** @file   
  ACPI 6.2 definitions from the ACPI Specification Revision 6.2 May, 2017.

  Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
 (C) Copyright 2017 Hewlett Packard Enterprise Development LP<BR>
  This program and the accompanying materials                          
  are licensed and made available under the terms and conditions of the BSD License         
  which accompanies this distribution.  The full text of the license may be found at        
  http://opensource.org/licenses/bsd-license.php                                            

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,                     
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.             
**/

#ifndef _ACPI_6_2_H_
#define _ACPI_6_2_H_

#include <IndustryStandard/Acpi61.h>

//
// Ensure proper structure formats
//
#pragma pack(1)

///
/// ITS Affinity Structure definition
///
typedef struct {
  UINT8   Type;
  UINT8   Length;
  UINT32  ProximityDomain;
  UINT16  Reserved;
  UINT32  ItsHwId;
} EFI_ACPI_6_2_ITS_AFFINITY_STRUCTURE;

#pragma pack()

#endif
