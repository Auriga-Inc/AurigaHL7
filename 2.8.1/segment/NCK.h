/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:44 CEST 2020
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


#ifndef __NCK_v281_H__
#define __NCK_v281_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"

namespace HL7_281 {

/* System Clock */
class NCK : public HL7Segment {
 public:
  NCK() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NCK_1,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NCK"; }
  NCK* create() const { return new NCK(); }

 private:
  void init() {
    setName("NCK");
    /* Init members */
    addObject<DTM>(NCK_1, "NCK.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * System Date/Time
   */

  DTM* getNCK_1(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NCK_1);
  }

  DTM* getSystemDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NCK_1);
  }

  bool isNCK_1(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NCK */

} /* End of namespace HL7_281 */
#endif /* __NCK_v281_H__ */