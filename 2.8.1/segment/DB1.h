/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:11 CEST 2020
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


#ifndef __DB1_v281_H__
#define __DB1_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_281 {

/* Disability */
class DB1 : public HL7Segment {
 public:
  DB1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DB1_1,
    DB1_2,
    DB1_3,
    DB1_4,
    DB1_5,
    DB1_6,
    DB1_7,
    DB1_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DB1"; }
  DB1* create() const { return new DB1(); }

 private:
  void init() {
    setName("DB1");
    /* Init members */
    addObject<SI>(DB1_1, "DB1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DB1_2, "DB1.2", HL7::initialized, HL7::repetition_off);
    addObject<CX>(DB1_3, "DB1.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DB1_4, "DB1.4", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DB1_5, "DB1.5", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DB1_6, "DB1.6", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DB1_7, "DB1.7", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DB1_8, "DB1.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - DB1
   */

  SI* getDB1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DB1_1);
  }

  SI* getSetIDDB1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DB1_1);
  }

  bool isDB1_1(size_t index = 0) {
    try {
      return this->getObject(index, DB1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDDB1(size_t index = 0) {
    try {
      return this->getObject(index, DB1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disabled Person Code
   */

  CWE* getDB1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DB1_2);
  }

  CWE* getDisabledPersonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DB1_2);
  }

  bool isDB1_2(size_t index = 0) {
    try {
      return this->getObject(index, DB1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabledPersonCode(size_t index = 0) {
    try {
      return this->getObject(index, DB1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disabled Person Identifier
   */

  CX* getDB1_3(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, DB1_3);
  }

  CX* getDisabledPersonIdentifier(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, DB1_3);
  }

  bool isDB1_3(size_t index = 0) {
    try {
      return this->getObject(index, DB1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabledPersonIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DB1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disability Indicator
   */

  ID* getDB1_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DB1_4);
  }

  ID* getDisabilityIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DB1_4);
  }

  bool isDB1_4(size_t index = 0) {
    try {
      return this->getObject(index, DB1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabilityIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DB1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disability Start Date
   */

  DT* getDB1_5(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_5);
  }

  DT* getDisabilityStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_5);
  }

  bool isDB1_5(size_t index = 0) {
    try {
      return this->getObject(index, DB1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabilityStartDate(size_t index = 0) {
    try {
      return this->getObject(index, DB1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disability End Date
   */

  DT* getDB1_6(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_6);
  }

  DT* getDisabilityEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_6);
  }

  bool isDB1_6(size_t index = 0) {
    try {
      return this->getObject(index, DB1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabilityEndDate(size_t index = 0) {
    try {
      return this->getObject(index, DB1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disability Return to Work Date
   */

  DT* getDB1_7(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_7);
  }

  DT* getDisabilityReturntoWorkDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_7);
  }

  bool isDB1_7(size_t index = 0) {
    try {
      return this->getObject(index, DB1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabilityReturntoWorkDate(size_t index = 0) {
    try {
      return this->getObject(index, DB1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Disability Unable to Work Date
   */

  DT* getDB1_8(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_8);
  }

  DT* getDisabilityUnabletoWorkDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, DB1_8);
  }

  bool isDB1_8(size_t index = 0) {
    try {
      return this->getObject(index, DB1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisabilityUnabletoWorkDate(size_t index = 0) {
    try {
      return this->getObject(index, DB1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DB1 */

} /* End of namespace HL7_281 */
#endif /* __DB1_v281_H__ */