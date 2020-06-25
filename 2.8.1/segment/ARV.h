/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:02 CEST 2020
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


#ifndef __ARV_v281_H__
#define __ARV_v281_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Access Restriction */
class ARV : public HL7Segment {
 public:
  ARV() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ARV_1,
    ARV_2,
    ARV_3,
    ARV_4,
    ARV_5,
    ARV_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ARV"; }
  ARV* create() const { return new ARV(); }

 private:
  void init() {
    setName("ARV");
    /* Init members */
    addObject<SI>(ARV_1, "ARV.1", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ARV_2, "ARV.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_3, "ARV.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_4, "ARV.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ARV_5, "ARV.5", HL7::initialized, HL7::repetition_off);
    addObject<DR>(ARV_6, "ARV.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getARV_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ARV_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ARV_1);
  }

  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Action Code
   */

  CNE* getARV_2(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ARV_2);
  }

  CNE* getAccessRestrictionActionCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ARV_2);
  }

  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionActionCode(size_t index = 0) {
    try {
      return this->getObject(index, ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Value
   */

  CWE* getARV_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_3);
  }

  CWE* getAccessRestrictionValue(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_3);
  }

  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionValue(size_t index = 0) {
    try {
      return this->getObject(index, ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Reason
   */

  CWE* getARV_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_4);
  }

  CWE* getAccessRestrictionReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_4);
  }

  bool isARV_4(size_t index = 0) {
    try {
      return this->getObject(index, ARV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionReason(size_t index = 0) {
    try {
      return this->getObject(index, ARV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Access Restriction Instructions
   */

  ST* getARV_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARV_5);
  }

  ST* getSpecialAccessRestrictionInstructions(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARV_5);
  }

  bool isARV_5(size_t index = 0) {
    try {
      return this->getObject(index, ARV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialAccessRestrictionInstructions(size_t index = 0) {
    try {
      return this->getObject(index, ARV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Date Range
   */

  DR* getARV_6(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARV_6);
  }

  DR* getAccessRestrictionDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARV_6);
  }

  bool isARV_6(size_t index = 0) {
    try {
      return this->getObject(index, ARV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionDateRange(size_t index = 0) {
    try {
      return this->getObject(index, ARV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ARV */

} /* End of namespace HL7_281 */
#endif /* __ARV_v281_H__ */