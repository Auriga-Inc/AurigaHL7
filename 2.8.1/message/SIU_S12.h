/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:22 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __SIU_S12__281_H__
#define __SIU_S12__281_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/DG1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"
#include "../segment/SCH.h"
#include "../segment/TQ1.h"

namespace HL7_281 {

/* Internal structures/groups */
struct SIU_S12_PATIENT; /* PATIENT */
struct SIU_S12_RESOURCES; /* RESOURCES */
struct SIU_S12_SERVICE; /* SERVICE */
struct SIU_S12_GENERAL_RESOURCE; /* GENERAL_RESOURCE */
struct SIU_S12_LOCATION_RESOURCE; /* LOCATION_RESOURCE */
struct SIU_S12_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */

/* PATIENT */
struct SIU_S12_PATIENT : public HL7Group {
  SIU_S12_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_DG1_1,
    SIU_S12_OBX_2,
    SIU_S12_PD1_3,
    SIU_S12_PID_4,
    SIU_S12_PV1_5,
    SIU_S12_PV2_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_PATIENT"; }
  SIU_S12_PATIENT* create() const { return new SIU_S12_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.PATIENT");
    addObject<DG1>(SIU_S12_DG1_1, "DG1.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(SIU_S12_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PD1>(SIU_S12_PD1_3, "PD1.3", HL7::optional, HL7::repetition_on);
    addObject<PID>(SIU_S12_PID_4, "PID.4", HL7::optional, HL7::repetition_on);
    addObject<PV1>(SIU_S12_PV1_5, "PV1.5", HL7::optional, HL7::repetition_on);
    addObject<PV2>(SIU_S12_PV2_6, "PV2.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  DG1* getDG1_1(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SIU_S12_DG1_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SIU_S12_OBX_2);
  }
  PD1* getPD1_3(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, SIU_S12_PD1_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SIU_S12_PID_4);
  }
  PV1* getPV1_5(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SIU_S12_PV1_5);
  }
  PV2* getPV2_6(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SIU_S12_PV2_6);
  }

  /* Checker list */
  bool isDG1_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_DG1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_3(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_5(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_PATIENT */

/* RESOURCES */
struct SIU_S12_RESOURCES : public HL7Group {
  SIU_S12_RESOURCES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_RGS_1,
    SIU_S12_SIU_S12_GENERAL_RESOURCE_2,
    SIU_S12_SIU_S12_LOCATION_RESOURCE_3,
    SIU_S12_SIU_S12_PERSONNEL_RESOURCE_4,
    SIU_S12_SIU_S12_SERVICE_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_RESOURCES"; }
  SIU_S12_RESOURCES* create() const { return new SIU_S12_RESOURCES(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.RESOURCES");
    addObject<RGS>(SIU_S12_RGS_1, "RGS.1", HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_GENERAL_RESOURCE>(SIU_S12_SIU_S12_GENERAL_RESOURCE_2, "SIU_S12_GENERAL_RESOURCE.2", HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_LOCATION_RESOURCE>(SIU_S12_SIU_S12_LOCATION_RESOURCE_3, "SIU_S12_LOCATION_RESOURCE.3", HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_PERSONNEL_RESOURCE>(SIU_S12_SIU_S12_PERSONNEL_RESOURCE_4, "SIU_S12_PERSONNEL_RESOURCE.4", HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_SERVICE>(SIU_S12_SIU_S12_SERVICE_5, "SIU_S12_SERVICE.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  RGS* getRGS_1(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SIU_S12_RGS_1);
  }
  SIU_S12_GENERAL_RESOURCE* getSIU_S12_GENERAL_RESOURCE_2(size_t index = 0) {
    return (SIU_S12_GENERAL_RESOURCE*)this->getObjectSafe(index, SIU_S12_SIU_S12_GENERAL_RESOURCE_2);
  }
  SIU_S12_LOCATION_RESOURCE* getSIU_S12_LOCATION_RESOURCE_3(size_t index = 0) {
    return (SIU_S12_LOCATION_RESOURCE*)this->getObjectSafe(index, SIU_S12_SIU_S12_LOCATION_RESOURCE_3);
  }
  SIU_S12_PERSONNEL_RESOURCE* getSIU_S12_PERSONNEL_RESOURCE_4(size_t index = 0) {
    return (SIU_S12_PERSONNEL_RESOURCE*)this->getObjectSafe(index, SIU_S12_SIU_S12_PERSONNEL_RESOURCE_4);
  }
  SIU_S12_SERVICE* getSIU_S12_SERVICE_5(size_t index = 0) {
    return (SIU_S12_SERVICE*)this->getObjectSafe(index, SIU_S12_SIU_S12_SERVICE_5);
  }

  /* Checker list */
  bool isRGS_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_RGS_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSIU_S12_GENERAL_RESOURCE_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SIU_S12_GENERAL_RESOURCE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSIU_S12_LOCATION_RESOURCE_3(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SIU_S12_LOCATION_RESOURCE_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSIU_S12_PERSONNEL_RESOURCE_4(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SIU_S12_PERSONNEL_RESOURCE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSIU_S12_SERVICE_5(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SIU_S12_SERVICE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_RESOURCES */

/* SERVICE */
struct SIU_S12_SERVICE : public HL7Group {
  SIU_S12_SERVICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_AIS_1,
    SIU_S12_NTE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_SERVICE"; }
  SIU_S12_SERVICE* create() const { return new SIU_S12_SERVICE(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.SERVICE");
    addObject<AIS>(SIU_S12_AIS_1, "AIS.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S12_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AIS* getAIS_1(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_2);
  }

  /* Checker list */
  bool isAIS_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_SERVICE */

/* GENERAL_RESOURCE */
struct SIU_S12_GENERAL_RESOURCE : public HL7Group {
  SIU_S12_GENERAL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_AIG_1,
    SIU_S12_NTE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_GENERAL_RESOURCE"; }
  SIU_S12_GENERAL_RESOURCE* create() const { return new SIU_S12_GENERAL_RESOURCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.GENERAL_RESOURCE");
    addObject<AIG>(SIU_S12_AIG_1, "AIG.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S12_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AIG* getAIG_1(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S12_AIG_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_2);
  }

  /* Checker list */
  bool isAIG_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIG_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_GENERAL_RESOURCE */

/* LOCATION_RESOURCE */
struct SIU_S12_LOCATION_RESOURCE : public HL7Group {
  SIU_S12_LOCATION_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_AIL_1,
    SIU_S12_NTE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_LOCATION_RESOURCE"; }
  SIU_S12_LOCATION_RESOURCE* create() const { return new SIU_S12_LOCATION_RESOURCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.LOCATION_RESOURCE");
    addObject<AIL>(SIU_S12_AIL_1, "AIL.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S12_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AIL* getAIL_1(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S12_AIL_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_2);
  }

  /* Checker list */
  bool isAIL_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIL_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_LOCATION_RESOURCE */

/* PERSONNEL_RESOURCE */
struct SIU_S12_PERSONNEL_RESOURCE : public HL7Group {
  SIU_S12_PERSONNEL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_AIP_1,
    SIU_S12_NTE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_PERSONNEL_RESOURCE"; }
  SIU_S12_PERSONNEL_RESOURCE* create() const { return new SIU_S12_PERSONNEL_RESOURCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.PERSONNEL_RESOURCE");
    addObject<AIP>(SIU_S12_AIP_1, "AIP.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S12_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AIP* getAIP_1(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SIU_S12_AIP_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_2);
  }

  /* Checker list */
  bool isAIP_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_PERSONNEL_RESOURCE */

/* SIU_S12 */
struct SIU_S12 : public HL7Message {
  SIU_S12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_MSH_1,
    SIU_S12_SCH_2,
    SIU_S12_TQ1_3,
    SIU_S12_NTE_4,
    SIU_S12_PID_7,
    SIU_S12_PD1_8,
    SIU_S12_PV1_9,
    SIU_S12_PV2_10,
    SIU_S12_OBX_11,
    SIU_S12_DG1_12,
    SIU_S12_RGS_13,
    SIU_S12_AIS_18,
    SIU_S12_NTE_19,
    SIU_S12_AIS_20,
    SIU_S12_NTE_21,
    SIU_S12_AIG_22,
    SIU_S12_NTE_23,
    SIU_S12_AIS_24,
    SIU_S12_NTE_25,
    SIU_S12_AIG_26,
    SIU_S12_NTE_27,
    SIU_S12_AIL_28,
    SIU_S12_NTE_29,
    SIU_S12_AIS_30,
    SIU_S12_NTE_31,
    SIU_S12_AIG_32,
    SIU_S12_NTE_33,
    SIU_S12_AIL_34,
    SIU_S12_NTE_35,
    SIU_S12_AIP_36,
    SIU_S12_NTE_37,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12"; }
  SIU_S12* create() const { return new SIU_S12(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12");
    addObject<MSH>(SIU_S12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SCH>(SIU_S12_SCH_2, "SCH.2", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(SIU_S12_TQ1_3, "TQ1.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S12_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<PID>(SIU_S12_PID_7, "PID.7", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(SIU_S12_PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<PV1>(SIU_S12_PV1_9, "PV1.9", HL7::optional, HL7::repetition_off);
    addObject<PV2>(SIU_S12_PV2_10, "PV2.10", HL7::optional, HL7::repetition_off);
    addObject<OBX>(SIU_S12_OBX_11, "OBX.11", HL7::optional, HL7::repetition_off);
    addObject<DG1>(SIU_S12_DG1_12, "DG1.12", HL7::optional, HL7::repetition_off);
    addObject<RGS>(SIU_S12_RGS_13, "RGS.13", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(SIU_S12_AIS_18, "AIS.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_19, "NTE.19", HL7::optional, HL7::repetition_off);
    addObject<AIS>(SIU_S12_AIS_20, "AIS.20", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_21, "NTE.21", HL7::optional, HL7::repetition_off);
    addObject<AIG>(SIU_S12_AIG_22, "AIG.22", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_23, "NTE.23", HL7::optional, HL7::repetition_off);
    addObject<AIS>(SIU_S12_AIS_24, "AIS.24", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_25, "NTE.25", HL7::optional, HL7::repetition_off);
    addObject<AIG>(SIU_S12_AIG_26, "AIG.26", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_27, "NTE.27", HL7::optional, HL7::repetition_off);
    addObject<AIL>(SIU_S12_AIL_28, "AIL.28", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_29, "NTE.29", HL7::optional, HL7::repetition_off);
    addObject<AIS>(SIU_S12_AIS_30, "AIS.30", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_31, "NTE.31", HL7::optional, HL7::repetition_off);
    addObject<AIG>(SIU_S12_AIG_32, "AIG.32", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_33, "NTE.33", HL7::optional, HL7::repetition_off);
    addObject<AIL>(SIU_S12_AIL_34, "AIL.34", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_35, "NTE.35", HL7::optional, HL7::repetition_off);
    addObject<AIP>(SIU_S12_AIP_36, "AIP.36", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_37, "NTE.37", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SIU_S12_MSH_1);
  }
  SCH* getSCH_2(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, SIU_S12_SCH_2);
  }
  TQ1* getTQ1_3(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, SIU_S12_TQ1_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_4);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SIU_S12_PID_7);
  }
  PD1* getPD1_8(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, SIU_S12_PD1_8);
  }
  PV1* getPV1_9(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SIU_S12_PV1_9);
  }
  PV2* getPV2_10(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SIU_S12_PV2_10);
  }
  OBX* getOBX_11(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SIU_S12_OBX_11);
  }
  DG1* getDG1_12(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SIU_S12_DG1_12);
  }
  RGS* getRGS_13(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SIU_S12_RGS_13);
  }
  AIS* getAIS_18(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_19);
  }
  AIS* getAIS_20(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_20);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_21);
  }
  AIG* getAIG_22(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S12_AIG_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_23);
  }
  AIS* getAIS_24(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_24);
  }
  NTE* getNTE_25(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_25);
  }
  AIG* getAIG_26(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S12_AIG_26);
  }
  NTE* getNTE_27(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_27);
  }
  AIL* getAIL_28(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S12_AIL_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_29);
  }
  AIS* getAIS_30(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_30);
  }
  NTE* getNTE_31(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_31);
  }
  AIG* getAIG_32(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S12_AIG_32);
  }
  NTE* getNTE_33(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_33);
  }
  AIL* getAIL_34(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S12_AIL_34);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_35);
  }
  AIP* getAIP_36(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SIU_S12_AIP_36);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_37);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_3(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_TQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_9(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_10(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV2_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_11(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_12(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_13(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_RGS_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_18(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_20(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_22(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIG_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_24(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_25(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_26(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIG_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_27(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_28(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIL_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_30(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_31(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_32(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIG_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_33(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_34(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIL_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_36(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIP_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_ */
} /* namespace HL7_281 */
#endif /*  __SIU_S12__281_H__ */