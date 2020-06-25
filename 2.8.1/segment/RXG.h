/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:25 CEST 2020
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


#ifndef __RXG_v281_H__
#define __RXG_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/NULLDT.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"

namespace HL7_281 {

/* Pharmacy/Treatment Give */
class RXG : public HL7Segment {
 public:
  RXG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXG_1,
    RXG_2,
    RXG_3,
    RXG_4,
    RXG_5,
    RXG_6,
    RXG_7,
    RXG_8,
    RXG_9,
    RXG_10,
    RXG_11,
    RXG_12,
    RXG_13,
    RXG_14,
    RXG_15,
    RXG_16,
    RXG_17,
    RXG_18,
    RXG_19,
    RXG_20,
    RXG_21,
    RXG_22,
    RXG_23,
    RXG_24,
    RXG_25,
    RXG_26,
    RXG_27,
    RXG_28,
    RXG_29,
    RXG_30,
    RXG_31,
    RXG_32,
    RXG_33,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXG"; }
  RXG* create() const { return new RXG(); }

 private:
  void init() {
    setName("RXG");
    /* Init members */
    addObject<NM>(RXG_1, "RXG.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_2, "RXG.2", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(RXG_3, "RXG.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_4, "RXG.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_5, "RXG.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_6, "RXG.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_7, "RXG.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_8, "RXG.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_9, "RXG.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXG_10, "RXG.10", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(RXG_11, "RXG.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXG_12, "RXG.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_13, "RXG.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXG_14, "RXG.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXG_15, "RXG.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_16, "RXG.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_17, "RXG.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_18, "RXG.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXG_19, "RXG.19", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXG_20, "RXG.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_21, "RXG.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_22, "RXG.22", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_23, "RXG.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_24, "RXG.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_25, "RXG.25", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXG_26, "RXG.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_27, "RXG.27", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXG_28, "RXG.28", HL7::initialized, HL7::repetition_off);
    addObject<PL>(RXG_29, "RXG.29", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXG_30, "RXG.30", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RXG_31, "RXG.31", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_32, "RXG.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXG_33, "RXG.33", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Give Sub-ID Counter
   */

  NM* getRXG_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_1);
  }

  NM* getGiveSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_1);
  }

  bool isRXG_1(size_t index = 0) {
    try {
      return this->getObject(index, RXG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Sub-ID Counter
   */

  NM* getRXG_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_2);
  }

  NM* getDispenseSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_2);
  }

  bool isRXG_2(size_t index = 0) {
    try {
      return this->getObject(index, RXG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity/Timing
   */

  NULLDT* getRXG_3(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, RXG_3);
  }

  NULLDT* getQuantityTiming(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, RXG_3);
  }

  bool isRXG_3(size_t index = 0) {
    try {
      return this->getObject(index, RXG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, RXG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Code
   */

  CWE* getRXG_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_4);
  }

  CWE* getGiveCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_4);
  }

  bool isRXG_4(size_t index = 0) {
    try {
      return this->getObject(index, RXG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Minimum
   */

  NM* getRXG_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_5);
  }

  NM* getGiveAmountMinimum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_5);
  }

  bool isRXG_5(size_t index = 0) {
    try {
      return this->getObject(index, RXG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMinimum(size_t index = 0) {
    try {
      return this->getObject(index, RXG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Maximum
   */

  NM* getRXG_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_6);
  }

  NM* getGiveAmountMaximum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_6);
  }

  bool isRXG_6(size_t index = 0) {
    try {
      return this->getObject(index, RXG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMaximum(size_t index = 0) {
    try {
      return this->getObject(index, RXG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Units
   */

  CWE* getRXG_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_7);
  }

  CWE* getGiveUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_7);
  }

  bool isRXG_7(size_t index = 0) {
    try {
      return this->getObject(index, RXG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Dosage Form
   */

  CWE* getRXG_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_8);
  }

  CWE* getGiveDosageForm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_8);
  }

  bool isRXG_8(size_t index = 0) {
    try {
      return this->getObject(index, RXG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Notes
   */

  CWE* getRXG_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_9);
  }

  CWE* getAdministrationNotes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_9);
  }

  bool isRXG_9(size_t index = 0) {
    try {
      return this->getObject(index, RXG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitution Status
   */

  ID* getRXG_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_10);
  }

  ID* getSubstitutionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_10);
  }

  bool isRXG_10(size_t index = 0) {
    try {
      return this->getObject(index, RXG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstitutionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense-to Location
   */

  NULLDT* getRXG_11(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, RXG_11);
  }

  NULLDT* getDispensetoLocation(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, RXG_11);
  }

  bool isRXG_11(size_t index = 0) {
    try {
      return this->getObject(index, RXG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXG_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_12);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_12);
  }

  bool isRXG_12(size_t index = 0) {
    try {
      return this->getObject(index, RXG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Administration Instructions
   */

  CWE* getRXG_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_13);
  }

  CWE* getSpecialAdministrationInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_13);
  }

  bool isRXG_13(size_t index = 0) {
    try {
      return this->getObject(index, RXG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialAdministrationInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Per
   */

  ST* getRXG_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_14);
  }

  ST* getGivePer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_14);
  }

  bool isRXG_14(size_t index = 0) {
    try {
      return this->getObject(index, RXG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivePer(size_t index = 0) {
    try {
      return this->getObject(index, RXG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Amount
   */

  ST* getRXG_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_15);
  }

  ST* getGiveRateAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_15);
  }

  bool isRXG_15(size_t index = 0) {
    try {
      return this->getObject(index, RXG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Units
   */

  CWE* getRXG_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_16);
  }

  CWE* getGiveRateUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_16);
  }

  bool isRXG_16(size_t index = 0) {
    try {
      return this->getObject(index, RXG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength
   */

  NM* getRXG_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_17);
  }

  NM* getGiveStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_17);
  }

  bool isRXG_17(size_t index = 0) {
    try {
      return this->getObject(index, RXG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength Units
   */

  CWE* getRXG_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_18);
  }

  CWE* getGiveStrengthUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_18);
  }

  bool isRXG_18(size_t index = 0) {
    try {
      return this->getObject(index, RXG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXG_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_19);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_19);
  }

  bool isRXG_19(size_t index = 0) {
    try {
      return this->getObject(index, RXG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  DTM* getRXG_20(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXG_20);
  }

  DTM* getSubstanceExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXG_20);
  }

  bool isRXG_20(size_t index = 0) {
    try {
      return this->getObject(index, RXG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CWE* getRXG_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_21);
  }

  CWE* getSubstanceManufacturerName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_21);
  }

  bool isRXG_21(size_t index = 0) {
    try {
      return this->getObject(index, RXG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CWE* getRXG_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_22);
  }

  CWE* getIndication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_22);
  }

  bool isRXG_22(size_t index = 0) {
    try {
      return this->getObject(index, RXG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Drug Strength Volume
   */

  NM* getRXG_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_23);
  }

  NM* getGiveDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_23);
  }

  bool isRXG_23(size_t index = 0) {
    try {
      return this->getObject(index, RXG_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXG_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Drug Strength Volume Units
   */

  CWE* getRXG_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_24);
  }

  CWE* getGiveDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_24);
  }

  bool isRXG_24(size_t index = 0) {
    try {
      return this->getObject(index, RXG_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Barcode Identifier
   */

  CWE* getRXG_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_25);
  }

  CWE* getGiveBarcodeIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_25);
  }

  bool isRXG_25(size_t index = 0) {
    try {
      return this->getObject(index, RXG_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveBarcodeIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXG_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Order Type
   */

  ID* getRXG_26(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_26);
  }

  ID* getPharmacyOrderType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_26);
  }

  bool isRXG_26(size_t index = 0) {
    try {
      return this->getObject(index, RXG_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyOrderType(size_t index = 0) {
    try {
      return this->getObject(index, RXG_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense to Pharmacy
   */

  CWE* getRXG_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_27);
  }

  CWE* getDispensetoPharmacy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_27);
  }

  bool isRXG_27(size_t index = 0) {
    try {
      return this->getObject(index, RXG_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoPharmacy(size_t index = 0) {
    try {
      return this->getObject(index, RXG_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense to Pharmacy Address
   */

  XAD* getRXG_28(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXG_28);
  }

  XAD* getDispensetoPharmacyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXG_28);
  }

  bool isRXG_28(size_t index = 0) {
    try {
      return this->getObject(index, RXG_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoPharmacyAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXG_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Patient Location
   */

  PL* getRXG_29(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXG_29);
  }

  PL* getDelivertoPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXG_29);
  }

  bool isRXG_29(size_t index = 0) {
    try {
      return this->getObject(index, RXG_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXG_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Address
   */

  XAD* getRXG_30(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXG_30);
  }

  XAD* getDelivertoAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXG_30);
  }

  bool isRXG_30(size_t index = 0) {
    try {
      return this->getObject(index, RXG_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXG_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Tag Identifier
   */

  EI* getRXG_31(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXG_31);
  }

  EI* getGiveTagIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXG_31);
  }

  bool isRXG_31(size_t index = 0) {
    try {
      return this->getObject(index, RXG_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveTagIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXG_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Amount
   */

  NM* getRXG_32(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_32);
  }

  NM* getDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_32);
  }

  bool isRXG_32(size_t index = 0) {
    try {
      return this->getObject(index, RXG_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXG_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Units
   */

  CWE* getRXG_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_33);
  }

  CWE* getDispenseUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXG_33);
  }

  bool isRXG_33(size_t index = 0) {
    try {
      return this->getObject(index, RXG_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_33) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXG */

} /* End of namespace HL7_281 */
#endif /* __RXG_v281_H__ */