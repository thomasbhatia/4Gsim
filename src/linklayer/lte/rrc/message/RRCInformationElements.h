//
// Copyright (C) 2012 Calin Cerchez
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef RRCINFORMATIONELEMENTS_H_
#define RRCINFORMATIONELEMENTS_H_

#include "ASNTypes.h"
#include "RRCConstantDefinitions.h"

namespace rrc {

typedef BitString<CONSTRAINED, 14, 14> Ansi41IDNNS;

enum CNDomainIdentityValues {
	cs_domain_CNDomainIdentity = 0,
	ps_domain_CNDomainIdentity = 1,
};
typedef Enumerated<CONSTRAINED, 1> CNDomainIdentity;

typedef OctetString<CONSTRAINED, 1, 8> NASSystemInformationGSMMAP;

class CNDomainInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CNDomainInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 6, 9> CNDRXCycleLengthCoefficient;

class CNDomainInformationFull : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNDomainInformationFull(): Sequence(&theInfo) {}
};

typedef SequenceOf<CNDomainInformation, CONSTRAINED, 1, maxCNdomains> CNDomainInformationList;

typedef SequenceOf<CNDomainInformationFull, CONSTRAINED, 1, maxCNdomains> CNDomainInformationListFull;

typedef BitString<CONSTRAINED, 1, 2048> ANSI41NASParameter;

typedef ANSI41NASParameter NASSystemInformationANSI41;

class CNDomainSysInfoCnType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CNDomainSysInfoCnType(): Choice(&theInfo) {}
};

class CNDomainSysInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNDomainSysInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CNDomainSysInfo, CONSTRAINED, 1, maxCNdomains> CNDomainSysInfoList;

typedef Integer<CONSTRAINED, 0, 9> Digit;

typedef SequenceOf<Digit, CONSTRAINED, 3, 3> MCC;

typedef SequenceOf<Digit, CONSTRAINED, 2, 3> MNC;

class PLMNIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentity(): Sequence(&theInfo) {}
};

class CNInformationInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNInformationInfo(): Sequence(&theInfo) {}
};

class CNInformationInfor6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CNInformationInfor6(): Sequence(&theInfo) {}
};

class CNInformationInfoFull : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CNInformationInfoFull(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 10, 10> RoutingParameter;

class GsmmapIDNNSRoutingbasisLocalPTMSI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisLocalPTMSI(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisTMSIofsamePLMN : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisTMSIofsamePLMN(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisTMSIofdifferentPLMN(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisIMSIresponsetopaging : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisIMSIresponsetopaging(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisIMSIcauseUEinitiatedEvent(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisIMEI : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisIMEI(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisSpare2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisSpare2(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasisSpare1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasisSpare1(): Sequence(&theInfo) {}
};

class GsmmapIDNNSRoutingbasis : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	GsmmapIDNNSRoutingbasis(): Choice(&theInfo) {}
};

typedef Boolean GsmmapIDNNSDummy;

class GsmmapIDNNS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GsmmapIDNNS(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> IMEIDigit;

typedef SequenceOf<IMEIDigit, CONSTRAINED, 15, 15> IMEI;

typedef SequenceOf<Digit, CONSTRAINED, 6, 21> IMSIGSMMAP;

class IntraDomainNasNodeSelectorVersionRelease99CnType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersionRelease99CnType(): Choice(&theInfo) {}
};

class IntraDomainNasNodeSelectorVersionRelease99 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersionRelease99(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 15, 15> IntraDomainNasNodeSelectorVersionLaterFuturecoding;

class IntraDomainNasNodeSelectorVersionLater : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersionLater(): Sequence(&theInfo) {}
};

class IntraDomainNasNodeSelectorVersion : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelectorVersion(): Choice(&theInfo) {}
};

class IntraDomainNasNodeSelector : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraDomainNasNodeSelector(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> LAILac;

class LAI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LAI(): Sequence(&theInfo) {}
};

enum AccessClassBarredValues {
	barred_AccessClassBarred = 0,
	notBarred_AccessClassBarred = 1,
};
typedef Enumerated<CONSTRAINED, 1> AccessClassBarred;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, 15, 15> LocationRegistrationAccessClassBarredList;

typedef Null LocationRegistrationParametersNoRestriction;

class LocationRegistrationParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	LocationRegistrationParameters(): Choice(&theInfo) {}
};

typedef Boolean MultiplePLMNListr6MibPLMNIdentity;

class PLMNIdentityWithOptionalMCCr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PLMNIdentityWithOptionalMCCr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<PLMNIdentityWithOptionalMCCr6, CONSTRAINED, 1, 5> MultiplePLMNListr6MultiplePLMNs;

class MultiplePLMNListr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MultiplePLMNListr6(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 4095> NASMessage;

typedef BitString<CONSTRAINED, 4, 4> NASSynchronisationIndicator;

typedef BitString<CONSTRAINED, 32, 32> PTMSIGSMMAP;

enum PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicatorValues {
	all_PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator = 0,
	cS_PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator = 1,
	pS_PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator = 2,
	none_PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator = 3,
};
typedef Enumerated<CONSTRAINED, 3> PagingPermissionWithAccessControlParameterspagingResponseRestrictionIndicator;

enum PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicatorValues {
	all_PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicator = 0,
	cS_PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicator = 1,
	pS_PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicator = 2,
};
typedef Enumerated<CONSTRAINED, 2> PagingPermissionWithAccessControlParameterslocationRegistrationRestrictionIndicator;

class PagingPermissionWithAccessControlParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlParameters(): Sequence(&theInfo) {}
};

class PagingPermissionWithAccessControlList : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlList(): Sequence(&theInfo) {}
};

class PagingPermissionWithAccessControlForSharedNetwork : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingPermissionWithAccessControlForSharedNetwork(): Choice(&theInfo) {}
};

enum PagingRecordTypeIDValues {
	imsi_GSM_MAP_PagingRecordTypeID = 0,
	tmsi_GSM_MAP_P_TMSI_PagingRecordTypeID = 1,
	imsi_DS_41_PagingRecordTypeID = 2,
	tmsi_DS_41_PagingRecordTypeID = 3,
};
typedef Enumerated<CONSTRAINED, 3> PagingRecordTypeID;

class PLMNTypeGsmMAP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PLMNTypeGsmMAP(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> PREV;

typedef BitString<CONSTRAINED, 8, 8> MinPREV;

typedef BitString<CONSTRAINED, 15, 15> SID;

typedef BitString<CONSTRAINED, 16, 16> NID;

class PLMNTypeAnsi41 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PLMNTypeAnsi41(): Sequence(&theInfo) {}
};

class PLMNTypeGsmMAPandANSI41 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PLMNTypeGsmMAPandANSI41(): Sequence(&theInfo) {}
};

typedef Null PLMNTypeSpare;

class PLMNType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	PLMNType(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> RABIdentityGsmMAPRABIdentity;

typedef BitString<CONSTRAINED, 8, 8> RABIdentityAnsi41RABIdentity;

class RABIdentity : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RABIdentity(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> RoutingAreaCode;

class RAI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RAI(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> TMSIGSMMAP;

typedef SequenceOf<AccessClassBarred, CONSTRAINED, maxAC, maxAC> AccessClassBarredList;

enum AllowedIndicatorValues {
	allowed_AllowedIndicator = 0,
	notAllowed_AllowedIndicator = 1,
};
typedef Enumerated<CONSTRAINED, 1> AllowedIndicator;

enum TBarredValues {
	s10_TBarred = 0,
	s20_TBarred = 1,
	s40_TBarred = 2,
	s80_TBarred = 3,
	s160_TBarred = 4,
	s320_TBarred = 5,
	s640_TBarred = 6,
	s1280_TBarred = 7,
};
typedef Enumerated<CONSTRAINED, 7> TBarred;

class CellBarredBarred : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellBarredBarred(): Sequence(&theInfo) {}
};

typedef Null CellBarredNotBarred;

class CellBarred : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellBarred(): Choice(&theInfo) {}
};

enum ReservedIndicatorValues {
	reserved_ReservedIndicator = 0,
	notReserved_ReservedIndicator = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReservedIndicator;

class CellAccessRestriction : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellAccessRestriction(): Sequence(&theInfo) {}
};

enum CellAccessRestrictionv870extcellReservedForCSGValues {
	true_CellAccessRestrictionv870extcellReservedForCSG = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellAccessRestrictionv870extcellReservedForCSG;

class CellAccessRestrictionv870ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellAccessRestrictionv870ext(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 28, 28> CellIdentity;

typedef SequenceOf<CellIdentity, CONSTRAINED, 1, maxRL> CellIdentityPerRLList;

enum RATValues {
	utra_FDD_RAT = 0,
	utra_TDD_RAT = 1,
	gsm_RAT = 2,
	cdma2000_RAT = 3,
};
typedef Enumerated<CONSTRAINED, 3> RAT;

enum MappingFunctionTypeValues {
	linear_MappingFunctionType = 0,
	functionType2_MappingFunctionType = 1,
	functionType3_MappingFunctionType = 2,
	functionType4_MappingFunctionType = 3,
};
typedef Enumerated<CONSTRAINED, 3> MappingFunctionType;

typedef Integer<CONSTRAINED, 0, 127> MapParameter;

typedef Integer<CONSTRAINED, 1, 91> UpperLimit;

class MappingFunctionParameter : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MappingFunctionParameter(): Sequence(&theInfo) {}
};

typedef SequenceOf<MappingFunctionParameter, CONSTRAINED, 1, maxMeasIntervals> MappingFunctionParameterList;

class Mapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Mapping(): Sequence(&theInfo) {}
};

typedef SequenceOf<Mapping, CONSTRAINED, 1, maxRAT> MappingInfo;

typedef Integer<CONSTRAINED, 0, 20> QHystS;

class CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichEcN0(): Sequence(&theInfo) {}
};

typedef Null CellSelectReselectInfoSIB34CellSelectQualityMeasureCpichRSCP;

class CellSelectReselectInfoSIB34CellSelectQualityMeasure : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34CellSelectQualityMeasure(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -16, 10> SSearchQual;

typedef Integer<CONSTRAINED, -53, 45> SSearchRXLEV;

enum RATIdentifierValues {
	gsm_RATIdentifier = 0,
	cdma2000_RATIdentifier = 1,
};
typedef Enumerated<CONSTRAINED, 1> RATIdentifier;

class RATFDDInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RATFDDInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RATFDDInfo, CONSTRAINED, 1, maxOtherRAT> RATFDDInfoList;

typedef Integer<CONSTRAINED, -24, 0> QQualMin;

typedef Integer<CONSTRAINED, -58, -13> QRxlevMin;

class CellSelectReselectInfoSIB34ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class RATTDDInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RATTDDInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RATTDDInfo, CONSTRAINED, 1, maxOtherRAT> RATTDDInfoList;

class CellSelectReselectInfoSIB34ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB34ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34ModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> TReselectionS;

typedef Integer<CONSTRAINED, 0, 7> HCSPRIO;

typedef Integer<CONSTRAINED, 0, 99> QHCS;

typedef Null TCRMaxNotUsed;

typedef Integer<CONSTRAINED, 1, 16> NCRTCRMaxHystNCR;

enum TCRMaxHystValues {
	notUsed_TCRMaxHyst = 0,
	t10_TCRMaxHyst = 1,
	t20_TCRMaxHyst = 2,
	t30_TCRMaxHyst = 3,
	t40_TCRMaxHyst = 4,
	t50_TCRMaxHyst = 5,
	t60_TCRMaxHyst = 6,
	t70_TCRMaxHyst = 7,
};
typedef Enumerated<CONSTRAINED, 7> TCRMaxHyst;

class NCRTCRMaxHyst : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NCRTCRMaxHyst(): Sequence(&theInfo) {}
};

class TCRMax : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	TCRMax(): Choice(&theInfo) {}
};

class HCSServingCellInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSServingCellInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 33> MaxAllowedULTXPower;

class CellSelectReselectInfoSIB34 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB34(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 16383> UARFCN;

class FrequencyInfoFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FrequencyInfoFDD(): Sequence(&theInfo) {}
};

class FrequencyInfoTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfoTDD(): Sequence(&theInfo) {}
};

class FrequencyInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	FrequencyInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class FrequencyInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	FrequencyInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<FrequencyInfo, CONSTRAINED, 1, maxDedicatedCSGFreq> CSGDedicatedFrequencyInfoList;

typedef BitString<CONSTRAINED, 27, 27> CSGIdentity;

typedef Integer<CONSTRAINED, 0, 63> CSGPSCSplitInfoStartPSC;

enum CSGPSCSplitInfonumberOfPSCsValues {
	psc5_CSGPSCSplitInfonumberOfPSCs = 0,
	psc10_CSGPSCSplitInfonumberOfPSCs = 1,
	psc15_CSGPSCSplitInfonumberOfPSCs = 2,
	psc20_CSGPSCSplitInfonumberOfPSCs = 3,
	psc30_CSGPSCSplitInfonumberOfPSCs = 4,
	psc40_CSGPSCSplitInfonumberOfPSCs = 5,
	psc50_CSGPSCSplitInfonumberOfPSCs = 6,
	psc64_CSGPSCSplitInfonumberOfPSCs = 7,
	psc80_CSGPSCSplitInfonumberOfPSCs = 8,
	psc120_CSGPSCSplitInfonumberOfPSCs = 9,
	psc160_CSGPSCSplitInfonumberOfPSCs = 10,
	psc256_CSGPSCSplitInfonumberOfPSCs = 11,
	alltheRest_CSGPSCSplitInfonumberOfPSCs = 12,
	spare3_CSGPSCSplitInfonumberOfPSCs = 13,
	spare2_CSGPSCSplitInfonumberOfPSCs = 14,
	spare1_CSGPSCSplitInfonumberOfPSCs = 15,
};
typedef Enumerated<CONSTRAINED, 15> CSGPSCSplitInfonumberOfPSCs;

typedef Integer<CONSTRAINED, 1, 63> CSGPSCSplitInfoPscRange2Offset;

class CSGPSCSplitInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSGPSCSplitInfo(): Sequence(&theInfo) {}
};

typedef Null DomainSpecificAccessRestrictionv670extNoRestriction;

class DomainSpecificAccessRestrictionv670extRestriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionv670extRestriction(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionv670ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionv670ext(): Choice(&theInfo) {}
};

class DomainSpecificAccessRestrictionParamv670ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionParamv670ext(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionListv670ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionListv670ext(): Sequence(&theInfo) {}
};

class DomainSpecificAccessRestrictionForSharedNetworkv670ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DomainSpecificAccessRestrictionForSharedNetworkv670ext(): Choice(&theInfo) {}
};

class MappingLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MappingLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxSCCPCH> OccurrenceSequenceNumberOfPICH;

typedef Null DedicatedPriorityInformationActionClearDedicatedPriorities;

enum T322Values {
	m5_T322 = 0,
	m10_T322 = 1,
	m20_T322 = 2,
	m30_T322 = 3,
	m60_T322 = 4,
	m120_T322 = 5,
	m180_T322 = 6,
	spare1_T322 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T322;

typedef Integer<CONSTRAINED, 0, maxPrio_1> PriorityLevelPriority;

class PriorityLevelRadioAccessTechnologyUtraFDD : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PriorityLevelRadioAccessTechnologyUtraFDD(): Sequence(&theInfo) {}
};

class PriorityLevelRadioAccessTechnologyUtraTDD : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PriorityLevelRadioAccessTechnologyUtraTDD(): Sequence(&theInfo) {}
};

class PriorityLevelRadioAccessTechnologyEutra : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PriorityLevelRadioAccessTechnologyEutra(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> BCCHARFCN;

enum GSMCellGroupbandIndicatorValues {
	dcs1800_GSMCellGroupbandIndicator = 0,
	pcs1900_GSMCellGroupbandIndicator = 1,
};
typedef Enumerated<CONSTRAINED, 1> GSMCellGroupbandIndicator;

typedef SequenceOf<BCCHARFCN, CONSTRAINED, 0, 31> GSMCellGroupFollowingARFCNsExplicitListOfARFCNs;

typedef Integer<CONSTRAINED, 1, 8> GSMCellGroupFollowingARFCNsEquallySpacedARFCNsArfcnSpacing;

typedef Integer<CONSTRAINED, 0, 31> GSMCellGroupFollowingARFCNsEquallySpacedARFCNsNumberOfFollowingARFCNs;

class GSMCellGroupFollowingARFCNsEquallySpacedARFCNs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GSMCellGroupFollowingARFCNsEquallySpacedARFCNs(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 16> GSMCellGroupFollowingARFCNsVariableBitMapOfARFCNs;

class GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GSMCellGroupFollowingARFCNsContinuousRangeOfARFCNs(): Sequence(&theInfo) {}
};

class GSMCellGroupFollowingARFCNs : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	GSMCellGroupFollowingARFCNs(): Choice(&theInfo) {}
};

class GSMCellGroup : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMCellGroup(): Sequence(&theInfo) {}
};

class PriorityLevelRadioAccessTechnologyGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PriorityLevelRadioAccessTechnologyGsm(): Sequence(&theInfo) {}
};

class PriorityLevelRadioAccessTechnology : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	PriorityLevelRadioAccessTechnology(): Choice(&theInfo) {}
};

class PriorityLevel : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PriorityLevel(): Sequence(&theInfo) {}
};

typedef SequenceOf<PriorityLevel, CONSTRAINED, 1, maxPrio> PriorityLevelList;

typedef Boolean DedicatedPriorityInformationActionConfigureDedicatedPrioritiesEutraDetection;

class DedicatedPriorityInformationActionConfigureDedicatedPriorities : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DedicatedPriorityInformationActionConfigureDedicatedPriorities(): Sequence(&theInfo) {}
};

class DedicatedPriorityInformationAction : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DedicatedPriorityInformationAction(): Choice(&theInfo) {}
};

class DedicatedPriorityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DedicatedPriorityInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 40> QHystSFine;

typedef Integer<CONSTRAINED, 0, 10> SpeedDependentScalingFactor;

typedef Integer<CONSTRAINED, 0, 31> TReselectionSFine;

typedef Integer<CONSTRAINED, 4, 19> TreselectionScalingFactor;

typedef BitString<CONSTRAINED, 16, 16> URAIdentity;

typedef SequenceOf<URAIdentity, CONSTRAINED, 1, maxURA> URAIdentityList;

enum AccessStratumReleaseIndicatorValues {
	rel_4_AccessStratumReleaseIndicator = 0,
	rel_5_AccessStratumReleaseIndicator = 1,
	rel_6_AccessStratumReleaseIndicator = 2,
	rel_7_AccessStratumReleaseIndicator = 3,
	rel_8_AccessStratumReleaseIndicator = 4,
	rel_9_AccessStratumReleaseIndicator = 5,
	spare10_AccessStratumReleaseIndicator = 6,
	spare9_AccessStratumReleaseIndicator = 7,
	spare8_AccessStratumReleaseIndicator = 8,
	spare7_AccessStratumReleaseIndicator = 9,
	spare6_AccessStratumReleaseIndicator = 10,
	spare5_AccessStratumReleaseIndicator = 11,
	spare4_AccessStratumReleaseIndicator = 12,
	spare3_AccessStratumReleaseIndicator = 13,
	spare2_AccessStratumReleaseIndicator = 14,
	spare1_AccessStratumReleaseIndicator = 15,
};
typedef Enumerated<CONSTRAINED, 15> AccessStratumReleaseIndicator;

typedef Integer<CONSTRAINED, 0, 255> ActivationTime;

typedef Integer<CONSTRAINED, 1, 64> NAPRetransMax;

typedef Integer<CONSTRAINED, 1, 64> NAccessFails;

typedef Integer<CONSTRAINED, 0, 31> NFBONoAICH;

typedef Integer<CONSTRAINED, 0, 63> NSBOBusy;

typedef Integer<CONSTRAINED, 0, 31> NFBOAllBusy;

typedef Integer<CONSTRAINED, 0, 127> NFBOMismatch;

enum TCPCHValues {
	ct0_TCPCH = 0,
	ct1_TCPCH = 1,
};
typedef Enumerated<CONSTRAINED, 1> TCPCH;

class BackoffControlParams : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	BackoffControlParams(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 256> BandComb;

typedef BitString<CONSTRAINED, 16, 16> CRNTI;

typedef Boolean CapabilityUpdateRequirementUeRadioCapabilityFDDUpdateRequirement;

typedef Boolean CapabilityUpdateRequirementUeRadioCapabilityTDDUpdateRequirement;

enum SystemSpecificCapUpdateReqValues {
	gsm_SystemSpecificCapUpdateReq = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReq;

typedef SequenceOf<SystemSpecificCapUpdateReq, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqList;

class CapabilityUpdateRequirement : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CapabilityUpdateRequirement(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementr4extUeRadioCapabilityUpdateRequirementTDD128;

class CapabilityUpdateRequirementr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4ext(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementr4UeRadioCapabilityFDDUpdateRequirementFDD;

typedef Boolean CapabilityUpdateRequirementr4UeRadioCapabilityTDDUpdateRequirementTDD384;

typedef Boolean CapabilityUpdateRequirementr4UeRadioCapabilityTDDUpdateRequirementTDD128;

class CapabilityUpdateRequirementr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr4(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementr5UeRadioCapabilityFDDUpdateRequirementFDD;

typedef Boolean CapabilityUpdateRequirementr5UeRadioCapabilityTDDUpdateRequirementTDD384;

typedef Boolean CapabilityUpdateRequirementr5UeRadioCapabilityTDDUpdateRequirementTDD128;

enum SystemSpecificCapUpdateReqr5Values {
	gsm_SystemSpecificCapUpdateReqr5 = 0,
	geranIu_SystemSpecificCapUpdateReqr5 = 1,
};
typedef Enumerated<CONSTRAINED, 1> SystemSpecificCapUpdateReqr5;

typedef SequenceOf<SystemSpecificCapUpdateReqr5, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr5;

class CapabilityUpdateRequirementr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr5(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementv770extUeRadioCapabilityTDDUpdateRequirementTDD768;

class CapabilityUpdateRequirementv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv770ext(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementr7UeRadioCapabilityFDDUpdateRequirementFDD;

typedef Boolean CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD384;

typedef Boolean CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD768;

typedef Boolean CapabilityUpdateRequirementr7UeRadioCapabilityTDDUpdateRequirementTDD128;

class CapabilityUpdateRequirementr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr7(): Sequence(&theInfo) {}
};

enum SystemSpecificCapUpdateReqr8Values {
	gsm_SystemSpecificCapUpdateReqr8 = 0,
	geranIu_SystemSpecificCapUpdateReqr8 = 1,
	eutra_SystemSpecificCapUpdateReqr8 = 2,
	spare5_SystemSpecificCapUpdateReqr8 = 3,
	spare4_SystemSpecificCapUpdateReqr8 = 4,
	spare3_SystemSpecificCapUpdateReqr8 = 5,
	spare2_SystemSpecificCapUpdateReqr8 = 6,
	spare1_SystemSpecificCapUpdateReqr8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> SystemSpecificCapUpdateReqr8;

typedef SequenceOf<SystemSpecificCapUpdateReqr8, CONSTRAINED, 1, maxSystemCapability> SystemSpecificCapUpdateReqListr8;

class CapabilityUpdateRequirementv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementv860ext(): Sequence(&theInfo) {}
};

typedef Boolean CapabilityUpdateRequirementr8UeRadioCapabilityFDDUpdateRequirementFDD;

typedef Boolean CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD384;

typedef Boolean CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD768;

typedef Boolean CapabilityUpdateRequirementr8UeRadioCapabilityTDDUpdateRequirementTDD128;

class CapabilityUpdateRequirementr8 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CapabilityUpdateRequirementr8(): Sequence(&theInfo) {}
};

enum CellUpdateCauseValues {
	cellReselection_CellUpdateCause = 0,
	periodicalCellUpdate_CellUpdateCause = 1,
	uplinkDataTransmission_CellUpdateCause = 2,
	utran_pagingResponse_CellUpdateCause = 3,
	re_enteredServiceArea_CellUpdateCause = 4,
	radiolinkFailure_CellUpdateCause = 5,
	rlc_unrecoverableError_CellUpdateCause = 6,
	cellUpdateCause_ext_CellUpdateCause = 7,
};
typedef Enumerated<CONSTRAINED, 7> CellUpdateCause;

enum CellUpdateCauseextValues {
	mbms_Reception_CellUpdateCauseext = 0,
	mbms_PTP_RB_Request_CellUpdateCauseext = 1,
	dummy_CellUpdateCauseext = 2,
	spare1_CellUpdateCauseext = 3,
};
typedef Enumerated<CONSTRAINED, 3> CellUpdateCauseext;

enum ChipRateCapabilityValues {
	mcps3_84_ChipRateCapability = 0,
	mcps1_28_ChipRateCapability = 1,
};
typedef Enumerated<CONSTRAINED, 1> ChipRateCapability;

enum CipheringAlgorithmValues {
	uea0_CipheringAlgorithm = 0,
	uea1_CipheringAlgorithm = 1,
};
typedef Enumerated<CONSTRAINED, 1> CipheringAlgorithm;

enum CipheringAlgorithmr7Values {
	uea0_CipheringAlgorithmr7 = 0,
	uea1_CipheringAlgorithmr7 = 1,
	uea2_CipheringAlgorithmr7 = 2,
};
typedef Enumerated<CONSTRAINED, 2> CipheringAlgorithmr7;

typedef Null CipheringModeCommandDummy;

class CipheringModeCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CipheringModeCommand(): Choice(&theInfo) {}
};

class CipheringModeCommandr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CipheringModeCommandr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> RBIdentity;

typedef Integer<CONSTRAINED, 0, 4095> RLCSequenceNumber;

class RBActivationTimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBActivationTimeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBActivationTimeInfo, CONSTRAINED, 1, maxRB> RBActivationTimeInfoList;

class CipheringModeInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CipheringModeInfo(): Sequence(&theInfo) {}
};

class CipheringModeInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CipheringModeInfor7(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 5, 7> IMSIDS41;

typedef OctetString<CONSTRAINED, 2, 17> TMSIDS41;

typedef Null CNPagedUEIdentitySpare3;

typedef Null CNPagedUEIdentitySpare2;

typedef Null CNPagedUEIdentitySpare1;

class CNPagedUEIdentity : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	CNPagedUEIdentity(): Choice(&theInfo) {}
};

typedef Boolean CompressedModeMeasCapabilityFddMeasurements;

typedef Boolean CompressedModeMeasCapabilityTddMeasurements;

typedef Boolean GSMMeasurementsGsm900;

typedef Boolean GSMMeasurementsDcs1800;

typedef Boolean GSMMeasurementsGsm1900;

class GSMMeasurements : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMMeasurements(): Sequence(&theInfo) {}
};

typedef Boolean CompressedModeMeasCapabilityMultiCarrierMeasurements;

class CompressedModeMeasCapability : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CompressedModeMeasCapability(): Sequence(&theInfo) {}
};

typedef Boolean CompressedModeMeasCapabilityLCRr4Tdd128Measurements;

class CompressedModeMeasCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityLCRr4(): Sequence(&theInfo) {}
};

enum CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurementsValues {
	true_CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements = 0,
};
typedef Enumerated<CONSTRAINED, 0> CompressedModeMeasCapabilityv860extadjacentFrequencyMeasurements;

class CompressedModeMeasCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv860ext(): Sequence(&theInfo) {}
};

enum CompressedModeMeasCapabilityv920extinterBandMeasurementsValues {
	true_CompressedModeMeasCapabilityv920extinterBandMeasurements = 0,
};
typedef Enumerated<CONSTRAINED, 0> CompressedModeMeasCapabilityv920extinterBandMeasurements;

class CompressedModeMeasCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CompressedModeMeasCapabilityv920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> RadioFrequencyBandEUTRA;

typedef Boolean CompressedModeMeasCapabEUTRACompressedMode;

class CompressedModeMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompressedModeMeasCapabEUTRA(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> CompressedModeMeasCapabEUTRAList;

enum RadioFrequencyBandFDDValues {
	fdd2100_RadioFrequencyBandFDD = 0,
	fdd1900_RadioFrequencyBandFDD = 1,
	fdd1800_RadioFrequencyBandFDD = 2,
	bandVI_RadioFrequencyBandFDD = 3,
	bandIV_RadioFrequencyBandFDD = 4,
	bandV_RadioFrequencyBandFDD = 5,
	bandVII_RadioFrequencyBandFDD = 6,
	extension_indicator_RadioFrequencyBandFDD = 7,
};
typedef Enumerated<CONSTRAINED, 7> RadioFrequencyBandFDD;

typedef Boolean CompressedModeMeasCapabFDDDlMeasurementsFDD;

typedef Boolean CompressedModeMeasCapabFDDUlMeasurementsFDD;

class CompressedModeMeasCapabFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDD, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList;

enum RadioFrequencyBandFDD2Values {
	bandVIII_RadioFrequencyBandFDD2 = 0,
	bandIX_RadioFrequencyBandFDD2 = 1,
	bandX_RadioFrequencyBandFDD2 = 2,
	bandXI_RadioFrequencyBandFDD2 = 3,
	bandXII_RadioFrequencyBandFDD2 = 4,
	bandXIII_RadioFrequencyBandFDD2 = 5,
	bandXIV_RadioFrequencyBandFDD2 = 6,
	bandXV_RadioFrequencyBandFDD2 = 7,
	bandXVI_RadioFrequencyBandFDD2 = 8,
	bandXVII_RadioFrequencyBandFDD2 = 9,
	bandXVIII_RadioFrequencyBandFDD2 = 10,
	bandXIX_RadioFrequencyBandFDD2 = 11,
	bandXX_RadioFrequencyBandFDD2 = 12,
	bandXXI_RadioFrequencyBandFDD2 = 13,
	bandXXII_RadioFrequencyBandFDD2 = 14,
	extension_indicator_RadioFrequencyBandFDD2 = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandFDD2;

typedef Boolean CompressedModeMeasCapabFDD2DlMeasurementsFDD;

typedef Boolean CompressedModeMeasCapabFDD2UlMeasurementsFDD;

class CompressedModeMeasCapabFDD2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDD2(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDD2, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDList2;

typedef Boolean CompressedModeMeasCapabFDDextDlMeasurementsFDD;

typedef Boolean CompressedModeMeasCapabFDDextUlMeasurementsFDD;

class CompressedModeMeasCapabFDDext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabFDDext(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabFDDext, CONSTRAINED, 1, maxFreqBandsFDD> CompressedModeMeasCapabFDDListext;

enum RadioFrequencyBandTDDValues {
	a_RadioFrequencyBandTDD = 0,
	b_RadioFrequencyBandTDD = 1,
	c_RadioFrequencyBandTDD = 2,
	d_RadioFrequencyBandTDD = 3,
};
typedef Enumerated<CONSTRAINED, 3> RadioFrequencyBandTDD;

typedef Boolean CompressedModeMeasCapabTDDDlMeasurementsTDD;

typedef Boolean CompressedModeMeasCapabTDDUlMeasurementsTDD;

class CompressedModeMeasCapabTDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabTDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabTDD, CONSTRAINED, 1, maxFreqBandsTDD> CompressedModeMeasCapabTDDList;

enum RadioFrequencyBandGSMValues {
	gsm450_RadioFrequencyBandGSM = 0,
	gsm480_RadioFrequencyBandGSM = 1,
	gsm850_RadioFrequencyBandGSM = 2,
	gsm900P_RadioFrequencyBandGSM = 3,
	gsm900E_RadioFrequencyBandGSM = 4,
	gsm1800_RadioFrequencyBandGSM = 5,
	gsm1900_RadioFrequencyBandGSM = 6,
	spare9_RadioFrequencyBandGSM = 7,
	spare8_RadioFrequencyBandGSM = 8,
	spare7_RadioFrequencyBandGSM = 9,
	spare6_RadioFrequencyBandGSM = 10,
	spare5_RadioFrequencyBandGSM = 11,
	spare4_RadioFrequencyBandGSM = 12,
	spare3_RadioFrequencyBandGSM = 13,
	spare2_RadioFrequencyBandGSM = 14,
	spare1_RadioFrequencyBandGSM = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandGSM;

typedef Boolean CompressedModeMeasCapabGSMDlMeasurementsGSM;

typedef Boolean CompressedModeMeasCapabGSMUlMeasurementsGSM;

class CompressedModeMeasCapabGSM : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CompressedModeMeasCapabGSM(): Sequence(&theInfo) {}
};

typedef SequenceOf<CompressedModeMeasCapabGSM, CONSTRAINED, 1, maxFreqBandsGSM> CompressedModeMeasCapabGSMList;

typedef Boolean CompressedModeMeasCapabMCDlMeasurementsMC;

typedef Boolean CompressedModeMeasCapabMCUlMeasurementsMC;

class CompressedModeMeasCapabMC : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CompressedModeMeasCapabMC(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 28> NSIP;

typedef SequenceOf<NSIP, CONSTRAINED, 1, maxASC> InitialPriorityDelayList;

typedef Integer<CONSTRAINED, 0, 1> TPCStepSizeFDD;

typedef Null PowerControlAlgorithmAlgorithm2;

class PowerControlAlgorithm : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PowerControlAlgorithm(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> DLDPCCHBER;

class CPCHParameters : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CPCHParameters(): Sequence(&theInfo) {}
};

enum CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndicationValues {
	true_CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationCapabilitysupportOfIntraFreqProximityIndication;

enum CSGProximityIndicationCapabilitysupportOfInterFreqProximityIndicationValues {
	true_CSGProximityIndicationCapabilitysupportOfInterFreqProximityIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationCapabilitysupportOfInterFreqProximityIndication;

enum CSGProximityIndicationCapabilitysupportOfE_UtraProximityIndicationValues {
	true_CSGProximityIndicationCapabilitysupportOfE_UtraProximityIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityIndicationCapabilitysupportOfE_UtraProximityIndication;

class CSGProximityIndicationCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CSGProximityIndicationCapability(): Sequence(&theInfo) {}
};

enum DLCapabilityWithSimultaneousHSDSCHConfigValues {
	kbps32_DLCapabilityWithSimultaneousHSDSCHConfig = 0,
	kbps64_DLCapabilityWithSimultaneousHSDSCHConfig = 1,
	kbps128_DLCapabilityWithSimultaneousHSDSCHConfig = 2,
	kbps384_DLCapabilityWithSimultaneousHSDSCHConfig = 3,
};
typedef Enumerated<CONSTRAINED, 3> DLCapabilityWithSimultaneousHSDSCHConfig;

typedef Integer<CONSTRAINED, 0, 511> PrimaryScramblingCode;

class PrimaryCPICHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCPICHInfo(): Sequence(&theInfo) {}
};

enum PCPICHUsageForChannelEstValues {
	mayBeUsed_PCPICHUsageForChannelEst = 0,
	shallNotBeUsed_PCPICHUsageForChannelEst = 1,
};
typedef Enumerated<CONSTRAINED, 1> PCPICHUsageForChannelEst;

typedef Integer<CONSTRAINED, 0, 149> DPCHFrameOffset;

typedef Integer<CONSTRAINED, 0, 9> FDPCHSlotFormat;

typedef Integer<CONSTRAINED, 1, 15> SecondaryScramblingCode;

typedef Integer<CONSTRAINED, 0, 255> ChannelisationCode256;

class SecondaryCPICHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCPICHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> DLFDPCHInfoPerRLr7DlChannelisationCode;

typedef Integer<CONSTRAINED, 0, 5> TPCCombinationIndex;

enum STTDIndicationValues {
	true_STTDIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> STTDIndication;

class DLFDPCHInfoPerRLr7 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> EAGCHChannelisationCode;

class EAGCHInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> EHICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 39> EHICHRGCHSignatureSequence;

class EHICHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 5> ERGCHCombinationIndex;

class ERGCHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ERGCHInformation(): Sequence(&theInfo) {}
};

typedef Null DLInformationPerSecondaryRLERGCHInfoReleaseIndicator;

class DLInformationPerSecondaryRLERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerSecondaryRLERGCHInfo(): Choice(&theInfo) {}
};

class DLInformationPerSecondaryRL : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLInformationPerSecondaryRL(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerSecondaryRL, CONSTRAINED, 1, maxEDCHRL> DLInformationPerSecondaryRLList;

typedef Integer<CONSTRAINED, 1, 8> DLPhysChCapabilityFDDMaxNoDPCHPDSCHCodes;

enum MaxNoPhysChBitsReceivedValues {
	dummy_MaxNoPhysChBitsReceived = 0,
	b1200_MaxNoPhysChBitsReceived = 1,
	b2400_MaxNoPhysChBitsReceived = 2,
	b3600_MaxNoPhysChBitsReceived = 3,
	b4800_MaxNoPhysChBitsReceived = 4,
	b7200_MaxNoPhysChBitsReceived = 5,
	b9600_MaxNoPhysChBitsReceived = 6,
	b14400_MaxNoPhysChBitsReceived = 7,
	b19200_MaxNoPhysChBitsReceived = 8,
	b28800_MaxNoPhysChBitsReceived = 9,
	b38400_MaxNoPhysChBitsReceived = 10,
	b48000_MaxNoPhysChBitsReceived = 11,
	b57600_MaxNoPhysChBitsReceived = 12,
	b67200_MaxNoPhysChBitsReceived = 13,
	b76800_MaxNoPhysChBitsReceived = 14,
};
typedef Enumerated<CONSTRAINED, 14> MaxNoPhysChBitsReceived;

typedef Boolean DLPhysChCapabilityFDDSupportForSF512;

typedef Boolean DLPhysChCapabilityFDDDummy;

typedef Null SimultaneousSCCPCHDPCHReceptionNotSupported;

enum MaxNoSCCPCHRLValues {
	rl1_MaxNoSCCPCHRL = 0,
};
typedef Enumerated<CONSTRAINED, 0> MaxNoSCCPCHRL;

typedef Boolean SimultaneousSCCPCHDPCHReceptionSupportedSimultaneousSCCPCHDPCHDPDCHReception;

class SimultaneousSCCPCHDPCHReceptionSupported : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SimultaneousSCCPCHDPCHReceptionSupported(): Sequence(&theInfo) {}
};

class SimultaneousSCCPCHDPCHReception : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SimultaneousSCCPCHDPCHReception(): Choice(&theInfo) {}
};

class DLPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDD(): Sequence(&theInfo) {}
};

enum SupportOfDedicatedPilotsForChEstimationValues {
	true_SupportOfDedicatedPilotsForChEstimation = 0,
};
typedef Enumerated<CONSTRAINED, 0> SupportOfDedicatedPilotsForChEstimation;

class DLPhysChCapabilityFDDv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv380ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 20> HSDSCHphysicallayercategoryext;

enum DLPhysChCapabilityFDDv770exthsscchlessHsdschOperationValues {
	true_DLPhysChCapabilityFDDv770exthsscchlessHsdschOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv770exthsscchlessHsdschOperation;

enum DLPhysChCapabilityFDDv770extenhancedFdpchValues {
	true_DLPhysChCapabilityFDDv770extenhancedFdpch = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv770extenhancedFdpch;

enum DLPhysChCapabilityFDDv770exthsdschReception_CellFachValues {
	true_DLPhysChCapabilityFDDv770exthsdschReception_CellFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv770exthsdschReception_CellFach;

enum DLPhysChCapabilityFDDv770exthsdschReception_CellUraPchValues {
	true_DLPhysChCapabilityFDDv770exthsdschReception_CellUraPch = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv770exthsdschReception_CellUraPch;

class DLPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 21, 24> HSDSCHphysicallayercategoryext2;

enum DLPhysChCapabilityFDDv860extsupportOfTargetCellPreConfigValues {
	true_DLPhysChCapabilityFDDv860extsupportOfTargetCellPreConfig = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv860extsupportOfTargetCellPreConfig;

enum DLPhysChCapabilityFDDv860extsupportOfHsdschDrxOperationValues {
	true_DLPhysChCapabilityFDDv860extsupportOfHsdschDrxOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv860extsupportOfHsdschDrxOperation;

class DLPhysChCapabilityFDDv860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 25, 28> HSDSCHphysicallayercategoryext3;

enum DLPhysChCapabilityFDDv920extsupportOfMimoOnlySingleStreamValues {
	true_DLPhysChCapabilityFDDv920extsupportOfMimoOnlySingleStream = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLPhysChCapabilityFDDv920extsupportOfMimoOnlySingleStream;

class DLPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 14> MaxTSPerFrame;

typedef Integer<CONSTRAINED, 1, 224> MaxPhysChPerFrame;

enum MinimumSFDLValues {
	sf1_MinimumSFDL = 0,
	sf16_MinimumSFDL = 1,
};
typedef Enumerated<CONSTRAINED, 1> MinimumSFDL;

typedef Boolean DLPhysChCapabilityTDDSupportOfPDSCH;

typedef Integer<CONSTRAINED, 1, 16> MaxPhysChPerTS;

class DLPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> MaxTSPerSubFramer4;

typedef Integer<CONSTRAINED, 1, 96> MaxPhysChPerSubFramer4;

typedef Boolean DLPhysChCapabilityTDDLCRr4SupportOfPDSCH;

typedef Boolean DLPhysChCapabilityTDDLCRr4SupportOf8PSK;

class DLPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> MultiCarrierHSDSCHphysicallayercategory;

class DLPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategoryextension;

typedef Integer<CONSTRAINED, 1, 36> MultiCarrierHSDSCHphysicallayercategoryextension;

enum DLPhysChCapabilityTDD128v860extsupportOfSFModeForHSPDSCHDualStreamValues {
	sf1_DLPhysChCapabilityTDD128v860extsupportOfSFModeForHSPDSCHDualStream = 0,
	sf1sf16_DLPhysChCapabilityTDD128v860extsupportOfSFModeForHSPDSCHDualStream = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLPhysChCapabilityTDD128v860extsupportOfSFModeForHSPDSCHDualStream;

class DLPhysChCapabilityTDD128v860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD128v860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 448> MaxPhysChPerFrame768;

enum MinimumSFDL768Values {
	sf1_MinimumSFDL768 = 0,
	sf32_MinimumSFDL768 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MinimumSFDL768;

typedef Boolean DLPhysChCapabilityTDD768SupportOfPDSCH;

typedef Integer<CONSTRAINED, 1, 64> HSDSCHphysicallayercategory;

typedef Null DLPhysChCapabilityTDD768Tdd768hspdschUnsupported;

class DLPhysChCapabilityTDD768Tdd768hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD768Tdd768hspdsch(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> MaxPhysChPerTS768;

class DLPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLPhysChCapabilityTDD768(): Sequence(&theInfo) {}
};

typedef Boolean DLPhysChCapabilityInfoTDD768SupportOfPDSCH;

class DLPhysChCapabilityInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLPhysChCapabilityInfoTDD768(): Sequence(&theInfo) {}
};

enum MaxNoBitsValues {
	b640_MaxNoBits = 0,
	b1280_MaxNoBits = 1,
	b2560_MaxNoBits = 2,
	b3840_MaxNoBits = 3,
	b5120_MaxNoBits = 4,
	b6400_MaxNoBits = 5,
	b7680_MaxNoBits = 6,
	b8960_MaxNoBits = 7,
	b10240_MaxNoBits = 8,
	b20480_MaxNoBits = 9,
	b40960_MaxNoBits = 10,
	b81920_MaxNoBits = 11,
	b163840_MaxNoBits = 12,
};
typedef Enumerated<CONSTRAINED, 12> MaxNoBits;

typedef Null TurboSupportNotSupported;

class TurboSupport : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TurboSupport(): Choice(&theInfo) {}
};

enum MaxSimultaneousTransChsDLValues {
	e4_MaxSimultaneousTransChsDL = 0,
	e8_MaxSimultaneousTransChsDL = 1,
	e16_MaxSimultaneousTransChsDL = 2,
	e32_MaxSimultaneousTransChsDL = 3,
};
typedef Enumerated<CONSTRAINED, 3> MaxSimultaneousTransChsDL;

typedef Integer<CONSTRAINED, 1, 8> MaxSimultaneousCCTrCHCount;

enum MaxTransportBlocksDLValues {
	tb4_MaxTransportBlocksDL = 0,
	tb8_MaxTransportBlocksDL = 1,
	tb16_MaxTransportBlocksDL = 2,
	tb32_MaxTransportBlocksDL = 3,
	tb48_MaxTransportBlocksDL = 4,
	tb64_MaxTransportBlocksDL = 5,
	tb96_MaxTransportBlocksDL = 6,
	tb128_MaxTransportBlocksDL = 7,
	tb256_MaxTransportBlocksDL = 8,
	tb512_MaxTransportBlocksDL = 9,
};
typedef Enumerated<CONSTRAINED, 9> MaxTransportBlocksDL;

enum MaxNumberOfTFCDLValues {
	tfc16_MaxNumberOfTFCDL = 0,
	tfc32_MaxNumberOfTFCDL = 1,
	tfc48_MaxNumberOfTFCDL = 2,
	tfc64_MaxNumberOfTFCDL = 3,
	tfc96_MaxNumberOfTFCDL = 4,
	tfc128_MaxNumberOfTFCDL = 5,
	tfc256_MaxNumberOfTFCDL = 6,
	tfc512_MaxNumberOfTFCDL = 7,
	tfc1024_MaxNumberOfTFCDL = 8,
};
typedef Enumerated<CONSTRAINED, 8> MaxNumberOfTFCDL;

enum MaxNumberOfTFValues {
	tf32_MaxNumberOfTF = 0,
	tf64_MaxNumberOfTF = 1,
	tf128_MaxNumberOfTF = 2,
	tf256_MaxNumberOfTF = 3,
	tf512_MaxNumberOfTF = 4,
	tf1024_MaxNumberOfTF = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfTF;

class DLTransChCapability : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLTransChCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> TransmissionProbability;

typedef Integer<CONSTRAINED, 0, 32> MaximumBitRate;

class DRACSysInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DRACSysInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<DRACSysInfo, CONSTRAINED, 1, maxDRACclasses> DRACSysInfoList;

typedef BitString<CONSTRAINED, 16, 16> DSCHRNTI;

enum DelayRestrictionFlagValues {
	true_DelayRestrictionFlag = 0,
};
typedef Enumerated<CONSTRAINED, 0> DelayRestrictionFlag;

typedef BitString<CONSTRAINED, 16, 16> ERNTI;

typedef BitString<CONSTRAINED, 32, 32> ESNDS41;

enum EstablishmentCauseValues {
	originatingConversationalCall_EstablishmentCause = 0,
	originatingStreamingCall_EstablishmentCause = 1,
	originatingInteractiveCall_EstablishmentCause = 2,
	originatingBackgroundCall_EstablishmentCause = 3,
	originatingSubscribedTrafficCall_EstablishmentCause = 4,
	terminatingConversationalCall_EstablishmentCause = 5,
	terminatingStreamingCall_EstablishmentCause = 6,
	terminatingInteractiveCall_EstablishmentCause = 7,
	terminatingBackgroundCall_EstablishmentCause = 8,
	emergencyCall_EstablishmentCause = 9,
	interRAT_CellReselection_EstablishmentCause = 10,
	interRAT_CellChangeOrder_EstablishmentCause = 11,
	registration_EstablishmentCause = 12,
	detach_EstablishmentCause = 13,
	originatingHighPrioritySignalling_EstablishmentCause = 14,
	originatingLowPrioritySignalling_EstablishmentCause = 15,
	callRe_establishment_EstablishmentCause = 16,
	terminatingHighPrioritySignalling_EstablishmentCause = 17,
	terminatingLowPrioritySignalling_EstablishmentCause = 18,
	terminatingCauseUnknown_EstablishmentCause = 19,
	mbms_Reception_EstablishmentCause = 20,
	mbms_PTP_RB_Request_EstablishmentCause = 21,
	spare10_EstablishmentCause = 22,
	spare9_EstablishmentCause = 23,
	spare8_EstablishmentCause = 24,
	spare7_EstablishmentCause = 25,
	spare6_EstablishmentCause = 26,
	spare5_EstablishmentCause = 27,
	spare4_EstablishmentCause = 28,
	spare3_EstablishmentCause = 29,
	spare2_EstablishmentCause = 30,
	spare1_EstablishmentCause = 31,
};
typedef Enumerated<CONSTRAINED, 31> EstablishmentCause;

typedef Null FailureCauseWithProtErrConfigurationUnsupported;

typedef Null FailureCauseWithProtErrPhysicalChannelFailure;

typedef Null FailureCauseWithProtErrIncompatibleSimultaneousReconfiguration;

typedef Integer<CONSTRAINED, 1, maxTGPS> TGPSI;

enum ProtocolErrorCauseValues {
	asn1_ViolationOrEncodingError_ProtocolErrorCause = 0,
	messageTypeNonexistent_ProtocolErrorCause = 1,
	messageNotCompatibleWithReceiverState_ProtocolErrorCause = 2,
	ie_ValueNotComprehended_ProtocolErrorCause = 3,
	informationElementMissing_ProtocolErrorCause = 4,
	messageExtensionNotComprehended_ProtocolErrorCause = 5,
	spare2_ProtocolErrorCause = 6,
	spare1_ProtocolErrorCause = 7,
};
typedef Enumerated<CONSTRAINED, 7> ProtocolErrorCause;

class ProtocolErrorInformationDiagnosticsTypeType1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorInformationDiagnosticsTypeType1(): Sequence(&theInfo) {}
};

typedef Null ProtocolErrorInformationDiagnosticsTypeSpare;

class ProtocolErrorInformationDiagnosticsType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ProtocolErrorInformationDiagnosticsType(): Choice(&theInfo) {}
};

class ProtocolErrorInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorInformation(): Sequence(&theInfo) {}
};

typedef Null FailureCauseWithProtErrCellUpdateOccurred;

typedef Null FailureCauseWithProtErrInvalidConfiguration;

typedef Null FailureCauseWithProtErrConfigurationIncomplete;

typedef Null FailureCauseWithProtErrUnsupportedMeasurement;

typedef Null FailureCauseWithProtErrMbmsSessionAlreadyReceivedCorrectly;

typedef Null FailureCauseWithProtErrLowerPriorityMBMSService;

typedef Null FailureCauseWithProtErrSpare5;

typedef Null FailureCauseWithProtErrSpare4;

typedef Null FailureCauseWithProtErrSpare3;

typedef Null FailureCauseWithProtErrSpare2;

typedef Null FailureCauseWithProtErrSpare1;

class FailureCauseWithProtErr : Choice {
private:
	static const void *choicesInfo[16];
public:
	static const Info theInfo;
	FailureCauseWithProtErr(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> RRCTransactionIdentifier;

class FailureCauseWithProtErrTrId : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	FailureCauseWithProtErrTrId(): Sequence(&theInfo) {}
};

enum GANSSModeValues {
	networkBased_GANSSMode = 0,
	uEBased_GANSSMode = 1,
	both_GANSSMode = 2,
	none_GANSSMode = 3,
};
typedef Enumerated<CONSTRAINED, 3> GANSSMode;

typedef Null RRCConnectionReleaseInformationNoRelease;

enum ReleaseCauseValues {
	normalEvent_ReleaseCause = 0,
	unspecified_ReleaseCause = 1,
	pre_emptiveRelease_ReleaseCause = 2,
	congestion_ReleaseCause = 3,
	re_establishmentReject_ReleaseCause = 4,
	directedsignallingconnectionre_establishment_ReleaseCause = 5,
	userInactivity_ReleaseCause = 6,
	spare_ReleaseCause = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReleaseCause;

class RRCConnectionReleaseInformationRelease : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RRCConnectionReleaseInformationRelease(): Sequence(&theInfo) {}
};

class RRCConnectionReleaseInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RRCConnectionReleaseInformation(): Choice(&theInfo) {}
};

typedef Null URNTIGroupAll;

typedef BitString<CONSTRAINED, 31, 31> URNTIGroupURNTIBitMaskIndexb1;

typedef BitString<CONSTRAINED, 30, 30> URNTIGroupURNTIBitMaskIndexb2;

typedef BitString<CONSTRAINED, 29, 29> URNTIGroupURNTIBitMaskIndexb3;

typedef BitString<CONSTRAINED, 28, 28> URNTIGroupURNTIBitMaskIndexb4;

typedef BitString<CONSTRAINED, 27, 27> URNTIGroupURNTIBitMaskIndexb5;

typedef BitString<CONSTRAINED, 26, 26> URNTIGroupURNTIBitMaskIndexb6;

typedef BitString<CONSTRAINED, 25, 25> URNTIGroupURNTIBitMaskIndexb7;

typedef BitString<CONSTRAINED, 24, 24> URNTIGroupURNTIBitMaskIndexb8;

typedef BitString<CONSTRAINED, 23, 23> URNTIGroupURNTIBitMaskIndexb9;

typedef BitString<CONSTRAINED, 22, 22> URNTIGroupURNTIBitMaskIndexb10;

typedef BitString<CONSTRAINED, 21, 21> URNTIGroupURNTIBitMaskIndexb11;

typedef BitString<CONSTRAINED, 20, 20> URNTIGroupURNTIBitMaskIndexb12;

typedef BitString<CONSTRAINED, 19, 19> URNTIGroupURNTIBitMaskIndexb13;

typedef BitString<CONSTRAINED, 18, 18> URNTIGroupURNTIBitMaskIndexb14;

typedef BitString<CONSTRAINED, 17, 17> URNTIGroupURNTIBitMaskIndexb15;

typedef BitString<CONSTRAINED, 16, 16> URNTIGroupURNTIBitMaskIndexb16;

typedef BitString<CONSTRAINED, 15, 15> URNTIGroupURNTIBitMaskIndexb17;

typedef BitString<CONSTRAINED, 14, 14> URNTIGroupURNTIBitMaskIndexb18;

typedef BitString<CONSTRAINED, 13, 13> URNTIGroupURNTIBitMaskIndexb19;

typedef BitString<CONSTRAINED, 12, 12> URNTIGroupURNTIBitMaskIndexb20;

typedef BitString<CONSTRAINED, 11, 11> URNTIGroupURNTIBitMaskIndexb21;

typedef BitString<CONSTRAINED, 10, 10> URNTIGroupURNTIBitMaskIndexb22;

typedef BitString<CONSTRAINED, 9, 9> URNTIGroupURNTIBitMaskIndexb23;

typedef BitString<CONSTRAINED, 8, 8> URNTIGroupURNTIBitMaskIndexb24;

typedef BitString<CONSTRAINED, 7, 7> URNTIGroupURNTIBitMaskIndexb25;

typedef BitString<CONSTRAINED, 6, 6> URNTIGroupURNTIBitMaskIndexb26;

typedef BitString<CONSTRAINED, 5, 5> URNTIGroupURNTIBitMaskIndexb27;

typedef BitString<CONSTRAINED, 4, 4> URNTIGroupURNTIBitMaskIndexb28;

typedef BitString<CONSTRAINED, 3, 3> URNTIGroupURNTIBitMaskIndexb29;

typedef BitString<CONSTRAINED, 2, 2> URNTIGroupURNTIBitMaskIndexb30;

typedef BitString<CONSTRAINED, 1, 1> URNTIGroupURNTIBitMaskIndexb31;

class URNTIGroup : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	URNTIGroup(): Choice(&theInfo) {}
};

class GroupReleaseInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	GroupReleaseInformation(): Sequence(&theInfo) {}
};

class GroupIdentityWithReleaseInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	GroupIdentityWithReleaseInformation(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> HRNTI;

enum HighMobilityDetectedValues {
	high_MobilityDetected_HighMobilityDetected = 0,
};
typedef Enumerated<CONSTRAINED, 0> HighMobilityDetected;

typedef BitString<CONSTRAINED, 4, 4> UESpecificBehaviourInformation1idle;

typedef BitString<CONSTRAINED, 8, 8> UESpecificBehaviourInformation1interRAT;

typedef Boolean IdleIntervalMeasCapabEUTRAIdleInterval;

class IdleIntervalMeasCapabEUTRA : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IdleIntervalMeasCapabEUTRA(): Sequence(&theInfo) {}
};

typedef SequenceOf<IdleIntervalMeasCapabEUTRA, CONSTRAINED, 1, maxFreqBandsEUTRA> IdleIntervalMeasCapabEUTRAList;

class IMSIandESNDS41 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IMSIandESNDS41(): Sequence(&theInfo) {}
};

class TMSIandLAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TMSIandLAIGSMMAP(): Sequence(&theInfo) {}
};

class PTMSIandRAIGSMMAP : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PTMSIandRAIGSMMAP(): Sequence(&theInfo) {}
};

class InitialUEIdentity : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	InitialUEIdentity(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> MessageAuthenticationCode;

typedef Integer<CONSTRAINED, 0, 15> RRCMessageSequenceNumber;

class IntegrityCheckInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityCheckInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RRCMessageSequenceNumber, CONSTRAINED, 4, 5> RRCMessageSequenceNumberList;

class IntegrityProtActivationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtActivationInfo(): Sequence(&theInfo) {}
};

enum IntegrityProtectionAlgorithmValues {
	uia1_IntegrityProtectionAlgorithm = 0,
};
typedef Enumerated<CONSTRAINED, 0> IntegrityProtectionAlgorithm;

enum IntegrityProtectionAlgorithmr7Values {
	uia1_IntegrityProtectionAlgorithmr7 = 0,
	uia2_IntegrityProtectionAlgorithmr7 = 1,
};
typedef Enumerated<CONSTRAINED, 1> IntegrityProtectionAlgorithmr7;

typedef BitString<CONSTRAINED, 32, 32> IntegrityProtInitNumber;

class IntegrityProtectionModeCommandStartIntegrityProtection : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtectionModeCommandStartIntegrityProtection(): Sequence(&theInfo) {}
};

class IntegrityProtectionModeCommandModify : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntegrityProtectionModeCommandModify(): Sequence(&theInfo) {}
};

class IntegrityProtectionModeCommand : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeCommand(): Choice(&theInfo) {}
};

class IntegrityProtectionModeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfo(): Sequence(&theInfo) {}
};

class IntegrityProtectionModeInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IntegrityProtectionModeInfor7(): Sequence(&theInfo) {}
};

enum MaxHcContextSpaceValues {
	dummy_MaxHcContextSpace = 0,
	by1024_MaxHcContextSpace = 1,
	by2048_MaxHcContextSpace = 2,
	by4096_MaxHcContextSpace = 3,
	by8192_MaxHcContextSpace = 4,
};
typedef Enumerated<CONSTRAINED, 4> MaxHcContextSpace;

enum MaxHcContextSpacer5extValues {
	by16384_MaxHcContextSpacer5ext = 0,
	by32768_MaxHcContextSpacer5ext = 1,
	by65536_MaxHcContextSpacer5ext = 2,
	by131072_MaxHcContextSpacer5ext = 3,
};
typedef Enumerated<CONSTRAINED, 3> MaxHcContextSpacer5ext;

enum MaxROHCContextSessionsr4Values {
	s2_MaxROHCContextSessionsr4 = 0,
	s4_MaxROHCContextSessionsr4 = 1,
	s8_MaxROHCContextSessionsr4 = 2,
	s12_MaxROHCContextSessionsr4 = 3,
	s16_MaxROHCContextSessionsr4 = 4,
	s24_MaxROHCContextSessionsr4 = 5,
	s32_MaxROHCContextSessionsr4 = 6,
	s48_MaxROHCContextSessionsr4 = 7,
	s64_MaxROHCContextSessionsr4 = 8,
	s128_MaxROHCContextSessionsr4 = 9,
	s256_MaxROHCContextSessionsr4 = 10,
	s512_MaxROHCContextSessionsr4 = 11,
	s1024_MaxROHCContextSessionsr4 = 12,
	s16384_MaxROHCContextSessionsr4 = 13,
};
typedef Enumerated<CONSTRAINED, 13> MaxROHCContextSessionsr4;

enum MaximumAMEntityNumberRLCCapValues {
	dummy_MaximumAMEntityNumberRLCCap = 0,
	am4_MaximumAMEntityNumberRLCCap = 1,
	am5_MaximumAMEntityNumberRLCCap = 2,
	am6_MaximumAMEntityNumberRLCCap = 3,
	am8_MaximumAMEntityNumberRLCCap = 4,
	am16_MaximumAMEntityNumberRLCCap = 5,
	am30_MaximumAMEntityNumberRLCCap = 6,
};
typedef Enumerated<CONSTRAINED, 6> MaximumAMEntityNumberRLCCap;

enum MaximumRLCWindowSizeValues {
	mws2047_MaximumRLCWindowSize = 0,
	mws4095_MaximumRLCWindowSize = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaximumRLCWindowSize;

enum MaxNoDPDCHBitsTransmittedValues {
	b600_MaxNoDPDCHBitsTransmitted = 0,
	b1200_MaxNoDPDCHBitsTransmitted = 1,
	b2400_MaxNoDPDCHBitsTransmitted = 2,
	b4800_MaxNoDPDCHBitsTransmitted = 3,
	b9600_MaxNoDPDCHBitsTransmitted = 4,
	b19200_MaxNoDPDCHBitsTransmitted = 5,
	b28800_MaxNoDPDCHBitsTransmitted = 6,
	b38400_MaxNoDPDCHBitsTransmitted = 7,
	b48000_MaxNoDPDCHBitsTransmitted = 8,
	b57600_MaxNoDPDCHBitsTransmitted = 9,
};
typedef Enumerated<CONSTRAINED, 9> MaxNoDPDCHBitsTransmitted;

enum MaxNumberOfTFCULValues {
	dummy1_MaxNumberOfTFCUL = 0,
	dummy2_MaxNumberOfTFCUL = 1,
	tfc16_MaxNumberOfTFCUL = 2,
	tfc32_MaxNumberOfTFCUL = 3,
	tfc48_MaxNumberOfTFCUL = 4,
	tfc64_MaxNumberOfTFCUL = 5,
	tfc96_MaxNumberOfTFCUL = 6,
	tfc128_MaxNumberOfTFCUL = 7,
	tfc256_MaxNumberOfTFCUL = 8,
	tfc512_MaxNumberOfTFCUL = 9,
	tfc1024_MaxNumberOfTFCUL = 10,
};
typedef Enumerated<CONSTRAINED, 10> MaxNumberOfTFCUL;

enum MaxPhysChPerTimeslotValues {
	ts1_MaxPhysChPerTimeslot = 0,
	ts2_MaxPhysChPerTimeslot = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaxPhysChPerTimeslot;

typedef Integer<CONSTRAINED, 1, 4> MaxPhysChPerTimeslotLCRr7;

enum MaxSimultaneousTransChsULValues {
	dummy_MaxSimultaneousTransChsUL = 0,
	e4_MaxSimultaneousTransChsUL = 1,
	e8_MaxSimultaneousTransChsUL = 2,
	e16_MaxSimultaneousTransChsUL = 3,
	e32_MaxSimultaneousTransChsUL = 4,
};
typedef Enumerated<CONSTRAINED, 4> MaxSimultaneousTransChsUL;

enum MaxTransportBlocksULValues {
	dummy_MaxTransportBlocksUL = 0,
	tb4_MaxTransportBlocksUL = 1,
	tb8_MaxTransportBlocksUL = 2,
	tb16_MaxTransportBlocksUL = 3,
	tb32_MaxTransportBlocksUL = 4,
	tb48_MaxTransportBlocksUL = 5,
	tb64_MaxTransportBlocksUL = 6,
	tb96_MaxTransportBlocksUL = 7,
	tb128_MaxTransportBlocksUL = 8,
	tb256_MaxTransportBlocksUL = 9,
	tb512_MaxTransportBlocksUL = 10,
};
typedef Enumerated<CONSTRAINED, 10> MaxTransportBlocksUL;

class MeasurementCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementCapability(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementCapabilityExt(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementCapabilityExt2(): Sequence(&theInfo) {}
};

class MeasurementCapabilityExt3 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityExt3(): Sequence(&theInfo) {}
};

class MeasurementCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MeasurementCapabilityr4ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv860ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityv920ext(): Sequence(&theInfo) {}
};

class MeasurementCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementCapabilityTDD(): Sequence(&theInfo) {}
};

enum MinimumSFULValues {
	sf1_MinimumSFUL = 0,
	sf2_MinimumSFUL = 1,
	sf4_MinimumSFUL = 2,
	sf8_MinimumSFUL = 3,
	dummy_MinimumSFUL = 4,
};
typedef Enumerated<CONSTRAINED, 4> MinimumSFUL;

enum MultiModeCapabilityValues {
	tdd_MultiModeCapability = 0,
	fdd_MultiModeCapability = 1,
	fdd_tdd_MultiModeCapability = 2,
};
typedef Enumerated<CONSTRAINED, 2> MultiModeCapability;

typedef Boolean MultiRATCapabilitySupportOfGSM;

typedef Boolean MultiRATCapabilitySupportOfMulticarrier;

class MultiRATCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MultiRATCapability(): Sequence(&theInfo) {}
};

typedef Boolean MultiModeRATCapabilityv590extSupportOfUTRANToGERANNACC;

class MultiModeRATCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv590ext(): Sequence(&theInfo) {}
};

enum MultiModeRATCapabilityv680extsupportOfHandoverToGANValues {
	doesSupportHandoverToGAN_MultiModeRATCapabilityv680extsupportOfHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv680extsupportOfHandoverToGAN;

class MultiModeRATCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv680ext(): Sequence(&theInfo) {}
};

enum MultiModeRATCapabilityv770extsupportOfPSHandoverToGANValues {
	doesSupportPSHandoverToGAN_MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv770extsupportOfPSHandoverToGAN;

class MultiModeRATCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv770ext(): Sequence(&theInfo) {}
};

enum MultiModeRATCapabilityv860extsupportOfEUTRAFDDValues {
	doesSupportEUTRAFDD_MultiModeRATCapabilityv860extsupportOfEUTRAFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv860extsupportOfEUTRAFDD;

enum MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRAFDDValues {
	doesSupportInterRATHOToEUTRAFDD_MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRAFDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRAFDD;

enum MultiModeRATCapabilityv860extsupportOfEUTRATDDValues {
	doesSupportEUTRATDD_MultiModeRATCapabilityv860extsupportOfEUTRATDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv860extsupportOfEUTRATDD;

enum MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRATDDValues {
	doesSupportInterRATHOToEUTRATDD_MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRATDD = 0,
};
typedef Enumerated<CONSTRAINED, 0> MultiModeRATCapabilityv860extsupportOfInterRATHOToEUTRATDD;

typedef BitString<CONSTRAINED, 4, 4> MultiModeRATCapabilityv860extEutraFeatureGroupIndicators;

class MultiModeRATCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MultiModeRATCapabilityv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> N300;

typedef Integer<CONSTRAINED, 0, 7> N301;

typedef Integer<CONSTRAINED, 0, 7> N302;

typedef Integer<CONSTRAINED, 0, 7> N304;

typedef Integer<CONSTRAINED, 1, 8> N308;

typedef Integer<CONSTRAINED, 0, 7> N310;

enum N312Values {
	s1_N312 = 0,
	s50_N312 = 1,
	s100_N312 = 2,
	s200_N312 = 3,
	s400_N312 = 4,
	s600_N312 = 5,
	s800_N312 = 6,
	s1000_N312 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N312;

enum N312extValues {
	s2_N312ext = 0,
	s4_N312ext = 1,
	s10_N312ext = 2,
	s20_N312ext = 3,
};
typedef Enumerated<CONSTRAINED, 3> N312ext;

enum N312r5Values {
	s1_N312r5 = 0,
	s2_N312r5 = 1,
	s4_N312r5 = 2,
	s10_N312r5 = 3,
	s20_N312r5 = 4,
	s50_N312r5 = 5,
	s100_N312r5 = 6,
	s200_N312r5 = 7,
	s400_N312r5 = 8,
	s600_N312r5 = 9,
	s800_N312r5 = 10,
	s1000_N312r5 = 11,
};
typedef Enumerated<CONSTRAINED, 11> N312r5;

enum N313Values {
	s1_N313 = 0,
	s2_N313 = 1,
	s4_N313 = 2,
	s10_N313 = 3,
	s20_N313 = 4,
	s50_N313 = 5,
	s100_N313 = 6,
	s200_N313 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N313;

enum N315Values {
	s1_N315 = 0,
	s50_N315 = 1,
	s100_N315 = 2,
	s200_N315 = 3,
	s400_N315 = 4,
	s600_N315 = 5,
	s800_N315 = 6,
	s1000_N315 = 7,
};
typedef Enumerated<CONSTRAINED, 7> N315;

enum N315extValues {
	s2_N315ext = 0,
	s4_N315ext = 1,
	s10_N315ext = 2,
	s20_N315ext = 3,
};
typedef Enumerated<CONSTRAINED, 3> N315ext;

enum N315r5Values {
	s1_N315r5 = 0,
	s2_N315r5 = 1,
	s4_N315r5 = 2,
	s10_N315r5 = 3,
	s20_N315r5 = 4,
	s50_N315r5 = 5,
	s100_N315r5 = 6,
	s200_N315r5 = 7,
	s400_N315r5 = 8,
	s600_N315r5 = 9,
	s800_N315r5 = 10,
	s1000_N315r5 = 11,
};
typedef Enumerated<CONSTRAINED, 11> N315r5;

enum NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHOValues {
	true_NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionCapabilitysupportOfIntraFreqSIAcquisitionForHO;

enum NeighCellSIAcquisitionCapabilitysupportOfInterFreqSIAcquisitionForHOValues {
	true_NeighCellSIAcquisitionCapabilitysupportOfInterFreqSIAcquisitionForHO = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionCapabilitysupportOfInterFreqSIAcquisitionForHO;

enum NeighCellSIAcquisitionCapabilitysupportOfE_UtraSIAcquisitionForHOValues {
	true_NeighCellSIAcquisitionCapabilitysupportOfE_UtraSIAcquisitionForHO = 0,
};
typedef Enumerated<CONSTRAINED, 0> NeighCellSIAcquisitionCapabilitysupportOfE_UtraSIAcquisitionForHO;

class NeighCellSIAcquisitionCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	NeighCellSIAcquisitionCapability(): Sequence(&theInfo) {}
};

class NetworkAssistedGANSSSupportedList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NetworkAssistedGANSSSupportedList(): Sequence(&theInfo) {}
};

class NetworkAssistedGANSSSupportedListv860ext : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NetworkAssistedGANSSSupportedListv860ext(): Sequence(&theInfo) {}
};

enum NetworkAssistedGPSSupportedValues {
	networkBased_NetworkAssistedGPSSupported = 0,
	ue_Based_NetworkAssistedGPSSupported = 1,
	bothNetworkAndUE_Based_NetworkAssistedGPSSupported = 2,
	noNetworkAssistedGPS_NetworkAssistedGPSSupported = 3,
};
typedef Enumerated<CONSTRAINED, 3> NetworkAssistedGPSSupported;

enum PagingCauseValues {
	terminatingConversationalCall_PagingCause = 0,
	terminatingStreamingCall_PagingCause = 1,
	terminatingInteractiveCall_PagingCause = 2,
	terminatingBackgroundCall_PagingCause = 3,
	terminatingHighPrioritySignalling_PagingCause = 4,
	terminatingLowPrioritySignalling_PagingCause = 5,
	terminatingCauseUnknown_PagingCause = 6,
	spare_PagingCause = 7,
};
typedef Enumerated<CONSTRAINED, 7> PagingCause;

class PagingRecordCnIdentity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingRecordCnIdentity(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 12, 12> SRNCIdentity;

typedef BitString<CONSTRAINED, 20, 20> SRNTI;

class URNTI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URNTI(): Sequence(&theInfo) {}
};

class PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingRecordUtranIdentityCnOriginatedPageconnectedModeUE(): Sequence(&theInfo) {}
};

class PagingRecordUtranIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PagingRecordUtranIdentity(): Sequence(&theInfo) {}
};

class PagingRecord : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingRecord(): Choice(&theInfo) {}
};

class PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingRecord2r5UtranSingleUEIdentityCnOriginatedPageconnectedModeUE(): Sequence(&theInfo) {}
};

class PagingRecord2r5UtranSingleUEIdentity : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PagingRecord2r5UtranSingleUEIdentity(): Sequence(&theInfo) {}
};

typedef SequenceOf<GroupIdentityWithReleaseInformation, CONSTRAINED, 1 ,  maxURNTI_Group> PagingRecord2r5UtranGroupIdentity;

class PagingRecord2r5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PagingRecord2r5(): Choice(&theInfo) {}
};

typedef SequenceOf<PagingRecord, CONSTRAINED, 1, maxPage1> PagingRecordList;

typedef SequenceOf<PagingRecord2r5, CONSTRAINED, 1, maxPage1> PagingRecord2Listr5;

typedef Boolean PDCPCapabilityLosslessSRNSRelocationSupport;

typedef Null PDCPCapabilitySupportForRfc2507NotSupported;

class PDCPCapabilitySupportForRfc2507 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDCPCapabilitySupportForRfc2507(): Choice(&theInfo) {}
};

class PDCPCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPCapability(): Sequence(&theInfo) {}
};

typedef Null PDCPCapabilityr4extSupportForRfc3095NotSupported;

typedef Integer<CONSTRAINED, 0, 65535> PDCPCapabilityr4extSupportForRfc3095SupportedReverseCompressionDepth;

class PDCPCapabilityr4extSupportForRfc3095Supported : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPCapabilityr4extSupportForRfc3095Supported(): Sequence(&theInfo) {}
};

class PDCPCapabilityr4extSupportForRfc3095 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDCPCapabilityr4extSupportForRfc3095(): Choice(&theInfo) {}
};

class PDCPCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr4ext(): Sequence(&theInfo) {}
};

typedef Boolean PDCPCapabilityr5extSupportForRfc3095ContextRelocation;

class PDCPCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext(): Sequence(&theInfo) {}
};

enum PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChangeValues {
	true_PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPCapabilityr5ext2losslessDLRLC_PDUSizeChange;

class PDCPCapabilityr5ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityr5ext2(): Sequence(&theInfo) {}
};

enum PDCPCapabilityv770extsupportForCSVoiceoverHSPAValues {
	true_PDCPCapabilityv770extsupportForCSVoiceoverHSPA = 0,
};
typedef Enumerated<CONSTRAINED, 0> PDCPCapabilityv770extsupportForCSVoiceoverHSPA;

class PDCPCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPCapabilityv770ext(): Sequence(&theInfo) {}
};

typedef Boolean ULPhysChCapabilityFDDDummy;

class ULPhysChCapabilityFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDD(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityFddPhysChCapability(): Sequence(&theInfo) {}
};

typedef Boolean ULPhysChCapabilityTDDSupportOfPUSCH;

class ULPhysChCapabilityTDD : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityTddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityTddPhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 7, 7> ULPhysChCapabilityFDDv770extEdchPhysicalLayerCategoryextension;

enum ULPhysChCapabilityFDDv770extdiscontinuousDpcchTransmissionValues {
	true_ULPhysChCapabilityFDDv770extdiscontinuousDpcchTransmission = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULPhysChCapabilityFDDv770extdiscontinuousDpcchTransmission;

enum ULPhysChCapabilityFDDv770extslotFormat4Values {
	true_ULPhysChCapabilityFDDv770extslotFormat4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULPhysChCapabilityFDDv770extslotFormat4;

class ULPhysChCapabilityFDDv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv770ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770extFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770extFddPhysChCapability(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> ULPhysChCapabilityTDD384v770extTdd384edchSupportedTddedchPhysicalLayerCategory;

class ULPhysChCapabilityTDD384v770extTdd384edchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770extTdd384edchSupported(): Sequence(&theInfo) {}
};

typedef Null ULPhysChCapabilityTDD384v770extTdd384edchUnsupported;

class ULPhysChCapabilityTDD384v770extTdd384edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770extTdd384edch(): Choice(&theInfo) {}
};

class ULPhysChCapabilityTDD384v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD384v770ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770extTddPhysChCapability384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770extTddPhysChCapability384(): Sequence(&theInfo) {}
};

typedef Boolean ULPhysChCapabilityTDD768SupportOfPUSCH;

typedef Integer<CONSTRAINED, 1, 16> ULPhysChCapabilityTDD768Tdd384edchSupportedTddedchPhysicalLayerCategory;

class ULPhysChCapabilityTDD768Tdd384edchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD768Tdd384edchSupported(): Sequence(&theInfo) {}
};

typedef Null ULPhysChCapabilityTDD768Tdd384edchUnsupported;

class ULPhysChCapabilityTDD768Tdd384edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD768Tdd384edch(): Choice(&theInfo) {}
};

class ULPhysChCapabilityTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD768(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770extTddPhysChCapability768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770extTddPhysChCapability768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> ULPhysChCapabilityTDD128v770extTdd128edchSupportedTddedchPhysicalLayerCategory;

class ULPhysChCapabilityTDD128v770extTdd128edchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD128v770extTdd128edchSupported(): Sequence(&theInfo) {}
};

typedef Null ULPhysChCapabilityTDD128v770extTdd128edchUnsupported;

class ULPhysChCapabilityTDD128v770extTdd128edch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD128v770extTdd128edch(): Choice(&theInfo) {}
};

class ULPhysChCapabilityTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDD128v770ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770extTddPhysChCapability128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770extTddPhysChCapability128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv770ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv860extFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv860extFddPhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv860extTddPhysChCapability128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv860extTddPhysChCapability128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 8, 9> ULPhysChCapabilityFDDv920extEdchPhysicalLayerCategoryextension2;

class ULPhysChCapabilityFDDv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDv920ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv920extFddPhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv920extFddPhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityv920ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityInfov770extTddPhysChCapability768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770extTddPhysChCapability768(): Sequence(&theInfo) {}
};

class ULPhysChCapabilityInfoTDD128v770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULPhysChCapabilityInfoTDD128v770ext(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityInfov770extTddPhysChCapability128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770extTddPhysChCapability128(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityInfov770ext(): Sequence(&theInfo) {}
};

typedef Boolean ULPhysChCapabilityTDDLCRr4SupportOfPUSCH;

typedef Boolean ULPhysChCapabilityTDDLCRr4SupportOf8PSK;

class ULPhysChCapabilityTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULPhysChCapabilityTDDLCRr4(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityLCRr4Tdd128PhysChCapability(): Sequence(&theInfo) {}
};

class PhysicalChannelCapabilityLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean PhysicalChannelCapabilityhspdschr5FddhspdschSupportedDummy;

typedef Boolean PhysicalChannelCapabilityhspdschr5FddhspdschSupportedDummy2;

class PhysicalChannelCapabilityhspdschr5FddhspdschSupported : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5FddhspdschSupported(): Sequence(&theInfo) {}
};

typedef Null PhysicalChannelCapabilityhspdschr5FddhspdschUnsupported;

class PhysicalChannelCapabilityhspdschr5Fddhspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5Fddhspdsch(): Choice(&theInfo) {}
};

typedef Null PhysicalChannelCapabilityhspdschr5Tdd384hspdschUnsupported;

class PhysicalChannelCapabilityhspdschr5Tdd384hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5Tdd384hspdsch(): Choice(&theInfo) {}
};

typedef Null PhysicalChannelCapabilityhspdschr5Tdd128hspdschUnsupported;

class PhysicalChannelCapabilityhspdschr5Tdd128hspdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5Tdd128hspdsch(): Choice(&theInfo) {}
};

class PhysicalChannelCapabilityhspdschr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityhspdschr5(): Sequence(&theInfo) {}
};

enum PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriodValues {
	c2_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 0,
	c3_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 1,
	c4_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 2,
	c5_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 3,
	c6_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 4,
	c7_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 5,
	c8_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 6,
	c9_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 7,
	c10_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 8,
	c12_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 9,
	c14_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 10,
	c16_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 11,
	c18_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 12,
	c20_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 13,
	c24_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 14,
	c28_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 15,
	c32_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 16,
	c36_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 17,
	c40_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 18,
	c48_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 19,
	c56_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 20,
	c64_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 21,
	c72_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 22,
	c80_PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod = 23,
};
typedef Enumerated<CONSTRAINED, 23> PNBSCHAllocationr4numberOfRepetitionsPerSFNPeriod;

class PNBSCHAllocationr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PNBSCHAllocationr4(): Sequence(&theInfo) {}
};

typedef Boolean PreRedirectionInfoSupportEUTRAFDD;

typedef Boolean PreRedirectionInfoSupportEUTRATDD;

class PreRedirectionInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PreRedirectionInfo(): Sequence(&theInfo) {}
};

enum ProtocolErrorIndicatorValues {
	noError_ProtocolErrorIndicator = 0,
	errorOccurred_ProtocolErrorIndicator = 1,
};
typedef Enumerated<CONSTRAINED, 1> ProtocolErrorIndicator;

typedef Null ProtocolErrorIndicatorWithMoreInfoNoError;

class ProtocolErrorIndicatorWithMoreInfoErrorOccurred : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ProtocolErrorIndicatorWithMoreInfoErrorOccurred(): Sequence(&theInfo) {}
};

class ProtocolErrorIndicatorWithMoreInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ProtocolErrorIndicatorWithMoreInfo(): Choice(&theInfo) {}
};

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeType1Asn1ViolationOrEncodingError;

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeType1MessageTypeNonexistent;

enum ReceivedMessageTypeValues {
	activeSetUpdate_ReceivedMessageType = 0,
	cellChangeOrderFromUTRAN_ReceivedMessageType = 1,
	cellUpdateConfirm_ReceivedMessageType = 2,
	counterCheck_ReceivedMessageType = 3,
	downlinkDirectTransfer_ReceivedMessageType = 4,
	interRATHandoverCommand_ReceivedMessageType = 5,
	measurementControl_ReceivedMessageType = 6,
	pagingType2_ReceivedMessageType = 7,
	physicalChannelReconfiguration_ReceivedMessageType = 8,
	physicalSharedChannelAllocation_ReceivedMessageType = 9,
	radioBearerReconfiguration_ReceivedMessageType = 10,
	radioBearerRelease_ReceivedMessageType = 11,
	radioBearerSetup_ReceivedMessageType = 12,
	rrcConnectionRelease_ReceivedMessageType = 13,
	rrcConnectionReject_ReceivedMessageType = 14,
	rrcConnectionSetup_ReceivedMessageType = 15,
	securityModeCommand_ReceivedMessageType = 16,
	signallingConnectionRelease_ReceivedMessageType = 17,
	transportChannelReconfiguration_ReceivedMessageType = 18,
	transportFormatCombinationControl_ReceivedMessageType = 19,
	ueCapabilityEnquiry_ReceivedMessageType = 20,
	ueCapabilityInformationConfirm_ReceivedMessageType = 21,
	uplinkPhysicalChannelControl_ReceivedMessageType = 22,
	uraUpdateConfirm_ReceivedMessageType = 23,
	utranMobilityInformation_ReceivedMessageType = 24,
	assistanceDataDelivery_ReceivedMessageType = 25,
	spare6_ReceivedMessageType = 26,
	spare5_ReceivedMessageType = 27,
	spare4_ReceivedMessageType = 28,
	spare3_ReceivedMessageType = 29,
	spare2_ReceivedMessageType = 30,
	spare1_ReceivedMessageType = 31,
};
typedef Enumerated<CONSTRAINED, 31> ReceivedMessageType;

class IdentificationOfReceivedMessage : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IdentificationOfReceivedMessage(): Sequence(&theInfo) {}
};

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeType1Spare1;

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeType1Spare2;

class ProtocolErrorMoreInformationDiagnosticsTypeType1 : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformationDiagnosticsTypeType1(): Choice(&theInfo) {}
};

typedef Null ProtocolErrorMoreInformationDiagnosticsTypeSpare;

class ProtocolErrorMoreInformationDiagnosticsType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformationDiagnosticsType(): Choice(&theInfo) {}
};

class ProtocolErrorMoreInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ProtocolErrorMoreInformation(): Sequence(&theInfo) {}
};

enum RadioFrequencyBandTDDListValues {
	a_RadioFrequencyBandTDDList = 0,
	b_RadioFrequencyBandTDDList = 1,
	c_RadioFrequencyBandTDDList = 2,
	ab_RadioFrequencyBandTDDList = 3,
	ac_RadioFrequencyBandTDDList = 4,
	bc_RadioFrequencyBandTDDList = 5,
	abc_RadioFrequencyBandTDDList = 6,
	spare_RadioFrequencyBandTDDList = 7,
};
typedef Enumerated<CONSTRAINED, 7> RadioFrequencyBandTDDList;

enum RadioFrequencyBandTDDListr7Values {
	a_RadioFrequencyBandTDDListr7 = 0,
	b_RadioFrequencyBandTDDListr7 = 1,
	c_RadioFrequencyBandTDDListr7 = 2,
	d_RadioFrequencyBandTDDListr7 = 3,
	ab_RadioFrequencyBandTDDListr7 = 4,
	ac_RadioFrequencyBandTDDListr7 = 5,
	ad_RadioFrequencyBandTDDListr7 = 6,
	bc_RadioFrequencyBandTDDListr7 = 7,
	bd_RadioFrequencyBandTDDListr7 = 8,
	cd_RadioFrequencyBandTDDListr7 = 9,
	abc_RadioFrequencyBandTDDListr7 = 10,
	abd_RadioFrequencyBandTDDListr7 = 11,
	acd_RadioFrequencyBandTDDListr7 = 12,
	bcd_RadioFrequencyBandTDDListr7 = 13,
	abcd_RadioFrequencyBandTDDListr7 = 14,
	notabcd_RadioFrequencyBandTDDListr7 = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandTDDListr7;

enum RadioFrequencyBandTDDextValues {
	e_RadioFrequencyBandTDDext = 0,
	f_RadioFrequencyBandTDDext = 1,
	g_RadioFrequencyBandTDDext = 2,
	h_RadioFrequencyBandTDDext = 3,
	i_RadioFrequencyBandTDDext = 4,
	j_RadioFrequencyBandTDDext = 5,
	k_RadioFrequencyBandTDDext = 6,
	l_RadioFrequencyBandTDDext = 7,
	m_RadioFrequencyBandTDDext = 8,
	n_RadioFrequencyBandTDDext = 9,
	o_RadioFrequencyBandTDDext = 10,
	p_RadioFrequencyBandTDDext = 11,
	spare4_RadioFrequencyBandTDDext = 12,
	spare3_RadioFrequencyBandTDDext = 13,
	spare2_RadioFrequencyBandTDDext = 14,
	spare1_RadioFrequencyBandTDDext = 15,
};
typedef Enumerated<CONSTRAINED, 15> RadioFrequencyBandTDDext;

typedef SequenceOf<RadioFrequencyBandTDDext, CONSTRAINED, 1, maxFreqBandsTDD_ext> RadioFrequencyBandTDDextList;

typedef Boolean RbtimerindicatorT314expired;

typedef Boolean RbtimerindicatorT315expired;

class Rbtimerindicator : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Rbtimerindicator(): Sequence(&theInfo) {}
};

enum ReEstablishmentTimerValues {
	useT314_ReEstablishmentTimer = 0,
	useT315_ReEstablishmentTimer = 1,
};
typedef Enumerated<CONSTRAINED, 1> ReEstablishmentTimer;

enum InterRATInfoValues {
	gsm_InterRATInfo = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATInfo;

class RedirectionInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfo(): Choice(&theInfo) {}
};

enum FrequencyBandValues {
	dcs1800BandUsed_FrequencyBand = 0,
	pcs1900BandUsed_FrequencyBand = 1,
};
typedef Enumerated<CONSTRAINED, 1> FrequencyBand;

typedef Integer<CONSTRAINED, 0, 7> NCC;

typedef Integer<CONSTRAINED, 0, 7> BCC;

class BSIC : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BSIC(): Sequence(&theInfo) {}
};

class GSMTargetCellInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	GSMTargetCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<GSMTargetCellInfo, CONSTRAINED, 1, maxGSMTargetCells> GSMTargetCellInfoList;

class InterRATInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATInfor6(): Sequence(&theInfo) {}
};

class RedirectionInfor6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfor6(): Choice(&theInfo) {}
};

typedef Null RedirectionInfov860extFrequencyInfo;

typedef Null InterRATInfov860extGsm;

typedef Integer<CONSTRAINED, 0, 65535> EARFCN;

typedef Integer<CONSTRAINED, 0, 503> EUTRAPhysicalCellIdentity;

class EUTRABlacklistedCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRABlacklistedCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRABlacklistedCell, CONSTRAINED, 1, maxEUTRACellPerFreq> EUTRABlacklistedCellPerFreqList;

class EUTRATargetFreqInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EUTRATargetFreqInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<EUTRATargetFreqInfo, CONSTRAINED, 1, maxEUTRATargetFreqs> EUTRATargetFreqInfoList;

class InterRATInfov860extEutra : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATInfov860extEutra(): Sequence(&theInfo) {}
};

class InterRATInfov860ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	InterRATInfov860ext(): Choice(&theInfo) {}
};

class RedirectionInfov860ext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RedirectionInfov860ext(): Choice(&theInfo) {}
};

enum RejectionCauseValues {
	congestion_RejectionCause = 0,
	unspecified_RejectionCause = 1,
};
typedef Enumerated<CONSTRAINED, 1> RejectionCause;

typedef Integer<CONSTRAINED, 1, 4> UEPowerClass;

enum TxRxFrequencySeparationValues {
	default_TxRx_separation_TxRxFrequencySeparation = 0,
	spare2_TxRxFrequencySeparation = 1,
	spare1_TxRxFrequencySeparation = 2,
};
typedef Enumerated<CONSTRAINED, 2> TxRxFrequencySeparation;

class RFCapabilityFddRFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RFCapabilityFddRFCapability(): Sequence(&theInfo) {}
};

class RFCapabilityTddRFCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityTddRFCapability(): Sequence(&theInfo) {}
};

class RFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RFCapability(): Sequence(&theInfo) {}
};

class RFCapabilityr4extTddRFCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityr4extTddRFCapability(): Sequence(&theInfo) {}
};

class RFCapabilityr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RFCapabilityr4ext(): Sequence(&theInfo) {}
};

class RFCapabilityv770extTdd768RFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RFCapabilityv770extTdd768RFCapability(): Sequence(&theInfo) {}
};

class RFCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityv770ext(): Sequence(&theInfo) {}
};

class RFCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityv860ext(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizeValues {
	dummy_TotalRLCAMBufferSize = 0,
	kb10_TotalRLCAMBufferSize = 1,
	kb50_TotalRLCAMBufferSize = 2,
	kb100_TotalRLCAMBufferSize = 3,
	kb150_TotalRLCAMBufferSize = 4,
	kb500_TotalRLCAMBufferSize = 5,
	kb1000_TotalRLCAMBufferSize = 6,
	spare_TotalRLCAMBufferSize = 7,
};
typedef Enumerated<CONSTRAINED, 7> TotalRLCAMBufferSize;

class RLCCapability : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCCapability(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizer5extValues {
	kb200_TotalRLCAMBufferSizer5ext = 0,
	kb300_TotalRLCAMBufferSizer5ext = 1,
	kb400_TotalRLCAMBufferSizer5ext = 2,
	kb750_TotalRLCAMBufferSizer5ext = 3,
};
typedef Enumerated<CONSTRAINED, 3> TotalRLCAMBufferSizer5ext;

class RLCCapabilityr5ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityr5ext(): Sequence(&theInfo) {}
};

typedef Boolean RLCCapabilityv770extSupportOfTwoLogicalChannel;

class RLCCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv770ext(): Sequence(&theInfo) {}
};

enum TotalRLCAMBufferSizev920extValues {
	kb1150_TotalRLCAMBufferSizev920ext = 0,
	kb1250_TotalRLCAMBufferSizev920ext = 1,
};
typedef Enumerated<CONSTRAINED, 1> TotalRLCAMBufferSizev920ext;

class RLCCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCCapabilityv920ext(): Sequence(&theInfo) {}
};

enum RRCStateIndicatorValues {
	cell_DCH_RRCStateIndicator = 0,
	cell_FACH_RRCStateIndicator = 1,
	cell_PCH_RRCStateIndicator = 2,
	ura_PCH_RRCStateIndicator = 3,
};
typedef Enumerated<CONSTRAINED, 3> RRCStateIndicator;

typedef BitString<CONSTRAINED, 10, 10> SRNTI2;

typedef BitString<CONSTRAINED, 16, 16> SecurityCapabilityCipheringAlgorithmCap;

typedef BitString<CONSTRAINED, 16, 16> SecurityCapabilityIntegrityProtectionAlgorithmCap;

class SecurityCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecurityCapability(): Sequence(&theInfo) {}
};

class SecondaryServingEDCHCellInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryServingEDCHCellInfo(): Sequence(&theInfo) {}
};

enum ScramblingCodeTypeValues {
	shortSC_ScramblingCodeType = 0,
	longSC_ScramblingCodeType = 1,
};
typedef Enumerated<CONSTRAINED, 1> ScramblingCodeType;

typedef Integer<CONSTRAINED, 0, 16777215> ULScramblingCode;

typedef BitString<CONSTRAINED, 8, 8> SecondaryEDCHInfoCommonMs2SchedTransmGrantHARQAlloc;

enum SecondaryEDCHInfoCommonServingGrantprimary_Secondary_GrantSelectorValues {
	primary_SecondaryEDCHInfoCommonServingGrantprimary_Secondary_GrantSelector = 0,
	secondary_SecondaryEDCHInfoCommonServingGrantprimary_Secondary_GrantSelector = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondaryEDCHInfoCommonServingGrantprimary_Secondary_GrantSelector;

class SecondaryEDCHInfoCommonServingGrant : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryEDCHInfoCommonServingGrant(): Sequence(&theInfo) {}
};

enum MinReducedEDPDCHGainFactorValues {
	m8_15_MinReducedEDPDCHGainFactor = 0,
	m11_15_MinReducedEDPDCHGainFactor = 1,
	m15_15_MinReducedEDPDCHGainFactor = 2,
	m21_15_MinReducedEDPDCHGainFactor = 3,
	m30_15_MinReducedEDPDCHGainFactor = 4,
	m42_15_MinReducedEDPDCHGainFactor = 5,
	m60_15_MinReducedEDPDCHGainFactor = 6,
	m84_15_MinReducedEDPDCHGainFactor = 7,
};
typedef Enumerated<CONSTRAINED, 7> MinReducedEDPDCHGainFactor;

typedef Integer<CONSTRAINED, 0, 127> EDCHMinimumSetETFCI;

typedef Integer<CONSTRAINED, 0, 7> SecondaryEDCHInfoCommonDpcchPowerOffsetSecondaryULFrequency;

typedef Integer<CONSTRAINED, 0, 7> PCPreamble;

class SecondaryEDCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	SecondaryEDCHInfoCommon(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> DeltaACK;

typedef Integer<CONSTRAINED, 0, 8> DeltaNACK;

typedef Integer<CONSTRAINED, 0, 1> HARQPreambleMode;

typedef Integer<CONSTRAINED, 0, 127> HSSCCHCodes;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfoModeSpecificInfoFddHSSCCHChannelisationCodeInfo;

class HSSCCHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfoModeSpecificInfoTddTdd384Nackackpoweroffset;

typedef Integer<CONSTRAINED, -22, 40> HSSICHPowerControlInfoTDD384UltargetSIR;

typedef Integer<CONSTRAINED, -35, -10> ConstantValue;

class HSSICHPowerControlInfoTDD384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 14> TimeslotNumber;

enum DLTSChannelisationCodeValues {
	cc16_1_DLTSChannelisationCode = 0,
	cc16_2_DLTSChannelisationCode = 1,
	cc16_3_DLTSChannelisationCode = 2,
	cc16_4_DLTSChannelisationCode = 3,
	cc16_5_DLTSChannelisationCode = 4,
	cc16_6_DLTSChannelisationCode = 5,
	cc16_7_DLTSChannelisationCode = 6,
	cc16_8_DLTSChannelisationCode = 7,
	cc16_9_DLTSChannelisationCode = 8,
	cc16_10_DLTSChannelisationCode = 9,
	cc16_11_DLTSChannelisationCode = 10,
	cc16_12_DLTSChannelisationCode = 11,
	cc16_13_DLTSChannelisationCode = 12,
	cc16_14_DLTSChannelisationCode = 13,
	cc16_15_DLTSChannelisationCode = 14,
	cc16_16_DLTSChannelisationCode = 15,
};
typedef Enumerated<CONSTRAINED, 15> DLTSChannelisationCode;

typedef Null HSSCCHTDD384MidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD384MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> MidambleShiftLong;

class HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD384MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSCCHTDD384MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD384MidambleAllocationMode(): Choice(&theInfo) {}
};

enum MidambleConfigurationBurstType1and3Values {
	ms4_MidambleConfigurationBurstType1and3 = 0,
	ms8_MidambleConfigurationBurstType1and3 = 1,
	ms16_MidambleConfigurationBurstType1and3 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MidambleConfigurationBurstType1and3;

typedef Integer<CONSTRAINED, -63, 0> BlerTarget;

typedef Null HSSICHConfigurationTDD384MidambleAllocationModeDefaultMidamble;

class HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD384MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSICHConfigurationTDD384MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD384MidambleAllocationMode(): Choice(&theInfo) {}
};

class HSSICHConfigurationTDD384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD384(): Sequence(&theInfo) {}
};

class HSSCCHTDD384 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	HSSCCHTDD384(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD384, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfoModeSpecificInfoTddTdd384HSSCCHSetConfiguration;

class HSSCCHInfoModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotNumberLCRr4;

enum HSChannelisationCodeLCRValues {
	cc16_1_HSChannelisationCodeLCR = 0,
	cc16_2_HSChannelisationCodeLCR = 1,
	cc16_3_HSChannelisationCodeLCR = 2,
	cc16_4_HSChannelisationCodeLCR = 3,
	cc16_5_HSChannelisationCodeLCR = 4,
	cc16_6_HSChannelisationCodeLCR = 5,
	cc16_7_HSChannelisationCodeLCR = 6,
	cc16_8_HSChannelisationCodeLCR = 7,
	cc16_9_HSChannelisationCodeLCR = 8,
	cc16_10_HSChannelisationCodeLCR = 9,
	cc16_11_HSChannelisationCodeLCR = 10,
	cc16_12_HSChannelisationCodeLCR = 11,
	cc16_13_HSChannelisationCodeLCR = 12,
	cc16_14_HSChannelisationCodeLCR = 13,
	cc16_15_HSChannelisationCodeLCR = 14,
	cc16_16_HSChannelisationCodeLCR = 15,
};
typedef Enumerated<CONSTRAINED, 15> HSChannelisationCodeLCR;

typedef Null HSSCCHTDD128MidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD128MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> HSSCCHTDD128MidambleAllocationModeUeSpecificMidamble;

class HSSCCHTDD128MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD128MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSSCCHTDD128MidambleConfiguration;

typedef Null HSSICHConfigurationTDD128MidambleAllocationModeDefaultMidamble;

class HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSICHConfigurationTDD128MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSSICHConfigurationTDD128MidambleConfiguration;

typedef Integer<CONSTRAINED, -7, 8> HSSICHConfigurationTDD128Nackackpoweroffset;

typedef Integer<CONSTRAINED, -120, -58> HSSICHConfigurationTDD128PowerlevelHSSICH;

enum HSSICHConfigurationTDD128tpc_step_sizeValues {
	s1_HSSICHConfigurationTDD128tpc_step_size = 0,
	s2_HSSICHConfigurationTDD128tpc_step_size = 1,
	s3_HSSICHConfigurationTDD128tpc_step_size = 2,
	spare1_HSSICHConfigurationTDD128tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSICHConfigurationTDD128tpc_step_size;

class HSSICHConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128(): Sequence(&theInfo) {}
};

class HSSCCHTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSCCHTDD128(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfoModeSpecificInfoTddTdd128;

class HSSCCHInfoModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HSSCCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -12, 26> MeasurementPowerOffset;

enum FeedbackcycleValues {
	fc0_Feedbackcycle = 0,
	fc2_Feedbackcycle = 1,
	fc4_Feedbackcycle = 2,
	fc8_Feedbackcycle = 3,
	fc10_Feedbackcycle = 4,
	fc20_Feedbackcycle = 5,
	fc40_Feedbackcycle = 6,
	fc80_Feedbackcycle = 7,
	fc160_Feedbackcycle = 8,
};
typedef Enumerated<CONSTRAINED, 8> Feedbackcycle;

typedef Integer<CONSTRAINED, 1, 4> CQIRepetitionFactor;

typedef Integer<CONSTRAINED, 0, 8> DeltaCQI;

class MeasurementFeedbackInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementFeedbackInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null MeasurementFeedbackInfoModeSpecificInfoTdd;

class MeasurementFeedbackInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementFeedbackInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class MeasurementFeedbackInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfo(): Sequence(&theInfo) {}
};

class DLHSPDSCHTSConfiguration : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfiguration(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

typedef Null HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeDefaultMidamble;

typedef Null HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> HSPDSCHMidambleConfigurationTDD128MidambleAllocationModeUeSpecificMidamble;

class HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSPDSCHMidambleConfigurationTDD128MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSPDSCHMidambleConfigurationTDD128MidambleConfiguration;

class HSPDSCHMidambleConfigurationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSPDSCHMidambleConfigurationTDD128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationModeSpecificInfoTdd(): Choice(&theInfo) {}
};

typedef Null DLHSPDSCHInformationModeSpecificInfoFdd;

class DLHSPDSCHInformationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformation(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HARQInfoNumberOfProcesses;

typedef Null HARQInfoMemoryPartitioningImplicit;

enum HARQMemorySizeValues {
	hms800_HARQMemorySize = 0,
	hms1600_HARQMemorySize = 1,
	hms2400_HARQMemorySize = 2,
	hms3200_HARQMemorySize = 3,
	hms4000_HARQMemorySize = 4,
	hms4800_HARQMemorySize = 5,
	hms5600_HARQMemorySize = 6,
	hms6400_HARQMemorySize = 7,
	hms7200_HARQMemorySize = 8,
	hms8000_HARQMemorySize = 9,
	hms8800_HARQMemorySize = 10,
	hms9600_HARQMemorySize = 11,
	hms10400_HARQMemorySize = 12,
	hms11200_HARQMemorySize = 13,
	hms12000_HARQMemorySize = 14,
	hms12800_HARQMemorySize = 15,
	hms13600_HARQMemorySize = 16,
	hms14400_HARQMemorySize = 17,
	hms15200_HARQMemorySize = 18,
	hms16000_HARQMemorySize = 19,
	hms17600_HARQMemorySize = 20,
	hms19200_HARQMemorySize = 21,
	hms20800_HARQMemorySize = 22,
	hms22400_HARQMemorySize = 23,
	hms24000_HARQMemorySize = 24,
	hms25600_HARQMemorySize = 25,
	hms27200_HARQMemorySize = 26,
	hms28800_HARQMemorySize = 27,
	hms30400_HARQMemorySize = 28,
	hms32000_HARQMemorySize = 29,
	hms36000_HARQMemorySize = 30,
	hms40000_HARQMemorySize = 31,
	hms44000_HARQMemorySize = 32,
	hms48000_HARQMemorySize = 33,
	hms52000_HARQMemorySize = 34,
	hms56000_HARQMemorySize = 35,
	hms60000_HARQMemorySize = 36,
	hms64000_HARQMemorySize = 37,
	hms68000_HARQMemorySize = 38,
	hms72000_HARQMemorySize = 39,
	hms76000_HARQMemorySize = 40,
	hms80000_HARQMemorySize = 41,
	hms88000_HARQMemorySize = 42,
	hms96000_HARQMemorySize = 43,
	hms104000_HARQMemorySize = 44,
	hms112000_HARQMemorySize = 45,
	hms120000_HARQMemorySize = 46,
	hms128000_HARQMemorySize = 47,
	hms136000_HARQMemorySize = 48,
	hms144000_HARQMemorySize = 49,
	hms152000_HARQMemorySize = 50,
	hms160000_HARQMemorySize = 51,
	hms176000_HARQMemorySize = 52,
	hms192000_HARQMemorySize = 53,
	hms208000_HARQMemorySize = 54,
	hms224000_HARQMemorySize = 55,
	hms240000_HARQMemorySize = 56,
	hms256000_HARQMemorySize = 57,
	hms272000_HARQMemorySize = 58,
	hms288000_HARQMemorySize = 59,
	hms304000_HARQMemorySize = 60,
};
typedef Enumerated<CONSTRAINED, 60> HARQMemorySize;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> HARQInfoMemoryPartitioningExplicit;

class HARQInfoMemoryPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HARQInfoMemoryPartitioning(): Choice(&theInfo) {}
};

class HARQInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfo(): Sequence(&theInfo) {}
};

enum ServingHSDSCHCellInformationmac_hsResetIndicatorValues {
	true_ServingHSDSCHCellInformationmac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ServingHSDSCHCellInformationmac_hsResetIndicator;

class ServingHSDSCHCellInformation : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor7ModeSpecificInfoFddHSSCCHChannelisationCodeInfo;

class HSSCCHInfor7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor7ModeSpecificInfoTddTdd384Nackackpoweroffset;

typedef Integer<CONSTRAINED, -20, 10> DHSSync;

typedef Null HSSCCHTDD384r6MidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD384r6MidambleAllocationModeCommonMidamble;

class HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD384r6MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSCCHTDD384r6MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD384r6MidambleAllocationMode(): Choice(&theInfo) {}
};

class HSSCCHTDD384r6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHTDD384r6(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor7ModeSpecificInfoTddTdd384HSSCCHSetConfiguration;

class HSSCCHInfor7ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor7ModeSpecificInfoTddTdd768Nackackpoweroffset;

typedef Integer<CONSTRAINED, -22, 40> HSSICHPowerControlInfoTDD768UltargetSIR;

class HSSICHPowerControlInfoTDD768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSICHPowerControlInfoTDD768(): Sequence(&theInfo) {}
};

enum DLTSChannelisationCodeVHCRValues {
	cc32_1_DLTSChannelisationCodeVHCR = 0,
	cc32_2_DLTSChannelisationCodeVHCR = 1,
	cc32_3_DLTSChannelisationCodeVHCR = 2,
	cc32_4_DLTSChannelisationCodeVHCR = 3,
	cc132_5_DLTSChannelisationCodeVHCR = 4,
	cc32_6_DLTSChannelisationCodeVHCR = 5,
	cc32_7_DLTSChannelisationCodeVHCR = 6,
	cc32_8_DLTSChannelisationCodeVHCR = 7,
	cc32_9_DLTSChannelisationCodeVHCR = 8,
	cc32_10_DLTSChannelisationCodeVHCR = 9,
	cc32_11_DLTSChannelisationCodeVHCR = 10,
	cc32_12_DLTSChannelisationCodeVHCR = 11,
	cc32_13_DLTSChannelisationCodeVHCR = 12,
	cc32_14_DLTSChannelisationCodeVHCR = 13,
	cc32_15_DLTSChannelisationCodeVHCR = 14,
	cc32_16_DLTSChannelisationCodeVHCR = 15,
	cc32_17_DLTSChannelisationCodeVHCR = 16,
	cc32_18_DLTSChannelisationCodeVHCR = 17,
	cc32_19_DLTSChannelisationCodeVHCR = 18,
	cc32_20_DLTSChannelisationCodeVHCR = 19,
	cc32_21_DLTSChannelisationCodeVHCR = 20,
	cc32_22_DLTSChannelisationCodeVHCR = 21,
	cc32_23_DLTSChannelisationCodeVHCR = 22,
	cc32_24_DLTSChannelisationCodeVHCR = 23,
	cc32_25_DLTSChannelisationCodeVHCR = 24,
	cc32_26_DLTSChannelisationCodeVHCR = 25,
	cc32_27_DLTSChannelisationCodeVHCR = 26,
	cc32_28_DLTSChannelisationCodeVHCR = 27,
	cc32_29_DLTSChannelisationCodeVHCR = 28,
	cc32_30_DLTSChannelisationCodeVHCR = 29,
	cc32_31_DLTSChannelisationCodeVHCR = 30,
	cc32_32_DLTSChannelisationCodeVHCR = 31,
};
typedef Enumerated<CONSTRAINED, 31> DLTSChannelisationCodeVHCR;

typedef Null HSSCCHTDD768MidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD768MidambleAllocationModeCommonMidamble;

class HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHTDD768MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSCCHTDD768MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD768MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Null HSSICHConfigurationTDD768MidambleAllocationModeDefaultMidamble;

class HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD768MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSICHConfigurationTDD768MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD768MidambleAllocationMode(): Choice(&theInfo) {}
};

class HSSICHConfigurationTDD768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD768(): Sequence(&theInfo) {}
};

class HSSCCHTDD768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHTDD768(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD768, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor7ModeSpecificInfoTddTdd768HSSCCHSetConfiguration;

class HSSCCHInfor7ModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor7ModeSpecificInfoTddTdd128Nackackpoweroffset;

typedef Integer<CONSTRAINED, -120, -58> HSSCCHInfor7ModeSpecificInfoTddTdd128PowerlevelHSSICH;

enum HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_sizeValues {
	s1_HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size = 0,
	s2_HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size = 1,
	s3_HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size = 2,
	spare1_HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHInfor7ModeSpecificInfoTddTdd128tpc_step_size;

typedef Integer<CONSTRAINED, 0, 255> PowerControlGAP;

typedef Boolean HSSCCHInfor7ModeSpecificInfoTddTdd128PathlossCompensationSwitch;

typedef Null HSSCCHTDD128r6MidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD128r6MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> HSSCCHTDD128r6MidambleAllocationModeUeSpecificMidamble;

class HSSCCHTDD128r6MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD128r6MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSSCCHTDD128r6MidambleConfiguration;

typedef Null HSSICHConfigurationTDD128r6MidambleAllocationModeDefaultMidamble;

class HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128r6MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class HSSICHConfigurationTDD128r6MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128r6MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSSICHConfigurationTDD128r6MidambleConfiguration;

class HSSICHConfigurationTDD128r6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSSICHConfigurationTDD128r6(): Sequence(&theInfo) {}
};

class HSSCCHTDD128r6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	HSSCCHTDD128r6(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor7ModeSpecificInfoTddTdd128HSSCCHSetConfiguration;

class HSSCCHInfor7ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HSSCCHInfor7ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HSSCCHInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor7(): Sequence(&theInfo) {}
};

enum Feedbackcycler7Values {
	fc0_Feedbackcycler7 = 0,
	fc2_Feedbackcycler7 = 1,
	fc4_Feedbackcycler7 = 2,
	fc8_Feedbackcycler7 = 3,
	fc10_Feedbackcycler7 = 4,
	fc20_Feedbackcycler7 = 5,
	fc40_Feedbackcycler7 = 6,
	fc80_Feedbackcycler7 = 7,
	fc160_Feedbackcycler7 = 8,
	fc16_Feedbackcycler7 = 9,
	fc32_Feedbackcycler7 = 10,
	fc64_Feedbackcycler7 = 11,
	spare4_Feedbackcycler7 = 12,
	spare3_Feedbackcycler7 = 13,
	spare2_Feedbackcycler7 = 14,
	spare1_Feedbackcycler7 = 15,
};
typedef Enumerated<CONSTRAINED, 15> Feedbackcycler7;

class MeasurementFeedbackInfor7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null MeasurementFeedbackInfor7ModeSpecificInfoTdd;

class MeasurementFeedbackInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class MeasurementFeedbackInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MeasurementFeedbackInfor7(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class DLHSPDSCHTSConfigurationVHCR : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHTSConfigurationVHCR(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

enum DLMultiCarrierInformationtsn_LengthValues {
	tsn_6bits_DLMultiCarrierInformationtsn_Length = 0,
	tsn_9bits_DLMultiCarrierInformationtsn_Length = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLMultiCarrierInformationtsn_Length;

typedef Integer<CONSTRAINED, 1, maxTDD128Carrier> DLMultiCarrierInformationMultiCarrierNumber;

class DLHSPDSCHMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DLHSPDSCHMultiCarrierInformation(): Sequence(&theInfo) {}
};

class DLMultiCarrierInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLMultiCarrierInformation(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr7ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

enum DLHSPDSCHInformationr7ModeSpecificInfoFdddl_64QAM_ConfiguredValues {
	true_DLHSPDSCHInformationr7ModeSpecificInfoFdddl_64QAM_Configured = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLHSPDSCHInformationr7ModeSpecificInfoFdddl_64QAM_Configured;

class DLHSPDSCHInformationr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr7(): Sequence(&theInfo) {}
};

enum HARQInfor7numberOfProcessesValues {
	n1_HARQInfor7numberOfProcesses = 0,
	n2_HARQInfor7numberOfProcesses = 1,
	n3_HARQInfor7numberOfProcesses = 2,
	n4_HARQInfor7numberOfProcesses = 3,
	n5_HARQInfor7numberOfProcesses = 4,
	n6_HARQInfor7numberOfProcesses = 5,
	n7_HARQInfor7numberOfProcesses = 6,
	n8_HARQInfor7numberOfProcesses = 7,
	n12_HARQInfor7numberOfProcesses = 8,
	n14_HARQInfor7numberOfProcesses = 9,
	n16_HARQInfor7numberOfProcesses = 10,
};
typedef Enumerated<CONSTRAINED, 10> HARQInfor7numberOfProcesses;

typedef Null HARQInfor7MemoryPartitioningImplicit;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> HARQInfor7MemoryPartitioningExplicitMemorySize;

typedef SequenceOf<HARQMemorySize, CONSTRAINED, 1, maxHProcesses> HARQInfor7MemoryPartitioningExplicitAdditionalMemorySizesForMIMO;

class HARQInfor7MemoryPartitioningExplicit : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfor7MemoryPartitioningExplicit(): Sequence(&theInfo) {}
};

class HARQInfor7MemoryPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HARQInfor7MemoryPartitioning(): Choice(&theInfo) {}
};

class HARQInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HARQInfor7(): Sequence(&theInfo) {}
};

enum ServingHSDSCHCellInformationr7mac_hsResetIndicatorValues {
	true_ServingHSDSCHCellInformationr7mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ServingHSDSCHCellInformationr7mac_hsResetIndicator;

class ServingHSDSCHCellInformationr7 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr7(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

enum DLHSPDSCHInformationr8ModeSpecificInfoFdddl_64QAM_ConfiguredValues {
	true_DLHSPDSCHInformationr8ModeSpecificInfoFdddl_64QAM_Configured = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLHSPDSCHInformationr8ModeSpecificInfoFdddl_64QAM_Configured;

enum HSDSCHTBSizeTableValues {
	octetAligned_HSDSCHTBSizeTable = 0,
};
typedef Enumerated<CONSTRAINED, 0> HSDSCHTBSizeTable;

class DLHSPDSCHInformationr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8(): Sequence(&theInfo) {}
};

enum ServingHSDSCHCellInformationr8mac_hsResetIndicatorValues {
	true_ServingHSDSCHCellInformationr8mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ServingHSDSCHCellInformationr8mac_hsResetIndicator;

class ServingHSDSCHCellInformationr8 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor9ModeSpecificInfoFddHSSCCHChannelisationCodeInfo;

class HSSCCHInfor9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor9ModeSpecificInfoTddTdd384Nackackpoweroffset;

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor9ModeSpecificInfoTddTdd384HSSCCHSetConfiguration;

class HSSCCHInfor9ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor9ModeSpecificInfoTddTdd768Nackackpoweroffset;

typedef SequenceOf<HSSCCHTDD768, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor9ModeSpecificInfoTddTdd768HSSCCHSetConfiguration;

class HSSCCHInfor9ModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor9ModeSpecificInfoTddTdd128Nackackpoweroffset;

typedef Integer<CONSTRAINED, -120, -58> HSSCCHInfor9ModeSpecificInfoTddTdd128PowerlevelHSSICH;

enum HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_sizeValues {
	s1_HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size = 0,
	s2_HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size = 1,
	s3_HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size = 2,
	spare1_HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHInfor9ModeSpecificInfoTddTdd128tpc_step_size;

enum HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_sizeValues {
	s1_HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 0,
	s2_HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 1,
	s3_HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 2,
	spare1_HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHInfor9ModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size;

typedef Boolean HSSCCHInfor9ModeSpecificInfoTddTdd128PathlossCompensationSwitch;

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor9ModeSpecificInfoTddTdd128HSSCCHSetConfiguration;

class HSSCCHInfor9ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HSSCCHInfor9ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HSSCCHInfor9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfor9ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor9(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd768(): Sequence(&theInfo) {}
};

enum DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128tS0_IndicatorValues {
	true_DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128tS0_Indicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128tS0_Indicator;

enum OutofSyncWindowValues {
	ms40_OutofSyncWindow = 0,
	ms80_OutofSyncWindow = 1,
	ms160_OutofSyncWindow = 2,
	ms320_OutofSyncWindow = 3,
	ms640_OutofSyncWindow = 4,
	spare3_OutofSyncWindow = 5,
	spare2_OutofSyncWindow = 6,
	spare1_OutofSyncWindow = 7,
};
typedef Enumerated<CONSTRAINED, 7> OutofSyncWindow;

class DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr9ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

enum DLHSPDSCHInformationr9ModeSpecificInfoFdddl_64QAM_ConfiguredValues {
	true_DLHSPDSCHInformationr9ModeSpecificInfoFdddl_64QAM_Configured = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLHSPDSCHInformationr9ModeSpecificInfoFdddl_64QAM_Configured;

class DLHSPDSCHInformationr9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr9(): Sequence(&theInfo) {}
};

enum ServingHSDSCHCellInformationr9mac_hsResetIndicatorValues {
	true_ServingHSDSCHCellInformationr9mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ServingHSDSCHCellInformationr9mac_hsResetIndicator;

class ServingHSDSCHCellInformationr9 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ServingHSDSCHCellInformationr9(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 128, 128> SRVCCInfoNonce;

class SRVCCInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SRVCCInfo(): Sequence(&theInfo) {}
};

class RABInfoReplace : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInfoReplace(): Sequence(&theInfo) {}
};

class SRVCCSecurityRABInfov860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SRVCCSecurityRABInfov860ext(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 20, 20> STARTValue;

class STARTSingle : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	STARTSingle(): Sequence(&theInfo) {}
};

typedef SequenceOf<STARTSingle, CONSTRAINED, 1, maxCNdomains> STARTList;

enum SystemSpecificCapUpdateReqv590extValues {
	geranIu_SystemSpecificCapUpdateReqv590ext = 0,
};
typedef Enumerated<CONSTRAINED, 0> SystemSpecificCapUpdateReqv590ext;

enum T300Values {
	ms100_T300 = 0,
	ms200_T300 = 1,
	ms400_T300 = 2,
	ms600_T300 = 3,
	ms800_T300 = 4,
	ms1000_T300 = 5,
	ms1200_T300 = 6,
	ms1400_T300 = 7,
	ms1600_T300 = 8,
	ms1800_T300 = 9,
	ms2000_T300 = 10,
	ms3000_T300 = 11,
	ms4000_T300 = 12,
	ms6000_T300 = 13,
	ms8000_T300 = 14,
};
typedef Enumerated<CONSTRAINED, 14> T300;

enum T301Values {
	ms100_T301 = 0,
	ms200_T301 = 1,
	ms400_T301 = 2,
	ms600_T301 = 3,
	ms800_T301 = 4,
	ms1000_T301 = 5,
	ms1200_T301 = 6,
	ms1400_T301 = 7,
	ms1600_T301 = 8,
	ms1800_T301 = 9,
	ms2000_T301 = 10,
	ms3000_T301 = 11,
	ms4000_T301 = 12,
	ms6000_T301 = 13,
	ms8000_T301 = 14,
	spare_T301 = 15,
};
typedef Enumerated<CONSTRAINED, 15> T301;

enum T302Values {
	ms100_T302 = 0,
	ms200_T302 = 1,
	ms400_T302 = 2,
	ms600_T302 = 3,
	ms800_T302 = 4,
	ms1000_T302 = 5,
	ms1200_T302 = 6,
	ms1400_T302 = 7,
	ms1600_T302 = 8,
	ms1800_T302 = 9,
	ms2000_T302 = 10,
	ms3000_T302 = 11,
	ms4000_T302 = 12,
	ms6000_T302 = 13,
	ms8000_T302 = 14,
	spare_T302 = 15,
};
typedef Enumerated<CONSTRAINED, 15> T302;

enum T304Values {
	ms100_T304 = 0,
	ms200_T304 = 1,
	ms400_T304 = 2,
	ms1000_T304 = 3,
	ms2000_T304 = 4,
	spare3_T304 = 5,
	spare2_T304 = 6,
	spare1_T304 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T304;

enum T305Values {
	noUpdate_T305 = 0,
	m5_T305 = 1,
	m10_T305 = 2,
	m30_T305 = 3,
	m60_T305 = 4,
	m120_T305 = 5,
	m360_T305 = 6,
	m720_T305 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T305;

enum T307Values {
	s5_T307 = 0,
	s10_T307 = 1,
	s15_T307 = 2,
	s20_T307 = 3,
	s30_T307 = 4,
	s40_T307 = 5,
	s50_T307 = 6,
	spare_T307 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T307;

enum T308Values {
	ms40_T308 = 0,
	ms80_T308 = 1,
	ms160_T308 = 2,
	ms320_T308 = 3,
};
typedef Enumerated<CONSTRAINED, 3> T308;

typedef Integer<CONSTRAINED, 1, 8> T309;

enum T310Values {
	ms40_T310 = 0,
	ms80_T310 = 1,
	ms120_T310 = 2,
	ms160_T310 = 3,
	ms200_T310 = 4,
	ms240_T310 = 5,
	ms280_T310 = 6,
	ms320_T310 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T310;

enum T311Values {
	ms250_T311 = 0,
	ms500_T311 = 1,
	ms750_T311 = 2,
	ms1000_T311 = 3,
	ms1250_T311 = 4,
	ms1500_T311 = 5,
	ms1750_T311 = 6,
	ms2000_T311 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T311;

typedef Integer<CONSTRAINED, 0, 15> T312;

typedef Integer<CONSTRAINED, 0, 15> T313;

enum T314Values {
	s0_T314 = 0,
	s2_T314 = 1,
	s4_T314 = 2,
	s6_T314 = 3,
	s8_T314 = 4,
	s12_T314 = 5,
	s16_T314 = 6,
	s20_T314 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T314;

enum T315Values {
	s0_T315 = 0,
	s10_T315 = 1,
	s30_T315 = 2,
	s60_T315 = 3,
	s180_T315 = 4,
	s600_T315 = 5,
	s1200_T315 = 6,
	s1800_T315 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T315;

enum T316Values {
	s0_T316 = 0,
	s10_T316 = 1,
	s20_T316 = 2,
	s30_T316 = 3,
	s40_T316 = 4,
	s50_T316 = 5,
	s_inf_T316 = 6,
	spare_T316 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T316;

enum T317Values {
	infinity0_T317 = 0,
	infinity1_T317 = 1,
	infinity2_T317 = 2,
	infinity3_T317 = 3,
	infinity4_T317 = 4,
	infinity5_T317 = 5,
	infinity6_T317 = 6,
	infinity7_T317 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T317;

enum T318Values {
	ms250_T318 = 0,
	ms500_T318 = 1,
	ms750_T318 = 2,
	ms1000_T318 = 3,
	ms1250_T318 = 4,
	ms1500_T318 = 5,
	ms1750_T318 = 6,
	ms2000_T318 = 7,
	ms3000_T318 = 8,
	ms4000_T318 = 9,
	ms6000_T318 = 10,
	ms8000_T318 = 11,
	ms10000_T318 = 12,
	ms12000_T318 = 13,
	ms16000_T318 = 14,
};
typedef Enumerated<CONSTRAINED, 14> T318;

enum T319Values {
	ms80_T319 = 0,
	ms160_T319 = 1,
	ms320_T319 = 2,
	ms640_T319 = 3,
	ms1280_T319 = 4,
	ms2560_T319 = 5,
	ms5120_T319 = 6,
};
typedef Enumerated<CONSTRAINED, 6> T319;

enum T321Values {
	ms100_T321 = 0,
	ms200_T321 = 1,
	ms400_T321 = 2,
	ms800_T321 = 3,
};
typedef Enumerated<CONSTRAINED, 3> T321;

enum T323Values {
	s0_T323 = 0,
	s5_T323 = 1,
	s10_T323 = 2,
	s20_T323 = 3,
	s30_T323 = 4,
	s60_T323 = 5,
	s90_T323 = 6,
	s120_T323 = 7,
};
typedef Enumerated<CONSTRAINED, 7> T323;

typedef Null ULTransChCapabilityModeSpecificInfoFdd;

class ULTransChCapabilityModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTransChCapabilityModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULTransChCapabilityModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTransChCapabilityModeSpecificInfo(): Choice(&theInfo) {}
};

class ULTransChCapability : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	ULTransChCapability(): Sequence(&theInfo) {}
};

class TransportChannelCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelCapability(): Sequence(&theInfo) {}
};

class URNTIShort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	URNTIShort(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> PhysicalChannelCapabilityedchr6FddedchSupportedEdchPhysicalLayerCategory;

class PhysicalChannelCapabilityedchr6FddedchSupported : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6FddedchSupported(): Sequence(&theInfo) {}
};

typedef Null PhysicalChannelCapabilityedchr6FddedchUnsupported;

class PhysicalChannelCapabilityedchr6Fddedch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6Fddedch(): Choice(&theInfo) {}
};

class PhysicalChannelCapabilityedchr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PhysicalChannelCapabilityedchr6(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv690extdeviceTypeValues {
	doesNotBenefitFromBatteryConsumptionOptimisation_UERadioAccessCapabilityv690extdeviceType = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv690extdeviceType;

class UERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}
};

enum InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_HandoverValues {
	doesSupporInter_RAT_PS_Handover_InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover = 0,
};
typedef Enumerated<CONSTRAINED, 0> InterRATUERadioAccessCapabilityv690extsupportOfInter_RAT_PS_Handover;

typedef OctetString<CONSTRAINED, 1, 64> GSMMSRadioAccessCapability;

class InterRATUERadioAccessCapabilityv690ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv690ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv6b0extIEssupportForSIB11bisValues {
	true_UERadioAccessCapabilityv6b0extIEssupportForSIB11bis = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv6b0extIEssupportForSIB11bis;

class UERadioAccessCapabilityv6b0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6b0extIEs(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv6e0extIEssupportForFDPCHValues {
	true_UERadioAccessCapabilityv6e0extIEssupportForFDPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv6e0extIEssupportForFDPCH;

class UERadioAccessCapabilityv6e0extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv6e0extIEs(): Sequence(&theInfo) {}
};

class UEGANSSPositioningCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapability(): Sequence(&theInfo) {}
};

class UEPositioningCapabilityv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv770ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv770extIEsmac_ehsSupportValues {
	true_UERadioAccessCapabilityv770extIEsmac_ehsSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv770extIEsmac_ehsSupport;

enum UESpecificCapabilityInformationLCRTDDValues {
	nF_UESpecificCapabilityInformationLCRTDD = 0,
	nFMc_TriRx_UniTx_UESpecificCapabilityInformationLCRTDD = 1,
	nFMc_TriRx_TriTx_UESpecificCapabilityInformationLCRTDD = 2,
	nFMc_HexRx_UniTx_UESpecificCapabilityInformationLCRTDD = 3,
	nFMc_HexRx_TriTx_UESpecificCapabilityInformationLCRTDD = 4,
	nFMc_HexRx_HexTx_UESpecificCapabilityInformationLCRTDD = 5,
	spare10_UESpecificCapabilityInformationLCRTDD = 6,
	spare9_UESpecificCapabilityInformationLCRTDD = 7,
	spare8_UESpecificCapabilityInformationLCRTDD = 8,
	spare7_UESpecificCapabilityInformationLCRTDD = 9,
	spare6_UESpecificCapabilityInformationLCRTDD = 10,
	spare5_UESpecificCapabilityInformationLCRTDD = 11,
	spare4_UESpecificCapabilityInformationLCRTDD = 12,
	spare3_UESpecificCapabilityInformationLCRTDD = 13,
	spare2_UESpecificCapabilityInformationLCRTDD = 14,
	spare1_UESpecificCapabilityInformationLCRTDD = 15,
};
typedef Enumerated<CONSTRAINED, 15> UESpecificCapabilityInformationLCRTDD;

class UERadioAccessCapabilityv770extIEs : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv770extIEs(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoostingValues {
	true_UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv790extIEssupportForEDPCCHPowerBoosting;

class UERadioAccessCapabilityv790extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv790extIEs(): Sequence(&theInfo) {}
};

class UEGANSSPositioningCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEGANSSPositioningCapabilityv860extIEs(): Sequence(&theInfo) {}
};

class UEPositioningCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityv860ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv860extIEssupportOfCommonEDCHValues {
	true_UERadioAccessCapabilityv860extIEssupportOfCommonEDCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv860extIEssupportOfCommonEDCH;

enum UERadioAccessCapabilityv860extIEssupportOfMACiisValues {
	true_UERadioAccessCapabilityv860extIEssupportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv860extIEssupportOfMACiis;

enum UERadioAccessCapabilityv860extIEssupportOfSPSOperationValues {
	true_UERadioAccessCapabilityv860extIEssupportOfSPSOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv860extIEssupportOfSPSOperation;

enum UERadioAccessCapabilityv860extIEssupportOfControlChannelDRXOperationValues {
	true_UERadioAccessCapabilityv860extIEssupportOfControlChannelDRXOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv860extIEssupportOfControlChannelDRXOperation;

enum UERadioAccessCapabilityv860extIEssupportOfCSGValues {
	true_UERadioAccessCapabilityv860extIEssupportOfCSG = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv860extIEssupportOfCSG;

class UERadioAccessCapabBandFDD3 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD3(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD3, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList3;

class UERadioAccessCapabilityv860extIEs : Sequence {
private:
	static const void *itemsInfo[12];
	static bool itemsPres[12];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860extIEs(): Sequence(&theInfo) {}
};

typedef OctetStringBase EUTRARadioAccessCapabilityUeEUTRACapability;

class EUTRARadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EUTRARadioAccessCapability(): Sequence(&theInfo) {}
};

class InterRATUERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	InterRATUERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRANValues {
	true_UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv880extIEssupportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880extIEs(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_OperationValues {
	true_UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv890extIEssupportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890extIEs(): Sequence(&theInfo) {}
};

typedef SequenceOf<BandComb, CONSTRAINED, 1, 16> UERadioAccessCapabBandCombList;

enum UERadioAccessCapabilityv920extIEssupportOfenhancedTS0Values {
	true_UERadioAccessCapabilityv920extIEssupportOfenhancedTS0 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv920extIEssupportOfenhancedTS0;

class UERadioAccessCapabilityv920extIEs : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920extIEs(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupportValues {
	true_UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv970extIEsue_ExtendedMeasurementSupport;

class UERadioAccessCapabilityv970extIEs : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv970extIEs(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensionsNonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensionsV970NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensionsV920NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensionsV890NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensionsV880NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensionsV860NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensionsV790NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensionsV770NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensionsV6e0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEsV6b0NonCriticalExtensions : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UECapabilityContainerIEsV6b0NonCriticalExtensions(): Sequence(&theInfo) {}
};

class UECapabilityContainerIEs : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UECapabilityContainerIEs(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	UEConnTimersAndConstants(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsr5 : Sequence {
private:
	static const void *itemsInfo[22];
	static bool itemsPres[22];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsr5(): Sequence(&theInfo) {}
};

class UEConnTimersAndConstantsv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEConnTimersAndConstantsv860ext(): Sequence(&theInfo) {}
};

class UEIdleTimersAndConstants : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UEIdleTimersAndConstants(): Sequence(&theInfo) {}
};

class UEHSPAIdentitiesr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UEHSPAIdentitiesr6(): Sequence(&theInfo) {}
};

class UEIdleTimersAndConstantsv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEIdleTimersAndConstantsv3a0ext(): Sequence(&theInfo) {}
};

class UEMultiModeRATCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UEMultiModeRATCapability(): Sequence(&theInfo) {}
};

enum UEPowerClassExtValues {
	class1_UEPowerClassExt = 0,
	class2_UEPowerClassExt = 1,
	class3_UEPowerClassExt = 2,
	class4_UEPowerClassExt = 3,
	spare4_UEPowerClassExt = 4,
	spare3_UEPowerClassExt = 5,
	spare2_UEPowerClassExt = 6,
	spare1_UEPowerClassExt = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEPowerClassExt;

typedef Boolean UEPositioningCapabilityStandaloneLocMethodsSupported;

typedef Boolean UEPositioningCapabilityUeBasedOTDOASupported;

typedef Boolean UEPositioningCapabilitySupportForUEGPSTimingOfCellFrames;

typedef Boolean UEPositioningCapabilitySupportForIPDL;

class UEPositioningCapability : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UEPositioningCapability(): Sequence(&theInfo) {}
};

class UERadioAccessCapability : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UERadioAccessCapability(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDDFddRFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDDFddRFCapability(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList;

class UERadioAccessCapabilityv370ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv370ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfo(): Sequence(&theInfo) {}
};

typedef Boolean UEPositioningCapabilityExtv380RxtxTimeDifferenceType2Capable;

class UEPositioningCapabilityExtv380 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv380(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv380ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv380ext(): Sequence(&theInfo) {}
};

enum UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCHValues {
	true_UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningCapabilityExtv3a0validity_CellPCH_UraPCH;

class UEPositioningCapabilityExtv3a0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3a0(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv3a0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3a0ext(): Sequence(&theInfo) {}
};

enum UEPositioningCapabilityExtv3g0sfn_sfnType2CapabilityValues {
	true_UEPositioningCapabilityExtv3g0sfn_sfnType2Capability = 0,
};
typedef Enumerated<CONSTRAINED, 0> UEPositioningCapabilityExtv3g0sfn_sfnType2Capability;

class UEPositioningCapabilityExtv3g0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UEPositioningCapabilityExtv3g0(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv3g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv3g0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDD2FddRFCapability : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD2FddRFCapability(): Sequence(&theInfo) {}
};

class UERadioAccessCapabBandFDD2 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDD2(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDD2, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDList2;

class UERadioAccessCapabBandFDDext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabBandFDDext(): Sequence(&theInfo) {}
};

typedef SequenceOf<UERadioAccessCapabBandFDDext, CONSTRAINED, 1, maxFreqBandsFDD> UERadioAccessCapabBandFDDListext;

class UERadioAccessCapabilityv650ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv650ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCHValues {
	true_UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv7e0extsupportForTwoDRXSchemesInPCH;

enum UERadioAccessCapabilityv7e0extsupportEDPDCHPowerInterpolationValues {
	true_UERadioAccessCapabilityv7e0extsupportEDPDCHPowerInterpolation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv7e0extsupportEDPDCHPowerInterpolation;

class UERadioAccessCapabilityv7e0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7e0ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannelValues {
	true_UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv7f0extsupportofTxDivOnNonMIMOChannel;

typedef Integer<CONSTRAINED, 1, 6> UERadioAccessCapabilityCompTDD128v7f0extTddedchPhysicalLayerCategory;

enum UERadioAccessCapabilityCompTDD128v7f0extsupportForCSVoiceoverHSPAValues {
	true_UERadioAccessCapabilityCompTDD128v7f0extsupportForCSVoiceoverHSPA = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompTDD128v7f0extsupportForCSVoiceoverHSPA;

class UERadioAccessCapabilityCompTDD128v7f0ext : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128v7f0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv7f0ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv7f0ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityInfov770extganssSupportIndicationValues {
	true_UERadioAccessCapabilityInfov770extganssSupportIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityInfov770extganssSupportIndication;

enum UERadioAccessCapabilityInfov770extmac_ehsSupportValues {
	true_UERadioAccessCapabilityInfov770extmac_ehsSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityInfov770extmac_ehsSupport;

class UERadioAccessCapabilityInfov770ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfov770ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityInfoTDD128v8b0ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityInfoTDD128v8b0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv860ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv860ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRANValues {
	true_UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv880extsupportForPriorityReselectionInUTRAN;

class UERadioAccessCapabilityv880ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv880ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_OperationValues {
	true_UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv890extsupportCellSpecificTxDiversityinDC_Operation;

class UERadioAccessCapabilityv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv890ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityv920extsupportOfenhancedTS0Values {
	true_UERadioAccessCapabilityv920extsupportOfenhancedTS0 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityv920extsupportOfenhancedTS0;

class UERadioAccessCapabilityv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv920ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv4b0extTddCapabilityExt : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv4b0extTddCapabilityExt(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv4b0ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv4b0ext(): Sequence(&theInfo) {}
};

typedef Boolean UERadioAccessCapabilityCompTotalAMRLCMemoryExceeds10kB;

typedef Null RFCapabilityCompFddNotSupported;

enum RFCapabBandFDDCompValues {
	notSupported_RFCapabBandFDDComp = 0,
	default_TxRx_separation_RFCapabBandFDDComp = 1,
	spare2_RFCapabBandFDDComp = 2,
	spare1_RFCapabBandFDDComp = 3,
};
typedef Enumerated<CONSTRAINED, 3> RFCapabBandFDDComp;

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD> RFCapabBandListFDDComp;

class RFCapabilityCompFdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RFCapabilityCompFdd(): Choice(&theInfo) {}
};

typedef Null RFCapabilityCompTdd384RFCapabilityNotSupported;

class RFCapabilityCompTdd384RFCapability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RFCapabilityCompTdd384RFCapability(): Choice(&theInfo) {}
};

typedef Null RFCapabilityCompTdd128RFCapabilityNotSupported;

class RFCapabilityCompTdd128RFCapability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RFCapabilityCompTdd128RFCapability(): Choice(&theInfo) {}
};

class RFCapabilityComp : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityComp(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityComp : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp(): Sequence(&theInfo) {}
};

typedef SequenceOf<RFCapabBandFDDComp, CONSTRAINED, 1, maxFreqBandsFDD_ext> RFCapabBandListFDDCompext;

class UERadioAccessCapabilityCompext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompext(): Sequence(&theInfo) {}
};

typedef Null RFCapabilityCompv770extTdd768RFCapabilityNotSupported;

class RFCapabilityCompv770extTdd768RFCapability : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RFCapabilityCompv770extTdd768RFCapability(): Choice(&theInfo) {}
};

class RFCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFCapabilityCompv770ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityCompv770extsecurityCapabilityIndicationValues {
	true_UERadioAccessCapabilityCompv770extsecurityCapabilityIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompv770extsecurityCapabilityIndication;

enum UERadioAccessCapabilityCompv770extganssSupportIndicationValues {
	true_UERadioAccessCapabilityCompv770extganssSupportIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompv770extganssSupportIndication;

enum UERadioAccessCapabilityCompv770extmac_ehsSupportValues {
	true_UERadioAccessCapabilityCompv770extmac_ehsSupport = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompv770extmac_ehsSupport;

class UERadioAccessCapabilityCompv770ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompv770ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2FddPhysicalChannelCapabhspdschedch(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityComp2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 7, 7> UERadioAccessCapabilityComp2v770extEdchPhysicalLayerCategoryextension;

enum UERadioAccessCapabilityComp2v770exthsscchlessHsdschOperationValues {
	true_UERadioAccessCapabilityComp2v770exthsscchlessHsdschOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770exthsscchlessHsdschOperation;

enum UERadioAccessCapabilityComp2v770extenhancedFdpchValues {
	true_UERadioAccessCapabilityComp2v770extenhancedFdpch = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770extenhancedFdpch;

enum UERadioAccessCapabilityComp2v770exthsdschReception_CellFachValues {
	true_UERadioAccessCapabilityComp2v770exthsdschReception_CellFach = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770exthsdschReception_CellFach;

enum UERadioAccessCapabilityComp2v770exthsdschReception_CellUraPchValues {
	true_UERadioAccessCapabilityComp2v770exthsdschReception_CellUraPch = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770exthsdschReception_CellUraPch;

enum UERadioAccessCapabilityComp2v770extdiscontinuousDpcchTransmissionValues {
	true_UERadioAccessCapabilityComp2v770extdiscontinuousDpcchTransmission = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770extdiscontinuousDpcchTransmission;

enum UERadioAccessCapabilityComp2v770extslotFormat4Values {
	true_UERadioAccessCapabilityComp2v770extslotFormat4 = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v770extslotFormat4;

class UERadioAccessCapabilityComp2v770ext : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v770ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannelValues {
	true_UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v7f0extsupportofTxDivOnNonMIMOChannel;

class UERadioAccessCapabilityComp2v7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v7f0ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityComp2v860extsupportOfMACiisValues {
	true_UERadioAccessCapabilityComp2v860extsupportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityComp2v860extsupportOfMACiis;

class UERadioAccessCapabilityComp2v860ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v860ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 8, 9> UERadioAccessCapabilityComp2v920extEdchPhysicalLayerCategoryextension2;

class UERadioAccessCapabilityComp2v920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UERadioAccessCapabilityComp2v920ext(): Sequence(&theInfo) {}
};

enum UERadioAccessCapabilityCompTDD128supportOfSFModeForHSPDSCHDualStreamValues {
	sf1_UERadioAccessCapabilityCompTDD128supportOfSFModeForHSPDSCHDualStream = 0,
	sf1sf16_UERadioAccessCapabilityCompTDD128supportOfSFModeForHSPDSCHDualStream = 1,
};
typedef Enumerated<CONSTRAINED, 1> UERadioAccessCapabilityCompTDD128supportOfSFModeForHSPDSCHDualStream;

enum UERadioAccessCapabilityCompTDD128supportOfCommonEDCHValues {
	true_UERadioAccessCapabilityCompTDD128supportOfCommonEDCH = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompTDD128supportOfCommonEDCH;

enum UERadioAccessCapabilityCompTDD128supportOfMACiisValues {
	true_UERadioAccessCapabilityCompTDD128supportOfMACiis = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompTDD128supportOfMACiis;

enum UERadioAccessCapabilityCompTDD128supportOfSPSOperationValues {
	true_UERadioAccessCapabilityCompTDD128supportOfSPSOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompTDD128supportOfSPSOperation;

enum UERadioAccessCapabilityCompTDD128supportOfControlChannelDRXOperationValues {
	true_UERadioAccessCapabilityCompTDD128supportOfControlChannelDRXOperation = 0,
};
typedef Enumerated<CONSTRAINED, 0> UERadioAccessCapabilityCompTDD128supportOfControlChannelDRXOperation;

class UERadioAccessCapabilityCompTDD128 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	UERadioAccessCapabilityCompTDD128(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv590ext : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv590ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv5c0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv5c0ext(): Sequence(&theInfo) {}
};

class UERadioAccessCapabilityv680ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UERadioAccessCapabilityv680ext(): Sequence(&theInfo) {}
};

class ULPhysChCapabilityFDDr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULPhysChCapabilityFDDr6(): Sequence(&theInfo) {}
};

typedef Null ULSecondaryCellInfoFDDContinue;

class ULSecondaryCellInfoFDDNewConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULSecondaryCellInfoFDDNewConfiguration(): Sequence(&theInfo) {}
};

class ULSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULSecondaryCellInfoFDD(): Choice(&theInfo) {}
};

class UESecurityInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation(): Sequence(&theInfo) {}
};

class UESecurityInformation2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UESecurityInformation2(): Sequence(&theInfo) {}
};

enum URAUpdateCauseValues {
	changeOfURA_URAUpdateCause = 0,
	periodicURAUpdate_URAUpdateCause = 1,
	dummy_URAUpdateCause = 2,
	spare1_URAUpdateCause = 3,
};
typedef Enumerated<CONSTRAINED, 3> URAUpdateCause;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficient;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient;

typedef Integer<CONSTRAINED, 3, 9> UTRANDRXCycleLengthCoefficientr7DrxCycleLengthCoefficient2;

class UTRANDRXCycleLengthCoefficientr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UTRANDRXCycleLengthCoefficientr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> WaitTime;

typedef Integer<CONSTRAINED, 1, 65535> RFC2507InfoFMAXPERIOD;

typedef Integer<CONSTRAINED, 1, 255> RFC2507InfoFMAXTIME;

typedef Integer<CONSTRAINED, 60, 65535> RFC2507InfoMaxHEADER;

typedef Integer<CONSTRAINED, 3, 255> RFC2507InfoTcpSPACE;

typedef Integer<CONSTRAINED, 3, 65535> RFC2507InfoNonTCPSPACE;

enum ExpectReorderingValues {
	reorderingNotExpected_ExpectReordering = 0,
	reorderingExpected_ExpectReordering = 1,
};
typedef Enumerated<CONSTRAINED, 1> ExpectReordering;

class RFC2507Info : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RFC2507Info(): Sequence(&theInfo) {}
};

class AlgorithmSpecificInfo : Choice {
private:
	static const void *choicesInfo[1];
public:
	static const Info theInfo;
	AlgorithmSpecificInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> ROHCProfiler4;

typedef SequenceOf<ROHCProfiler4, CONSTRAINED, 1, maxROHC_Profile_r4> ROHCProfileListr4;

enum CIDInclusionInfor4Values {
	pdcp_Header_CIDInclusionInfor4 = 0,
	rfc3095_PacketFormat_CIDInclusionInfor4 = 1,
};
typedef Enumerated<CONSTRAINED, 1> CIDInclusionInfor4;

typedef Integer<CONSTRAINED, 1, 16383> ULRFC3095r4MaxCID;

typedef Integer<CONSTRAINED, 2, 1500> ROHCPacketSizer4;

typedef SequenceOf<ROHCPacketSizer4, CONSTRAINED, 1, maxROHC_PacketSizes_r4> ROHCPacketSizeListr4;

class ULRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULRFC3095r4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16383> DLRFC3095r4MaxCID;

typedef Integer<CONSTRAINED, 0, 65535> DLRFC3095r4ReverseDecompressionDepth;

class DLRFC3095r4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLRFC3095r4(): Sequence(&theInfo) {}
};

class RFC3095Infor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RFC3095Infor4(): Sequence(&theInfo) {}
};

class AlgorithmSpecificInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	AlgorithmSpecificInfor4(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> LogicalChannelIdentity;

typedef Integer<CONSTRAINED, 0, 7> MACehsQueueId;

class CommonRBMappingInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonRBMappingInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4294967295> COUNTC;

typedef Integer<CONSTRAINED, 0, 33554431> COUNTCMSB;

enum ULAMRRateValues {
	t0_ULAMRRate = 0,
	t1_ULAMRRate = 1,
	t2_ULAMRRate = 2,
	t3_ULAMRRate = 3,
	t4_ULAMRRate = 4,
	t5_ULAMRRate = 5,
	t6_ULAMRRate = 6,
	t7_ULAMRRate = 7,
	t8_ULAMRRate = 8,
	spare7_ULAMRRate = 9,
	spare6_ULAMRRate = 10,
	spare5_ULAMRRate = 11,
	spare4_ULAMRRate = 12,
	spare3_ULAMRRate = 13,
	spare2_ULAMRRate = 14,
	spare1_ULAMRRate = 15,
};
typedef Enumerated<CONSTRAINED, 15> ULAMRRate;

typedef Integer<CONSTRAINED, 0, 18> MaxCSDelay;

class CSHSPAInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSHSPAInformation(): Sequence(&theInfo) {}
};

enum DefaultConfigModeValues {
	fdd_DefaultConfigMode = 0,
	tdd_DefaultConfigMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> DefaultConfigMode;

typedef Integer<CONSTRAINED, 0, 15> DefaultConfigIdForCellFACH;

class DefaultConfigForCellFACH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DefaultConfigForCellFACH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 10> DefaultConfigIdentity;

typedef Integer<CONSTRAINED, 0, 12> DefaultConfigIdentityr4;

typedef Integer<CONSTRAINED, 0, 13> DefaultConfigIdentityr5;

typedef Integer<CONSTRAINED, 0, 31> DefaultConfigIdentityr6;

typedef Integer<CONSTRAINED, 0, 62> DDI;

typedef Boolean DLAMRLCModeInSequenceDelivery;

enum ReceivingWindowSizeValues {
	rw1_ReceivingWindowSize = 0,
	rw8_ReceivingWindowSize = 1,
	rw16_ReceivingWindowSize = 2,
	rw32_ReceivingWindowSize = 3,
	rw64_ReceivingWindowSize = 4,
	rw128_ReceivingWindowSize = 5,
	rw256_ReceivingWindowSize = 6,
	rw512_ReceivingWindowSize = 7,
	rw768_ReceivingWindowSize = 8,
	rw1024_ReceivingWindowSize = 9,
	rw1536_ReceivingWindowSize = 10,
	rw2047_ReceivingWindowSize = 11,
	rw2560_ReceivingWindowSize = 12,
	rw3072_ReceivingWindowSize = 13,
	rw3584_ReceivingWindowSize = 14,
	rw4095_ReceivingWindowSize = 15,
};
typedef Enumerated<CONSTRAINED, 15> ReceivingWindowSize;

enum TimerStatusProhibitValues {
	tsp10_TimerStatusProhibit = 0,
	tsp20_TimerStatusProhibit = 1,
	tsp30_TimerStatusProhibit = 2,
	tsp40_TimerStatusProhibit = 3,
	tsp50_TimerStatusProhibit = 4,
	tsp60_TimerStatusProhibit = 5,
	tsp70_TimerStatusProhibit = 6,
	tsp80_TimerStatusProhibit = 7,
	tsp90_TimerStatusProhibit = 8,
	tsp100_TimerStatusProhibit = 9,
	tsp110_TimerStatusProhibit = 10,
	tsp120_TimerStatusProhibit = 11,
	tsp130_TimerStatusProhibit = 12,
	tsp140_TimerStatusProhibit = 13,
	tsp150_TimerStatusProhibit = 14,
	tsp160_TimerStatusProhibit = 15,
	tsp170_TimerStatusProhibit = 16,
	tsp180_TimerStatusProhibit = 17,
	tsp190_TimerStatusProhibit = 18,
	tsp200_TimerStatusProhibit = 19,
	tsp210_TimerStatusProhibit = 20,
	tsp220_TimerStatusProhibit = 21,
	tsp230_TimerStatusProhibit = 22,
	tsp240_TimerStatusProhibit = 23,
	tsp250_TimerStatusProhibit = 24,
	tsp260_TimerStatusProhibit = 25,
	tsp270_TimerStatusProhibit = 26,
	tsp280_TimerStatusProhibit = 27,
	tsp290_TimerStatusProhibit = 28,
	tsp300_TimerStatusProhibit = 29,
	tsp310_TimerStatusProhibit = 30,
	tsp320_TimerStatusProhibit = 31,
	tsp330_TimerStatusProhibit = 32,
	tsp340_TimerStatusProhibit = 33,
	tsp350_TimerStatusProhibit = 34,
	tsp360_TimerStatusProhibit = 35,
	tsp370_TimerStatusProhibit = 36,
	tsp380_TimerStatusProhibit = 37,
	tsp390_TimerStatusProhibit = 38,
	tsp400_TimerStatusProhibit = 39,
	tsp410_TimerStatusProhibit = 40,
	tsp420_TimerStatusProhibit = 41,
	tsp430_TimerStatusProhibit = 42,
	tsp440_TimerStatusProhibit = 43,
	tsp450_TimerStatusProhibit = 44,
	tsp460_TimerStatusProhibit = 45,
	tsp470_TimerStatusProhibit = 46,
	tsp480_TimerStatusProhibit = 47,
	tsp490_TimerStatusProhibit = 48,
	tsp500_TimerStatusProhibit = 49,
	tsp510_TimerStatusProhibit = 50,
	tsp520_TimerStatusProhibit = 51,
	tsp530_TimerStatusProhibit = 52,
	tsp540_TimerStatusProhibit = 53,
	tsp550_TimerStatusProhibit = 54,
	tsp600_TimerStatusProhibit = 55,
	tsp650_TimerStatusProhibit = 56,
	tsp700_TimerStatusProhibit = 57,
	tsp750_TimerStatusProhibit = 58,
	tsp800_TimerStatusProhibit = 59,
	tsp850_TimerStatusProhibit = 60,
	tsp900_TimerStatusProhibit = 61,
	tsp950_TimerStatusProhibit = 62,
	tsp1000_TimerStatusProhibit = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerStatusProhibit;

enum TimerEPCValues {
	te50_TimerEPC = 0,
	te60_TimerEPC = 1,
	te70_TimerEPC = 2,
	te80_TimerEPC = 3,
	te90_TimerEPC = 4,
	te100_TimerEPC = 5,
	te120_TimerEPC = 6,
	te140_TimerEPC = 7,
	te160_TimerEPC = 8,
	te180_TimerEPC = 9,
	te200_TimerEPC = 10,
	te300_TimerEPC = 11,
	te400_TimerEPC = 12,
	te500_TimerEPC = 13,
	te700_TimerEPC = 14,
	te900_TimerEPC = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerEPC;

typedef Boolean DLRLCStatusInfoMissingPDUIndicator;

enum TimerStatusPeriodicValues {
	tsp100_TimerStatusPeriodic = 0,
	tsp200_TimerStatusPeriodic = 1,
	tsp300_TimerStatusPeriodic = 2,
	tsp400_TimerStatusPeriodic = 3,
	tsp500_TimerStatusPeriodic = 4,
	tsp750_TimerStatusPeriodic = 5,
	tsp1000_TimerStatusPeriodic = 6,
	tsp2000_TimerStatusPeriodic = 7,
};
typedef Enumerated<CONSTRAINED, 7> TimerStatusPeriodic;

class DLRLCStatusInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLRLCStatusInfo(): Sequence(&theInfo) {}
};

class DLAMRLCMode : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAMRLCMode(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> OctetModeRLCSizeInfoType1SizeType1;

typedef Integer<CONSTRAINED, 0, 23> OctetModeRLCSizeInfoType1SizeType2Part1;

typedef Integer<CONSTRAINED, 1, 3> OctetModeRLCSizeInfoType1SizeType2Part2;

class OctetModeRLCSizeInfoType1SizeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType1SizeType2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 61> OctetModeRLCSizeInfoType1SizeType3Part1;

typedef Integer<CONSTRAINED, 1, 7> OctetModeRLCSizeInfoType1SizeType3Part2;

class OctetModeRLCSizeInfoType1SizeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType1SizeType3(): Sequence(&theInfo) {}
};

class OctetModeRLCSizeInfoType1 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType1(): Choice(&theInfo) {}
};

typedef Boolean DLAMRLCModer5InSequenceDelivery;

class DLAMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAMRLCModer5(): Sequence(&theInfo) {}
};

enum DLAMRLCModer7DlRLCPDUsizeflexibleSizeValues {
	size7_DLAMRLCModer7DlRLCPDUsizeflexibleSize = 0,
	size15_DLAMRLCModer7DlRLCPDUsizeflexibleSize = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLAMRLCModer7DlRLCPDUsizeflexibleSize;

class DLAMRLCModer7DlRLCPDUsize : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLAMRLCModer7DlRLCPDUsize(): Choice(&theInfo) {}
};

typedef Boolean DLAMRLCModer7InSequenceDelivery;

class DLAMRLCModer7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAMRLCModer7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 65535> PDCPSNInfo;

class RBWithPDCPInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBWithPDCPInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBWithPDCPInfo, CONSTRAINED, 1, maxRBallRABs> RBWithPDCPInfoList;

class DLCounterSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Boolean RBPDCPContextRelocationDlRFC3095ContextRelocation;

typedef Boolean RBPDCPContextRelocationUlRFC3095ContextRelocation;

class RBPDCPContextRelocation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBPDCPContextRelocation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBPDCPContextRelocation, CONSTRAINED, 1, maxRBallRABs> RBPDCPContextRelocationList;

class DLCounterSynchronisationInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCounterSynchronisationInfor5(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> TransportChannelIdentity;

typedef Null DLTransportChannelTypeFach;

class TransportChannelIdentityDCHandDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TransportChannelIdentityDCHandDSCH(): Sequence(&theInfo) {}
};

class DLTransportChannelType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	DLTransportChannelType(): Choice(&theInfo) {}
};

class DLLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMapping(): Sequence(&theInfo) {}
};

typedef Null DLTransportChannelTyper5Fach;

typedef Integer<CONSTRAINED, 0, 7> MACdFlowIdentity;

class MACdFlowIdentityDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACdFlowIdentityDCHandHSDSCH(): Sequence(&theInfo) {}
};

class DLTransportChannelTyper5 : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	DLTransportChannelTyper5(): Choice(&theInfo) {}
};

class DLLogicalChannelMappingr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr5(): Sequence(&theInfo) {}
};

typedef Null DLTransportChannelTyper7Fach;

class DLTransportChannelTyper7Hsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLTransportChannelTyper7Hsdsch(): Choice(&theInfo) {}
};

class MACehsQueueIdDCHandHSDSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACehsQueueIdDCHandHSDSCH(): Sequence(&theInfo) {}
};

class DLTransportChannelTyper7Dchandhsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLTransportChannelTyper7Dchandhsdsch(): Choice(&theInfo) {}
};

class DLTransportChannelTyper7 : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	DLTransportChannelTyper7(): Choice(&theInfo) {}
};

class DLLogicalChannelMappingr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLLogicalChannelMappingr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLLogicalChannelMapping, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingList;

typedef SequenceOf<DLLogicalChannelMappingr5, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr5;

typedef SequenceOf<DLLogicalChannelMappingr7, CONSTRAINED, 1, maxLoCHperRLC> DLLogicalChannelMappingListr7;

enum DLReceptionWindowSizer6Values {
	size32_DLReceptionWindowSizer6 = 0,
	size48_DLReceptionWindowSizer6 = 1,
	size64_DLReceptionWindowSizer6 = 2,
	size80_DLReceptionWindowSizer6 = 3,
	size96_DLReceptionWindowSizer6 = 4,
	size112_DLReceptionWindowSizer6 = 5,
};
typedef Enumerated<CONSTRAINED, 5> DLReceptionWindowSizer6;

typedef Null DLRLCModeDlUMRLCMode;

typedef Boolean DLTMRLCModeSegmentationIndication;

class DLTMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTMRLCMode(): Sequence(&theInfo) {}
};

class DLRLCMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCMode(): Choice(&theInfo) {}
};

enum DLUMRLCLIsizeValues {
	size7_DLUMRLCLIsize = 0,
	size15_DLUMRLCLIsize = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLUMRLCLIsize;

class DLUMRLCModer5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLUMRLCModer5(): Sequence(&theInfo) {}
};

class DLRLCModer5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer5(): Choice(&theInfo) {}
};

class DLUMRLCModer6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLUMRLCModer6(): Sequence(&theInfo) {}
};

class DLRLCModer6 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer6(): Choice(&theInfo) {}
};

class DLRLCModer7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLRLCModer7(): Choice(&theInfo) {}
};

enum TimerMRWValues {
	te50_TimerMRW = 0,
	te60_TimerMRW = 1,
	te70_TimerMRW = 2,
	te80_TimerMRW = 3,
	te90_TimerMRW = 4,
	te100_TimerMRW = 5,
	te120_TimerMRW = 6,
	te140_TimerMRW = 7,
	te160_TimerMRW = 8,
	te180_TimerMRW = 9,
	te200_TimerMRW = 10,
	te300_TimerMRW = 11,
	te400_TimerMRW = 12,
	te500_TimerMRW = 13,
	te700_TimerMRW = 14,
	te900_TimerMRW = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerMRW;

enum TimerDiscardValues {
	td0_1_TimerDiscard = 0,
	td0_25_TimerDiscard = 1,
	td0_5_TimerDiscard = 2,
	td0_75_TimerDiscard = 3,
	td1_TimerDiscard = 4,
	td1_25_TimerDiscard = 5,
	td1_5_TimerDiscard = 6,
	td1_75_TimerDiscard = 7,
	td2_TimerDiscard = 8,
	td2_5_TimerDiscard = 9,
	td3_TimerDiscard = 10,
	td3_5_TimerDiscard = 11,
	td4_TimerDiscard = 12,
	td4_5_TimerDiscard = 13,
	td5_TimerDiscard = 14,
	td7_5_TimerDiscard = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerDiscard;

enum MaxMRWValues {
	mm1_MaxMRW = 0,
	mm4_MaxMRW = 1,
	mm6_MaxMRW = 2,
	mm8_MaxMRW = 3,
	mm12_MaxMRW = 4,
	mm16_MaxMRW = 5,
	mm24_MaxMRW = 6,
	mm32_MaxMRW = 7,
};
typedef Enumerated<CONSTRAINED, 7> MaxMRW;

class ExplicitDiscard : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ExplicitDiscard(): Sequence(&theInfo) {}
};

class HeaderCompressionInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<HeaderCompressionInfo, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoList;

class HeaderCompressionInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HeaderCompressionInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<HeaderCompressionInfor4, CONSTRAINED, 1, maxPDCPAlgoType> HeaderCompressionInfoListr4;

enum MaxPDCPSNWindowSizeValues {
	sn255_MaxPDCPSNWindowSize = 0,
	sn65535_MaxPDCPSNWindowSize = 1,
};
typedef Enumerated<CONSTRAINED, 1> MaxPDCPSNWindowSize;

typedef Null LosslessSRNSRelocSupportNotSupported;

class LosslessSRNSRelocSupport : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	LosslessSRNSRelocSupport(): Choice(&theInfo) {}
};

typedef BitString<CONSTRAINED, 24, 24> MACdHFNinitialvalue;

typedef Integer<CONSTRAINED, 1, 8> MACLogicalChannelPriority;

enum MaxDATValues {
	dat1_MaxDAT = 0,
	dat2_MaxDAT = 1,
	dat3_MaxDAT = 2,
	dat4_MaxDAT = 3,
	dat5_MaxDAT = 4,
	dat6_MaxDAT = 5,
	dat7_MaxDAT = 6,
	dat8_MaxDAT = 7,
	dat9_MaxDAT = 8,
	dat10_MaxDAT = 9,
	dat15_MaxDAT = 10,
	dat20_MaxDAT = 11,
	dat25_MaxDAT = 12,
	dat30_MaxDAT = 13,
	dat35_MaxDAT = 14,
	dat40_MaxDAT = 15,
};
typedef Enumerated<CONSTRAINED, 15> MaxDAT;

class MaxDATRetransmissions : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MaxDATRetransmissions(): Sequence(&theInfo) {}
};

enum MaxRSTValues {
	rst1_MaxRST = 0,
	rst4_MaxRST = 1,
	rst6_MaxRST = 2,
	rst8_MaxRST = 3,
	rst12_MaxRST = 4,
	rst16_MaxRST = 5,
	rst24_MaxRST = 6,
	rst32_MaxRST = 7,
};
typedef Enumerated<CONSTRAINED, 7> MaxRST;

enum NoExplicitDiscardValues {
	dt10_NoExplicitDiscard = 0,
	dt20_NoExplicitDiscard = 1,
	dt30_NoExplicitDiscard = 2,
	dt40_NoExplicitDiscard = 3,
	dt50_NoExplicitDiscard = 4,
	dt60_NoExplicitDiscard = 5,
	dt70_NoExplicitDiscard = 6,
	dt80_NoExplicitDiscard = 7,
	dt90_NoExplicitDiscard = 8,
	dt100_NoExplicitDiscard = 9,
};
typedef Enumerated<CONSTRAINED, 9> NoExplicitDiscard;

enum PDCPPDUHeaderValues {
	present_PDCPPDUHeader = 0,
	absent_PDCPPDUHeader = 1,
};
typedef Enumerated<CONSTRAINED, 1> PDCPPDUHeader;

class PDCPInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDCPInfo(): Sequence(&theInfo) {}
};

class PDCPInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDCPInfor4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 65535> PDCPInfoReconfigDummy;

class PDCPInfoReconfig : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDCPInfoReconfig(): Sequence(&theInfo) {}
};

class PDCPInfoReconfigr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDCPInfoReconfigr4(): Sequence(&theInfo) {}
};

enum PDCPROHCTargetModeValues {
	o_Mode_PDCPROHCTargetMode = 0,
	r_Mode_PDCPROHCTargetMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> PDCPROHCTargetMode;

enum PollPDUValues {
	pdu1_PollPDU = 0,
	pdu2_PollPDU = 1,
	pdu4_PollPDU = 2,
	pdu8_PollPDU = 3,
	pdu16_PollPDU = 4,
	pdu32_PollPDU = 5,
	pdu64_PollPDU = 6,
	pdu128_PollPDU = 7,
};
typedef Enumerated<CONSTRAINED, 7> PollPDU;

enum PollSDUValues {
	sdu1_PollSDU = 0,
	sdu4_PollSDU = 1,
	sdu16_PollSDU = 2,
	sdu64_PollSDU = 3,
};
typedef Enumerated<CONSTRAINED, 3> PollSDU;

enum TimerPollProhibitValues {
	tpp10_TimerPollProhibit = 0,
	tpp20_TimerPollProhibit = 1,
	tpp30_TimerPollProhibit = 2,
	tpp40_TimerPollProhibit = 3,
	tpp50_TimerPollProhibit = 4,
	tpp60_TimerPollProhibit = 5,
	tpp70_TimerPollProhibit = 6,
	tpp80_TimerPollProhibit = 7,
	tpp90_TimerPollProhibit = 8,
	tpp100_TimerPollProhibit = 9,
	tpp110_TimerPollProhibit = 10,
	tpp120_TimerPollProhibit = 11,
	tpp130_TimerPollProhibit = 12,
	tpp140_TimerPollProhibit = 13,
	tpp150_TimerPollProhibit = 14,
	tpp160_TimerPollProhibit = 15,
	tpp170_TimerPollProhibit = 16,
	tpp180_TimerPollProhibit = 17,
	tpp190_TimerPollProhibit = 18,
	tpp200_TimerPollProhibit = 19,
	tpp210_TimerPollProhibit = 20,
	tpp220_TimerPollProhibit = 21,
	tpp230_TimerPollProhibit = 22,
	tpp240_TimerPollProhibit = 23,
	tpp250_TimerPollProhibit = 24,
	tpp260_TimerPollProhibit = 25,
	tpp270_TimerPollProhibit = 26,
	tpp280_TimerPollProhibit = 27,
	tpp290_TimerPollProhibit = 28,
	tpp300_TimerPollProhibit = 29,
	tpp310_TimerPollProhibit = 30,
	tpp320_TimerPollProhibit = 31,
	tpp330_TimerPollProhibit = 32,
	tpp340_TimerPollProhibit = 33,
	tpp350_TimerPollProhibit = 34,
	tpp360_TimerPollProhibit = 35,
	tpp370_TimerPollProhibit = 36,
	tpp380_TimerPollProhibit = 37,
	tpp390_TimerPollProhibit = 38,
	tpp400_TimerPollProhibit = 39,
	tpp410_TimerPollProhibit = 40,
	tpp420_TimerPollProhibit = 41,
	tpp430_TimerPollProhibit = 42,
	tpp440_TimerPollProhibit = 43,
	tpp450_TimerPollProhibit = 44,
	tpp460_TimerPollProhibit = 45,
	tpp470_TimerPollProhibit = 46,
	tpp480_TimerPollProhibit = 47,
	tpp490_TimerPollProhibit = 48,
	tpp500_TimerPollProhibit = 49,
	tpp510_TimerPollProhibit = 50,
	tpp520_TimerPollProhibit = 51,
	tpp530_TimerPollProhibit = 52,
	tpp540_TimerPollProhibit = 53,
	tpp550_TimerPollProhibit = 54,
	tpp600_TimerPollProhibit = 55,
	tpp650_TimerPollProhibit = 56,
	tpp700_TimerPollProhibit = 57,
	tpp750_TimerPollProhibit = 58,
	tpp800_TimerPollProhibit = 59,
	tpp850_TimerPollProhibit = 60,
	tpp900_TimerPollProhibit = 61,
	tpp950_TimerPollProhibit = 62,
	tpp1000_TimerPollProhibit = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerPollProhibit;

enum TimerPollValues {
	tp10_TimerPoll = 0,
	tp20_TimerPoll = 1,
	tp30_TimerPoll = 2,
	tp40_TimerPoll = 3,
	tp50_TimerPoll = 4,
	tp60_TimerPoll = 5,
	tp70_TimerPoll = 6,
	tp80_TimerPoll = 7,
	tp90_TimerPoll = 8,
	tp100_TimerPoll = 9,
	tp110_TimerPoll = 10,
	tp120_TimerPoll = 11,
	tp130_TimerPoll = 12,
	tp140_TimerPoll = 13,
	tp150_TimerPoll = 14,
	tp160_TimerPoll = 15,
	tp170_TimerPoll = 16,
	tp180_TimerPoll = 17,
	tp190_TimerPoll = 18,
	tp200_TimerPoll = 19,
	tp210_TimerPoll = 20,
	tp220_TimerPoll = 21,
	tp230_TimerPoll = 22,
	tp240_TimerPoll = 23,
	tp250_TimerPoll = 24,
	tp260_TimerPoll = 25,
	tp270_TimerPoll = 26,
	tp280_TimerPoll = 27,
	tp290_TimerPoll = 28,
	tp300_TimerPoll = 29,
	tp310_TimerPoll = 30,
	tp320_TimerPoll = 31,
	tp330_TimerPoll = 32,
	tp340_TimerPoll = 33,
	tp350_TimerPoll = 34,
	tp360_TimerPoll = 35,
	tp370_TimerPoll = 36,
	tp380_TimerPoll = 37,
	tp390_TimerPoll = 38,
	tp400_TimerPoll = 39,
	tp410_TimerPoll = 40,
	tp420_TimerPoll = 41,
	tp430_TimerPoll = 42,
	tp440_TimerPoll = 43,
	tp450_TimerPoll = 44,
	tp460_TimerPoll = 45,
	tp470_TimerPoll = 46,
	tp480_TimerPoll = 47,
	tp490_TimerPoll = 48,
	tp500_TimerPoll = 49,
	tp510_TimerPoll = 50,
	tp520_TimerPoll = 51,
	tp530_TimerPoll = 52,
	tp540_TimerPoll = 53,
	tp550_TimerPoll = 54,
	tp600_TimerPoll = 55,
	tp650_TimerPoll = 56,
	tp700_TimerPoll = 57,
	tp750_TimerPoll = 58,
	tp800_TimerPoll = 59,
	tp850_TimerPoll = 60,
	tp900_TimerPoll = 61,
	tp950_TimerPoll = 62,
	tp1000_TimerPoll = 63,
};
typedef Enumerated<CONSTRAINED, 63> TimerPoll;

typedef Boolean PollingInfoLastTransmissionPDUPoll;

typedef Boolean PollingInfoLastRetransmissionPDUPoll;

enum PollWindowValues {
	pw50_PollWindow = 0,
	pw60_PollWindow = 1,
	pw70_PollWindow = 2,
	pw80_PollWindow = 3,
	pw85_PollWindow = 4,
	pw90_PollWindow = 5,
	pw95_PollWindow = 6,
	pw99_PollWindow = 7,
};
typedef Enumerated<CONSTRAINED, 7> PollWindow;

enum TimerPollPeriodicValues {
	tper100_TimerPollPeriodic = 0,
	tper200_TimerPollPeriodic = 1,
	tper300_TimerPollPeriodic = 2,
	tper400_TimerPollPeriodic = 3,
	tper500_TimerPollPeriodic = 4,
	tper750_TimerPollPeriodic = 5,
	tper1000_TimerPollPeriodic = 6,
	tper2000_TimerPollPeriodic = 7,
};
typedef Enumerated<CONSTRAINED, 7> TimerPollPeriodic;

class PollingInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	PollingInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigIdentity;

typedef Integer<CONSTRAINED, 0, 15> PredefinedConfigValueTag;

class TransmissionRLCDiscard : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	TransmissionRLCDiscard(): Choice(&theInfo) {}
};

enum TransmissionWindowSizeValues {
	tw1_TransmissionWindowSize = 0,
	tw8_TransmissionWindowSize = 1,
	tw16_TransmissionWindowSize = 2,
	tw32_TransmissionWindowSize = 3,
	tw64_TransmissionWindowSize = 4,
	tw128_TransmissionWindowSize = 5,
	tw256_TransmissionWindowSize = 6,
	tw512_TransmissionWindowSize = 7,
	tw768_TransmissionWindowSize = 8,
	tw1024_TransmissionWindowSize = 9,
	tw1536_TransmissionWindowSize = 10,
	tw2047_TransmissionWindowSize = 11,
	tw2560_TransmissionWindowSize = 12,
	tw3072_TransmissionWindowSize = 13,
	tw3584_TransmissionWindowSize = 14,
	tw4095_TransmissionWindowSize = 15,
};
typedef Enumerated<CONSTRAINED, 15> TransmissionWindowSize;

enum TimerRSTValues {
	tr50_TimerRST = 0,
	tr100_TimerRST = 1,
	tr150_TimerRST = 2,
	tr200_TimerRST = 3,
	tr250_TimerRST = 4,
	tr300_TimerRST = 5,
	tr350_TimerRST = 6,
	tr400_TimerRST = 7,
	tr450_TimerRST = 8,
	tr500_TimerRST = 9,
	tr550_TimerRST = 10,
	tr600_TimerRST = 11,
	tr700_TimerRST = 12,
	tr800_TimerRST = 13,
	tr900_TimerRST = 14,
	tr1000_TimerRST = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimerRST;

class ULAMRLCMode : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULAMRLCMode(): Sequence(&theInfo) {}
};

class ULUMRLCMode : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULUMRLCMode(): Sequence(&theInfo) {}
};

typedef Boolean ULTMRLCModeSegmentationIndication;

class ULTMRLCMode : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTMRLCMode(): Sequence(&theInfo) {}
};

typedef Null ULRLCModeSpare;

class ULRLCMode : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULRLCMode(): Choice(&theInfo) {}
};

class RLCInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfo(): Sequence(&theInfo) {}
};

class RLCInfoChoice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoice(): Choice(&theInfo) {}
};

typedef Null ULTransportChannelTypeRach;

typedef Null ULTransportChannelTypeDummy;

class ULTransportChannelType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ULTransportChannelType(): Choice(&theInfo) {}
};

typedef Null ULLogicalChannelMappingRlcSizeListAllSizes;

typedef Null ULLogicalChannelMappingRlcSizeListConfigured;

typedef Integer<CONSTRAINED, 1, maxTF> RLCSizeInfoRlcSizeIndex;

class RLCSizeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCSizeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLCSizeInfo, CONSTRAINED, 1, maxTF> RLCSizeExplicitList;

class ULLogicalChannelMappingRlcSizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULLogicalChannelMappingRlcSizeList(): Choice(&theInfo) {}
};

class ULLogicalChannelMapping : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULLogicalChannelMapping(): Sequence(&theInfo) {}
};

typedef Boolean ULLogicalChannelMappingListRlcLogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMapping, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> ULLogicalChannelMappingListUlLogicalChannelMapping;

class ULLogicalChannelMappingList : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingList(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappings : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappings(): Choice(&theInfo) {}
};

class RBMappingOption : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOption(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOption, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfo;

class SRBInformationSetup : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetup(): Sequence(&theInfo) {}
};

typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupList;

class RBInformationSetup : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetup(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetup, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupList;

class PredefinedRBConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PredefinedRBConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> TFCValue;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> AllowedTFCList;

typedef SequenceOf<TFCValue, CONSTRAINED, 1, maxTFC> NonallowedTFCList;

enum ULTrCHTypeValues {
	dch_ULTrCHType = 0,
	usch_ULTrCHType = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULTrCHType;

typedef Integer<CONSTRAINED, 0, 31> AllowedTFIListItem;

typedef SequenceOf<AllowedTFIListItem, CONSTRAINED, 1, maxTF> AllowedTFIList;

class RestrictedTrChInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RestrictedTrChInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<RestrictedTrChInfo, CONSTRAINED, 1, maxTrCH> RestrictedTrChInfoList;

typedef Null TFCSubsetFullTFCS;

class TFCSubset : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	TFCSubset(): Choice(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc2Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc2Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc4Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc4Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc6Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc6Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc8Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc8Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc12Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc12Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc16Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc16Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSizeCtfc24Bit : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSizeCtfc24Bit(): Sequence(&theInfo) {}
};

class TFCSReconfAddCtfcSize : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	TFCSReconfAddCtfcSize(): Choice(&theInfo) {}
};

class TFCSReconfAdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSReconfAdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1023> TFCSRemovalTfci;

class TFCSRemoval : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TFCSRemoval(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCSRemoval, CONSTRAINED, 1, maxTFC> TFCSRemovalList;

class ExplicitTFCSConfigurationReplacement : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ExplicitTFCSConfigurationReplacement(): Sequence(&theInfo) {}
};

class ExplicitTFCSConfiguration : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	ExplicitTFCSConfiguration(): Choice(&theInfo) {}
};

enum SplitTypeValues {
	hardSplit_SplitType = 0,
	logicalSplit_SplitType = 1,
};
typedef Enumerated<CONSTRAINED, 1> SplitType;

typedef Integer<CONSTRAINED, 1, 10> SplitTFCISignallingTfciField2Length;

typedef Integer<CONSTRAINED, 1, 1023> TFCIRangeMaxTFCIField2Value;

typedef Integer<CONSTRAINED, 0, 3> TFCSInfoForDSCHCtfc2bit;

typedef Integer<CONSTRAINED, 0, 15> TFCSInfoForDSCHCtfc4bit;

typedef Integer<CONSTRAINED, 0, 63> TFCSInfoForDSCHCtfc6bit;

typedef Integer<CONSTRAINED, 0, 255> TFCSInfoForDSCHCtfc8bit;

typedef Integer<CONSTRAINED, 0, 4095> TFCSInfoForDSCHCtfc12bit;

typedef Integer<CONSTRAINED, 0, 65535> TFCSInfoForDSCHCtfc16bit;

typedef Integer<CONSTRAINED, 0, 16777215> TFCSInfoForDSCHCtfc24bit;

class TFCSInfoForDSCH : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	TFCSInfoForDSCH(): Choice(&theInfo) {}
};

class TFCIRange : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TFCIRange(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCIRange, CONSTRAINED, 1, maxPDSCH_TFCIgroups> TFCIRangeList;

class TFCIField2Information : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TFCIField2Information(): Choice(&theInfo) {}
};

class SplitTFCISignalling : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SplitTFCISignalling(): Sequence(&theInfo) {}
};

class TFCS : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TFCS(): Choice(&theInfo) {}
};

class ULCommonTransChInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> TFCSIdentityPlain;

typedef Boolean TFCSIdentitySharedChannelIndicator;

class TFCSIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TFCSIdentity(): Sequence(&theInfo) {}
};

class IndividualULCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualULCCTrCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualULCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualULCCTrCHInfoList;

class ULCommonTransChInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULCommonTransChInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULCommonTransChInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class ULCommonTransChInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULCommonTransChInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> BitModeRLCSizeInfoSizeType1;

typedef Integer<CONSTRAINED, 0, 15> BitModeRLCSizeInfoSizeType2Part1;

typedef Integer<CONSTRAINED, 1, 7> BitModeRLCSizeInfoSizeType2Part2;

class BitModeRLCSizeInfoSizeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BitModeRLCSizeInfoSizeType2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 47> BitModeRLCSizeInfoSizeType3Part1;

typedef Integer<CONSTRAINED, 1, 15> BitModeRLCSizeInfoSizeType3Part2;

class BitModeRLCSizeInfoSizeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BitModeRLCSizeInfoSizeType3(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> BitModeRLCSizeInfoSizeType4Part1;

typedef Integer<CONSTRAINED, 1, 63> BitModeRLCSizeInfoSizeType4Part2;

class BitModeRLCSizeInfoSizeType4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BitModeRLCSizeInfoSizeType4(): Sequence(&theInfo) {}
};

class BitModeRLCSizeInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	BitModeRLCSizeInfo(): Choice(&theInfo) {}
};

class DedicatedDynamicTFInfoRlcSize : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoRlcSize(): Choice(&theInfo) {}
};

typedef Null NumberOfTransportBlocksZero;

typedef Null NumberOfTransportBlocksOne;

typedef Integer<CONSTRAINED, 2, 17> NumberOfTransportBlocksSmall;

typedef Integer<CONSTRAINED, 18, 512> NumberOfTransportBlocksLarge;

class NumberOfTransportBlocks : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	NumberOfTransportBlocks(): Choice(&theInfo) {}
};

typedef SequenceOf<NumberOfTransportBlocks, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoNumberOfTbSizeList;

typedef Null LogicalChannelListAllSizes;

typedef Null LogicalChannelListConfigured;

typedef Integer<CONSTRAINED, 0, 1> LogicalChannelByRBLogChOfRb;

class LogicalChannelByRB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	LogicalChannelByRB(): Sequence(&theInfo) {}
};

typedef SequenceOf<LogicalChannelByRB, CONSTRAINED, 1, 15> LogicalChannelListExplicitList;

class LogicalChannelList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	LogicalChannelList(): Choice(&theInfo) {}
};

class DedicatedDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<DedicatedDynamicTFInfo, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoList;

class DedicatedDynamicTFInfoDynamicTTIRlcSize : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoDynamicTTIRlcSize(): Choice(&theInfo) {}
};

class NumberOfTbSizeAndTTIList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	NumberOfTbSizeAndTTIList(): Sequence(&theInfo) {}
};

class DedicatedDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DedicatedDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}
};

typedef SequenceOf<DedicatedDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> DedicatedDynamicTFInfoListDynamicTTI;

class DedicatedTransChTFSTti : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	DedicatedTransChTFSTti(): Choice(&theInfo) {}
};

typedef Null ChannelCodingTypeNoCoding;

enum CodingRateValues {
	half_CodingRate = 0,
	third_CodingRate = 1,
};
typedef Enumerated<CONSTRAINED, 1> CodingRate;

typedef Null ChannelCodingTypeTurbo;

class ChannelCodingType : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ChannelCodingType(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, hiRM> RateMatchingAttribute;

enum CRCSizeValues {
	crc0_CRCSize = 0,
	crc8_CRCSize = 1,
	crc12_CRCSize = 2,
	crc16_CRCSize = 3,
	crc24_CRCSize = 4,
};
typedef Enumerated<CONSTRAINED, 4> CRCSize;

class SemistaticTFInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SemistaticTFInformation(): Sequence(&theInfo) {}
};

class DedicatedTransChTFS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DedicatedTransChTFS(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 31> OctetModeRLCSizeInfoType2SizeType1;

typedef Integer<CONSTRAINED, 0, 63> OctetModeRLCSizeInfoType2SizeType2;

typedef Integer<CONSTRAINED, 0, 56> OctetModeRLCSizeInfoType2SizeType3;

class OctetModeRLCSizeInfoType2 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	OctetModeRLCSizeInfoType2(): Choice(&theInfo) {}
};

class CommonDynamicTFInfoRlcSizeFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfoRlcSizeFdd(): Sequence(&theInfo) {}
};

class CommonDynamicTFInfoRlcSizeTddCommonTDDChoice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonDynamicTFInfoRlcSizeTddCommonTDDChoice(): Choice(&theInfo) {}
};

class CommonDynamicTFInfoRlcSizeTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CommonDynamicTFInfoRlcSizeTdd(): Sequence(&theInfo) {}
};

class CommonDynamicTFInfoRlcSize : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonDynamicTFInfoRlcSize(): Choice(&theInfo) {}
};

typedef SequenceOf<NumberOfTransportBlocks, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoNumberOfTbSizeList;

class CommonDynamicTFInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonDynamicTFInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonDynamicTFInfo, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoList;

class CommonDynamicTFInfoDynamicTTICommonTDDChoice : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonDynamicTFInfoDynamicTTICommonTDDChoice(): Choice(&theInfo) {}
};

class CommonDynamicTFInfoDynamicTTI : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonDynamicTFInfoDynamicTTI(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonDynamicTFInfoDynamicTTI, CONSTRAINED, 1, maxTF> CommonDynamicTFInfoListDynamicTTI;

class CommonTransChTFSTti : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	CommonTransChTFSTti(): Choice(&theInfo) {}
};

class CommonTransChTFS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonTransChTFS(): Sequence(&theInfo) {}
};

class TransportFormatSet : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportFormatSet(): Choice(&theInfo) {}
};

class ULAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> ULAddReconfTransChInfoList;

typedef Null DLCommonTransChInfoModeSpecificInfoFddDlParametersSameAsUL;

class DLCommonTransChInfoModeSpecificInfoFddDlParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonTransChInfoModeSpecificInfoFddDlParameters(): Choice(&theInfo) {}
};

class DLCommonTransChInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class IndividualDLCCTrCHInfoTfcsSignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	IndividualDLCCTrCHInfoTfcsSignallingMode(): Choice(&theInfo) {}
};

class IndividualDLCCTrCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividualDLCCTrCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualDLCCTrCHInfo, CONSTRAINED, 1, maxCCTrCH> IndividualDLCCTrCHInfoList;

class DLCommonTransChInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonTransChInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonTransChInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class DLCommonTransChInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonTransChInfo(): Sequence(&theInfo) {}
};

enum DLTrCHTypeValues {
	dch_DLTrCHType = 0,
	dsch_DLTrCHType = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLTrCHType;

class ULTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTransportChannelIdentity(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformationTfsSignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationTfsSignallingMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -63, 0> BLERQualityValue;

class QualityTarget : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	QualityTarget(): Sequence(&theInfo) {}
};

enum MessTypeValues {
	transportFormatCombinationControl_MessType = 0,
};
typedef Enumerated<CONSTRAINED, 0> MessType;

typedef Null TMSignallingInfoTmSignallingModeMode1;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULControlledTrChList;

class TMSignallingInfoTmSignallingModeMode2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TMSignallingInfoTmSignallingModeMode2(): Sequence(&theInfo) {}
};

class TMSignallingInfoTmSignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TMSignallingInfoTmSignallingMode(): Choice(&theInfo) {}
};

class TMSignallingInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TMSignallingInfo(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformation : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformation, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoList;

class PreDefTransChConfiguration : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PreDefTransChConfiguration(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPredefFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPredefFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -35, 10> ConstantValueTdd;

class ULDPCHPowerControlInfoPredefTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPredefTdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPredef : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPredef(): Choice(&theInfo) {}
};

typedef Boolean ULDPCHInfoPredefModeSpecificInfoFddTfciExistence;

enum PuncturingLimitValues {
	pl0_40_PuncturingLimit = 0,
	pl0_44_PuncturingLimit = 1,
	pl0_48_PuncturingLimit = 2,
	pl0_52_PuncturingLimit = 3,
	pl0_56_PuncturingLimit = 4,
	pl0_60_PuncturingLimit = 5,
	pl0_64_PuncturingLimit = 6,
	pl0_68_PuncturingLimit = 7,
	pl0_72_PuncturingLimit = 8,
	pl0_76_PuncturingLimit = 9,
	pl0_80_PuncturingLimit = 10,
	pl0_84_PuncturingLimit = 11,
	pl0_88_PuncturingLimit = 12,
	pl0_92_PuncturingLimit = 13,
	pl0_96_PuncturingLimit = 14,
	pl1_PuncturingLimit = 15,
};
typedef Enumerated<CONSTRAINED, 15> PuncturingLimit;

class ULDPCHInfoPredefModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfoPredefModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum SecondInterleavingModeValues {
	frameRelated_SecondInterleavingMode = 0,
	timeslotRelated_SecondInterleavingMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondInterleavingMode;

enum TFCICodingValues {
	tfci_bits_4_TFCICoding = 0,
	tfci_bits_8_TFCICoding = 1,
	tfci_bits_16_TFCICoding = 2,
	tfci_bits_32_TFCICoding = 3,
};
typedef Enumerated<CONSTRAINED, 3> TFCICoding;

typedef Null RepetitionPeriodAndLengthRepetitionPeriod1;

typedef Integer<CONSTRAINED, 1, 1> RepetitionPeriodAndLengthRepetitionPeriod2;

typedef Integer<CONSTRAINED, 1, 3> RepetitionPeriodAndLengthRepetitionPeriod4;

typedef Integer<CONSTRAINED, 1, 7> RepetitionPeriodAndLengthRepetitionPeriod8;

typedef Integer<CONSTRAINED, 1, 15> RepetitionPeriodAndLengthRepetitionPeriod16;

typedef Integer<CONSTRAINED, 1, 31> RepetitionPeriodAndLengthRepetitionPeriod32;

typedef Integer<CONSTRAINED, 1, 63> RepetitionPeriodAndLengthRepetitionPeriod64;

class RepetitionPeriodAndLength : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	RepetitionPeriodAndLength(): Choice(&theInfo) {}
};

class CommonTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonTimeslotInfo(): Sequence(&theInfo) {}
};

class ULDPCHInfoPredefModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfoPredefModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfoPredefModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfoPredef : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfoPredef(): Sequence(&theInfo) {}
};

typedef Null SF512AndPilotSfd4;

typedef Null SF512AndPilotSfd8;

typedef Null SF512AndPilotSfd16;

typedef Null SF512AndPilotSfd32;

typedef Null SF512AndPilotSfd64;

enum PilotBits128Values {
	pb4_PilotBits128 = 0,
	pb8_PilotBits128 = 1,
};
typedef Enumerated<CONSTRAINED, 1> PilotBits128;

enum PilotBits256Values {
	pb2_PilotBits256 = 0,
	pb4_PilotBits256 = 1,
	pb8_PilotBits256 = 2,
};
typedef Enumerated<CONSTRAINED, 2> PilotBits256;

typedef Null SF512AndPilotSfd512;

class SF512AndPilot : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SF512AndPilot(): Choice(&theInfo) {}
};

enum PositionFixedOrFlexibleValues {
	fixed_PositionFixedOrFlexible = 0,
	flexible_PositionFixedOrFlexible = 1,
};
typedef Enumerated<CONSTRAINED, 1> PositionFixedOrFlexible;

typedef Boolean DLDPCHInfoCommonPredefModeSpecificInfoFddTfciExistence;

class DLDPCHInfoCommonPredefModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredefModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonPredefModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredefModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonPredefModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredefModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPredef(): Sequence(&theInfo) {}
};

class DLCommonInformationPredef : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPredef(): Sequence(&theInfo) {}
};

class PreDefPhyChConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PreDefPhyChConfiguration(): Sequence(&theInfo) {}
};

class PreDefRadioConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PreDefRadioConfiguration(): Sequence(&theInfo) {}
};

enum NumberOfTPCBitsValues {
	tpc4_NumberOfTPCBits = 0,
};
typedef Enumerated<CONSTRAINED, 0> NumberOfTPCBits;

class ULDPCHInfoPredefv770extModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770extModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null ULDPCHInfoPredefv770extModeSpecificInfoTdd;

class ULDPCHInfoPredefv770extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770extModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfoPredefv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHInfoPredefv770ext(): Sequence(&theInfo) {}
};

class PreDefPhyChConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefPhyChConfigurationv770ext(): Sequence(&theInfo) {}
};

class PreDefRadioConfigurationv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv770ext(): Sequence(&theInfo) {}
};

enum MAChsWindowSizer9Values {
	mws4_MAChsWindowSizer9 = 0,
	mws6_MAChsWindowSizer9 = 1,
	mws8_MAChsWindowSizer9 = 2,
	mws12_MAChsWindowSizer9 = 3,
	mws16_MAChsWindowSizer9 = 4,
	mws24_MAChsWindowSizer9 = 5,
	mws32_MAChsWindowSizer9 = 6,
	mw64_MAChsWindowSizer9 = 7,
	mw128_MAChsWindowSizer9 = 8,
};
typedef Enumerated<CONSTRAINED, 8> MAChsWindowSizer9;

class PreDefRadioConfigurationv920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PreDefRadioConfigurationv920ext(): Sequence(&theInfo) {}
};

typedef Null PredefinedConfigStatusInfoStoredWithValueTagSameAsPrevius;

typedef Null PredefinedConfigStatusInfoOtherNotStored;

class PredefinedConfigStatusInfoOther : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PredefinedConfigStatusInfoOther(): Choice(&theInfo) {}
};

class PredefinedConfigStatusInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PredefinedConfigStatusInfo(): Choice(&theInfo) {}
};

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, maxPredefConfig, maxPredefConfig> PredefinedConfigStatusList;

typedef Integer<CONSTRAINED, 0, 10> PredefinedConfigSetWithDifferentValueTagStartPosition;

typedef SequenceOf<PredefinedConfigValueTag, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigValueTagList;

class PredefinedConfigSetWithDifferentValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigSetWithDifferentValueTag(): Sequence(&theInfo) {}
};

typedef SequenceOf<PredefinedConfigSetWithDifferentValueTag, CONSTRAINED, 1, 2> PredefinedConfigSetsWithDifferentValueTag;

typedef SequenceOf<PredefinedConfigStatusInfo, CONSTRAINED, 1, maxPredefConfig> PredefinedConfigStatusListVarSz;

class PredefinedConfigStatusListComp : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigStatusListComp(): Sequence(&theInfo) {}
};

class RABInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInfo(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 1, 1> MBMSSessionIdentity;

class RABInfor6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfor6ext(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> RABInfov6b0extMbmsServiceIdentity;

class RABInfov6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInfov6b0ext(): Sequence(&theInfo) {}
};

class RABInfor6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RABInfor6(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> RABInfor7MbmsServiceIdentity;

class RABInfor7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RABInfor7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInfo, CONSTRAINED, 1, maxRABsetup> RABInformationList;

typedef SequenceOf<RABInfor6, CONSTRAINED, 1, maxRABsetup> RABInformationListr6;

class RABInformationReconfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInformationReconfig(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationReconfig, CONSTRAINED, 1,  maxRABsetup> RABInformationReconfigList;

class RABInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInformationReconfigr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationReconfigr8, CONSTRAINED, 1, maxRABsetup> RABInformationReconfigListr8;

class RABInfoPost : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInfoPost(): Sequence(&theInfo) {}
};

typedef OctetString<CONSTRAINED, 3, 3> RABInformationMBMSPtpMbmsServiceIdentity;

class RABInformationMBMSPtp : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RABInformationMBMSPtp(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationMBMSPtp, CONSTRAINED, 1, maxMBMSservSelect> RABInformationMBMSPtpList;

class RABInformationSetup : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetup(): Sequence(&theInfo) {}
};

class RBInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr4, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr4;

class RABInformationSetupr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr4(): Sequence(&theInfo) {}
};

typedef Boolean RLCInfor5RlcOneSidedReEst;

class RLCInfor5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCInfor5(): Sequence(&theInfo) {}
};

class RLCInfoChoicer5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer5(): Choice(&theInfo) {}
};

class RBMappingOptionr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr5, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor5;

class RBInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr5, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr5;

class RABInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr5(): Sequence(&theInfo) {}
};

class RABInformationSetupr6ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupr6ext(): Sequence(&theInfo) {}
};

typedef Boolean RLCInfor6RlcOneSidedReEst;

enum RLCInfor6altE_bitInterpretationValues {
	true_RLCInfor6altE_bitInterpretation = 0,
};
typedef Enumerated<CONSTRAINED, 0> RLCInfor6altE_bitInterpretation;

class RLCInfor6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RLCInfor6(): Sequence(&theInfo) {}
};

class RLCInfoChoicer6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer6(): Choice(&theInfo) {}
};

typedef Null ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeListAllSizes;

typedef Null ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeListConfigured;

class ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHTypeDchrachuschRlcSizeList(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr6UlTrCHTypeDchrachusch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHTypeDchrachusch(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxE_DCHMACdFlow_1> EDCHMACdFlowIdentity;

typedef OctetModeRLCSizeInfoType1 RLCPDUSize;

typedef SequenceOf<RLCPDUSize, CONSTRAINED, 1, maxRLCPDUsizePerLogChan> RLCPDUSizeList;

typedef Boolean ULLogicalChannelMappingr6UlTrCHTypeEdchIncludeInSchedulingInfo;

class ULLogicalChannelMappingr6UlTrCHTypeEdch : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHTypeEdch(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingr6UlTrCHType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6UlTrCHType(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr6(): Sequence(&theInfo) {}
};

typedef Boolean ULLogicalChannelMappingListr6RlcLogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMappingr6, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> ULLogicalChannelMappingListr6UlLogicalChannelMapping;

class ULLogicalChannelMappingListr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr6(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingsr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr6(): Choice(&theInfo) {}
};

class RBMappingOptionr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr6, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor6;

class RBInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr6, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr6;

class RABInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr6(): Sequence(&theInfo) {}
};

class RABInformationSetupv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv6b0ext(): Sequence(&theInfo) {}
};

typedef Boolean RLCInfor7RlcOneSidedReEst;

enum RLCInfor7altE_bitInterpretationValues {
	true_RLCInfor7altE_bitInterpretation = 0,
};
typedef Enumerated<CONSTRAINED, 0> RLCInfor7altE_bitInterpretation;

enum RLCInfor7useSpecialValueOfHEFieldValues {
	true_RLCInfor7useSpecialValueOfHEField = 0,
};
typedef Enumerated<CONSTRAINED, 0> RLCInfor7useSpecialValueOfHEField;

class RLCInfor7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLCInfor7(): Sequence(&theInfo) {}
};

class RLCInfoChoicer7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLCInfoChoicer7(): Choice(&theInfo) {}
};

class RBMappingOptionr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr7, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor7;

class RBInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr7, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr7;

class RABInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RABInformationSetupr7(): Sequence(&theInfo) {}
};

typedef Null ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeListAllSizes;

typedef Null ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeListConfigured;

class ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeDchrachuschRlcSizeList(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr8UlTrCHTypeDchrachusch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeDchrachusch(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSizeFixedSize(): Sequence(&theInfo) {}
};

enum RLCPDUSizeConstraintlengthIndicatorSizeValues {
	size7_RLCPDUSizeConstraintlengthIndicatorSize = 0,
	size15_RLCPDUSizeConstraintlengthIndicatorSize = 1,
};
typedef Enumerated<CONSTRAINED, 1> RLCPDUSizeConstraintlengthIndicatorSize;

typedef Integer<CONSTRAINED, 0, 1503> RLCPDUSizeConstraintMinRLCPDUSize;

typedef Integer<CONSTRAINED, 0, 1503> RLCPDUSizeConstraintLargestRLCPDUSize;

class RLCPDUSizeConstraint : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RLCPDUSizeConstraint(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeEdchRlcPDUSize(): Choice(&theInfo) {}
};

typedef Boolean ULLogicalChannelMappingr8UlTrCHTypeEdchIncludeInSchedulingInfo;

class ULLogicalChannelMappingr8UlTrCHTypeEdch : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHTypeEdch(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingr8UlTrCHType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8UlTrCHType(): Choice(&theInfo) {}
};

class ULLogicalChannelMappingr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingr8(): Sequence(&theInfo) {}
};

typedef Boolean ULLogicalChannelMappingListr8RlcLogicalChannelMappingIndicator;

typedef SequenceOf<ULLogicalChannelMappingr8, CONSTRAINED, maxLoCHperRLC, maxLoCHperRLC> ULLogicalChannelMappingListr8UlLogicalChannelMapping;

class ULLogicalChannelMappingListr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingListr8(): Sequence(&theInfo) {}
};

class ULLogicalChannelMappingsr8 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULLogicalChannelMappingsr8(): Choice(&theInfo) {}
};

class RBMappingOptionr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBMappingOptionr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBMappingOptionr8, CONSTRAINED, 1, maxRBMuxOptions> RBMappingInfor8;

class RBInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RBInformationSetupr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationSetupr8, CONSTRAINED, 1, maxRBperRAB> RBInformationSetupListr8;

class RABInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RABInformationSetupr8(): Sequence(&theInfo) {}
};

class RABInformationSetupv820ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RABInformationSetupv820ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<RABInformationSetup, CONSTRAINED, 1, maxRABsetup> RABInformationSetupList;

typedef SequenceOf<RABInformationSetupr4, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr4;

typedef SequenceOf<RABInformationSetupr5, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr5;

typedef SequenceOf<RABInformationSetupr6, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr6;

typedef SequenceOf<RABInformationSetupr6ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr6ext;

typedef SequenceOf<RABInformationSetupv6b0ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListv6b0ext;

typedef SequenceOf<RABInformationSetupr7, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr7;

typedef SequenceOf<RABInformationSetupr8, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListr8;

typedef SequenceOf<RABInformationSetupv820ext, CONSTRAINED, 1, maxRABsetup> RABInformationSetupListv820ext;

class RBCOUNTCInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBCOUNTCInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBCOUNTCInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCInformationList;

class RBCOUNTCMSBInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RBCOUNTCMSBInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBCOUNTCMSBInformation, CONSTRAINED, 1, maxRBallRABs> RBCOUNTCMSBInformationList;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBIdentityList;

class RBInformationAffected : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffected(): Sequence(&theInfo) {}
};

class RBInformationAffectedr5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr5(): Sequence(&theInfo) {}
};

class RBInformationAffectedr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr6(): Sequence(&theInfo) {}
};

class RBInformationAffectedr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr7(): Sequence(&theInfo) {}
};

class RBInformationAffectedr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationAffectedr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationAffected, CONSTRAINED, 1, maxRB> RBInformationAffectedList;

typedef SequenceOf<RBInformationAffectedr5, CONSTRAINED, 1, maxRB> RBInformationAffectedListr5;

typedef SequenceOf<RBInformationAffectedr6, CONSTRAINED, 1, maxRB> RBInformationAffectedListr6;

typedef SequenceOf<RBInformationAffectedr7, CONSTRAINED, 1, maxRB> RBInformationAffectedListr7;

typedef SequenceOf<RBInformationAffectedr8, CONSTRAINED, 1, maxRB> RBInformationAffectedListr8;

typedef Null RBInformationChangedr6RbChangeRelease;

class RBInformationChangedr6RbChange : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RBInformationChangedr6RbChange(): Choice(&theInfo) {}
};

class RBInformationChangedr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RBInformationChangedr6(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationChangedr6, CONSTRAINED, 1, maxRB> RBInformationChangedListr6;

enum RBStopContinueValues {
	stopRB_RBStopContinue = 0,
	continueRB_RBStopContinue = 1,
};
typedef Enumerated<CONSTRAINED, 1> RBStopContinue;

class RBInformationReconfig : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfig(): Sequence(&theInfo) {}
};

class RBInformationReconfigr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr4(): Sequence(&theInfo) {}
};

class RBInformationReconfigr5 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr5(): Sequence(&theInfo) {}
};

class RBInformationReconfigr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr6(): Sequence(&theInfo) {}
};

class RBInformationReconfigr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr7(): Sequence(&theInfo) {}
};

class RBInformationReconfigr8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RBInformationReconfigr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<RBInformationReconfig, CONSTRAINED, 1, maxRB> RBInformationReconfigList;

typedef SequenceOf<RBInformationReconfigr4, CONSTRAINED, 1, maxRB> RBInformationReconfigListr4;

typedef SequenceOf<RBInformationReconfigr5, CONSTRAINED, 1, maxRB> RBInformationReconfigListr5;

typedef SequenceOf<RBInformationReconfigr6, CONSTRAINED, 1, maxRB> RBInformationReconfigListr6;

typedef SequenceOf<RBInformationReconfigr7, CONSTRAINED, 1, maxRB> RBInformationReconfigListr7;

typedef SequenceOf<RBInformationReconfigr8, CONSTRAINED, 1, maxRB> RBInformationReconfigListr8;

typedef SequenceOf<RBIdentity, CONSTRAINED, 1, maxRB> RBInformationReleaseList;

enum TimerOSDr6Values {
	ms40_TimerOSDr6 = 0,
	ms80_TimerOSDr6 = 1,
	ms120_TimerOSDr6 = 2,
	ms160_TimerOSDr6 = 3,
	ms240_TimerOSDr6 = 4,
	ms320_TimerOSDr6 = 5,
	ms480_TimerOSDr6 = 6,
	ms640_TimerOSDr6 = 7,
	ms960_TimerOSDr6 = 8,
	ms1280_TimerOSDr6 = 9,
	ms1920_TimerOSDr6 = 10,
	ms2560_TimerOSDr6 = 11,
	ms3840_TimerOSDr6 = 12,
	ms5120_TimerOSDr6 = 13,
};
typedef Enumerated<CONSTRAINED, 13> TimerOSDr6;

enum WindowSizeOSDr6Values {
	ws8_WindowSizeOSDr6 = 0,
	ws16_WindowSizeOSDr6 = 1,
	ws32_WindowSizeOSDr6 = 2,
	ws40_WindowSizeOSDr6 = 3,
	ws48_WindowSizeOSDr6 = 4,
	ws56_WindowSizeOSDr6 = 5,
	ws64_WindowSizeOSDr6 = 6,
};
typedef Enumerated<CONSTRAINED, 6> WindowSizeOSDr6;

class UMRLCOutOSeqDeliveryInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UMRLCOutOSeqDeliveryInfor6(): Sequence(&theInfo) {}
};

class RLCInfoMCCHr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfoMCCHr6(): Sequence(&theInfo) {}
};

class RLCInfoMSCHr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLCInfoMSCHr6(): Sequence(&theInfo) {}
};

enum TimerDARr6Values {
	ms40_TimerDARr6 = 0,
	ms80_TimerDARr6 = 1,
	ms120_TimerDARr6 = 2,
	ms160_TimerDARr6 = 3,
	ms240_TimerDARr6 = 4,
	ms320_TimerDARr6 = 5,
	ms480_TimerDARr6 = 6,
	ms640_TimerDARr6 = 7,
	ms960_TimerDARr6 = 8,
	ms1280_TimerDARr6 = 9,
	ms1920_TimerDARr6 = 10,
	ms2560_TimerDARr6 = 11,
	ms3840_TimerDARr6 = 12,
	ms5120_TimerDARr6 = 13,
};
typedef Enumerated<CONSTRAINED, 13> TimerDARr6;

enum WindowSizeDARr6Values {
	ws4_WindowSizeDARr6 = 0,
	ws8_WindowSizeDARr6 = 1,
	ws16_WindowSizeDARr6 = 2,
	ws32_WindowSizeDARr6 = 3,
	ws40_WindowSizeDARr6 = 4,
	ws48_WindowSizeDARr6 = 5,
	ws56_WindowSizeDARr6 = 6,
	ws64_WindowSizeDARr6 = 7,
};
typedef Enumerated<CONSTRAINED, 7> WindowSizeDARr6;

class UMRLCDuplAvoidReordInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UMRLCDuplAvoidReordInfor6(): Sequence(&theInfo) {}
};

class RLCInfoMTCHr6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RLCInfoMTCHr6(): Sequence(&theInfo) {}
};

class SRBInformationSetupr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr5(): Sequence(&theInfo) {}
};

class SRBInformationSetupr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr6(): Sequence(&theInfo) {}
};

class SRBInformationSetupr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr7(): Sequence(&theInfo) {}
};

class SRBInformationSetupr8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SRBInformationSetupr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<SRBInformationSetupr5, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr5;

typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr6;

typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr7;

typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 1, maxSRBsetup> SRBInformationSetupListr8;

typedef SequenceOf<SRBInformationSetup, CONSTRAINED, 3, 4> SRBInformationSetupList2;

typedef SequenceOf<SRBInformationSetupr6, CONSTRAINED, 3, 4> SRBInformationSetupList2r6;

typedef SequenceOf<SRBInformationSetupr7, CONSTRAINED, 3, 4> SRBInformationSetupList2r7;

typedef SequenceOf<SRBInformationSetupr8, CONSTRAINED, 3, 4> SRBInformationSetupList2r8;

class ULCounterSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULCounterSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> MAChsAddReconfQueueMachsQueueId;

enum T1ReleaseTimerValues {
	rt10_T1ReleaseTimer = 0,
	rt20_T1ReleaseTimer = 1,
	rt30_T1ReleaseTimer = 2,
	rt40_T1ReleaseTimer = 3,
	rt50_T1ReleaseTimer = 4,
	rt60_T1ReleaseTimer = 5,
	rt70_T1ReleaseTimer = 6,
	rt80_T1ReleaseTimer = 7,
	rt90_T1ReleaseTimer = 8,
	rt100_T1ReleaseTimer = 9,
	rt120_T1ReleaseTimer = 10,
	rt140_T1ReleaseTimer = 11,
	rt160_T1ReleaseTimer = 12,
	rt200_T1ReleaseTimer = 13,
	rt300_T1ReleaseTimer = 14,
	rt400_T1ReleaseTimer = 15,
};
typedef Enumerated<CONSTRAINED, 15> T1ReleaseTimer;

enum MAChsWindowSizeValues {
	mws4_MAChsWindowSize = 0,
	mws6_MAChsWindowSize = 1,
	mws8_MAChsWindowSize = 2,
	mws12_MAChsWindowSize = 3,
	mws16_MAChsWindowSize = 4,
	mws24_MAChsWindowSize = 5,
	mws32_MAChsWindowSize = 6,
};
typedef Enumerated<CONSTRAINED, 6> MAChsWindowSize;

typedef Integer<CONSTRAINED, 1, 5000> MACdPDUsizeInfoMacdPDUSize;

typedef Integer<CONSTRAINED, 0, 7> MACdPDUsizeInfoMacdPDUIndex;

class MACdPDUsizeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MACdPDUsizeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACdPDUsizeInfo, CONSTRAINED, 1,  maxMAC_d_PDUsizes> MACdPDUSizeInfoList;

class MAChsAddReconfQueue : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MAChsAddReconfQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<MAChsAddReconfQueue, CONSTRAINED, 1, maxQueueIDs> MAChsAddReconfQueueList;

typedef Integer<CONSTRAINED, 0, 7> MAChsDelQueueMachsQueueId;

class MAChsDelQueue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MAChsDelQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<MAChsDelQueue, CONSTRAINED, 1, maxQueueIDs> MAChsDelQueueList;

class AddOrReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AddOrReconfMACdFlow(): Sequence(&theInfo) {}
};

enum TresetResetTimerValues {
	rt1_TresetResetTimer = 0,
	rt2_TresetResetTimer = 1,
	rt3_TresetResetTimer = 2,
	rt4_TresetResetTimer = 3,
};
typedef Enumerated<CONSTRAINED, 3> TresetResetTimer;

class MACehsAddReconfReordQ : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MACehsAddReconfReordQ(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsAddReconfReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQList;

class MACehsDelReordQ : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MACehsDelReordQ(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsDelReordQ, CONSTRAINED, 1, maxQueueIDs> MACehsDelReordQList;

class AddOrReconfMACehsReordQ : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQ(): Sequence(&theInfo) {}
};

class MACehsAddReconfReordQr9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MACehsAddReconfReordQr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<MACehsAddReconfReordQr9, CONSTRAINED, 1, maxQueueIDs> MACehsAddReconfReordQListr9;

class AddOrReconfMACehsReordQr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AddOrReconfMACehsReordQr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> EDCHMACdFlowPowerOffset;

typedef Integer<CONSTRAINED, 0, 15> EDCHMACdFlowMaxRetrans;

typedef BitString<CONSTRAINED, maxE_DCHMACdFlow, maxE_DCHMACdFlow> EDCHMACdFlowMultiplexingList;

enum EDCHMACdFlowRetransTimerValues {
	ms10_EDCHMACdFlowRetransTimer = 0,
	ms15_EDCHMACdFlowRetransTimer = 1,
	ms20_EDCHMACdFlowRetransTimer = 2,
	ms25_EDCHMACdFlowRetransTimer = 3,
	ms30_EDCHMACdFlowRetransTimer = 4,
	ms35_EDCHMACdFlowRetransTimer = 5,
	ms40_EDCHMACdFlowRetransTimer = 6,
	ms45_EDCHMACdFlowRetransTimer = 7,
	ms50_EDCHMACdFlowRetransTimer = 8,
	ms55_EDCHMACdFlowRetransTimer = 9,
	ms60_EDCHMACdFlowRetransTimer = 10,
	ms65_EDCHMACdFlowRetransTimer = 11,
	ms70_EDCHMACdFlowRetransTimer = 12,
	ms75_EDCHMACdFlowRetransTimer = 13,
	ms80_EDCHMACdFlowRetransTimer = 14,
	ms85_EDCHMACdFlowRetransTimer = 15,
	ms90_EDCHMACdFlowRetransTimer = 16,
	ms95_EDCHMACdFlowRetransTimer = 17,
	ms100_EDCHMACdFlowRetransTimer = 18,
	ms110_EDCHMACdFlowRetransTimer = 19,
	ms120_EDCHMACdFlowRetransTimer = 20,
	ms140_EDCHMACdFlowRetransTimer = 21,
	ms160_EDCHMACdFlowRetransTimer = 22,
	ms200_EDCHMACdFlowRetransTimer = 23,
	ms240_EDCHMACdFlowRetransTimer = 24,
	ms280_EDCHMACdFlowRetransTimer = 25,
	ms320_EDCHMACdFlowRetransTimer = 26,
	ms400_EDCHMACdFlowRetransTimer = 27,
	ms480_EDCHMACdFlowRetransTimer = 28,
	ms560_EDCHMACdFlowRetransTimer = 29,
};
typedef Enumerated<CONSTRAINED, 29> EDCHMACdFlowRetransTimer;

class CommonEDCHMACdFlow : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CommonEDCHMACdFlow(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonEDCHMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> CommonEDCHMACdFlowList;

class CommonTransChTFSLCRTti : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	CommonTransChTFSLCRTti(): Choice(&theInfo) {}
};

class CommonTransChTFSLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CommonTransChTFSLCR(): Sequence(&theInfo) {}
};

class CommonMACehsReorderingQueue : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonMACehsReorderingQueue(): Sequence(&theInfo) {}
};

typedef SequenceOf<CommonMACehsReorderingQueue, CONSTRAINED, 1,  maxCommonQueueID> CommonMACehsReorderingQueueList;

typedef Integer<CONSTRAINED, 1, maxCPCHsets> CPCHSetID;

class DLAddReconfTransChInformation2TfsSignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation2TfsSignallingMode(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformation2 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAddReconfTransChInformation2(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformation2, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfo2List;

class DLAddReconfTransChInformationr4TfsSignallingMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr4TfsSignallingMode(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformationr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr4, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr4;

typedef Null DLTrCHTypeId1r5Hsdsch;

class DLTrCHTypeId1r5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId1r5(): Choice(&theInfo) {}
};

class HSDSCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfo(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformationr5TfsSignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr5TfsSignallingMode(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformationr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr5, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr5;

class HSDSCHInfor7DlMACHeaderType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSDSCHInfor7DlMACHeaderType(): Choice(&theInfo) {}
};

class HSDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfor7(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformationr7TfsSignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr7TfsSignallingMode(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformationr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr7;

class HSDSCHInfor9DlMACHeaderType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSDSCHInfor9DlMACHeaderType(): Choice(&theInfo) {}
};

class HSDSCHInfor9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHInfor9(): Sequence(&theInfo) {}
};

class DLAddReconfTransChInformationr9TfsSignallingMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr9TfsSignallingMode(): Choice(&theInfo) {}
};

class DLAddReconfTransChInformationr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLAddReconfTransChInformationr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLAddReconfTransChInformationr9, CONSTRAINED, 1, maxTrCHpreconf> DLAddReconfTransChInfoListr9;

class DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfor4ModeSpecificInfoFddDlParametersDlDCHTFCS(): Sequence(&theInfo) {}
};

typedef Null DLCommonTransChInfor4ModeSpecificInfoFddDlParametersSameAsUL;

class DLCommonTransChInfor4ModeSpecificInfoFddDlParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonTransChInfor4ModeSpecificInfoFddDlParameters(): Choice(&theInfo) {}
};

class DLCommonTransChInfor4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfor4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLCommonTransChInfor4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonTransChInfor4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonTransChInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonTransChInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonTransChInfor4(): Sequence(&theInfo) {}
};

class DLTransportChannelIdentity : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLTransportChannelIdentity(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoList;

class DLTrCHTypeId2r5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId2r5(): Choice(&theInfo) {}
};

class DLTransportChannelIdentityr5 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr5(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentityr5, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr5;

class DLTrCHTypeId2r7Hsdsch : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLTrCHTypeId2r7Hsdsch(): Choice(&theInfo) {}
};

class DLTrCHTypeId2r7 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLTrCHTypeId2r7(): Choice(&theInfo) {}
};

class DLTransportChannelIdentityr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTransportChannelIdentityr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTransportChannelIdentityr7, CONSTRAINED, 1, maxTrCH> DLDeletedTransChInfoListr7;

typedef Integer<CONSTRAINED, 1, maxDRACclasses> DRACClassIdentity;

typedef Integer<CONSTRAINED, 1, 256> TransmissionTimeValidity;

typedef Integer<CONSTRAINED, 1, 256> TimeDurationBeforeRetry;

class DRACStaticInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DRACStaticInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DRACStaticInformation, CONSTRAINED, 1, maxTrCH> DRACStaticInformationList;

typedef Integer<CONSTRAINED, 1, 19982> EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfoMaxMACePDUContents;

typedef BitString<CONSTRAINED, 8, 8> EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfoMs2NonSchedTransmGrantHARQAlloc;

class EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowTransmissionGrantTypeNonScheduledTransGrantInfo(): Sequence(&theInfo) {}
};

typedef Null EDCHAddReconfMACdFlowTransmissionGrantTypeScheduledTransmissionGrantInfo;

class EDCHAddReconfMACdFlowTransmissionGrantType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowTransmissionGrantType(): Choice(&theInfo) {}
};

class EDCHAddReconfMACdFlow : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlow(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 19982> EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFddMaxMACePDUContents;

typedef BitString<CONSTRAINED, 8, 8> EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFddMs2NonSchedTransmGrantHARQAlloc;

class EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfoTdd;

class EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7TransmissionGrantTypeNonScheduledTransGrantInfo(): Sequence(&theInfo) {}
};

typedef Null EDCHAddReconfMACdFlowr7TransmissionGrantTypeScheduledTransmissionGrantInfo;

class EDCHAddReconfMACdFlowr7TransmissionGrantType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7TransmissionGrantType(): Choice(&theInfo) {}
};

class EDCHAddReconfMACdFlowr7 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	EDCHAddReconfMACdFlowr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHAddReconfMACdFlow, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowList;

typedef SequenceOf<EDCHAddReconfMACdFlowr7, CONSTRAINED, 1, maxE_DCHMACdFlow> EDCHAddReconfMACdFlowListr7;

enum EDCHTTIValues {
	tti2_EDCHTTI = 0,
	tti10_EDCHTTI = 1,
};
typedef Enumerated<CONSTRAINED, 1> EDCHTTI;

typedef Integer<CONSTRAINED, 0, 15> GainFactor;

class SignalledGainFactorsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SignalledGainFactorsModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null SignalledGainFactorsModeSpecificInfoTdd;

class SignalledGainFactorsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SignalledGainFactorsModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> ReferenceTFCID;

class SignalledGainFactors : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SignalledGainFactors(): Sequence(&theInfo) {}
};

class GainFactorInformation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	GainFactorInformation(): Choice(&theInfo) {}
};

class PowerOffsetInfoShortModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PowerOffsetInfoShortModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null PowerOffsetInfoShortModeSpecificInfoTdd;

class PowerOffsetInfoShortModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PowerOffsetInfoShortModeSpecificInfo(): Choice(&theInfo) {}
};

class PowerOffsetInfoShort : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PowerOffsetInfoShort(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, 10> PowerOffsetPpm;

class PowerOffsetInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PowerOffsetInformation(): Sequence(&theInfo) {}
};

class TFCSubsetList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	TFCSubsetList(): Sequence(&theInfo) {}
};

enum TransmissionTimeIntervalValues {
	tti10_TransmissionTimeInterval = 0,
	tti20_TransmissionTimeInterval = 1,
	tti40_TransmissionTimeInterval = 2,
	tti80_TransmissionTimeInterval = 3,
};
typedef Enumerated<CONSTRAINED, 3> TransmissionTimeInterval;

class TransportFormatSetLCR : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TransportFormatSetLCR(): Choice(&theInfo) {}
};

class ULAddReconfTransChInformationr6Dchusch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6Dchusch(): Sequence(&theInfo) {}
};

enum ULAddReconfTransChInformationr6Edchharq_InfoValues {
	rv0_ULAddReconfTransChInformationr6Edchharq_Info = 0,
	rvtable_ULAddReconfTransChInformationr6Edchharq_Info = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULAddReconfTransChInformationr6Edchharq_Info;

class ULAddReconfTransChInformationr6Edch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6Edch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr6(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr6, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr6;

class ULAddReconfTransChInformationr7Dchusch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7Dchusch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr7EdchModeSpecificFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7EdchModeSpecificFdd(): Sequence(&theInfo) {}
};

typedef Null ULAddReconfTransChInformationr7EdchModeSpecificTdd;

class ULAddReconfTransChInformationr7EdchModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7EdchModeSpecific(): Choice(&theInfo) {}
};

enum ULAddReconfTransChInformationr7Edchharq_InfoValues {
	rv0_ULAddReconfTransChInformationr7Edchharq_Info = 0,
	rvtable_ULAddReconfTransChInformationr7Edchharq_Info = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULAddReconfTransChInformationr7Edchharq_Info;

class ULAddReconfTransChInformationr7Edch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7Edch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr7(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr7, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr7;

class ULAddReconfTransChInformationr8Dchusch : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8Dchusch(): Sequence(&theInfo) {}
};

enum ULAddReconfTransChInformationr8Edchul_MAC_HeaderTypeValues {
	mac_iis_ULAddReconfTransChInformationr8Edchul_MAC_HeaderType = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULAddReconfTransChInformationr8Edchul_MAC_HeaderType;

class ULAddReconfTransChInformationr8EdchModeSpecificFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8EdchModeSpecificFdd(): Sequence(&theInfo) {}
};

typedef Null ULAddReconfTransChInformationr8EdchModeSpecificTdd;

class ULAddReconfTransChInformationr8EdchModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8EdchModeSpecific(): Choice(&theInfo) {}
};

enum ULAddReconfTransChInformationr8Edchharq_InfoValues {
	rv0_ULAddReconfTransChInformationr8Edchharq_Info = 0,
	rvtable_ULAddReconfTransChInformationr8Edchharq_Info = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULAddReconfTransChInformationr8Edchharq_Info;

class ULAddReconfTransChInformationr8Edch : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8Edch(): Sequence(&theInfo) {}
};

class ULAddReconfTransChInformationr8 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULAddReconfTransChInformationr8(): Choice(&theInfo) {}
};

typedef SequenceOf<ULAddReconfTransChInformationr8, CONSTRAINED, 1, maxTrCH> ULAddReconfTransChInfoListr8;

class ULCommonTransChInfor4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfor4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class ULCommonTransChInfor4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCommonTransChInfor4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULCommonTransChInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULCommonTransChInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULCommonTransChInfor4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULCommonTransChInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULTransportChannelIdentity, CONSTRAINED, 1, maxTrCH> ULDeletedTransChInfoList;

class ULTransportChannelIdentityr6Dchusch : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTransportChannelIdentityr6Dchusch(): Sequence(&theInfo) {}
};

class ULTransportChannelIdentityr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTransportChannelIdentityr6(): Choice(&theInfo) {}
};

typedef SequenceOf<ULTransportChannelIdentityr6, CONSTRAINED, 1, maxTrCH> ULDeletedTransChInfoListr6;

class USCHTransportChannelsInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	USCHTransportChannelsInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 4> ACKNACKrepetitionFactor;

typedef Integer<CONSTRAINED, 0, 7> ACToASCMapping;

typedef SequenceOf<ACToASCMapping, CONSTRAINED, maxASCmap, maxASCmap> ACToASCMappingTable;

typedef Integer<CONSTRAINED, 0, 15> AccessServiceClassFDDAvailableSignatureStartIndex;

typedef Integer<CONSTRAINED, 0, 15> AccessServiceClassFDDAvailableSignatureEndIndex;

typedef BitString<CONSTRAINED, 4, 4> AccessServiceClassFDDAssignedSubChannelNumber;

class AccessServiceClassFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AccessServiceClassFDD(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> AccessServiceClassTDDChannelisationCodeIndices;

typedef Null AccessServiceClassTDDSubchannelSizeSize1;

enum AccessServiceClassTDDSubchannelSizeSize2subchannelsValues {
	subch0_AccessServiceClassTDDSubchannelSizeSize2subchannels = 0,
	subch1_AccessServiceClassTDDSubchannelSizeSize2subchannels = 1,
};
typedef Enumerated<CONSTRAINED, 1> AccessServiceClassTDDSubchannelSizeSize2subchannels;

class AccessServiceClassTDDSubchannelSizeSize2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDSubchannelSizeSize2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 4, 4> AccessServiceClassTDDSubchannelSizeSize4Subchannels;

class AccessServiceClassTDDSubchannelSizeSize4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDSubchannelSizeSize4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> AccessServiceClassTDDSubchannelSizeSize8Subchannels;

class AccessServiceClassTDDSubchannelSizeSize8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDSubchannelSizeSize8(): Sequence(&theInfo) {}
};

class AccessServiceClassTDDSubchannelSize : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	AccessServiceClassTDDSubchannelSize(): Choice(&theInfo) {}
};

class AccessServiceClassTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDD(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> AccessServiceClassTDDr7ChannelisationCodeIndices;

typedef Null AccessServiceClassTDDr7SubchannelSizeSize1;

enum AccessServiceClassTDDr7SubchannelSizeSize2subchannelsValues {
	subch0_AccessServiceClassTDDr7SubchannelSizeSize2subchannels = 0,
	subch1_AccessServiceClassTDDr7SubchannelSizeSize2subchannels = 1,
};
typedef Enumerated<CONSTRAINED, 1> AccessServiceClassTDDr7SubchannelSizeSize2subchannels;

class AccessServiceClassTDDr7SubchannelSizeSize2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7SubchannelSizeSize2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 4, 4> AccessServiceClassTDDr7SubchannelSizeSize4Subchannels;

class AccessServiceClassTDDr7SubchannelSizeSize4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7SubchannelSizeSize4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> AccessServiceClassTDDr7SubchannelSizeSize8Subchannels;

class AccessServiceClassTDDr7SubchannelSizeSize8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7SubchannelSizeSize8(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> AccessServiceClassTDDr7SubchannelSizeSize16Subchannels;

class AccessServiceClassTDDr7SubchannelSizeSize16 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7SubchannelSizeSize16(): Sequence(&theInfo) {}
};

class AccessServiceClassTDDr7SubchannelSize : Choice {
private:
	static const void *choicesInfo[5];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7SubchannelSize(): Choice(&theInfo) {}
};

class AccessServiceClassTDDr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDDr7(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> AccessServiceClassTDDLCRr4AvailableSYNCUlCodesIndics;

typedef Null AccessServiceClassTDDLCRr4SubchannelSizeSize1;

enum AccessServiceClassTDDLCRr4SubchannelSizeSize2subchannelsValues {
	subch0_AccessServiceClassTDDLCRr4SubchannelSizeSize2subchannels = 0,
	subch1_AccessServiceClassTDDLCRr4SubchannelSizeSize2subchannels = 1,
};
typedef Enumerated<CONSTRAINED, 1> AccessServiceClassTDDLCRr4SubchannelSizeSize2subchannels;

class AccessServiceClassTDDLCRr4SubchannelSizeSize2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4SubchannelSizeSize2(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 4, 4> AccessServiceClassTDDLCRr4SubchannelSizeSize4Subchannels;

class AccessServiceClassTDDLCRr4SubchannelSizeSize4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4SubchannelSizeSize4(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> AccessServiceClassTDDLCRr4SubchannelSizeSize8Subchannels;

class AccessServiceClassTDDLCRr4SubchannelSizeSize8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4SubchannelSizeSize8(): Sequence(&theInfo) {}
};

class AccessServiceClassTDDLCRr4SubchannelSize : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4SubchannelSize(): Choice(&theInfo) {}
};

class AccessServiceClassTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AccessServiceClassTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0 ,  255> ActivationTimeOffset;

class DynamicTFInformationCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DynamicTFInformationCCCH(): Sequence(&theInfo) {}
};

class AdditionalPRACHTFandTFCSCCCHIEs : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCHIEs(): Sequence(&theInfo) {}
};

class AdditionalPRACHTFandTFCSCCCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	AdditionalPRACHTFandTFCSCCCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<AdditionalPRACHTFandTFCSCCCH, CONSTRAINED, 1, maxPRACH> AdditionalPRACHTFandTFCSCCCHList;

typedef Boolean AICHInfoSttdIndicator;

enum AICHTransmissionTimingValues {
	e0_AICHTransmissionTiming = 0,
	e1_AICHTransmissionTiming = 1,
};
typedef Enumerated<CONSTRAINED, 1> AICHTransmissionTiming;

class AICHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AICHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -22, 5> AICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 255> AllocationPeriodInfoAllocationActivationTime;

typedef Integer<CONSTRAINED, 1, 256> AllocationPeriodInfoAllocationDuration;

class AllocationPeriodInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AllocationPeriodInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> Alpha;

typedef Integer<CONSTRAINED, 0, 255> APAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> APPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> APSignature;

typedef Integer<CONSTRAINED, 0, 11> APSubchannel;

typedef SequenceOf<APSubchannel, CONSTRAINED, 1, maxPCPCH_APsubCh> AvailableAPSubchannelList;

class APSignatureVCAM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	APSignatureVCAM(): Sequence(&theInfo) {}
};

class ASCSettingFDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingFDD(): Sequence(&theInfo) {}
};

class ASCSettingTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDD(): Sequence(&theInfo) {}
};

class ASCSettingTDDr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDr7(): Sequence(&theInfo) {}
};

class ASCSettingTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ASCSettingTDDLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<APSignatureVCAM, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureVCAMList;

typedef SequenceOf<APSignature, CONSTRAINED, 1, maxPCPCH_APsig> AvailableAPSignatureList;

enum MinimumSpreadingFactorValues {
	sf4_MinimumSpreadingFactor = 0,
	sf8_MinimumSpreadingFactor = 1,
	sf16_MinimumSpreadingFactor = 2,
	sf32_MinimumSpreadingFactor = 3,
	sf64_MinimumSpreadingFactor = 4,
	sf128_MinimumSpreadingFactor = 5,
	sf256_MinimumSpreadingFactor = 6,
};
typedef Enumerated<CONSTRAINED, 6> MinimumSpreadingFactor;

typedef Integer<CONSTRAINED, 1, 64> NFMax;

typedef Integer<CONSTRAINED, 1, 64> MaxAvailablePCPCHNumber;

class AvailableMinimumSFVCAM : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	AvailableMinimumSFVCAM(): Sequence(&theInfo) {}
};

typedef SequenceOf<AvailableMinimumSFVCAM, CONSTRAINED, 1, maxPCPCH_SF> AvailableMinimumSFListVCAM;

typedef BitString<CONSTRAINED, 16, 16> AvailableSignatures;

typedef BitString<CONSTRAINED, 12, 12> AvailableSubChannelNumbers;

enum BEACONPLEstValues {
	true_BEACONPLEst = 0,
};
typedef Enumerated<CONSTRAINED, 0> BEACONPLEst;

enum BurstTypeValues {
	type1_BurstType = 0,
	type2_BurstType = 1,
};
typedef Enumerated<CONSTRAINED, 1> BurstType;

typedef Integer<CONSTRAINED, -82, -3> DPCCHPowerOffset;

typedef Integer<CONSTRAINED, 0, 7> SRBdelay;

class ULDPCHPowerControlInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> ULTargetSIR;

typedef Null ULDPCHPowerControlInfoTddUlOLPCSignallingBroadcastULOLPCinfo;

typedef Integer<CONSTRAINED, -110, -52> TDDULInterference;

class IndividualTSInterference : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	IndividualTSInterference(): Sequence(&theInfo) {}
};

typedef SequenceOf<IndividualTSInterference, CONSTRAINED, 1, maxTS> IndividualTSInterferenceList;

typedef Integer<CONSTRAINED, 6, 43> PrimaryCCPCHTXPower;

class ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoTddUlOLPCSignallingIndividuallySignalled(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoTddUlOLPCSignalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoTddUlOLPCSignalling(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfo(): Choice(&theInfo) {}
};

class CCTrCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfo(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor4Fdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4Fdd(): Sequence(&theInfo) {}
};

typedef Null ULDPCHPowerControlInfor4TddUlOLPCSignallingBroadcastULOLPCinfo;

class ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> TPCStepSizeTDD;

class ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalledTddOption(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4TddUlOLPCSignallingIndividuallySignalled(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor4TddUlOLPCSignalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4TddUlOLPCSignalling(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor4Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor4(): Choice(&theInfo) {}
};

class CCTrCHPowerControlInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor4(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5Fdd(): Sequence(&theInfo) {}
};

typedef Null ULDPCHPowerControlInfor5TddUlOLPCSignallingBroadcastULOLPCinfo;

class ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalledTddOption(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5TddUlOLPCSignallingIndividuallySignalled(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5TddUlOLPCSignalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5TddUlOLPCSignalling(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor5Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor5(): Choice(&theInfo) {}
};

class CCTrCHPowerControlInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor5(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7Fdd(): Sequence(&theInfo) {}
};

typedef Null ULDPCHPowerControlInfor7TddUlOLPCSignallingBroadcastULOLPCinfo;

class ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd768(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalledTddOption(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignallingIndividuallySignalled(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7TddUlOLPCSignalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7TddUlOLPCSignalling(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor7Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor7(): Choice(&theInfo) {}
};

class CCTrCHPowerControlInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CCTrCHPowerControlInfor7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 11> CDAccessSlotSubchannel;

typedef SequenceOf<CDAccessSlotSubchannel, CONSTRAINED, 1, maxPCPCH_CDsubCh> CDAccessSlotSubchannelList;

typedef Integer<CONSTRAINED, 0, 255> CDCAICHChannelisationCode;

typedef Integer<CONSTRAINED, 0, 79> CDPreambleScramblingCode;

typedef Integer<CONSTRAINED, 0, 15> CDSignatureCode;

typedef SequenceOf<CDSignatureCode, CONSTRAINED, 1, maxPCPCH_CDsig> CDSignatureCodeList;

typedef Integer<CONSTRAINED, 0, 127> CellParametersID;

class CellAndChannelIdentity : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellAndChannelIdentity(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> Cfntargetsfnframeoffset;

typedef Null ChannelAssignmentActiveNotActive;

class ChannelAssignmentActive : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ChannelAssignmentActive(): Choice(&theInfo) {}
};

class ChannelReqParamsForUCSM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ChannelReqParamsForUCSM(): Sequence(&theInfo) {}
};

enum ClosedLoopTimingAdjModeValues {
	slot1_ClosedLoopTimingAdjMode = 0,
	slot2_ClosedLoopTimingAdjMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> ClosedLoopTimingAdjMode;

typedef Integer<CONSTRAINED, 0, 255> CodeNumberDSCH;

enum SFPDSCHValues {
	sfp4_SFPDSCH = 0,
	sfp8_SFPDSCH = 1,
	sfp16_SFPDSCH = 2,
	sfp32_SFPDSCH = 3,
	sfp64_SFPDSCH = 4,
	sfp128_SFPDSCH = 5,
	sfp256_SFPDSCH = 6,
};
typedef Enumerated<CONSTRAINED, 6> SFPDSCH;

typedef Integer<CONSTRAINED, 1, 16> MultiCodeInfo;

class PDSCHCodeMap : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHCodeMap(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHCodeMap, CONSTRAINED, 1, maxPDSCH_TFCIgroups> PDSCHCodeMapList;

class CodeRange : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CodeRange(): Sequence(&theInfo) {}
};

class CodeResourceInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CodeResourceInformationTDD128(): Sequence(&theInfo) {}
};

enum CodeWordSetValues {
	longCWS_CodeWordSet = 0,
	mediumCWS_CodeWordSet = 1,
	shortCWS_CodeWordSet = 2,
	ssdtOff_CodeWordSet = 3,
};
typedef Enumerated<CONSTRAINED, 3> CodeWordSet;

typedef Integer<CONSTRAINED, 0, 9> CommonEDCHResourceInfoListSoffset;

typedef Integer<CONSTRAINED, 0, 255> CommonEDCHResourceInfoListFdpchChannelisationCodeNumber;

class ERGCHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERGCHInformationCommonEdch(): Sequence(&theInfo) {}
};

class EHICHInformationCommonEdch : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationCommonEdch(): Sequence(&theInfo) {}
};

class ULDPCHCodeInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHCodeInfoForCommonEDCH(): Sequence(&theInfo) {}
};

class CommonEDCHResourceInfoList : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CommonEDCHResourceInfoList(): Sequence(&theInfo) {}
};

class CommonERNTIInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CommonERNTIInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -110, -70> ULInterference;

class CommonEDCHSystemInfoModeSpecificInfoDummy : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoModeSpecificInfoDummy(): Sequence(&theInfo) {}
};

typedef Null CommonEDCHSystemInfoModeSpecificInfoTddTdd768;

typedef Null CommonEDCHSystemInfoModeSpecificInfoTddTdd384;

enum ERUCCHInfoTDD128t_RUCCHValues {
	ms20_ERUCCHInfoTDD128t_RUCCH = 0,
	ms40_ERUCCHInfoTDD128t_RUCCH = 1,
	ms60_ERUCCHInfoTDD128t_RUCCH = 2,
	ms80_ERUCCHInfoTDD128t_RUCCH = 3,
	ms120_ERUCCHInfoTDD128t_RUCCH = 4,
	ms160_ERUCCHInfoTDD128t_RUCCH = 5,
	ms200_ERUCCHInfoTDD128t_RUCCH = 6,
	ms240_ERUCCHInfoTDD128t_RUCCH = 7,
	ms280_ERUCCHInfoTDD128t_RUCCH = 8,
	ms320_ERUCCHInfoTDD128t_RUCCH = 9,
	ms400_ERUCCHInfoTDD128t_RUCCH = 10,
	ms500_ERUCCHInfoTDD128t_RUCCH = 11,
	ms600_ERUCCHInfoTDD128t_RUCCH = 12,
	ms800_ERUCCHInfoTDD128t_RUCCH = 13,
	ms1000_ERUCCHInfoTDD128t_RUCCH = 14,
	ms2000_ERUCCHInfoTDD128t_RUCCH = 15,
};
typedef Enumerated<CONSTRAINED, 15> ERUCCHInfoTDD128t_RUCCH;

typedef Integer<CONSTRAINED, 0, 7> ERUCCHInfoTDD128NRUCCH;

enum ERUCCHInfoTDD128t_WAITValues {
	everyEDCHTTI_ERUCCHInfoTDD128t_WAIT = 0,
	ms40_ERUCCHInfoTDD128t_WAIT = 1,
	ms80_ERUCCHInfoTDD128t_WAIT = 2,
	ms160_ERUCCHInfoTDD128t_WAIT = 3,
	ms320_ERUCCHInfoTDD128t_WAIT = 4,
	ms640_ERUCCHInfoTDD128t_WAIT = 5,
	ms1000_ERUCCHInfoTDD128t_WAIT = 6,
	ms2000_ERUCCHInfoTDD128t_WAIT = 7,
};
typedef Enumerated<CONSTRAINED, 7> ERUCCHInfoTDD128t_WAIT;

enum ERUCCHInfoTDD128t_SIValues {
	everyEDCHTTI_ERUCCHInfoTDD128t_SI = 0,
	ms20_ERUCCHInfoTDD128t_SI = 1,
	ms40_ERUCCHInfoTDD128t_SI = 2,
	ms60_ERUCCHInfoTDD128t_SI = 3,
	ms80_ERUCCHInfoTDD128t_SI = 4,
	ms160_ERUCCHInfoTDD128t_SI = 5,
	ms200_ERUCCHInfoTDD128t_SI = 6,
};
typedef Enumerated<CONSTRAINED, 6> ERUCCHInfoTDD128t_SI;

typedef Integer<CONSTRAINED, 2, 5> ERUCCHInfoTDD128ExtendedEstimationWindow;

typedef SequenceOf<ASCSettingTDDLCRr4, CONSTRAINED, 1, maxASC> PRACHPartitioningLCRr4;

typedef PRACHPartitioningLCRr4 ERUCCHAccessServiceClass;

enum PersistenceScalingFactorValues {
	psf0_9_PersistenceScalingFactor = 0,
	psf0_8_PersistenceScalingFactor = 1,
	psf0_7_PersistenceScalingFactor = 2,
	psf0_6_PersistenceScalingFactor = 3,
	psf0_5_PersistenceScalingFactor = 4,
	psf0_4_PersistenceScalingFactor = 5,
	psf0_3_PersistenceScalingFactor = 6,
	psf0_2_PersistenceScalingFactor = 7,
};
typedef Enumerated<CONSTRAINED, 7> PersistenceScalingFactor;

typedef SequenceOf<PersistenceScalingFactor, CONSTRAINED, 1, maxASCpersist> PersistenceScalingFactorList;

typedef Integer<CONSTRAINED, 0, 62> SYNCULInfoForERUCCHPrxUpPCHdes;

typedef Integer<CONSTRAINED, 0, 3> SYNCULInfoForERUCCHPowerRampStep;

enum SYNCULInfoForERUCCHmax_SYNC_UL_TransmissionsValues {
	tr1_SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions = 0,
	tr2_SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions = 1,
	tr4_SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions = 2,
	tr8_SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions = 3,
};
typedef Enumerated<CONSTRAINED, 3> SYNCULInfoForERUCCHmax_SYNC_UL_Transmissions;

typedef BitString<CONSTRAINED, 8, 8> SyncULCodesBitmap;

typedef Integer<CONSTRAINED, 1, 32> SYNCULInfoForERUCCHMmax;

class SYNCULInfoForERUCCH : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SYNCULInfoForERUCCH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 6> TimeslotNumberPRACHLCRr4;

enum TDDPRACHCCodeLCRr4Values {
	cc4_1_TDDPRACHCCodeLCRr4 = 0,
	cc4_2_TDDPRACHCCodeLCRr4 = 1,
	cc4_3_TDDPRACHCCodeLCRr4 = 2,
	cc4_4_TDDPRACHCCodeLCRr4 = 3,
	cc8_1_TDDPRACHCCodeLCRr4 = 4,
	cc8_2_TDDPRACHCCodeLCRr4 = 5,
	cc8_3_TDDPRACHCCodeLCRr4 = 6,
	cc8_4_TDDPRACHCCodeLCRr4 = 7,
	cc8_5_TDDPRACHCCodeLCRr4 = 8,
	cc8_6_TDDPRACHCCodeLCRr4 = 9,
	cc8_7_TDDPRACHCCodeLCRr4 = 10,
	cc8_8_TDDPRACHCCodeLCRr4 = 11,
	cc16_1_TDDPRACHCCodeLCRr4 = 12,
	cc16_2_TDDPRACHCCodeLCRr4 = 13,
	cc16_3_TDDPRACHCCodeLCRr4 = 14,
	cc16_4_TDDPRACHCCodeLCRr4 = 15,
	cc16_5_TDDPRACHCCodeLCRr4 = 16,
	cc16_6_TDDPRACHCCodeLCRr4 = 17,
	cc16_7_TDDPRACHCCodeLCRr4 = 18,
	cc16_8_TDDPRACHCCodeLCRr4 = 19,
	cc16_9_TDDPRACHCCodeLCRr4 = 20,
	cc16_10_TDDPRACHCCodeLCRr4 = 21,
	cc16_11_TDDPRACHCCodeLCRr4 = 22,
	cc16_12_TDDPRACHCCodeLCRr4 = 23,
	cc16_13_TDDPRACHCCodeLCRr4 = 24,
	cc16_14_TDDPRACHCCodeLCRr4 = 25,
	cc16_15_TDDPRACHCCodeLCRr4 = 26,
	cc16_16_TDDPRACHCCodeLCRr4 = 27,
};
typedef Enumerated<CONSTRAINED, 27> TDDPRACHCCodeLCRr4;

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 2> PRACHChanCodesListLCR;

typedef Null MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidambleMidambleShift;

class MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4MidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> MidambleShiftAndBurstTypeLCRr4MidambleConfiguration;

class MidambleShiftAndBurstTypeLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeLCRr4(): Sequence(&theInfo) {}
};

enum TDDFPACHCCode16r4Values {
	cc16_1_TDDFPACHCCode16r4 = 0,
	cc16_2_TDDFPACHCCode16r4 = 1,
	cc16_3_TDDFPACHCCode16r4 = 2,
	cc16_4_TDDFPACHCCode16r4 = 3,
	cc16_5_TDDFPACHCCode16r4 = 4,
	cc16_6_TDDFPACHCCode16r4 = 5,
	cc16_7_TDDFPACHCCode16r4 = 6,
	cc16_8_TDDFPACHCCode16r4 = 7,
	cc16_9_TDDFPACHCCode16r4 = 8,
	cc16_10_TDDFPACHCCode16r4 = 9,
	cc16_11_TDDFPACHCCode16r4 = 10,
	cc16_12_TDDFPACHCCode16r4 = 11,
	cc16_13_TDDFPACHCCode16r4 = 12,
	cc16_14_TDDFPACHCCode16r4 = 13,
	cc16_15_TDDFPACHCCode16r4 = 14,
	cc16_16_TDDFPACHCCode16r4 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDFPACHCCode16r4;

typedef Integer<CONSTRAINED, 1, 4> WiLCR;

class FPACHInfor4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	FPACHInfor4(): Sequence(&theInfo) {}
};

class PRACHInformationLCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PRACHInformationLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHInformationLCR, CONSTRAINED, 1, maxPRACH_FPACH> PRACHInformationLCRList;

class ERUCCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	ERUCCHInfoTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 10> ReferenceBetaQPSKReferenceCodeRate;

typedef Integer<CONSTRAINED, -15, 16> ReferenceBetaQPSKReferenceBeta;

class ReferenceBetaQPSK : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReferenceBetaQPSK(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReferenceBetaQPSK, CONSTRAINED, 1, 8> ETFCSInfoReferenceBetaQPSKList;

typedef Integer<CONSTRAINED, 0, 10> ReferenceBeta16QAMReferenceCodeRate;

typedef Integer<CONSTRAINED, -15, 16> ReferenceBeta16QAMReferenceBeta;

class ReferenceBeta16QAM : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ReferenceBeta16QAM(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReferenceBeta16QAM, CONSTRAINED, 1, 8> ETFCSInfoReferenceBeta16QAMList;

class ETFCSInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ETFCSInfo(): Sequence(&theInfo) {}
};

enum EPUCHInfoTDD128snpl_ReportTypeValues {
	type1_EPUCHInfoTDD128snpl_ReportType = 0,
	type2_EPUCHInfoTDD128snpl_ReportType = 1,
};
typedef Enumerated<CONSTRAINED, 1> EPUCHInfoTDD128snpl_ReportType;

typedef Integer<CONSTRAINED, -112, -50> EPUCHInfoTDD128PrxBASEdes;

typedef Boolean EPUCHInfoTDD128BeaconPLEst;

typedef Integer<CONSTRAINED, 1, 255> EPUCHInfoTDD128PebasePowerControlGAP;

typedef Integer<CONSTRAINED, 1, 8> ULSynchronisationParametersr4StepSize;

typedef Integer<CONSTRAINED, 1, 8> ULSynchronisationParametersr4Frequency;

class ULSynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULSynchronisationParametersr4(): Sequence(&theInfo) {}
};

typedef Null EPUCHTSSlotsLCRMidambleAllocationModeDefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> EPUCHTSSlotsLCRMidambleAllocationModeUeSpecificMidamble;

class EPUCHTSSlotsLCRMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EPUCHTSSlotsLCRMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> EPUCHTSSlotsLCRMidambleConfiguration;

class EPUCHTSSlotsLCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EPUCHTSSlotsLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EPUCHTSSlotsLCR, CONSTRAINED, 1, maxTS_LCR_1> EPUCHInfoTDD128EPUCHTSConfigurationList;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoTDD128MinimumAllowedCodeRate;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoTDD128MaximumAllowedCodeRate;

typedef Integer<CONSTRAINED, 0, 15> EPUCHInfoTDD128MaximumNumOfRetransSchedInfo;

enum EPUCHInfoTDD128retransTimerForSchedInfoValues {
	ms10_EPUCHInfoTDD128retransTimerForSchedInfo = 0,
	ms15_EPUCHInfoTDD128retransTimerForSchedInfo = 1,
	ms20_EPUCHInfoTDD128retransTimerForSchedInfo = 2,
	ms25_EPUCHInfoTDD128retransTimerForSchedInfo = 3,
	ms30_EPUCHInfoTDD128retransTimerForSchedInfo = 4,
	ms35_EPUCHInfoTDD128retransTimerForSchedInfo = 5,
	ms40_EPUCHInfoTDD128retransTimerForSchedInfo = 6,
	ms45_EPUCHInfoTDD128retransTimerForSchedInfo = 7,
	ms50_EPUCHInfoTDD128retransTimerForSchedInfo = 8,
	ms55_EPUCHInfoTDD128retransTimerForSchedInfo = 9,
	ms60_EPUCHInfoTDD128retransTimerForSchedInfo = 10,
	ms65_EPUCHInfoTDD128retransTimerForSchedInfo = 11,
	ms70_EPUCHInfoTDD128retransTimerForSchedInfo = 12,
	ms75_EPUCHInfoTDD128retransTimerForSchedInfo = 13,
	ms80_EPUCHInfoTDD128retransTimerForSchedInfo = 14,
	ms85_EPUCHInfoTDD128retransTimerForSchedInfo = 15,
	ms90_EPUCHInfoTDD128retransTimerForSchedInfo = 16,
	ms95_EPUCHInfoTDD128retransTimerForSchedInfo = 17,
	ms100_EPUCHInfoTDD128retransTimerForSchedInfo = 18,
	ms110_EPUCHInfoTDD128retransTimerForSchedInfo = 19,
	ms120_EPUCHInfoTDD128retransTimerForSchedInfo = 20,
	ms140_EPUCHInfoTDD128retransTimerForSchedInfo = 21,
	ms160_EPUCHInfoTDD128retransTimerForSchedInfo = 22,
	ms200_EPUCHInfoTDD128retransTimerForSchedInfo = 23,
	ms240_EPUCHInfoTDD128retransTimerForSchedInfo = 24,
	ms280_EPUCHInfoTDD128retransTimerForSchedInfo = 25,
	ms320_EPUCHInfoTDD128retransTimerForSchedInfo = 26,
	ms400_EPUCHInfoTDD128retransTimerForSchedInfo = 27,
	ms480_EPUCHInfoTDD128retransTimerForSchedInfo = 28,
	ms560_EPUCHInfoTDD128retransTimerForSchedInfo = 29,
};
typedef Enumerated<CONSTRAINED, 29> EPUCHInfoTDD128retransTimerForSchedInfo;

typedef Integer<CONSTRAINED, 0, 6> EPUCHInfoTDD128Dummy;

class EPUCHInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	EPUCHInfoTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 4, 15> EHICHInformationTDD128NEHICH;

typedef Integer<CONSTRAINED, 0, 3> EHICHInformationLCREi;

typedef Null EHICHInformationLCRMidambleAllocationModeDefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> EHICHInformationLCRMidambleAllocationModeUeSpecificMidamble;

class EHICHInformationLCRMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EHICHInformationLCRMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> EHICHInformationLCRMidambleConfiguration;

class EHICHInformationLCR : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EHICHInformationLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EHICHInformationLCR, CONSTRAINED, 1, maxNumE_HICH> EHICHInformationLCRList;

class EHICHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationTDD128(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationTDD128RdiIndicator;

typedef Null EAGCHIndividualLCRMidambleAllocationModeDefaultMidamble;

typedef Null EAGCHIndividualLCRMidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> EAGCHIndividualLCRMidambleAllocationModeUeSpecificMidamble;

class EAGCHIndividualLCRMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	EAGCHIndividualLCRMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> EAGCHIndividualLCRMidambleConfiguration;

class EAGCHIndividualLCR : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EAGCHIndividualLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividualLCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigLCR;

class EAGCHInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationTDD128(): Sequence(&theInfo) {}
};

enum CommonEDCHSystemInfoModeSpecificInfoTddTdd128harq_InfoValues {
	rv0_CommonEDCHSystemInfoModeSpecificInfoTddTdd128harq_Info = 0,
	rvtable_CommonEDCHSystemInfoModeSpecificInfoTddTdd128harq_Info = 1,
};
typedef Enumerated<CONSTRAINED, 1> CommonEDCHSystemInfoModeSpecificInfoTddTdd128harq_Info;

typedef Integer<CONSTRAINED, 0, 7> CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoHarqMaximumNumberOfRetransmissions;

enum CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timerValues {
	ms10_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 0,
	ms15_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 1,
	ms20_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 2,
	ms25_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 3,
	ms30_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 4,
	ms35_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 5,
	ms40_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 6,
	ms45_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 7,
	ms50_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 8,
	ms55_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 9,
	ms60_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 10,
	ms65_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 11,
	ms70_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 12,
	ms75_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 13,
	ms80_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 14,
	ms85_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 15,
	ms90_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 16,
	ms95_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 17,
	ms100_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 18,
	ms110_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 19,
	ms120_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 20,
	ms140_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 21,
	ms160_CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer = 22,
};
typedef Enumerated<CONSTRAINED, 22> CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoharq_retransmission_timer;

typedef Integer<CONSTRAINED, 0, 6> CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfoHarqpoweroffset;

class CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoModeSpecificInfoTddTdd128CcchtransmissionInfo(): Sequence(&theInfo) {}
};

class CommonEDCHSystemInfoModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class CommonEDCHSystemInfoModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class CommonEDCHSystemInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CommonEDCHSystemInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonEDCHSystemInfo(): Sequence(&theInfo) {}
};

typedef Boolean PRACHPreambleForEnhancedUplinkEaiIndication;

typedef Integer<CONSTRAINED, 0, 15> PreambleScramblingCodeWordNumber;

typedef SequenceOf<ASCSettingFDD, CONSTRAINED, 1, maxASC> PRACHPartitioningr7Fdd;

typedef SequenceOf<ASCSettingTDDr7, CONSTRAINED, 1, maxASC> PRACHPartitioningr7Tdd;

class PRACHPartitioningr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHPartitioningr7(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, -10, 50> PrimaryCPICHTXPower;

typedef Integer<CONSTRAINED, 1, 8> PowerRampStep;

typedef Integer<CONSTRAINED, 1, 64> PreambleRetransMax;

class PRACHPowerOffset : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHPowerOffset(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 32> RACHTransmissionParametersMmax;

typedef Integer<CONSTRAINED, 0, 50> NB01;

class RACHTransmissionParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RACHTransmissionParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, 10> PRACHPreambleForEnhancedUplinkPowerOffsetPpe;

class PRACHPreambleForEnhancedUplink : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	PRACHPreambleForEnhancedUplink(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> CommonEDCHSystemInfoFDDInitialServingGrantValue;

enum CommonEDCHSystemInfoFDDharq_InfoValues {
	rv0_CommonEDCHSystemInfoFDDharq_Info = 0,
	rvtable_CommonEDCHSystemInfoFDDharq_Info = 1,
};
typedef Enumerated<CONSTRAINED, 1> CommonEDCHSystemInfoFDDharq_Info;

class ULDPCHpowerControlInfoForCommonEDCH : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHpowerControlInfoForCommonEDCH(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8> EDPCCHDPCCHPowerOffset;

enum HappyBitDelayConditionValues {
	ms2_HappyBitDelayCondition = 0,
	ms10_HappyBitDelayCondition = 1,
	ms20_HappyBitDelayCondition = 2,
	ms50_HappyBitDelayCondition = 3,
	ms100_HappyBitDelayCondition = 4,
	ms200_HappyBitDelayCondition = 5,
	ms500_HappyBitDelayCondition = 6,
	ms1000_HappyBitDelayCondition = 7,
};
typedef Enumerated<CONSTRAINED, 7> HappyBitDelayCondition;

typedef Integer<CONSTRAINED, 0, 127> ETFCBoostInfor7ETFCIBoost;

typedef Integer<CONSTRAINED, 0, 6> ETFCBoostInfor7DeltaT2TP;

class ETFCBoostInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ETFCBoostInfor7(): Sequence(&theInfo) {}
};

typedef Boolean EDPDCHPowerInterpolation;

class EDPCCHInfor7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EDPCCHInfor7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1> ETFCITableIndex;

typedef Integer<CONSTRAINED, 0, 127> EDPDCHReferenceETFCIr7ReferenceETFCI;

typedef Integer<CONSTRAINED, 0, 31> EDPDCHReferenceETFCIr7ReferenceETFCIPOr7;

class EDPDCHReferenceETFCIr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCIr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDPDCHReferenceETFCIr7, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIListr7;

enum EDPDCHMaxChannelisationCodesValues {
	sf256_EDPDCHMaxChannelisationCodes = 0,
	sf128_EDPDCHMaxChannelisationCodes = 1,
	sf64_EDPDCHMaxChannelisationCodes = 2,
	sf32_EDPDCHMaxChannelisationCodes = 3,
	sf16_EDPDCHMaxChannelisationCodes = 4,
	sf8_EDPDCHMaxChannelisationCodes = 5,
	sf4_EDPDCHMaxChannelisationCodes = 6,
	sf4x2_EDPDCHMaxChannelisationCodes = 7,
	sf2x2_EDPDCHMaxChannelisationCodes = 8,
	sf4x2_and_sf2x2_EDPDCHMaxChannelisationCodes = 9,
};
typedef Enumerated<CONSTRAINED, 9> EDPDCHMaxChannelisationCodes;

typedef Integer<CONSTRAINED, 11, 25> EDPDCHPLNonMax;

enum EDPDCHPeriodicyOfSchedInfoValues {
	everyEDCHTTI_EDPDCHPeriodicyOfSchedInfo = 0,
	ms4_EDPDCHPeriodicyOfSchedInfo = 1,
	ms10_EDPDCHPeriodicyOfSchedInfo = 2,
	ms20_EDPDCHPeriodicyOfSchedInfo = 3,
	ms50_EDPDCHPeriodicyOfSchedInfo = 4,
	ms100_EDPDCHPeriodicyOfSchedInfo = 5,
	ms200_EDPDCHPeriodicyOfSchedInfo = 6,
	ms500_EDPDCHPeriodicyOfSchedInfo = 7,
	ms1000_EDPDCHPeriodicyOfSchedInfo = 8,
};
typedef Enumerated<CONSTRAINED, 8> EDPDCHPeriodicyOfSchedInfo;

typedef Integer<CONSTRAINED, 0, 6> EDPDCHSchedulingInfoConfigurationPowerOffsetForSchedInfo;

class EDPDCHSchedulingInfoConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDPDCHSchedulingInfoConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfor8ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfor8TwoIndexStepThreshold;

class EDPDCHInfor8 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	EDPDCHInfor8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 10> CommonEDCHSystemInfoFDDDlFDPCHTPCcommandErrorRate;

typedef Integer<CONSTRAINED, 0, 15> CommonEDCHSystemInfoFDDAdditionalEDCHTransmitBackoff;

enum CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocationValues {
	tti8_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 0,
	tti12_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 1,
	tti16_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 2,
	tti20_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 3,
	tti24_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 4,
	tti32_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 5,
	tti40_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 6,
	tti80_CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation = 7,
};
typedef Enumerated<CONSTRAINED, 7> CommonEDCHSystemInfoFDDmax_CCCH_ResourceAllocation;

typedef Integer<CONSTRAINED, 8, 24> CommonEDCHSystemInfoFDDMaxPeriodForCollisionResolution;

enum CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffsetValues {
	tti0_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 0,
	tti4_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 1,
	tti8_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 2,
	tti16_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 3,
	tti24_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 4,
	tti40_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 5,
	tti80_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 6,
	infinity_CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset = 7,
};
typedef Enumerated<CONSTRAINED, 7> CommonEDCHSystemInfoFDDe_dch_TransmitContinuationOffset;

typedef Boolean CommonEDCHSystemInfoFDDAcknacksupportonHSDPCCH;

typedef SequenceOf<CommonEDCHResourceInfoList, CONSTRAINED, 1, maxEDCHs> CommonEDCHSystemInfoFDDCommonEDCHResourceInfoList;

class CommonEDCHSystemInfoFDD : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	CommonEDCHSystemInfoFDD(): Sequence(&theInfo) {}
};

class CommonTimeslotInfoMBMS : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CommonTimeslotInfoMBMS(): Sequence(&theInfo) {}
};

typedef Null RepetitionPeriodLengthAndOffsetRepetitionPeriod1;

typedef Null RepetitionPeriodLengthAndOffsetRepetitionPeriod2Length;

typedef Integer<CONSTRAINED, 0, 1> RepetitionPeriodLengthAndOffsetRepetitionPeriod2Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> RepetitionPeriodLengthAndOffsetRepetitionPeriod4Length;

typedef Integer<CONSTRAINED, 0, 3> RepetitionPeriodLengthAndOffsetRepetitionPeriod4Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 7> RepetitionPeriodLengthAndOffsetRepetitionPeriod8Length;

typedef Integer<CONSTRAINED, 0, 7> RepetitionPeriodLengthAndOffsetRepetitionPeriod8Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> RepetitionPeriodLengthAndOffsetRepetitionPeriod16Length;

typedef Integer<CONSTRAINED, 0, 15> RepetitionPeriodLengthAndOffsetRepetitionPeriod16Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod16 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod16(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 31> RepetitionPeriodLengthAndOffsetRepetitionPeriod32Length;

typedef Integer<CONSTRAINED, 0, 31> RepetitionPeriodLengthAndOffsetRepetitionPeriod32Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod32 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod32(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 63> RepetitionPeriodLengthAndOffsetRepetitionPeriod64Length;

typedef Integer<CONSTRAINED, 0, 63> RepetitionPeriodLengthAndOffsetRepetitionPeriod64Offset;

class RepetitionPeriodLengthAndOffsetRepetitionPeriod64 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffsetRepetitionPeriod64(): Sequence(&theInfo) {}
};

class RepetitionPeriodLengthAndOffset : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	RepetitionPeriodLengthAndOffset(): Choice(&theInfo) {}
};

class CommonTimeslotInfoSCCPCH : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CommonTimeslotInfoSCCPCH(): Sequence(&theInfo) {}
};

enum ControlChannelDRXCycleTDD128Values {
	sub_frames_1_ControlChannelDRXCycleTDD128 = 0,
	sub_frames_2_ControlChannelDRXCycleTDD128 = 1,
	sub_frames_4_ControlChannelDRXCycleTDD128 = 2,
	sub_frames_8_ControlChannelDRXCycleTDD128 = 3,
	sub_frames_16_ControlChannelDRXCycleTDD128 = 4,
	sub_frames_32_ControlChannelDRXCycleTDD128 = 5,
	sub_frames_64_ControlChannelDRXCycleTDD128 = 6,
	spare1_ControlChannelDRXCycleTDD128 = 7,
};
typedef Enumerated<CONSTRAINED, 7> ControlChannelDRXCycleTDD128;

enum EnablingDelayTDD128Values {
	radio_frames_0_EnablingDelayTDD128 = 0,
	radio_frames_1_EnablingDelayTDD128 = 1,
	radio_frames_2_EnablingDelayTDD128 = 2,
	radio_frames_4_EnablingDelayTDD128 = 3,
	radio_frames_8_EnablingDelayTDD128 = 4,
	radio_frames_16_EnablingDelayTDD128 = 5,
	radio_frames_32_EnablingDelayTDD128 = 6,
	radio_frames_64_EnablingDelayTDD128 = 7,
	radio_frames_128_EnablingDelayTDD128 = 8,
	spare7_EnablingDelayTDD128 = 9,
	spare6_EnablingDelayTDD128 = 10,
	spare5_EnablingDelayTDD128 = 11,
	spare4_EnablingDelayTDD128 = 12,
	spare3_EnablingDelayTDD128 = 13,
	spare2_EnablingDelayTDD128 = 14,
	infinity_EnablingDelayTDD128 = 15,
};
typedef Enumerated<CONSTRAINED, 15> EnablingDelayTDD128;

class ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationContinue(): Sequence(&theInfo) {}
};

enum HSSCCHDRXInactivityThresholdTDD128Values {
	sub_frames_1_HSSCCHDRXInactivityThresholdTDD128 = 0,
	sub_frames_2_HSSCCHDRXInactivityThresholdTDD128 = 1,
	sub_frames_4_HSSCCHDRXInactivityThresholdTDD128 = 2,
	sub_frames_8_HSSCCHDRXInactivityThresholdTDD128 = 3,
	sub_frames_16_HSSCCHDRXInactivityThresholdTDD128 = 4,
	sub_frames_32_HSSCCHDRXInactivityThresholdTDD128 = 5,
	sub_frames_64_HSSCCHDRXInactivityThresholdTDD128 = 6,
	sub_frames_128_HSSCCHDRXInactivityThresholdTDD128 = 7,
	sub_frames_256_HSSCCHDRXInactivityThresholdTDD128 = 8,
	sub_frames_512_HSSCCHDRXInactivityThresholdTDD128 = 9,
	spare6_HSSCCHDRXInactivityThresholdTDD128 = 10,
	spare5_HSSCCHDRXInactivityThresholdTDD128 = 11,
	spare4_HSSCCHDRXInactivityThresholdTDD128 = 12,
	spare3_HSSCCHDRXInactivityThresholdTDD128 = 13,
	spare2_HSSCCHDRXInactivityThresholdTDD128 = 14,
	infinity_HSSCCHDRXInactivityThresholdTDD128 = 15,
};
typedef Enumerated<CONSTRAINED, 15> HSSCCHDRXInactivityThresholdTDD128;

typedef Integer<CONSTRAINED, 0, 63> HSSCCHDRXInfoTDD128HSSCCHDRXOffset;

class HSSCCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSSCCHDRXInfoTDD128(): Sequence(&theInfo) {}
};

typedef Null EAGCHDRXInfoTDD128EAGCHDRXInfoTypeSameAsHSSCCH;

enum EAGCHInactivityMonitorThresholdTDD128Values {
	radio_frames_0_EAGCHInactivityMonitorThresholdTDD128 = 0,
	radio_frames_1_EAGCHInactivityMonitorThresholdTDD128 = 1,
	radio_frames_2_EAGCHInactivityMonitorThresholdTDD128 = 2,
	radio_frames_4_EAGCHInactivityMonitorThresholdTDD128 = 3,
	radio_frames_8_EAGCHInactivityMonitorThresholdTDD128 = 4,
	radio_frames_16_EAGCHInactivityMonitorThresholdTDD128 = 5,
	radio_frames_32_EAGCHInactivityMonitorThresholdTDD128 = 6,
	radio_frames_64_EAGCHInactivityMonitorThresholdTDD128 = 7,
	radio_frames_128_EAGCHInactivityMonitorThresholdTDD128 = 8,
	radio_frames_256_EAGCHInactivityMonitorThresholdTDD128 = 9,
	radio_frames_512_EAGCHInactivityMonitorThresholdTDD128 = 10,
	spare5_EAGCHInactivityMonitorThresholdTDD128 = 11,
	spare4_EAGCHInactivityMonitorThresholdTDD128 = 12,
	spare3_EAGCHInactivityMonitorThresholdTDD128 = 13,
	spare2_EAGCHInactivityMonitorThresholdTDD128 = 14,
	infinity_EAGCHInactivityMonitorThresholdTDD128 = 15,
};
typedef Enumerated<CONSTRAINED, 15> EAGCHInactivityMonitorThresholdTDD128;

typedef Integer<CONSTRAINED, 0, 63> EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParametersEAGCHDRXOffset;

class EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128EAGCHDRXInfoTypeEAGCHDRXParameters(): Sequence(&theInfo) {}
};

class EAGCHDRXInfoTDD128EAGCHDRXInfoType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128EAGCHDRXInfoType(): Choice(&theInfo) {}
};

class EAGCHDRXInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHDRXInfoTDD128(): Sequence(&theInfo) {}
};

class ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperationNewOperation(): Sequence(&theInfo) {}
};

class ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8ControlChannelDrxOperation(): Choice(&theInfo) {}
};

class ControlChannelDRXInfoTDD128r8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ControlChannelDRXInfoTDD128r8(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> DynamicPersistenceLevel;

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxTF_CPCH> DynamicPersistenceLevelTFList;

class CPCHPersistenceLevels : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CPCHPersistenceLevels(): Sequence(&theInfo) {}
};

typedef SequenceOf<CPCHPersistenceLevels, CONSTRAINED, 1, maxCPCHsets> CPCHPersistenceLevelsList;

typedef Integer<CONSTRAINED, -10, 10> DeltaPpm;

enum ULDPCCHSlotFormatValues {
	slf0_ULDPCCHSlotFormat = 0,
	slf1_ULDPCCHSlotFormat = 1,
	slf2_ULDPCCHSlotFormat = 2,
};
typedef Enumerated<CONSTRAINED, 2> ULDPCCHSlotFormat;

typedef Integer<CONSTRAINED, 1, 8> NStartMessage;

typedef Integer<CONSTRAINED, 0, 7> NEOT;

enum CPCHStatusIndicationModeValues {
	pa_mode_CPCHStatusIndicationMode = 0,
	pamsf_mode_CPCHStatusIndicationMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> CPCHStatusIndicationMode;

typedef Integer<CONSTRAINED, 0, 79> PCPCHChannelInfoPcpchULScramblingCode;

typedef Integer<CONSTRAINED, 0, 511> PCPCHChannelInfoPcpchDLChannelisationCode;

enum PCPLengthValues {
	as0_PCPLength = 0,
	as8_PCPLength = 1,
};
typedef Enumerated<CONSTRAINED, 1> PCPLength;

class UCSMInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UCSMInfo(): Sequence(&theInfo) {}
};

class PCPCHChannelInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PCPCHChannelInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<PCPCHChannelInfo, CONSTRAINED, 1, maxPCPCHs> PCPCHChannelInfoList;

class CPCHSetInfo : Sequence {
private:
	static const void *itemsInfo[16];
	static bool itemsPres[16];
public:
	static const Info theInfo;
	CPCHSetInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CPCHSetInfo, CONSTRAINED, 1, maxCPCHsets> CPCHSetInfoList;

enum CQIDTXTimerValues {
	sub_frames_0_CQIDTXTimer = 0,
	sub_frames_1_CQIDTXTimer = 1,
	sub_frames_2_CQIDTXTimer = 2,
	sub_frames_4_CQIDTXTimer = 3,
	sub_frames_8_CQIDTXTimer = 4,
	sub_frames_16_CQIDTXTimer = 5,
	sub_frames_32_CQIDTXTimer = 6,
	sub_frames_64_CQIDTXTimer = 7,
	sub_frames_128_CQIDTXTimer = 8,
	sub_frames_256_CQIDTXTimer = 9,
	sub_frames_512_CQIDTXTimer = 10,
	sub_frames_Infinity_CQIDTXTimer = 11,
	spare4_CQIDTXTimer = 12,
	spare3_CQIDTXTimer = 13,
	spare2_CQIDTXTimer = 14,
	spare1_CQIDTXTimer = 15,
};
typedef Enumerated<CONSTRAINED, 15> CQIDTXTimer;

typedef Integer<CONSTRAINED, -10, 5> CSICHPowerOffset;

typedef Integer<CONSTRAINED, 0, 599> DefaultDPCHOffsetValueFDD;

typedef Integer<CONSTRAINED, 0, 7> DefaultDPCHOffsetValueTDD;

typedef Integer<CONSTRAINED, 0, 30> DeltaSIR;

typedef Integer<CONSTRAINED, 1, 4096> DurationTimeInfo;

class TimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TimeInfo(): Sequence(&theInfo) {}
};

typedef Boolean IndividualTimeslotInfoTfciExistence;

typedef Null MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType1(): Sequence(&theInfo) {}
};

enum MidambleConfigurationBurstType2Values {
	ms3_MidambleConfigurationBurstType2 = 0,
	ms6_MidambleConfigurationBurstType2 = 1,
};
typedef Enumerated<CONSTRAINED, 1> MidambleConfigurationBurstType2;

typedef Null MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 5> MidambleShiftShort;

class MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType2(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeDefaultMidamble;

class MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType3MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstTypeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstTypeType3(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeBurstType : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstType : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstType(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfo(): Sequence(&theInfo) {}
};

class DLTSChannelisationCodesShortCodesRepresentationConsecutive : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortCodesRepresentationConsecutive(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 16, 16> DLTSChannelisationCodesShortCodesRepresentationBitmap;

class DLTSChannelisationCodesShortCodesRepresentation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortCodesRepresentation(): Choice(&theInfo) {}
};

class DLTSChannelisationCodesShort : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShort(): Sequence(&theInfo) {}
};

typedef Null DownlinkTimeslotsCodesMoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive;

class DownlinkAdditionalTimeslotsParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsParametersSameAsLast(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsParametersNewParameters(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsParameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslots(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslots, CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsTimeslotList;

class DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesMoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesMoreTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodes(): Sequence(&theInfo) {}
};

typedef SequenceOf<TFCSIdentity, CONSTRAINED, 0, maxCCTrCH> ULCCTrChTPCList;

class DLCCTrCh : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrCh(): Sequence(&theInfo) {}
};

class DLCCTrChr4TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr4TddOptionTdd384(): Sequence(&theInfo) {}
};

typedef Boolean IndividualTimeslotInfoLCRr4TfciExistence;

enum IndividualTimeslotInfoLCRr4modulationValues {
	mod_QPSK_IndividualTimeslotInfoLCRr4modulation = 0,
	mod_8PSK_IndividualTimeslotInfoLCRr4modulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> IndividualTimeslotInfoLCRr4modulation;

enum IndividualTimeslotInfoLCRr4ss_TPC_SymbolsValues {
	zero_IndividualTimeslotInfoLCRr4ss_TPC_Symbols = 0,
	one_IndividualTimeslotInfoLCRr4ss_TPC_Symbols = 1,
	sixteenOverSF_IndividualTimeslotInfoLCRr4ss_TPC_Symbols = 2,
};
typedef Enumerated<CONSTRAINED, 2> IndividualTimeslotInfoLCRr4ss_TPC_Symbols;

typedef Integer<CONSTRAINED, 1, 15> IndividualTimeslotInfoLCRr4AdditionalSSTPCSymbols;

class IndividualTimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4(): Sequence(&theInfo) {}
};

typedef Null DownlinkTimeslotsCodesLCRr4MoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive;

class DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4ParametersSameAsLast(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4ParametersNewParameters(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsLCRr4Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4Parameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsLCRr4, CONSTRAINED, 1, maxTS_LCR_1> DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsTimeslotList;

class DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesLCRr4MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesLCRr4MoreTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}
};

class DLCCTrChr4TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr4TddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCCTrChr4TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCCTrChr4TddOption(): Choice(&theInfo) {}
};

class DLCCTrChr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrChr4(): Sequence(&theInfo) {}
};

typedef Boolean IndividualTimeslotInfor7TfciExistence;

typedef Null MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType1(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType2(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeDefaultMidamble;

class MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType3MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTyper7BurstTypeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstTypeType3(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTyper7BurstTypeMbsfnBurstType4;

class MidambleShiftAndBurstTyper7BurstType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7BurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTyper7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTyper7(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfor7(): Sequence(&theInfo) {}
};

typedef Null DownlinkTimeslotsCodesr7MoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslotsConsecutive;

class DownlinkAdditionalTimeslotsr7ParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7ParametersSameAsLast(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsr7ParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7ParametersNewParameters(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsr7Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7Parameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsr7, CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslotsTimeslotList;

class DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesr7MoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesr7MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesr7MoreTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesr7(): Sequence(&theInfo) {}
};

class DLCCTrChr7TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr7TddOptionTdd384(): Sequence(&theInfo) {}
};

typedef Boolean IndividualTimeslotInfoVHCRTfciExistence;

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType1(): Sequence(&theInfo) {}
};

enum MidambleConfigurationBurstType2VHCRValues {
	ms4_MidambleConfigurationBurstType2VHCR = 0,
	ms8_MidambleConfigurationBurstType2VHCR = 1,
};
typedef Enumerated<CONSTRAINED, 1> MidambleConfigurationBurstType2VHCR;

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 7> MidambleShiftShortVHCR;

class MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType2(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeDefaultMidamble;

class MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType3MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCRBurstTypeType3 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstTypeType3(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeVHCRBurstTypeMbsfnBurstType4;

class MidambleShiftAndBurstTypeVHCRBurstType : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCRBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeVHCR(): Sequence(&theInfo) {}
};

class IndividualTimeslotInfoVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfoVHCR(): Sequence(&theInfo) {}
};

class DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCRCodesRepresentationConsecutive(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 32, 32> DLTSChannelisationCodesShortVHCRCodesRepresentationBitmap;

class DLTSChannelisationCodesShortVHCRCodesRepresentation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCRCodesRepresentation(): Choice(&theInfo) {}
};

class DLTSChannelisationCodesShortVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTSChannelisationCodesShortVHCR(): Sequence(&theInfo) {}
};

typedef Null DownlinkTimeslotsCodesVHCRMoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive;

class DownlinkAdditionalTimeslotsVHCRParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCRParametersSameAsLast(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsVHCRParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCRParametersNewParameters(): Sequence(&theInfo) {}
};

class DownlinkAdditionalTimeslotsVHCRParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCRParameters(): Choice(&theInfo) {}
};

class DownlinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DownlinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<DownlinkAdditionalTimeslotsVHCR, CONSTRAINED, 1, maxTS_1> DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsTimeslotList;

class DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesVHCRMoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesVHCRMoreTimeslots(): Choice(&theInfo) {}
};

class DownlinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DownlinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}
};

class DLCCTrChr7TddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr7TddOptionTdd768(): Sequence(&theInfo) {}
};

class DLCCTrChr7TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCCTrChr7TddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCCTrChr7TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLCCTrChr7TddOption(): Choice(&theInfo) {}
};

class DLCCTrChr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLCCTrChr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLCCTrCh, CONSTRAINED, 1, maxCCTrCH> DLCCTrChList;

typedef SequenceOf<DLCCTrChr7, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr7;

typedef SequenceOf<DLCCTrChr4, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListr4;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> DLCCTrChListToRemove;

typedef Integer<CONSTRAINED, 0, 3> SF512AndCodeNumberSf4;

typedef Integer<CONSTRAINED, 0, 7> SF512AndCodeNumberSf8;

typedef Integer<CONSTRAINED, 0, 15> SF512AndCodeNumberSf16;

typedef Integer<CONSTRAINED, 0, 31> SF512AndCodeNumberSf32;

typedef Integer<CONSTRAINED, 0, 63> SF512AndCodeNumberSf64;

typedef Integer<CONSTRAINED, 0, 127> SF512AndCodeNumberSf128;

typedef Integer<CONSTRAINED, 0, 255> SF512AndCodeNumberSf256;

typedef Integer<CONSTRAINED, 0, 511> SF512AndCodeNumberSf512;

class SF512AndCodeNumber : Choice {
private:
	static const void *choicesInfo[8];
public:
	static const Info theInfo;
	SF512AndCodeNumber(): Choice(&theInfo) {}
};

enum ScramblingCodeChangeValues {
	codeChange_ScramblingCodeChange = 0,
	noCodeChange_ScramblingCodeChange = 1,
};
typedef Enumerated<CONSTRAINED, 1> ScramblingCodeChange;

class DLChannelisationCode : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLChannelisationCode(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLChannelisationCode, CONSTRAINED, 1, maxDPCH_DLchan> DLChannelisationCodeList;

typedef Null DLDPCHInfoCommonCfnHandlingMaintain;

class DLDPCHInfoCommonCfnHandlingInitialise : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonCfnHandlingInitialise(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonCfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonCfnHandling(): Choice(&theInfo) {}
};

enum DPCModeValues {
	singleTPC_DPCMode = 0,
	tpcTripletInSoft_DPCMode = 1,
};
typedef Enumerated<CONSTRAINED, 1> DPCMode;

class DLDPCHPowerControlInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLDPCHPowerControlInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLDPCHPowerControlInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHPowerControlInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetPilotpdpdch;

class RestrictedTrCH : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	RestrictedTrCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<RestrictedTrCH, CONSTRAINED, 1, maxTrCH> RestrictedTrCHInfoList;

class Dlratematchingrestriction : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	Dlratematchingrestriction(): Sequence(&theInfo) {}
};

typedef Boolean DLDPCHInfoCommonModeSpecificInfoFddTfciExistence;

class DLDPCHInfoCommonModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLDPCHInfoCommonModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHInfoCommon : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommon(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> TGCFN;

class TGPSequenceTgpsStatusActivate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequenceTgpsStatusActivate(): Sequence(&theInfo) {}
};

typedef Null TGPSequenceTgpsStatusDeactivate;

class TGPSequenceTgpsStatus : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TGPSequenceTgpsStatus(): Choice(&theInfo) {}
};

enum TGMPValues {
	tdd_Measurement_TGMP = 0,
	fdd_Measurement_TGMP = 1,
	gsm_CarrierRSSIMeasurement_TGMP = 2,
	gsm_initialBSICIdentification_TGMP = 3,
	gsmBSICReconfirmation_TGMP = 4,
	multi_carrier_TGMP = 5,
};
typedef Enumerated<CONSTRAINED, 5> TGMP;

typedef Integer<CONSTRAINED, 0, 511> TGPRC;

typedef Integer<CONSTRAINED, 0, 14> TGSN;

typedef Integer<CONSTRAINED, 1, 14> TGL;

typedef Integer<CONSTRAINED, 15, 270> TGD;

typedef Integer<CONSTRAINED, 1, 144> TGPL;

enum RPPValues {
	mode0_RPP = 0,
	mode1_RPP = 1,
};
typedef Enumerated<CONSTRAINED, 1> RPP;

enum ITPValues {
	mode0_ITP = 0,
	mode1_ITP = 1,
};
typedef Enumerated<CONSTRAINED, 1> ITP;

enum ULCompressedModeMethodValues {
	sf_2_ULCompressedModeMethod = 0,
	higherLayerScheduling_ULCompressedModeMethod = 1,
};
typedef Enumerated<CONSTRAINED, 1> ULCompressedModeMethod;

enum DLCompressedModeMethodValues {
	dummy_DLCompressedModeMethod = 0,
	sf_2_DLCompressedModeMethod = 1,
	higherLayerScheduling_DLCompressedModeMethod = 2,
};
typedef Enumerated<CONSTRAINED, 2> DLCompressedModeMethod;

class ULDLModeUlanddl : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDLModeUlanddl(): Sequence(&theInfo) {}
};

class ULDLMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULDLMode(): Choice(&theInfo) {}
};

enum DLFrameTypeValues {
	dl_FrameTypeA_DLFrameType = 0,
	dl_FrameTypeB_DLFrameType = 1,
};
typedef Enumerated<CONSTRAINED, 1> DLFrameType;

typedef Integer<CONSTRAINED, 1, 128> NidentifyAbort;

typedef Integer<CONSTRAINED, 1, 20> TreconfirmAbort;

class TGPSConfigurationParams : Sequence {
private:
	static const void *itemsInfo[18];
	static bool itemsPres[18];
public:
	static const Info theInfo;
	TGPSConfigurationParams(): Sequence(&theInfo) {}
};

class TGPSequence : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TGPSequence(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequence, CONSTRAINED, 1, maxTGPS> TGPSequenceList;

class DPCHCompressedModeInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfo(): Sequence(&theInfo) {}
};

enum TXDiversityModeValues {
	noDiversity_TXDiversityMode = 0,
	sttd_TXDiversityMode = 1,
	closedLoopMode1_TXDiversityMode = 2,
	dummy_TXDiversityMode = 3,
};
typedef Enumerated<CONSTRAINED, 3> TXDiversityMode;

enum SFieldValues {
	e1bit_SField = 0,
	e2bits_SField = 1,
};
typedef Enumerated<CONSTRAINED, 1> SField;

class SSDTInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SSDTInformation(): Sequence(&theInfo) {}
};

class DLCommonInformationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLCommonInformationModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationModeSpecificInfo(): Choice(&theInfo) {}
};

class DLCommonInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformation(): Sequence(&theInfo) {}
};

typedef Null DLDPCHInfoCommonr4CfnHandlingMaintain;

class DLDPCHInfoCommonr4CfnHandlingInitialise : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4CfnHandlingInitialise(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonr4CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4CfnHandling(): Choice(&theInfo) {}
};

typedef Boolean DLDPCHInfoCommonr4ModeSpecificInfoFddTfciExistence;

class DLDPCHInfoCommonr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonr4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr4(): Sequence(&theInfo) {}
};

enum SSDTULValues {
	ul_SSDTUL = 0,
	ul_AndDL_SSDTUL = 1,
};
typedef Enumerated<CONSTRAINED, 1> SSDTUL;

class SSDTInformationr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SSDTInformationr4(): Sequence(&theInfo) {}
};

class DLCommonInformationr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd384;

typedef Boolean DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128TstdIndicator;

class DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr4ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCommonInformationr4ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr4ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class DLCommonInformationr4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr4ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLCommonInformationr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr4(): Sequence(&theInfo) {}
};

class DLCommonInformationr5ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr5ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd384;

typedef Boolean DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128TstdIndicator;

class DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr5ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCommonInformationr5ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr5ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class DLCommonInformationr5ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr5ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationr5ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr5ModeSpecificInfo(): Choice(&theInfo) {}
};

enum DLCommonInformationr5mac_hsResetIndicatorValues {
	true_DLCommonInformationr5mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr5mac_hsResetIndicator;

class DLCommonInformationr5 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLCommonInformationr5(): Sequence(&theInfo) {}
};

enum TimingMaintainedSynchIndValues {
	false_TimingMaintainedSynchInd = 0,
};
typedef Enumerated<CONSTRAINED, 0> TimingMaintainedSynchInd;

class DLDPCHInfoCommonr6CfnHandlingMaintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6CfnHandlingMaintain(): Sequence(&theInfo) {}
};

typedef Null DLDPCHInfoCommonr6CfnHandlingInitialise;

class DLDPCHInfoCommonr6CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6CfnHandling(): Choice(&theInfo) {}
};

typedef Boolean DLDPCHInfoCommonr6ModeSpecificInfoFddTfciExistence;

class DLDPCHInfoCommonr6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonr6ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoCommonr6(): Sequence(&theInfo) {}
};

class DLFDPCHInfoCommonr6CfnHandlingMaintain : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6CfnHandlingMaintain(): Sequence(&theInfo) {}
};

typedef Null DLFDPCHInfoCommonr6CfnHandlingInitialise;

class DLFDPCHInfoCommonr6CfnHandling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6CfnHandling(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> DLFDPCHInfoCommonr6DlFDPCHTPCcommandErrorRate;

class DLFDPCHInfoCommonr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLFDPCHInfoCommonr6(): Sequence(&theInfo) {}
};

class DLCommonInformationr6DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr6DldpchInfoCommon(): Choice(&theInfo) {}
};

class DLCommonInformationr6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLCommonInformationr6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd384;

typedef Boolean DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128TstdIndicator;

class DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr6ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCommonInformationr6ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr6ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class DLCommonInformationr6ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr6ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr6ModeSpecificInfo(): Choice(&theInfo) {}
};

enum DLCommonInformationr6mac_hsResetIndicatorValues {
	true_DLCommonInformationr6mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr6mac_hsResetIndicator;

enum DLCommonInformationr6postVerificationPeriodValues {
	true_DLCommonInformationr6postVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr6postVerificationPeriod;

class DLCommonInformationr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr6(): Sequence(&theInfo) {}
};

class DLCommonInformationr7DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr7DldpchInfoCommon(): Choice(&theInfo) {}
};

class DLCommonInformationr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLCommonInformationr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd384;

typedef Null DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd768;

typedef Boolean DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128TstdIndicator;

class DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr7ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCommonInformationr7ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLCommonInformationr7ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class DLCommonInformationr7ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr7ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr7ModeSpecificInfo(): Choice(&theInfo) {}
};

enum DLCommonInformationr7mac_hsResetIndicatorValues {
	true_DLCommonInformationr7mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr7mac_hsResetIndicator;

enum DLCommonInformationr7postVerificationPeriodValues {
	true_DLCommonInformationr7postVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr7postVerificationPeriod;

class DLCommonInformationr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr7(): Sequence(&theInfo) {}
};

class DLCommonInformationr8DldpchInfoCommon : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr8DldpchInfoCommon(): Choice(&theInfo) {}
};

class TGPSequencer8TgpsStatusActivate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequencer8TgpsStatusActivate(): Sequence(&theInfo) {}
};

typedef Null TGPSequencer8TgpsStatusDeactivate;

class TGPSequencer8TgpsStatus : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TGPSequencer8TgpsStatus(): Choice(&theInfo) {}
};

enum TGMPr8Values {
	tdd_Measurement_TGMPr8 = 0,
	fdd_Measurement_TGMPr8 = 1,
	gsm_CarrierRSSIMeasurement_TGMPr8 = 2,
	gsm_initialBSICIdentification_TGMPr8 = 3,
	gsmBSICReconfirmation_TGMPr8 = 4,
	multi_carrier_TGMPr8 = 5,
	e_UTRA_TGMPr8 = 6,
	spare_TGMPr8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TGMPr8;

class TGPSConfigurationParamsr8 : Sequence {
private:
	static const void *itemsInfo[17];
	static bool itemsPres[17];
public:
	static const Info theInfo;
	TGPSConfigurationParamsr8(): Sequence(&theInfo) {}
};

class TGPSequencer8 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	TGPSequencer8(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequencer8, CONSTRAINED, 1, maxTGPS> TGPSequenceListr8;

class DPCHCompressedModeInfor8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DPCHCompressedModeInfor8(): Sequence(&theInfo) {}
};

class DLCommonInformationr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLCommonInformationr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd384;

typedef Null DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd768;

typedef Boolean DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128TstdIndicator;

class DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationr8ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class DLCommonInformationr8ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLCommonInformationr8ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class DLCommonInformationr8ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLCommonInformationr8ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class DLCommonInformationr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLCommonInformationr8ModeSpecificInfo(): Choice(&theInfo) {}
};

enum DLCommonInformationr8mac_hsResetIndicatorValues {
	true_DLCommonInformationr8mac_hsResetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr8mac_hsResetIndicator;

enum DLCommonInformationr8postVerificationPeriodValues {
	true_DLCommonInformationr8postVerificationPeriod = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLCommonInformationr8postVerificationPeriod;

class DLCommonInformationr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLCommonInformationr8(): Sequence(&theInfo) {}
};

class DLDPCHInfoCommonPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoCommonPost(): Sequence(&theInfo) {}
};

class DLCommonInformationPost : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLCommonInformationPost(): Sequence(&theInfo) {}
};

enum SSDTCellIdentityValues {
	ssdt_id_a_SSDTCellIdentity = 0,
	ssdt_id_b_SSDTCellIdentity = 1,
	ssdt_id_c_SSDTCellIdentity = 2,
	ssdt_id_d_SSDTCellIdentity = 3,
	ssdt_id_e_SSDTCellIdentity = 4,
	ssdt_id_f_SSDTCellIdentity = 5,
	ssdt_id_g_SSDTCellIdentity = 6,
	ssdt_id_h_SSDTCellIdentity = 7,
};
typedef Enumerated<CONSTRAINED, 7> SSDTCellIdentity;

class DLDPCHInfoPerRLFdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLFdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLTdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLTdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRL : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRL(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr4Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4Fdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr4Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr4(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 24> PowerOffsetTPCpdpdch;

class DLDPCHInfoPerRLr5Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5Fdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr5Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr5(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr6Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6Fdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr6Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr6(): Choice(&theInfo) {}
};

class DLDPCHInfoPerRLr7Fdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7Fdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr7Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7Tdd(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLr7(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 255> DLFDPCHInfoPerRLr6DlChannelisationCode;

class DLFDPCHInfoPerRLr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLFDPCHInfoPerRLr6(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostFDD(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDD(): Sequence(&theInfo) {}
};

class DLDPCHInfoPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLDPCHInfoPerRLPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor6ModeSpecificInfoFddHSSCCHChannelisationCodeInfo;

class HSSCCHInfor6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor6ModeSpecificInfoTddTdd384Nackackpoweroffset;

typedef SequenceOf<HSSCCHTDD384r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor6ModeSpecificInfoTddTdd384HSSCCHSetConfiguration;

class HSSCCHInfor6ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -7, 8> HSSCCHInfor6ModeSpecificInfoTddTdd128Nackackpoweroffset;

typedef Integer<CONSTRAINED, -120, -58> HSSCCHInfor6ModeSpecificInfoTddTdd128PowerlevelHSSICH;

enum HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_sizeValues {
	s1_HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size = 0,
	s2_HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size = 1,
	s3_HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size = 2,
	spare1_HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHInfor6ModeSpecificInfoTddTdd128tpc_step_size;

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHInfor6ModeSpecificInfoTddTdd128HSSCCHSetConfiguration;

class HSSCCHInfor6ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HSSCCHInfor6ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HSSCCHInfor6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfor6ModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor6(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6ModeSpecificInfoTddTdd384(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr6ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

typedef Null DLHSPDSCHInformationr6ModeSpecificInfoFdd;

class DLHSPDSCHInformationr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr6(): Sequence(&theInfo) {}
};

typedef Null DLHSPDSCHInformationr8extModeSpecificInfoTddTdd384;

typedef Null DLHSPDSCHInformationr8extModeSpecificInfoTddTdd768;

class DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8extModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8extModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8extModeSpecificInfoTdd(): Choice(&theInfo) {}
};

typedef Null DLHSPDSCHInformationr8extModeSpecificInfoFdd;

class DLHSPDSCHInformationr8extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8extModeSpecificInfo(): Choice(&theInfo) {}
};

class DLHSPDSCHInformationr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext(): Sequence(&theInfo) {}
};

typedef Null HSSCCHInfor8extModeSpecificInfoFdd;

typedef Null HSSCCHInfor8extModeSpecificInfoTddTdd384;

typedef Null HSSCCHInfor8extModeSpecificInfoTddTdd768;

enum HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_sizeValues {
	s1_HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 0,
	s2_HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 1,
	s3_HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 2,
	spare1_HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHInfor8extModeSpecificInfoTddTdd128hS_SCCH_tpc_step_size;

class HSSCCHInfor8extModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor8extModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

class HSSCCHInfor8extModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHInfor8extModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class HSSCCHInfor8extModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHInfor8extModeSpecificInfo(): Choice(&theInfo) {}
};

class HSSCCHInfor8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHInfor8ext(): Sequence(&theInfo) {}
};

class DLHSPDSCHInformationr8ext2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLHSPDSCHInformationr8ext2(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 511> DSCHRadioLinkIdentifier;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLIdentifierList;

class PDSCHSHODCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHSHODCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 1023> MaxTFCIField2Value;

class DSCHMapping : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DSCHMapping(): Sequence(&theInfo) {}
};

typedef SequenceOf<DSCHMapping, CONSTRAINED, 1, maxPDSCH_TFCIgroups> DSCHMappingList;

class PDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCodeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> PDSCHCodeInfoList;

class ReplacedPDSCHCodeInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ReplacedPDSCHCodeInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<ReplacedPDSCHCodeInfo, CONSTRAINED, 1, maxTFCI_2_Combs> ReplacedPDSCHCodeInfoList;

class PDSCHCodeMappingSignallingMethod : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	PDSCHCodeMappingSignallingMethod(): Choice(&theInfo) {}
};

class PDSCHCodeMapping : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCodeMapping(): Sequence(&theInfo) {}
};

class DLInformationPerRLModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoFddTxDiversityIndicator;

class PrimaryCCPCHInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoFdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfoTddSyncCaseSyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoTddSyncCaseSyncCase1(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> TimeslotSync2;

class PrimaryCCPCHInfoTddSyncCaseSyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoTddSyncCaseSyncCase2(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfoTddSyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoTddSyncCase(): Choice(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoTddSctdIndicator;

class PrimaryCCPCHInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoTdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Boolean SecondaryCCPCHInfoModeSpecificInfoFddSttdIndicator;

typedef Integer<CONSTRAINED, 0, 3> SF256AndCodeNumberSf4;

typedef Integer<CONSTRAINED, 0, 7> SF256AndCodeNumberSf8;

typedef Integer<CONSTRAINED, 0, 15> SF256AndCodeNumberSf16;

typedef Integer<CONSTRAINED, 0, 31> SF256AndCodeNumberSf32;

typedef Integer<CONSTRAINED, 0, 63> SF256AndCodeNumberSf64;

typedef Integer<CONSTRAINED, 0, 127> SF256AndCodeNumberSf128;

typedef Integer<CONSTRAINED, 0, 255> SF256AndCodeNumberSf256;

class SF256AndCodeNumber : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	SF256AndCodeNumber(): Choice(&theInfo) {}
};

typedef Boolean SecondaryCCPCHInfoModeSpecificInfoFddPilotSymbolExistence;

typedef Boolean SecondaryCCPCHInfoModeSpecificInfoFddTfciExistence;

typedef Integer<CONSTRAINED, 0, 149> TimingOffset;

class SecondaryCCPCHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum SCCPCHChannelisationCodeValues {
	cc16_1_SCCPCHChannelisationCode = 0,
	cc16_2_SCCPCHChannelisationCode = 1,
	cc16_3_SCCPCHChannelisationCode = 2,
	cc16_4_SCCPCHChannelisationCode = 3,
	cc16_5_SCCPCHChannelisationCode = 4,
	cc16_6_SCCPCHChannelisationCode = 5,
	cc16_7_SCCPCHChannelisationCode = 6,
	cc16_8_SCCPCHChannelisationCode = 7,
	cc16_9_SCCPCHChannelisationCode = 8,
	cc16_10_SCCPCHChannelisationCode = 9,
	cc16_11_SCCPCHChannelisationCode = 10,
	cc16_12_SCCPCHChannelisationCode = 11,
	cc16_13_SCCPCHChannelisationCode = 12,
	cc16_14_SCCPCHChannelisationCode = 13,
	cc16_15_SCCPCHChannelisationCode = 14,
	cc16_16_SCCPCHChannelisationCode = 15,
};
typedef Enumerated<CONSTRAINED, 15> SCCPCHChannelisationCode;

typedef SequenceOf<SCCPCHChannelisationCode, CONSTRAINED, 1, 16> SCCPCHChannelisationCodeList;

class SecondaryCCPCHInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfo(): Sequence(&theInfo) {}
};

typedef Boolean FACHPCHInformationCtchIndicator;

class FACHPCHInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	FACHPCHInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<FACHPCHInformation, CONSTRAINED, 1, maxFACHPCH> FACHPCHInformationList;

typedef Integer<CONSTRAINED, 1, 256> PLMNValueTag;

typedef Integer<CONSTRAINED, 1, 4> CellValueTag;

typedef Null SIBTypeAndTagSysInfoType7;

typedef Null SIBTypeAndTagDummy2;

typedef Null SIBTypeAndTagDummy3;

typedef Null SIBTypeAndTagSysInfoType14;

class PredefinedConfigIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PredefinedConfigIdentityAndValueTag(): Sequence(&theInfo) {}
};

typedef Null SIBTypeAndTagSysInfoType17;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurIdentity;

typedef Integer<CONSTRAINED, 0, 15> SIBOccurValueTag;

class SIBOccurrenceIdentityAndValueTag : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SIBOccurrenceIdentityAndValueTag(): Sequence(&theInfo) {}
};

typedef Null SIBTypeAndTagSpare4;

typedef Null SIBTypeAndTagSpare3;

typedef Null SIBTypeAndTagSpare2;

typedef Null SIBTypeAndTagSpare1;

class SIBTypeAndTag : Choice {
private:
	static const void *choicesInfo[32];
public:
	static const Info theInfo;
	SIBTypeAndTag(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 16> SegCount;

typedef Integer<CONSTRAINED, 0, 1> SchedulingInformationSchedulingSibPosRep4;

typedef Integer<CONSTRAINED, 0, 3> SchedulingInformationSchedulingSibPosRep8;

typedef Integer<CONSTRAINED, 0, 7> SchedulingInformationSchedulingSibPosRep16;

typedef Integer<CONSTRAINED, 0, 15> SchedulingInformationSchedulingSibPosRep32;

typedef Integer<CONSTRAINED, 0, 31> SchedulingInformationSchedulingSibPosRep64;

typedef Integer<CONSTRAINED, 0, 63> SchedulingInformationSchedulingSibPosRep128;

typedef Integer<CONSTRAINED, 0, 127> SchedulingInformationSchedulingSibPosRep256;

typedef Integer<CONSTRAINED, 0, 255> SchedulingInformationSchedulingSibPosRep512;

typedef Integer<CONSTRAINED, 0, 511> SchedulingInformationSchedulingSibPosRep1024;

typedef Integer<CONSTRAINED, 0, 1023> SchedulingInformationSchedulingSibPosRep2048;

typedef Integer<CONSTRAINED, 0, 2047> SchedulingInformationSchedulingSibPosRep4096;

class SchedulingInformationSchedulingSibPos : Choice {
private:
	static const void *choicesInfo[11];
public:
	static const Info theInfo;
	SchedulingInformationSchedulingSibPos(): Choice(&theInfo) {}
};

enum SibOFFValues {
	so2_SibOFF = 0,
	so4_SibOFF = 1,
	so6_SibOFF = 2,
	so8_SibOFF = 3,
	so10_SibOFF = 4,
	so12_SibOFF = 5,
	so14_SibOFF = 6,
	so16_SibOFF = 7,
	so18_SibOFF = 8,
	so20_SibOFF = 9,
	so22_SibOFF = 10,
	so24_SibOFF = 11,
	so26_SibOFF = 12,
	so28_SibOFF = 13,
	so30_SibOFF = 14,
	so32_SibOFF = 15,
};
typedef Enumerated<CONSTRAINED, 15> SibOFF;

typedef SequenceOf<SibOFF, CONSTRAINED, 1, 15> SibOFFList;

class SchedulingInformationScheduling : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SchedulingInformationScheduling(): Sequence(&theInfo) {}
};

class SchedulingInformation : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SchedulingInformation(): Sequence(&theInfo) {}
};

class SchedulingInformationSIB : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SchedulingInformationSIB(): Sequence(&theInfo) {}
};

typedef SequenceOf<SchedulingInformationSIB, CONSTRAINED, 1, maxSIB_FACH> SIBReferenceListFACH;

class SCCPCHInfoForFACHModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class SCCPCHInfoForFACHModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class SCCPCHInfoForFACHModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHModeSpecificInfo(): Choice(&theInfo) {}
};

class SCCPCHInfoForFACH : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SCCPCHInfoForFACH(): Sequence(&theInfo) {}
};

class DLInformationPerRL : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRL(): Sequence(&theInfo) {}
};

class DLInformationPerRLr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfor4FddTxDiversityIndicator;

class PrimaryCCPCHInfor4Fdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4Fdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase1(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCaseSyncCase2(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768SyncCase(): Choice(&theInfo) {}
};

class PrimaryCCPCHInfor4TddTddOptionTdd384tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOptionTdd384tdd768(): Sequence(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfor4TddTddOptionTdd128TstdIndicator;

class PrimaryCCPCHInfor4TddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOptionTdd128(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4TddTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4TddTddOption(): Choice(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfor4TddSctdIndicator;

class PrimaryCCPCHInfor4Tdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4Tdd(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfor4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfor4(): Choice(&theInfo) {}
};

class DLInformationPerRLr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr4ModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Boolean SecondaryCCPCHInfor4ModeSpecificInfoFddSttdIndicator;

typedef Boolean SecondaryCCPCHInfor4ModeSpecificInfoFddPilotSymbolExistence;

typedef Boolean SecondaryCCPCHInfor4ModeSpecificInfoFddTfciExistence;

class SecondaryCCPCHInfor4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd384(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOptionTdd128(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfoTddTddOption(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfor4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfor4(): Sequence(&theInfo) {}
};

class SCCPCHInfoForFACHr4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHr4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null SCCPCHInfoForFACHr4ModeSpecificInfoTdd;

class SCCPCHInfoForFACHr4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHr4ModeSpecificInfo(): Choice(&theInfo) {}
};

class SCCPCHInfoForFACHr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHInfoForFACHr4(): Sequence(&theInfo) {}
};

class DLInformationPerRLr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr4(): Sequence(&theInfo) {}
};

typedef Boolean DLInformationPerRLr5ModeSpecificInfoFddServingHSDSCHRLindicator;

class DLInformationPerRLr5ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr5ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr5ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr5ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr5(): Sequence(&theInfo) {}
};

class DLInformationPerRLr5bisModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLr5bisModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr5bisModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr5bisModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr5bis : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLInformationPerRLr5bis(): Sequence(&theInfo) {}
};

typedef Boolean DLInformationPerRLr6ModeSpecificInfoFddServingHSDSCHRLindicator;

typedef Boolean DLInformationPerRLr6ModeSpecificInfoFddServingEDCHRLindicator;

class DLInformationPerRLr6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLr6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr6DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr6DldpchInfo(): Choice(&theInfo) {}
};

typedef Null DLInformationPerRLr6EHICHInfoReleaseIndicator;

class DLInformationPerRLr6EHICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr6EHICHInfo(): Choice(&theInfo) {}
};

typedef Null DLInformationPerRLr6ERGCHInfoReleaseIndicator;

class DLInformationPerRLr6ERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr6ERGCHInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr6 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	DLInformationPerRLr6(): Sequence(&theInfo) {}
};

class DLInformationPerRLv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLv6b0ext(): Sequence(&theInfo) {}
};

typedef Boolean DLInformationPerRLr7ModeSpecificInfoFddServingHSDSCHRLindicator;

typedef Boolean DLInformationPerRLr7ModeSpecificInfoFddServingEDCHRLindicator;

class DLInformationPerRLr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr7DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7DldpchInfo(): Choice(&theInfo) {}
};

class EAGCHInformationr7ModeSpecificFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecificFdd(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr7ModeSpecificTddTdd384LongTermGrantIndicator;

typedef Integer<CONSTRAINED, 1, 12> EAGCHInformationr7ModeSpecificTddTdd384LengthofTTRIfield;

typedef Integer<CONSTRAINED, 0, 14> EAGCHIndividualTSnumber;

enum MidambleConfigurationBurstType1Values {
	ms4_MidambleConfigurationBurstType1 = 0,
	ms8_MidambleConfigurationBurstType1 = 1,
	ms16_MidambleConfigurationBurstType1 = 2,
};
typedef Enumerated<CONSTRAINED, 2> MidambleConfigurationBurstType1;

typedef Null MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCHBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType1(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCHBurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstTypeType2(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCHBurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCHBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeEDCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeEDCH(): Sequence(&theInfo) {}
};

class EAGCHIndividual : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EAGCHIndividual(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividual, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfig;

class EAGCHInformationr7ModeSpecificTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecificTddTdd384(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr7ModeSpecificTddTdd768LongTermGrantIndicator;

typedef Integer<CONSTRAINED, 1, 12> EAGCHInformationr7ModeSpecificTddTdd768LengthofTTRIfield;

typedef Integer<CONSTRAINED, 0, 14> EAGCHIndividualVHCRTSnumber;

class EAGCHIndividualVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EAGCHIndividualVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<EAGCHIndividualVHCR, CONSTRAINED, 1, maxNumE_AGCH> EAGCHSetConfigVHCR;

class EAGCHInformationr7ModeSpecificTddTdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecificTddTdd768(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr7ModeSpecificTddTdd128RdiIndicator;

class EAGCHInformationr7ModeSpecificTddTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecificTddTdd128(): Sequence(&theInfo) {}
};

class EAGCHInformationr7ModeSpecificTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecificTdd(): Choice(&theInfo) {}
};

class EAGCHInformationr7ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EAGCHInformationr7ModeSpecific(): Choice(&theInfo) {}
};

class EAGCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr7(): Sequence(&theInfo) {}
};

typedef Null DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfoReleaseIndicator;

class DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2FddEHICHInfo(): Choice(&theInfo) {}
};

typedef Null DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfoReleaseIndicator;

class DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2FddERGCHInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo2Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2Fdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 4, 44> EHICHInformationTDD384768NEHICH;

typedef Integer<CONSTRAINED, 0, 14> EHICHInformationTDD384768TSNumber;

class EHICHInformationTDD384768ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EHICHInformationTDD384768ModeSpecificInfo(): Choice(&theInfo) {}
};

enum EHICHInformationTDD384768burst_TypeValues {
	type1_EHICHInformationTDD384768burst_Type = 0,
	type2_EHICHInformationTDD384768burst_Type = 1,
};
typedef Enumerated<CONSTRAINED, 1> EHICHInformationTDD384768burst_Type;

enum EHICHInformationTDD384768midamble_Allocation_ModeValues {
	default_EHICHInformationTDD384768midamble_Allocation_Mode = 0,
	common_EHICHInformationTDD384768midamble_Allocation_Mode = 1,
};
typedef Enumerated<CONSTRAINED, 1> EHICHInformationTDD384768midamble_Allocation_Mode;

class EHICHInformationTDD384768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EHICHInformationTDD384768(): Sequence(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2TddTdd384tdd768(): Sequence(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo2TddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2TddTdd128(): Sequence(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo2Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2Tdd(): Choice(&theInfo) {}
};

class DLInformationPerRLr7ModeSpecificInfo2 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr7ModeSpecificInfo2(): Choice(&theInfo) {}
};

class DLInformationPerRLr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLInformationPerRLr7(): Sequence(&theInfo) {}
};

typedef Boolean DLInformationPerRLr8ModeSpecificInfoFddServingHSDSCHRLindicator;

typedef Boolean DLInformationPerRLr8ModeSpecificInfoFddServingEDCHRLindicator;

class DLInformationPerRLr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr8DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8DldpchInfo(): Choice(&theInfo) {}
};

class EAGCHInformationr8ModeSpecificFdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecificFdd(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr8ModeSpecificTddTdd384LongTermGrantIndicator;

typedef Integer<CONSTRAINED, 1, 12> EAGCHInformationr8ModeSpecificTddTdd384LengthofTTRIfield;

class EAGCHInformationr8ModeSpecificTddTdd384 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecificTddTdd384(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr8ModeSpecificTddTdd768LongTermGrantIndicator;

typedef Integer<CONSTRAINED, 1, 12> EAGCHInformationr8ModeSpecificTddTdd768LengthofTTRIfield;

class EAGCHInformationr8ModeSpecificTddTdd768 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecificTddTdd768(): Sequence(&theInfo) {}
};

typedef Boolean EAGCHInformationr8ModeSpecificTddTdd128RdiIndicator;

class EAGCHInformationr8ModeSpecificTddTdd128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecificTddTdd128(): Sequence(&theInfo) {}
};

class EAGCHInformationr8ModeSpecificTdd : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecificTdd(): Choice(&theInfo) {}
};

class EAGCHInformationr8ModeSpecific : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EAGCHInformationr8ModeSpecific(): Choice(&theInfo) {}
};

class EAGCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EAGCHInformationr8(): Sequence(&theInfo) {}
};

typedef Null DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfoReleaseIndicator;

class DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2FddEHICHInfo(): Choice(&theInfo) {}
};

typedef Null DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfoReleaseIndicator;

class DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2FddERGCHInfo(): Choice(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo2Fdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2Fdd(): Sequence(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2TddTdd384tdd768(): Sequence(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo2TddTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2TddTdd128(): Sequence(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo2Tdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2Tdd(): Choice(&theInfo) {}
};

class DLInformationPerRLr8ModeSpecificInfo2 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLInformationPerRLr8ModeSpecificInfo2(): Choice(&theInfo) {}
};

class DLInformationPerRLr8 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DLInformationPerRLr8(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerRL, CONSTRAINED, 1, maxRL> DLInformationPerRLList;

typedef SequenceOf<DLInformationPerRLr4, CONSTRAINED, 1, maxRL> DLInformationPerRLListr4;

typedef SequenceOf<DLInformationPerRLr5, CONSTRAINED, 1, maxRL> DLInformationPerRLListr5;

typedef SequenceOf<DLInformationPerRLr6, CONSTRAINED, 1, maxRL> DLInformationPerRLListr6;

typedef SequenceOf<DLInformationPerRLv6b0ext, CONSTRAINED, 1, maxRL> DLInformationPerRLListv6b0ext;

typedef SequenceOf<DLInformationPerRLr5bis, CONSTRAINED, 1, maxRL> DLInformationPerRLListr5bis;

typedef SequenceOf<DLInformationPerRLr7, CONSTRAINED, 1, maxRL> DLInformationPerRLListr7;

typedef SequenceOf<DLInformationPerRLr8, CONSTRAINED, 1, maxRL> DLInformationPerRLListr8;

class DLInformationPerRLPostFDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostFDD(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLInformationPerRLPostFDD, CONSTRAINED, 1, maxRL> DLInformationPerRLListPostFDD;

class PrimaryCCPCHInfoPostSyncCaseSyncCase1 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostSyncCaseSyncCase1(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfoPostSyncCaseSyncCase2 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostSyncCaseSyncCase2(): Sequence(&theInfo) {}
};

class PrimaryCCPCHInfoPostSyncCase : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostSyncCase(): Choice(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoPostSctdIndicator;

class PrimaryCCPCHInfoPost : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPost(): Sequence(&theInfo) {}
};

class DLInformationPerRLPostTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDD(): Sequence(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoPostTDDLCRr4TstdIndicator;

typedef Boolean PrimaryCCPCHInfoPostTDDLCRr4SctdIndicator;

class PrimaryCCPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

class DLInformationPerRLPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLInformationPerRLPostTDDLCRr4(): Sequence(&theInfo) {}
};

class DLPDSCHInformation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLPDSCHInformation(): Sequence(&theInfo) {}
};

typedef Null DLSecondaryCellInfoFDDContinue;

enum DLSecondaryCellInfoFDDNewConfigurationdl_64QAM_ConfiguredValues {
	true_DLSecondaryCellInfoFDDNewConfigurationdl_64QAM_Configured = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLSecondaryCellInfoFDDNewConfigurationdl_64QAM_Configured;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> DLSecondaryCellInfoFDDNewConfigurationHSSCCHChannelisationCodeInfo;

class DLSecondaryCellInfoFDDNewConfiguration : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDNewConfiguration(): Sequence(&theInfo) {}
};

class DLSecondaryCellInfoFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDD(): Choice(&theInfo) {}
};

enum DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCellValues {
	different_DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLSecondaryCellInfoFDDv890extdifferentTxModeFromServingHS_DSCHCell;

class DLSecondaryCellInfoFDDv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDv890ext(): Sequence(&theInfo) {}
};

typedef Null DLSecondaryCellInfoFDDr9ConfigurationInfoContinue;

enum DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdl_64QAM_ConfiguredValues {
	true_DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdl_64QAM_Configured = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdl_64QAM_Configured;

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationHSSCCHChannelisationCodeInfo;

enum DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdifferentTxModeFromServingHS_DSCHCellValues {
	different_DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdifferentTxModeFromServingHS_DSCHCell = 0,
};
typedef Enumerated<CONSTRAINED, 0> DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfigurationdifferentTxModeFromServingHS_DSCHCell;

class DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9ConfigurationInfoNewConfiguration(): Sequence(&theInfo) {}
};

class DLSecondaryCellInfoFDDr9ConfigurationInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9ConfigurationInfo(): Choice(&theInfo) {}
};

typedef Null SecondaryCellMIMOparametersFDDContinue;

enum MIMONMRatioValues {
	mnm1_2_MIMONMRatio = 0,
	mnm2_3_MIMONMRatio = 1,
	mnm3_4_MIMONMRatio = 2,
	mnm4_5_MIMONMRatio = 3,
	mnm5_6_MIMONMRatio = 4,
	mnm6_7_MIMONMRatio = 5,
	mnm7_8_MIMONMRatio = 6,
	mnm8_9_MIMONMRatio = 7,
	mnm9_10_MIMONMRatio = 8,
	mnm1_1_MIMONMRatio = 9,
};
typedef Enumerated<CONSTRAINED, 9> MIMONMRatio;

typedef Null MIMOPilotConfigurationr9SecondCPICHPatternNormalPattern;

typedef Integer<CONSTRAINED, -6, 0> SCPICHPowerOffsetMIMO;

class MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9SecondCPICHPatternDiversityPattern(): Sequence(&theInfo) {}
};

class MIMOPilotConfigurationr9SecondCPICHPattern : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9SecondCPICHPattern(): Choice(&theInfo) {}
};

class MIMOPilotConfigurationr9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationr9(): Sequence(&theInfo) {}
};

class SecondaryCellMIMOparametersFDDNewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDDNewConfiguration(): Sequence(&theInfo) {}
};

class SecondaryCellMIMOparametersFDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDD(): Choice(&theInfo) {}
};

class DLSecondaryCellInfoFDDr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLSecondaryCellInfoFDDr9(): Sequence(&theInfo) {}
};

class DLTPCPowerOffsetPerRL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DLTPCPowerOffsetPerRL(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTPCPowerOffsetPerRL, CONSTRAINED, 1, maxRL> DLTPCPowerOffsetPerRLList;

typedef Integer<CONSTRAINED, 1, 15> DLChannelCodesMBSFNIMB384FirstChannelisationCode;

typedef Integer<CONSTRAINED, 1, 15> DLChannelCodesMBSFNIMB384LastChannelisationCode;

class DLChannelCodesMBSFNIMB384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DLChannelCodesMBSFNIMB384(): Sequence(&theInfo) {}
};

enum ULEDCHInformationr8mac_es_e_resetIndicatorValues {
	true_ULEDCHInformationr8mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr8mac_es_e_resetIndicator;

typedef BitString<CONSTRAINED, 8, 8> EDPDCHSchedulingTransmConfigurationMs2SchedTransmGrantHARQAlloc;

typedef Integer<CONSTRAINED, 0, 38> EDPDCHSchedulingTransmConfigurationServingGrantValue;

enum EDPDCHSchedulingTransmConfigurationServingGrantprimary_Secondary_GrantSelectorValues {
	primary_EDPDCHSchedulingTransmConfigurationServingGrantprimary_Secondary_GrantSelector = 0,
	secondary_EDPDCHSchedulingTransmConfigurationServingGrantprimary_Secondary_GrantSelector = 1,
};
typedef Enumerated<CONSTRAINED, 1> EDPDCHSchedulingTransmConfigurationServingGrantprimary_Secondary_GrantSelector;

class EDPDCHSchedulingTransmConfigurationServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHSchedulingTransmConfigurationServingGrant(): Sequence(&theInfo) {}
};

class EDPDCHSchedulingTransmConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHSchedulingTransmConfiguration(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1> UL16QAMSettingsBetaEdGainEAGCHTableSelection;

class UL16QAMSettings : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UL16QAMSettings(): Sequence(&theInfo) {}
};

class ULEDCHInformationr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULEDCHInformationr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -35, 10> ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHConstantValue;

enum ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCHValues {
	ms40_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 0,
	ms80_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 1,
	ms120_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 2,
	ms160_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 3,
	ms200_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 4,
	ms240_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 5,
	ms280_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 6,
	ms320_ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH = 7,
};
typedef Enumerated<CONSTRAINED, 7> ERUCCHInfoModeSpecificInfoTdd384tdd768t_RUCCH;

typedef Integer<CONSTRAINED, 0, 14> ERUCCHInfoModeSpecificInfoTdd384tdd768ERUCCHTSNumber;

enum ERUCCHInfoModeSpecificInfoTdd384tdd768e_RUCCH_MidambleValues {
	direct_ERUCCHInfoModeSpecificInfoTdd384tdd768e_RUCCH_Midamble = 0,
	direct_Inverted_ERUCCHInfoModeSpecificInfoTdd384tdd768e_RUCCH_Midamble = 1,
};
typedef Enumerated<CONSTRAINED, 1> ERUCCHInfoModeSpecificInfoTdd384tdd768e_RUCCH_Midamble;

enum ERUCCHInfoModeSpecificInfoTdd384tdd768t_advValues {
	sec1_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 0,
	sec2_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 1,
	sec4_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 2,
	sec8_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 3,
	sec16_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 4,
	sec32_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 5,
	sec128_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 6,
	infinity_ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv = 7,
};
typedef Enumerated<CONSTRAINED, 7> ERUCCHInfoModeSpecificInfoTdd384tdd768t_adv;

enum ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHEDValues {
	zero_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 0,
	ms40_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 1,
	ms80_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 2,
	ms160_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 3,
	ms250_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 4,
	sec1_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 5,
	sec2_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 6,
	sec4_ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED = 7,
};
typedef Enumerated<CONSTRAINED, 7> ERUCCHInfoModeSpecificInfoTdd384tdd768t_SCHED;

enum SF16CodesValues {
	cc16_1_SF16Codes = 0,
	cc16_2_SF16Codes = 1,
	cc16_3_SF16Codes = 2,
	cc16_4_SF16Codes = 3,
	cc16_5_SF16Codes = 4,
	cc16_6_SF16Codes = 5,
	cc16_7_SF16Codes = 6,
	cc16_8_SF16Codes = 7,
};
typedef Enumerated<CONSTRAINED, 7> SF16Codes;

typedef SequenceOf<SF16Codes, CONSTRAINED, 1, 8> ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384SF16;

enum SF8CodesValues {
	cc8_1_SF8Codes = 0,
	cc8_2_SF8Codes = 1,
	cc8_3_SF8Codes = 2,
	cc8_4_SF8Codes = 3,
	cc8_5_SF8Codes = 4,
	cc8_6_SF8Codes = 5,
	cc8_7_SF8Codes = 6,
	cc8_8_SF8Codes = 7,
};
typedef Enumerated<CONSTRAINED, 7> SF8Codes;

typedef SequenceOf<SF8Codes, CONSTRAINED, 1, 8> ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384SF8;

class ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd384(): Choice(&theInfo) {}
};

enum SF32CodesValues {
	cc32_1_SF32Codes = 0,
	cc32_2_SF32Codes = 1,
	cc32_3_SF32Codes = 2,
	cc32_4_SF32Codes = 3,
	cc32_5_SF32Codes = 4,
	cc32_6_SF32Codes = 5,
	cc32_7_SF32Codes = 6,
	cc32_8_SF32Codes = 7,
	cc32_9_SF32Codes = 8,
	cc32_10_SF32Codes = 9,
	cc32_11_SF32Codes = 10,
	cc32_12_SF32Codes = 11,
	cc32_13_SF32Codes = 12,
	cc32_14_SF32Codes = 13,
	cc32_15_SF32Codes = 14,
	cc32_16_SF32Codes = 15,
};
typedef Enumerated<CONSTRAINED, 15> SF32Codes;

typedef SequenceOf<SF32Codes, CONSTRAINED, 1, 16> ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768SF32;

enum SF16Codes2Values {
	cc16_1_SF16Codes2 = 0,
	cc16_2_SF16Codes2 = 1,
	cc16_3_SF16Codes2 = 2,
	cc16_4_SF16Codes2 = 3,
	cc16_5_SF16Codes2 = 4,
	cc16_6_SF16Codes2 = 5,
	cc16_7_SF16Codes2 = 6,
	cc16_8_SF16Codes2 = 7,
	cc16_9_SF16Codes2 = 8,
	cc16_10_SF16Codes2 = 9,
	cc16_11_SF16Codes2 = 10,
	cc16_12_SF16Codes2 = 11,
	cc16_13_SF16Codes2 = 12,
	cc16_14_SF16Codes2 = 13,
	cc16_15_SF16Codes2 = 14,
	cc16_16_SF16Codes2 = 15,
};
typedef Enumerated<CONSTRAINED, 15> SF16Codes2;

typedef SequenceOf<SF16Codes2, CONSTRAINED, 1, 16> ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768SF816;

class ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfoTdd768(): Choice(&theInfo) {}
};

class ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd384tdd768ModeSpecificInfo(): Choice(&theInfo) {}
};

class ERUCCHInfoModeSpecificInfoTdd384tdd768 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd384tdd768(): Sequence(&theInfo) {}
};

enum ERUCCHInfoModeSpecificInfoTdd128t_RUCCHValues {
	ms20_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 0,
	ms40_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 1,
	ms60_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 2,
	ms80_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 3,
	ms120_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 4,
	ms160_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 5,
	ms200_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 6,
	ms240_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 7,
	ms280_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 8,
	ms320_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 9,
	ms400_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 10,
	ms500_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 11,
	ms600_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 12,
	ms800_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 13,
	ms1000_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 14,
	ms2000_ERUCCHInfoModeSpecificInfoTdd128t_RUCCH = 15,
};
typedef Enumerated<CONSTRAINED, 15> ERUCCHInfoModeSpecificInfoTdd128t_RUCCH;

typedef Integer<CONSTRAINED, 0, 7> ERUCCHInfoModeSpecificInfoTdd128NRUCCH;

enum ERUCCHInfoModeSpecificInfoTdd128t_WAITValues {
	everyEDCHTTI_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 0,
	ms40_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 1,
	ms80_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 2,
	ms160_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 3,
	ms320_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 4,
	ms640_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 5,
	ms1000_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 6,
	ms2000_ERUCCHInfoModeSpecificInfoTdd128t_WAIT = 7,
};
typedef Enumerated<CONSTRAINED, 7> ERUCCHInfoModeSpecificInfoTdd128t_WAIT;

enum ERUCCHInfoModeSpecificInfoTdd128t_SIValues {
	everyEDCHTTI_ERUCCHInfoModeSpecificInfoTdd128t_SI = 0,
	ms20_ERUCCHInfoModeSpecificInfoTdd128t_SI = 1,
	ms40_ERUCCHInfoModeSpecificInfoTdd128t_SI = 2,
	ms60_ERUCCHInfoModeSpecificInfoTdd128t_SI = 3,
	ms80_ERUCCHInfoModeSpecificInfoTdd128t_SI = 4,
	ms160_ERUCCHInfoModeSpecificInfoTdd128t_SI = 5,
	ms200_ERUCCHInfoModeSpecificInfoTdd128t_SI = 6,
};
typedef Enumerated<CONSTRAINED, 6> ERUCCHInfoModeSpecificInfoTdd128t_SI;

typedef Integer<CONSTRAINED, 2, 5> ERUCCHInfoModeSpecificInfoTdd128ExtendedEstimationWindow;

class ERUCCHInfoModeSpecificInfoTdd128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfoTdd128(): Sequence(&theInfo) {}
};

class ERUCCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ERUCCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class ERUCCHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ERUCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 12> EPUCHInfoModeSpecificInfoTdd348tdd768NoSlotsForTFCIandTPC;

typedef Integer<CONSTRAINED, -35, 10> EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHContantValue;

typedef Integer<CONSTRAINED, 0, 14> EPUCHTSSlotsTsNumber;

class EPUCHTSSlots : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EPUCHTSSlots(): Sequence(&theInfo) {}
};

typedef SequenceOf<EPUCHTSSlots, CONSTRAINED, 1, maxTS_2> EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHTSConfigurationList;

typedef Boolean EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHCodeHopping;

typedef Integer<CONSTRAINED, 1, 3> EPUCHInfoModeSpecificInfoTdd348tdd768EPUCHTPCStepSize;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoModeSpecificInfoTdd348tdd768MinimumAllowedCodeRate;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoModeSpecificInfoTdd348tdd768MaximumAllowedCodeRate;

class EPUCHInfoModeSpecificInfoTdd348tdd768 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	EPUCHInfoModeSpecificInfoTdd348tdd768(): Sequence(&theInfo) {}
};

enum EPUCHInfoModeSpecificInfoTdd128snpl_ReportTypeValues {
	type1_EPUCHInfoModeSpecificInfoTdd128snpl_ReportType = 0,
	type2_EPUCHInfoModeSpecificInfoTdd128snpl_ReportType = 1,
};
typedef Enumerated<CONSTRAINED, 1> EPUCHInfoModeSpecificInfoTdd128snpl_ReportType;

typedef Integer<CONSTRAINED, -112, -50> EPUCHInfoModeSpecificInfoTdd128PrxBASEdes;

typedef Boolean EPUCHInfoModeSpecificInfoTdd128BeaconPLEst;

typedef SequenceOf<EPUCHTSSlotsLCR, CONSTRAINED, 1, maxTS_LCR_1> EPUCHInfoModeSpecificInfoTdd128EPUCHTSConfigurationList;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoModeSpecificInfoTdd128MinimumAllowedCodeRate;

typedef Integer<CONSTRAINED, 0, 63> EPUCHInfoModeSpecificInfoTdd128MaximumAllowedCodeRate;

typedef Integer<CONSTRAINED, 0, 15> EPUCHInfoModeSpecificInfoTdd128MaximumNumOfRetransSchedInfo;

enum EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfoValues {
	ms10_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 0,
	ms15_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 1,
	ms20_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 2,
	ms25_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 3,
	ms30_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 4,
	ms35_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 5,
	ms40_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 6,
	ms45_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 7,
	ms50_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 8,
	ms55_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 9,
	ms60_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 10,
	ms65_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 11,
	ms70_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 12,
	ms75_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 13,
	ms80_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 14,
	ms85_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 15,
	ms90_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 16,
	ms95_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 17,
	ms100_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 18,
	ms110_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 19,
	ms120_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 20,
	ms140_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 21,
	ms160_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 22,
	ms200_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 23,
	ms240_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 24,
	ms280_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 25,
	ms320_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 26,
	ms400_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 27,
	ms480_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 28,
	ms560_EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo = 29,
};
typedef Enumerated<CONSTRAINED, 29> EPUCHInfoModeSpecificInfoTdd128retransTimerForSchedInfo;

class EPUCHInfoModeSpecificInfoTdd128 : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	EPUCHInfoModeSpecificInfoTdd128(): Sequence(&theInfo) {}
};

class EPUCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EPUCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> EPUCHInfoPowerOffsetForSchedInfo;

class EPUCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EPUCHInfo(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> NonScheduledTransGrantInfoTDDTdd384768TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> NonScheduledTransGrantInfoTDDTdd384768PowerResourceRelatedInfo;

enum ULTSChannelisationCodeValues {
	cc1_1_ULTSChannelisationCode = 0,
	cc2_1_ULTSChannelisationCode = 1,
	cc2_2_ULTSChannelisationCode = 2,
	cc4_1_ULTSChannelisationCode = 3,
	cc4_2_ULTSChannelisationCode = 4,
	cc4_3_ULTSChannelisationCode = 5,
	cc4_4_ULTSChannelisationCode = 6,
	cc8_1_ULTSChannelisationCode = 7,
	cc8_2_ULTSChannelisationCode = 8,
	cc8_3_ULTSChannelisationCode = 9,
	cc8_4_ULTSChannelisationCode = 10,
	cc8_5_ULTSChannelisationCode = 11,
	cc8_6_ULTSChannelisationCode = 12,
	cc8_7_ULTSChannelisationCode = 13,
	cc8_8_ULTSChannelisationCode = 14,
	cc16_1_ULTSChannelisationCode = 15,
	cc16_2_ULTSChannelisationCode = 16,
	cc16_3_ULTSChannelisationCode = 17,
	cc16_4_ULTSChannelisationCode = 18,
	cc16_5_ULTSChannelisationCode = 19,
	cc16_6_ULTSChannelisationCode = 20,
	cc16_7_ULTSChannelisationCode = 21,
	cc16_8_ULTSChannelisationCode = 22,
	cc16_9_ULTSChannelisationCode = 23,
	cc16_10_ULTSChannelisationCode = 24,
	cc16_11_ULTSChannelisationCode = 25,
	cc16_12_ULTSChannelisationCode = 26,
	cc16_13_ULTSChannelisationCode = 27,
	cc16_14_ULTSChannelisationCode = 28,
	cc16_15_ULTSChannelisationCode = 29,
	cc16_16_ULTSChannelisationCode = 30,
};
typedef Enumerated<CONSTRAINED, 30> ULTSChannelisationCode;

class NonScheduledTransGrantInfoTDDTdd384768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDTdd384768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> NonScheduledTransGrantInfoTDDTdd128NEUCCH;

typedef Integer<CONSTRAINED, 4, 15> NonScheduledTransGrantInfoTDDTdd128NEHICH;

typedef BitString<CONSTRAINED, 5, 5> NonScheduledTransGrantInfoTDDTdd128TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> NonScheduledTransGrantInfoTDDTdd128PowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> NonScheduledTransGrantInfoTDDTdd128SfnNum;

typedef Null NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationModeDefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationModeUeSpecificMidamble;

class NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> NonScheduledTransGrantInfoTDDTdd128EHICHInfoMidambleConfiguration;

typedef Integer<CONSTRAINED, 0, 19> NonScheduledTransGrantInfoTDDTdd128EHICHInfoSignatureSequenceGroupIndex;

class NonScheduledTransGrantInfoTDDTdd128EHICHInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDTdd128EHICHInfo(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDDTdd128 : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDTdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDD : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDD(): Choice(&theInfo) {}
};

class ULEDCHInformationr8ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULEDCHInformationr8ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULEDCHInformationr8ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULEDCHInformationr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr8(): Sequence(&theInfo) {}
};

class DLULHSPAInformationr8 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLULHSPAInformationr8(): Sequence(&theInfo) {}
};

enum ULEDCHInformationr9mac_es_e_resetIndicatorValues {
	true_ULEDCHInformationr9mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr9mac_es_e_resetIndicator;

class ULEDCHInformationr9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULEDCHInformationr9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 13, 13> NonScheduledTransGrantInfoTDDr9Tdd384768TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> NonScheduledTransGrantInfoTDDr9Tdd384768PowerResourceRelatedInfo;

class NonScheduledTransGrantInfoTDDr9Tdd384768 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9Tdd384768(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> NonScheduledTransGrantInfoTDDr9Tdd128NEUCCH;

typedef Integer<CONSTRAINED, 4, 15> NonScheduledTransGrantInfoTDDr9Tdd128NEHICH;

typedef BitString<CONSTRAINED, 5, 5> NonScheduledTransGrantInfoTDDr9Tdd128TimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> NonScheduledTransGrantInfoTDDr9Tdd128PowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> NonScheduledTransGrantInfoTDDr9Tdd128SfnNum;

typedef Null NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationModeDefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationModeUeSpecificMidamble;

class NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoMidambleConfiguration;

typedef Integer<CONSTRAINED, 0, 19> NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfoSignatureSequenceGroupIndex;

class NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9Tdd128EHICHInfo(): Sequence(&theInfo) {}
};

enum NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nstValues {
	everyEDCHTTI_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 0,
	ms20_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 1,
	ms40_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 2,
	ms60_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 3,
	ms80_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 4,
	ms160_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 5,
	ms200_NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst = 6,
};
typedef Enumerated<CONSTRAINED, 6> NonScheduledTransGrantInfoTDDr9Tdd128t_SI_nst;

class NonScheduledTransGrantInfoTDDr9Tdd128 : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9Tdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDDr9 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDr9(): Choice(&theInfo) {}
};

class ULEDCHInformationr9ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULEDCHInformationr9ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationr9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULEDCHInformationr9ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULEDCHInformationr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr9(): Sequence(&theInfo) {}
};

class DLULHSPAInformationr9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DLULHSPAInformationr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -28, -13> DPCCHPowerOffset2;

typedef Integer<CONSTRAINED, 0, 255> TGPSReconfigurationCFN;

class TGPSequenceShortTgpsStatusActivate : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TGPSequenceShortTgpsStatusActivate(): Sequence(&theInfo) {}
};

typedef Null TGPSequenceShortTgpsStatusDeactivate;

class TGPSequenceShortTgpsStatus : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TGPSequenceShortTgpsStatus(): Choice(&theInfo) {}
};

class TGPSequenceShort : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TGPSequenceShort(): Sequence(&theInfo) {}
};

typedef SequenceOf<TGPSequenceShort, CONSTRAINED, 1, maxTGPS> DPCHCompressedModeStatusInfoTgpSequenceShortList;

class DPCHCompressedModeStatusInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DPCHCompressedModeStatusInfo(): Sequence(&theInfo) {}
};

enum UEDRXCycleInactivityThresholdValues {
	sub_frames_0_UEDRXCycleInactivityThreshold = 0,
	sub_frames_1_UEDRXCycleInactivityThreshold = 1,
	sub_frames_2_UEDRXCycleInactivityThreshold = 2,
	sub_frames_4_UEDRXCycleInactivityThreshold = 3,
	sub_frames_8_UEDRXCycleInactivityThreshold = 4,
	sub_frames_16_UEDRXCycleInactivityThreshold = 5,
	sub_frames_32_UEDRXCycleInactivityThreshold = 6,
	sub_frames_64_UEDRXCycleInactivityThreshold = 7,
	sub_frames_128_UEDRXCycleInactivityThreshold = 8,
	sub_frames_256_UEDRXCycleInactivityThreshold = 9,
	sub_frames_512_UEDRXCycleInactivityThreshold = 10,
	spare5_UEDRXCycleInactivityThreshold = 11,
	spare4_UEDRXCycleInactivityThreshold = 12,
	spare3_UEDRXCycleInactivityThreshold = 13,
	spare2_UEDRXCycleInactivityThreshold = 14,
	spare1_UEDRXCycleInactivityThreshold = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDRXCycleInactivityThreshold;

enum UEDRXCycleValues {
	sub_frames_4_UEDRXCycle = 0,
	sub_frames_5_UEDRXCycle = 1,
	sub_frames_8_UEDRXCycle = 2,
	sub_frames_10_UEDRXCycle = 3,
	sub_frames_16_UEDRXCycle = 4,
	sub_frames_20_UEDRXCycle = 5,
	spare2_UEDRXCycle = 6,
	spare1_UEDRXCycle = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDRXCycle;

enum UEGrantMonitoringInactivityThresholdValues {
	e_dch_tti_0_UEGrantMonitoringInactivityThreshold = 0,
	e_dch_tti_1_UEGrantMonitoringInactivityThreshold = 1,
	e_dch_tti_2_UEGrantMonitoringInactivityThreshold = 2,
	e_dch_tti_4_UEGrantMonitoringInactivityThreshold = 3,
	e_dch_tti_8_UEGrantMonitoringInactivityThreshold = 4,
	e_dch_tti_16_UEGrantMonitoringInactivityThreshold = 5,
	e_dch_tti_32_UEGrantMonitoringInactivityThreshold = 6,
	e_dch_tti_64_UEGrantMonitoringInactivityThreshold = 7,
	e_dch_tti_128_UEGrantMonitoringInactivityThreshold = 8,
	e_dch_tti_256_UEGrantMonitoringInactivityThreshold = 9,
	spare6_UEGrantMonitoringInactivityThreshold = 10,
	spare5_UEGrantMonitoringInactivityThreshold = 11,
	spare4_UEGrantMonitoringInactivityThreshold = 12,
	spare3_UEGrantMonitoringInactivityThreshold = 13,
	spare2_UEGrantMonitoringInactivityThreshold = 14,
	spare1_UEGrantMonitoringInactivityThreshold = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEGrantMonitoringInactivityThreshold;

typedef Boolean DRXInfoUedrxGrantMonitoring;

class DRXInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	DRXInfo(): Sequence(&theInfo) {}
};

class DSCHTransportChannelsInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	DSCHTransportChannelsInfo(): Sequence(&theInfo) {}
};

enum UEDTXCycle110msValues {
	sub_frames_1_UEDTXCycle110ms = 0,
	sub_frames_5_UEDTXCycle110ms = 1,
	sub_frames_10_UEDTXCycle110ms = 2,
	sub_frames_20_UEDTXCycle110ms = 3,
};
typedef Enumerated<CONSTRAINED, 3> UEDTXCycle110ms;

enum UEDTXCycle210msValues {
	sub_frames_5_UEDTXCycle210ms = 0,
	sub_frames_10_UEDTXCycle210ms = 1,
	sub_frames_20_UEDTXCycle210ms = 2,
	sub_frames_40_UEDTXCycle210ms = 3,
	sub_frames_80_UEDTXCycle210ms = 4,
	sub_frames_160_UEDTXCycle210ms = 5,
	spare2_UEDTXCycle210ms = 6,
	spare1_UEDTXCycle210ms = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDTXCycle210ms;

enum MACDTXCycle10msValues {
	sub_frames_5_MACDTXCycle10ms = 0,
	sub_frames_10_MACDTXCycle10ms = 1,
	sub_frames_20_MACDTXCycle10ms = 2,
	spare1_MACDTXCycle10ms = 3,
};
typedef Enumerated<CONSTRAINED, 3> MACDTXCycle10ms;

class DTXEDCHTTI10ms : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXEDCHTTI10ms(): Sequence(&theInfo) {}
};

enum UEDTXCycle12msValues {
	sub_frames_1_UEDTXCycle12ms = 0,
	sub_frames_4_UEDTXCycle12ms = 1,
	sub_frames_5_UEDTXCycle12ms = 2,
	sub_frames_8_UEDTXCycle12ms = 3,
	sub_frames_10_UEDTXCycle12ms = 4,
	sub_frames_16_UEDTXCycle12ms = 5,
	sub_frames_20_UEDTXCycle12ms = 6,
	spare1_UEDTXCycle12ms = 7,
};
typedef Enumerated<CONSTRAINED, 7> UEDTXCycle12ms;

enum UEDTXCycle22msValues {
	sub_frames_4_UEDTXCycle22ms = 0,
	sub_frames_5_UEDTXCycle22ms = 1,
	sub_frames_8_UEDTXCycle22ms = 2,
	sub_frames_10_UEDTXCycle22ms = 3,
	sub_frames_16_UEDTXCycle22ms = 4,
	sub_frames_20_UEDTXCycle22ms = 5,
	sub_frames_32_UEDTXCycle22ms = 6,
	sub_frames_40_UEDTXCycle22ms = 7,
	sub_frames_64_UEDTXCycle22ms = 8,
	sub_frames_80_UEDTXCycle22ms = 9,
	sub_frames_128_UEDTXCycle22ms = 10,
	sub_frames_160_UEDTXCycle22ms = 11,
	spare4_UEDTXCycle22ms = 12,
	spare3_UEDTXCycle22ms = 13,
	spare2_UEDTXCycle22ms = 14,
	spare1_UEDTXCycle22ms = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDTXCycle22ms;

enum MACDTXCycle2msValues {
	sub_frames_1_MACDTXCycle2ms = 0,
	sub_frames_4_MACDTXCycle2ms = 1,
	sub_frames_5_MACDTXCycle2ms = 2,
	sub_frames_8_MACDTXCycle2ms = 3,
	sub_frames_10_MACDTXCycle2ms = 4,
	sub_frames_16_MACDTXCycle2ms = 5,
	sub_frames_20_MACDTXCycle2ms = 6,
	spare1_MACDTXCycle2ms = 7,
};
typedef Enumerated<CONSTRAINED, 7> MACDTXCycle2ms;

class DTXEDCHTTI2ms : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXEDCHTTI2ms(): Sequence(&theInfo) {}
};

class DTXInfoEdchTTILength : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DTXInfoEdchTTILength(): Choice(&theInfo) {}
};

enum UEDTXCycle2InactivityThresholdValues {
	e_dch_tti_1_UEDTXCycle2InactivityThreshold = 0,
	e_dch_tti_4_UEDTXCycle2InactivityThreshold = 1,
	e_dch_tti_8_UEDTXCycle2InactivityThreshold = 2,
	e_dch_tti_16_UEDTXCycle2InactivityThreshold = 3,
	e_dch_tti_32_UEDTXCycle2InactivityThreshold = 4,
	e_dch_tti_64_UEDTXCycle2InactivityThreshold = 5,
	e_dch_tti_128_UEDTXCycle2InactivityThreshold = 6,
	e_dch_tti_256_UEDTXCycle2InactivityThreshold = 7,
	spare8_UEDTXCycle2InactivityThreshold = 8,
	spare7_UEDTXCycle2InactivityThreshold = 9,
	spare6_UEDTXCycle2InactivityThreshold = 10,
	spare5_UEDTXCycle2InactivityThreshold = 11,
	spare4_UEDTXCycle2InactivityThreshold = 12,
	spare3_UEDTXCycle2InactivityThreshold = 13,
	spare2_UEDTXCycle2InactivityThreshold = 14,
	spare1_UEDTXCycle2InactivityThreshold = 15,
};
typedef Enumerated<CONSTRAINED, 15> UEDTXCycle2InactivityThreshold;

typedef Integer<CONSTRAINED, 0, 38> DTXInfoUedtxcycle2DefaultSG;

enum UEDTXlongpreamblelengthValues {
	slots_4_UEDTXlongpreamblelength = 0,
	slots_15_UEDTXlongpreamblelength = 1,
};
typedef Enumerated<CONSTRAINED, 1> UEDTXlongpreamblelength;

enum MACInactivityThresholdValues {
	e_dch_tti_1_MACInactivityThreshold = 0,
	e_dch_tti_2_MACInactivityThreshold = 1,
	e_dch_tti_4_MACInactivityThreshold = 2,
	e_dch_tti_8_MACInactivityThreshold = 3,
	e_dch_tti_16_MACInactivityThreshold = 4,
	e_dch_tti_32_MACInactivityThreshold = 5,
	e_dch_tti_64_MACInactivityThreshold = 6,
	e_dch_tti_128_MACInactivityThreshold = 7,
	e_dch_tti_256_MACInactivityThreshold = 8,
	e_dch_tti_512_MACInactivityThreshold = 9,
	e_dch_tti_Infinity_MACInactivityThreshold = 10,
	spare5_MACInactivityThreshold = 11,
	spare4_MACInactivityThreshold = 12,
	spare3_MACInactivityThreshold = 13,
	spare2_MACInactivityThreshold = 14,
	spare1_MACInactivityThreshold = 15,
};
typedef Enumerated<CONSTRAINED, 15> MACInactivityThreshold;

enum UEDPCCHBurstValues {
	sub_frames_1_UEDPCCHBurst = 0,
	sub_frames_2_UEDPCCHBurst = 1,
	sub_frames_5_UEDPCCHBurst = 2,
	spare1_UEDPCCHBurst = 3,
};
typedef Enumerated<CONSTRAINED, 3> UEDPCCHBurst;

class DTXInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	DTXInfo(): Sequence(&theInfo) {}
};

enum UplinkDPCCHSlotFormatInformationValues {
	slot_format_1_UplinkDPCCHSlotFormatInformation = 0,
	dummy_UplinkDPCCHSlotFormatInformation = 1,
	slot_format_4_UplinkDPCCHSlotFormatInformation = 2,
	spare1_UplinkDPCCHSlotFormatInformation = 3,
};
typedef Enumerated<CONSTRAINED, 3> UplinkDPCCHSlotFormatInformation;

class DTXDRXInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DTXDRXInfor7(): Sequence(&theInfo) {}
};

typedef SequenceOf<DynamicPersistenceLevel, CONSTRAINED, 1, maxPRACH> DynamicPersistenceLevelList;

typedef Integer<CONSTRAINED, 0, 38> EDCHRLInfoNewServingCellServingGrantValue;

enum EDCHRLInfoNewServingCellServingGrantprimary_Secondary_GrantSelectorValues {
	primary_EDCHRLInfoNewServingCellServingGrantprimary_Secondary_GrantSelector = 0,
	secondary_EDCHRLInfoNewServingCellServingGrantprimary_Secondary_GrantSelector = 1,
};
typedef Enumerated<CONSTRAINED, 1> EDCHRLInfoNewServingCellServingGrantprimary_Secondary_GrantSelector;

class EDCHRLInfoNewServingCellServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellServingGrant(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> EDPDCHReferenceETFCIReferenceETFCI;

typedef Integer<CONSTRAINED, 0, 29> EDPDCHReferenceETFCIReferenceETFCIPO;

class EDPDCHReferenceETFCI : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPDCHReferenceETFCI(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDPDCHReferenceETFCI, CONSTRAINED, 1, 8> EDPDCHReferenceETFCIList;

typedef Integer<CONSTRAINED, 0, 6> EDCHRLInfoNewServingCellPowerOffsetForSchedInfo;

typedef Integer<CONSTRAINED, 0, 37> EDCHRLInfoNewServingCellThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> EDCHRLInfoNewServingCellTwoIndexStepThreshold;

typedef Null EDCHRLInfoNewServingCellERGCHInfoReleaseIndicator;

class EDCHRLInfoNewServingCellERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellERGCHInfo(): Choice(&theInfo) {}
};

class EDCHRLInfoNewServingCell : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCell(): Sequence(&theInfo) {}
};

typedef Null EDCHRLInfoOtherCellEHICHInfoReleaseIndicator;

class EDCHRLInfoOtherCellEHICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellEHICHInfo(): Choice(&theInfo) {}
};

typedef Null EDCHRLInfoOtherCellERGCHInfoReleaseIndicator;

class EDCHRLInfoOtherCellERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellERGCHInfo(): Choice(&theInfo) {}
};

class EDCHRLInfoOtherCell : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCell(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCell, CONSTRAINED, 1, maxEDCHRL> EDCHReconfigurationInfoEDCHRLInfoOtherCellList;

class EDCHReconfigurationInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 38> EDCHRLInfoNewServingCellr7ServingGrantValue;

enum EDCHRLInfoNewServingCellr7ServingGrantprimary_Secondary_GrantSelectorValues {
	primary_EDCHRLInfoNewServingCellr7ServingGrantprimary_Secondary_GrantSelector = 0,
	secondary_EDCHRLInfoNewServingCellr7ServingGrantprimary_Secondary_GrantSelector = 1,
};
typedef Enumerated<CONSTRAINED, 1> EDCHRLInfoNewServingCellr7ServingGrantprimary_Secondary_GrantSelector;

class EDCHRLInfoNewServingCellr7ServingGrant : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellr7ServingGrant(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 6> EDCHRLInfoNewServingCellr7PowerOffsetForSchedInfo;

typedef Integer<CONSTRAINED, 0, 37> EDCHRLInfoNewServingCellr7ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> EDCHRLInfoNewServingCellr7TwoIndexStepThreshold;

typedef Null EDCHRLInfoNewServingCellr7ERGCHInfoReleaseIndicator;

class EDCHRLInfoNewServingCellr7ERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellr7ERGCHInfo(): Choice(&theInfo) {}
};

class EDCHRLInfoNewServingCellr7 : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	EDCHRLInfoNewServingCellr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCell, CONSTRAINED, 1, maxEDCHRL> EDCHReconfigurationInfor7EDCHRLInfoOtherCellList;

class EDCHReconfigurationInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfor7(): Sequence(&theInfo) {}
};

typedef Null EDCHRLInfoNewSecServingCellERGCHInfoReleaseIndicator;

class EDCHRLInfoNewSecServingCellERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoNewSecServingCellERGCHInfo(): Choice(&theInfo) {}
};

class EDCHRLInfoNewSecServingCell : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoNewSecServingCell(): Sequence(&theInfo) {}
};

typedef Null EDCHRLInfoOtherCellSecULFreqERGCHInfoReleaseIndicator;

class EDCHRLInfoOtherCellSecULFreqERGCHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellSecULFreqERGCHInfo(): Choice(&theInfo) {}
};

class EDCHRLInfoOtherCellSecULFreq : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHRLInfoOtherCellSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<EDCHRLInfoOtherCellSecULFreq, CONSTRAINED, 1, maxEDCHRL> EDCHReconfigurationInfoSecULFrequencyEDCHRLInfoOtherCellListSecULFreq;

class EDCHReconfigurationInfoSecULFrequency : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHReconfigurationInfoSecULFrequency(): Sequence(&theInfo) {}
};

class EDCHRLInfoSameServingCell : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDCHRLInfoSameServingCell(): Sequence(&theInfo) {}
};

typedef Null EDCHSPSInformationTDD128EdchSPSOperationContinue;

typedef Integer<CONSTRAINED, 0, 3> EHICHInformationForSPSTDD128ConfigurationmodeImplicitEi;

class EHICHInformationForSPSTDD128ConfigurationmodeImplicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128ConfigurationmodeImplicit(): Sequence(&theInfo) {}
};

typedef Null EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationModeDefaultMidamble;

typedef Integer<CONSTRAINED, 0, 15> EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationModeUeSpecificMidamble;

class EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> EHICHInformationForSPSTDD128ConfigurationmodeExplicitMidambleConfiguration;

class EHICHInformationForSPSTDD128ConfigurationmodeExplicit : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128ConfigurationmodeExplicit(): Sequence(&theInfo) {}
};

class EHICHInformationForSPSTDD128Configurationmode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128Configurationmode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 19> EHICHInformationForSPSTDD128SignatureSequenceGroupIndex;

class EHICHInformationForSPSTDD128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EHICHInformationForSPSTDD128(): Sequence(&theInfo) {}
};

class EDCHTxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	EDCHTxPatternListTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHNEUCCH;

typedef BitString<CONSTRAINED, 5, 5> EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHTimeslotResourceRelatedInfo;

typedef Integer<CONSTRAINED, 1, 32> EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHPowerResourceRelatedInfo;

typedef Integer<CONSTRAINED, 0, 1> EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHSubframeNum;

typedef Integer<CONSTRAINED, 0, maxEDCHTxPattern_TDD128_1> EDCHSPSNewOperationTDD128InitialSPSInfoForEDCHInitialTxPatternIndex;

class EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	EDCHSPSNewOperationTDD128InitialSPSInfoForEDCH(): Sequence(&theInfo) {}
};

class EDCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	EDCHSPSNewOperationTDD128(): Sequence(&theInfo) {}
};

class EDCHSPSInformationTDD128EdchSPSOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EDCHSPSInformationTDD128EdchSPSOperation(): Choice(&theInfo) {}
};

class EDCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EDCHSPSInformationTDD128(): Sequence(&theInfo) {}
};

class EDPCCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	EDPCCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfoThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfoTwoIndexStepThreshold;

class EDPDCHInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	EDPDCHInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfor7ThreeIndexStepThreshold;

typedef Integer<CONSTRAINED, 0, 37> EDPDCHInfor7TwoIndexStepThreshold;

class EDPDCHInfor7 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	EDPDCHInfor7(): Sequence(&theInfo) {}
};

enum EnablingDelayValues {
	radio_frames_0_EnablingDelay = 0,
	radio_frames_1_EnablingDelay = 1,
	radio_frames_2_EnablingDelay = 2,
	radio_frames_4_EnablingDelay = 3,
	radio_frames_8_EnablingDelay = 4,
	radio_frames_16_EnablingDelay = 5,
	radio_frames_32_EnablingDelay = 6,
	radio_frames_64_EnablingDelay = 7,
	radio_frames_128_EnablingDelay = 8,
	spare7_EnablingDelay = 9,
	spare6_EnablingDelay = 10,
	spare5_EnablingDelay = 11,
	spare4_EnablingDelay = 12,
	spare3_EnablingDelay = 13,
	spare2_EnablingDelay = 14,
	spare1_EnablingDelay = 15,
};
typedef Enumerated<CONSTRAINED, 15> EnablingDelay;

typedef Integer<CONSTRAINED, 0, 255> EXTULTimingAdvanceModeSpecificInfoTdd384ExulTimingAdvance;

class EXTULTimingAdvanceModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvanceModeSpecificInfoTdd384(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 511> EXTULTimingAdvanceModeSpecificInfoTdd768ExulTimingAdvance;

class EXTULTimingAdvanceModeSpecificInfoTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvanceModeSpecificInfoTdd768(): Sequence(&theInfo) {}
};

class EXTULTimingAdvanceModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	EXTULTimingAdvanceModeSpecificInfo(): Choice(&theInfo) {}
};

class EXTULTimingAdvance : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	EXTULTimingAdvance(): Sequence(&theInfo) {}
};

class HSChannelisationCodeSetInfoLCR : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSChannelisationCodeSetInfoLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHCodes, CONSTRAINED, 1, maxHSSCCHs> HSSCCHSystemInfoHSSCCHChannelisationCodeInfo;

class HSSCCHSystemInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHSystemInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<HRNTI, CONSTRAINED, 1, maxCommonHRNTI> HSDSCHCommonSystemInformationCommonHRNTIinformation;

class HSDSCHCommonSystemInformation : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<HSSCCHTDD128r6, CONSTRAINED, 1, maxHSSCCHs> HSSCCHSystemInfoTDD128HsSCCHSetConfiguration;

typedef Integer<CONSTRAINED, -120, -58> HSSCCHSystemInfoTDD128PowerlevelHSSICH;

typedef Integer<CONSTRAINED, -7, 8> HSSCCHSystemInfoTDD128Nackackpoweroffset;

enum HSSCCHSystemInfoTDD128tpc_step_sizeValues {
	s1_HSSCCHSystemInfoTDD128tpc_step_size = 0,
	s2_HSSCCHSystemInfoTDD128tpc_step_size = 1,
	s3_HSSCCHSystemInfoTDD128tpc_step_size = 2,
	spare1_HSSCCHSystemInfoTDD128tpc_step_size = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSSCCHSystemInfoTDD128tpc_step_size;

typedef Integer<CONSTRAINED, 1, 255> HSSCCHSystemInfoTDD128Powercontrolgap;

typedef Boolean HSSCCHSystemInfoTDD128Pathlosscompensationswitch;

class HSSCCHSystemInfoTDD128 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	HSSCCHSystemInfoTDD128(): Sequence(&theInfo) {}
};

typedef SequenceOf<HRNTI, CONSTRAINED, 1, maxCommonHRNTI> HSDSCHCommonSystemInformationTDD128CommonHRNTIinformation;

class HSDSCHCommonSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSDSCHCommonSystemInformationTDD128(): Sequence(&theInfo) {}
};

enum HSDSCHDrxBurstFachValues {
	f1_HSDSCHDrxBurstFach = 0,
	f2_HSDSCHDrxBurstFach = 1,
	f4_HSDSCHDrxBurstFach = 2,
	f8_HSDSCHDrxBurstFach = 3,
	f16_HSDSCHDrxBurstFach = 4,
	spare3_HSDSCHDrxBurstFach = 5,
	spare2_HSDSCHDrxBurstFach = 6,
	spare1_HSDSCHDrxBurstFach = 7,
};
typedef Enumerated<CONSTRAINED, 7> HSDSCHDrxBurstFach;

enum HSDSCHDrxCycleFachValues {
	f4_HSDSCHDrxCycleFach = 0,
	f8_HSDSCHDrxCycleFach = 1,
	f16_HSDSCHDrxCycleFach = 2,
	f32_HSDSCHDrxCycleFach = 3,
};
typedef Enumerated<CONSTRAINED, 3> HSDSCHDrxCycleFach;

typedef Boolean HSDSCHDrxCellfachinfoDrxInterruptionhsdsch;

class HSDSCHDrxCellfachinfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfo(): Sequence(&theInfo) {}
};

class HSDSCHDrxCellfachinfoTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSDSCHDrxCellfachinfoTDD128(): Sequence(&theInfo) {}
};

enum PICountPerFrameValues {
	e18_PICountPerFrame = 0,
	e36_PICountPerFrame = 1,
	e72_PICountPerFrame = 2,
	e144_PICountPerFrame = 3,
};
typedef Enumerated<CONSTRAINED, 3> PICountPerFrame;

typedef Boolean PICHInfoFddSttdIndicator;

class PICHInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PICHInfoFdd(): Sequence(&theInfo) {}
};

enum TDDPICHCCodeValues {
	cc16_1_TDDPICHCCode = 0,
	cc16_2_TDDPICHCCode = 1,
	cc16_3_TDDPICHCCode = 2,
	cc16_4_TDDPICHCCode = 3,
	cc16_5_TDDPICHCCode = 4,
	cc16_6_TDDPICHCCode = 5,
	cc16_7_TDDPICHCCode = 6,
	cc16_8_TDDPICHCCode = 7,
	cc16_9_TDDPICHCCode = 8,
	cc16_10_TDDPICHCCode = 9,
	cc16_11_TDDPICHCCode = 10,
	cc16_12_TDDPICHCCode = 11,
	cc16_13_TDDPICHCCode = 12,
	cc16_14_TDDPICHCCode = 13,
	cc16_15_TDDPICHCCode = 14,
	cc16_16_TDDPICHCCode = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDPICHCCode;

typedef Integer<CONSTRAINED, 0, 3> RepPerLengthOffsetPICHRpp42;

typedef Integer<CONSTRAINED, 0, 7> RepPerLengthOffsetPICHRpp82;

typedef Integer<CONSTRAINED, 0, 7> RepPerLengthOffsetPICHRpp84;

typedef Integer<CONSTRAINED, 0, 15> RepPerLengthOffsetPICHRpp162;

typedef Integer<CONSTRAINED, 0, 15> RepPerLengthOffsetPICHRpp164;

typedef Integer<CONSTRAINED, 0, 31> RepPerLengthOffsetPICHRpp322;

typedef Integer<CONSTRAINED, 0, 31> RepPerLengthOffsetPICHRpp324;

typedef Integer<CONSTRAINED, 0, 63> RepPerLengthOffsetPICHRpp642;

typedef Integer<CONSTRAINED, 0, 63> RepPerLengthOffsetPICHRpp644;

class RepPerLengthOffsetPICH : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	RepPerLengthOffsetPICH(): Choice(&theInfo) {}
};

enum PagingIndicatorLengthValues {
	pi4_PagingIndicatorLength = 0,
	pi8_PagingIndicatorLength = 1,
	pi16_PagingIndicatorLength = 2,
};
typedef Enumerated<CONSTRAINED, 2> PagingIndicatorLength;

enum NGAPValues {
	f2_NGAP = 0,
	f4_NGAP = 1,
	f8_NGAP = 2,
};
typedef Enumerated<CONSTRAINED, 2> NGAP;

typedef Integer<CONSTRAINED, 1, 8> NPCH;

class PICHInfoTdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PICHInfoTdd(): Sequence(&theInfo) {}
};

class PICHInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PICHInfo(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> PICHForHSDPASupportedPagingHspdschChannelisationCode;

class PICHForHSDPASupportedPaging : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPaging(): Sequence(&theInfo) {}
};

typedef SequenceOf<PICHForHSDPASupportedPaging, CONSTRAINED, 1, maxSCCPCH> HSDSCHPagingSystemInformationPichForHSDPASupportedPagingList;

typedef Integer<CONSTRAINED, 1, 5> HSDSCHPagingSystemInformationNumberOfPcchTransmissions;

typedef Integer<CONSTRAINED, 1, 32> TransportBlockSizeIndex;

typedef SequenceOf<TransportBlockSizeIndex, CONSTRAINED, 1, 2> HSDSCHPagingSystemInformationTransportBlockSizeList;

class HSDSCHPagingSystemInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	HSDSCHPagingSystemInformation(): Sequence(&theInfo) {}
};

class PICHForHSDPASupportedPagingTDD128Implicit : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPagingTDD128Implicit(): Sequence(&theInfo) {}
};

typedef SequenceOf<DLTSChannelisationCode, CONSTRAINED, 1, 2> PichChannelisationCodeListLCRr4;

class PICHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PICHInfoLCRr4(): Sequence(&theInfo) {}
};

class PICHForHSDPASupportedPagingTDD128 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PICHForHSDPASupportedPagingTDD128(): Choice(&theInfo) {}
};

typedef SequenceOf<PICHForHSDPASupportedPagingTDD128, CONSTRAINED, 1, maxSCCPCH> HSDSCHPagingSystemInformationTDD128PichForHsdschList;

typedef Integer<CONSTRAINED, 1, 16> HSDSCHPagingSystemInformationTDD128DtchDCCHreceptionwindowsize;

class PCCHInformationListPagingassociatedHspdschInfo : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PCCHInformationListPagingassociatedHspdschInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 3> PCCHInformationListPagingsubChannelsize;

typedef SequenceOf<TransportBlockSizeIndex, CONSTRAINED, 1, 2> PCCHInformationListTransportBlockSizeList;

class PCCHInformationList : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PCCHInformationList(): Sequence(&theInfo) {}
};

class HSDSCHPagingSystemInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HSDSCHPagingSystemInformationTDD128(): Sequence(&theInfo) {}
};

class HSDSCHRxPatternListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHRxPatternListTDD128(): Sequence(&theInfo) {}
};

class HSDSCHTbsListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSDSCHTbsListTDD128(): Sequence(&theInfo) {}
};

typedef Null HSDSCHSPSInformationTDD128HsdschSPSOperationContinue;

typedef Integer<CONSTRAINED, 1, 8> HSDSCHSPSNewOperationTDD128HARQInfoForSPSNumberOfProcesses;

class HSDSCHSPSNewOperationTDD128HARQInfoForSPS : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSDSCHSPSNewOperationTDD128HARQInfoForSPS(): Sequence(&theInfo) {}
};

class HSSICHListTDD128 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHListTDD128(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 5, 5> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHTimeslotInfo;

typedef Integer<CONSTRAINED, 0, 1> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHSfnNum;

typedef Integer<CONSTRAINED, 0, maxRxPatternForHSDSCH_TDD128_1> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHInitialRxPatternIndex;

typedef Integer<CONSTRAINED, 0, maxTbsForHSDSCH_TDD128_1> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHInitialTfsIndex;

enum HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHmodulationValues {
	modQPSK_HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHmodulation = 0,
	mod16QAM_HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHmodulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHmodulation;

typedef Integer<CONSTRAINED, 0, maxHSSICH_TDD128_1> HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCHHssichIndex;

class HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSDSCHSPSNewOperationTDD128InitialSPSInfoForHSDSCH(): Sequence(&theInfo) {}
};

class HSDSCHSPSNewOperationTDD128 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	HSDSCHSPSNewOperationTDD128(): Sequence(&theInfo) {}
};

class HSDSCHSPSInformationTDD128HsdschSPSOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSDSCHSPSInformationTDD128HsdschSPSOperation(): Choice(&theInfo) {}
};

class HSDSCHSPSInformationTDD128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSDSCHSPSInformationTDD128(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 15> HSSCCHLessNewOperationHspdschCodeIndex;

class HSSCCHLessTFSList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSCCHLessTFSList(): Sequence(&theInfo) {}
};

class HSSCCHLessNewOperation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	HSSCCHLessNewOperation(): Sequence(&theInfo) {}
};

typedef Null HSSCCHLessInfor7HsscchLessOperationContinue;

class HSSCCHLessInfor7HsscchLessOperation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	HSSCCHLessInfor7HsscchLessOperation(): Choice(&theInfo) {}
};

class HSSCCHLessInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HSSCCHLessInfor7(): Sequence(&theInfo) {}
};

typedef Null HSSCCHTDD128MultiCarrierMidambleAllocationModeDefaultMidamble;

typedef Null HSSCCHTDD128MultiCarrierMidambleAllocationModeCommonMidamble;

typedef Integer<CONSTRAINED, 0, 15> HSSCCHTDD128MultiCarrierMidambleAllocationModeUeSpecificMidamble;

class HSSCCHTDD128MultiCarrierMidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	HSSCCHTDD128MultiCarrierMidambleAllocationMode(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 8> HSSCCHTDD128MultiCarrierMidambleConfiguration;

class HSSCCHTDD128MultiCarrier : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	HSSCCHTDD128MultiCarrier(): Sequence(&theInfo) {}
};

class HSSICHReferenceSignalInfoList : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	HSSICHReferenceSignalInfoList(): Sequence(&theInfo) {}
};

enum IndividualTimeslotInfoLCRr4extmodulationValues {
	mod_QPSK_IndividualTimeslotInfoLCRr4extmodulation = 0,
	mod_8PSK_IndividualTimeslotInfoLCRr4extmodulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> IndividualTimeslotInfoLCRr4extmodulation;

enum IndividualTimeslotInfoLCRr4extss_TPC_SymbolsValues {
	zero_IndividualTimeslotInfoLCRr4extss_TPC_Symbols = 0,
	one_IndividualTimeslotInfoLCRr4extss_TPC_Symbols = 1,
	sixteenOverSF_IndividualTimeslotInfoLCRr4extss_TPC_Symbols = 2,
};
typedef Enumerated<CONSTRAINED, 2> IndividualTimeslotInfoLCRr4extss_TPC_Symbols;

class IndividualTimeslotInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	IndividualTimeslotInfoLCRr4ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> MaxPowerIncreaser4;

typedef Null MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType1(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLBurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstTypeType2(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLBurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDL : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDL(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType1(): Sequence(&theInfo) {}
};

typedef Null MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeDefaultMidamble;

typedef Null MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeCommonMidamble;

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationModeUeSpecificMidamble(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2MidambleAllocationMode(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCRBurstTypeType2 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstTypeType2(): Sequence(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCRBurstType : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCRBurstType(): Choice(&theInfo) {}
};

class MidambleShiftAndBurstTypeDLVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MidambleShiftAndBurstTypeDLVHCR(): Sequence(&theInfo) {}
};

enum MIMOOperationValues {
	start_MIMOOperation = 0,
	continue_MIMOOperation = 1,
};
typedef Enumerated<CONSTRAINED, 1> MIMOOperation;

typedef Null MIMOPilotConfigurationSecondCPICHPatternNormalPattern;

class MIMOPilotConfigurationSecondCPICHPatternDiversityPattern : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationSecondCPICHPatternDiversityPattern(): Sequence(&theInfo) {}
};

class MIMOPilotConfigurationSecondCPICHPattern : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOPilotConfigurationSecondCPICHPattern(): Choice(&theInfo) {}
};

class MIMOPilotConfiguration : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfiguration(): Sequence(&theInfo) {}
};

class MIMOParametersr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MIMOParametersr7(): Sequence(&theInfo) {}
};

class MIMOPilotConfigurationv7f0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOPilotConfigurationv7f0ext(): Sequence(&theInfo) {}
};

typedef MIMOPilotConfigurationv7f0ext MIMOParametersv7f0ext;

enum MIMOParametersv7g0extprecodingWeightSetRestrictionValues {
	true_MIMOParametersv7g0extprecodingWeightSetRestriction = 0,
};
typedef Enumerated<CONSTRAINED, 0> MIMOParametersv7g0extprecodingWeightSetRestriction;

class MIMOParametersv7g0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	MIMOParametersv7g0ext(): Sequence(&theInfo) {}
};

class MIMOParametersr8ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr8ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum MIMOParametersr8ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStreamValues {
	sf1_MIMOParametersr8ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream = 0,
	sf1sf16_MIMOParametersr8ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream = 1,
};
typedef Enumerated<CONSTRAINED, 1> MIMOParametersr8ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream;

class MIMOParametersr8ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr8ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

typedef Null MIMOParametersr8ModeSpecificInfoTddTdd384tdd768;

class MIMOParametersr8ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOParametersr8ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class MIMOParametersr8ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOParametersr8ModeSpecificInfo(): Choice(&theInfo) {}
};

class MIMOParametersr8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr8(): Sequence(&theInfo) {}
};

enum MIMOParametersr9ModeSpecificInfoFddprecodingWeightSetRestrictionValues {
	true_MIMOParametersr9ModeSpecificInfoFddprecodingWeightSetRestriction = 0,
};
typedef Enumerated<CONSTRAINED, 0> MIMOParametersr9ModeSpecificInfoFddprecodingWeightSetRestriction;

class MIMOParametersr9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MIMOParametersr9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum MIMOParametersr9ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStreamValues {
	sf1_MIMOParametersr9ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream = 0,
	sf1sf16_MIMOParametersr9ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream = 1,
};
typedef Enumerated<CONSTRAINED, 1> MIMOParametersr9ModeSpecificInfoTddTdd128mimoSFModeForHSPDSCHDualStream;

class MIMOParametersr9ModeSpecificInfoTddTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr9ModeSpecificInfoTddTdd128(): Sequence(&theInfo) {}
};

typedef Null MIMOParametersr9ModeSpecificInfoTddTdd384tdd768;

class MIMOParametersr9ModeSpecificInfoTdd : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOParametersr9ModeSpecificInfoTdd(): Choice(&theInfo) {}
};

class MIMOParametersr9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	MIMOParametersr9ModeSpecificInfo(): Choice(&theInfo) {}
};

class MIMOParametersr9 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	MIMOParametersr9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> UpPCHpositionLCR;

class MultifrequencyInfoLCRr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MultifrequencyInfoLCRr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 159> UEDTXDRXOffset;

class NewTiming : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	NewTiming(): Sequence(&theInfo) {}
};

typedef Null NonScheduledTransGrantInfoTDDextTdd384768;

enum NonScheduledTransGrantInfoTDDextTdd128t_SI_nstValues {
	everyEDCHTTI_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 0,
	ms20_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 1,
	ms40_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 2,
	ms60_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 3,
	ms80_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 4,
	ms160_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 5,
	ms200_NonScheduledTransGrantInfoTDDextTdd128t_SI_nst = 6,
};
typedef Enumerated<CONSTRAINED, 6> NonScheduledTransGrantInfoTDDextTdd128t_SI_nst;

class NonScheduledTransGrantInfoTDDextTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDextTdd128(): Sequence(&theInfo) {}
};

class NonScheduledTransGrantInfoTDDext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	NonScheduledTransGrantInfoTDDext(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, maxDPDCH_UL> NumberOfDPDCH;

typedef Integer<CONSTRAINED, 1, 2> NumberOfFBIBits;

class OpenLoopPowerControlTDD : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	OpenLoopPowerControlTDD(): Sequence(&theInfo) {}
};

class OpenLoopPowerControlIPDLTDDr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	OpenLoopPowerControlIPDLTDDr4(): Sequence(&theInfo) {}
};

class PDSCHPowerControlInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHPowerControlInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, hiPDSCHidentities> PDSCHIdentity;

class PDSCHCapacityAllocationInfoConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfoConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

class PDSCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfo(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfoConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfoConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfoConfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfoConfiguration(): Choice(&theInfo) {}
};

class PDSCHCapacityAllocationInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfo(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4ConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

class PDSCHInfor4TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor4TddOptionTdd384(): Sequence(&theInfo) {}
};

class PDSCHInfor4TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor4TddOptionTdd128(): Sequence(&theInfo) {}
};

class PDSCHInfor4TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDSCHInfor4TddOption(): Choice(&theInfo) {}
};

class PDSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfor4(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4ConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor4Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4Configuration(): Choice(&theInfo) {}
};

class PDSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7ConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

class PDSCHInfor7TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor7TddOptionTdd384(): Sequence(&theInfo) {}
};

class PDSCHInfor7TddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor7TddOptionTdd768(): Sequence(&theInfo) {}
};

class PDSCHInfor7TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PDSCHInfor7TddOptionTdd128(): Sequence(&theInfo) {}
};

class PDSCHInfor7TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	PDSCHInfor7TddOption(): Choice(&theInfo) {}
};

class PDSCHInfor7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfor7(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7ConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PDSCHCapacityAllocationInfor7Configuration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7Configuration(): Choice(&theInfo) {}
};

class PDSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PDSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}
};

class PDSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PDSCHInfoLCRr4(): Sequence(&theInfo) {}
};

class PDSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfo(): Sequence(&theInfo) {}
};

class PDSCHSysInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoVHCRr7(): Sequence(&theInfo) {}
};

class PDSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoHCRr5(): Sequence(&theInfo) {}
};

class PDSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PDSCHSysInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PDSCHSysInfo, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoList;

typedef SequenceOf<PDSCHSysInfoVHCRr7, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListVHCRr7;

typedef SequenceOf<PDSCHSysInfoHCRr5, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListHCRr5;

typedef SequenceOf<PDSCHSysInfoLCRr4, CONSTRAINED, 1, maxPDSCH> PDSCHSysInfoListLCRr4;

class PDSCHSysInfoListSFN : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFN(): Sequence(&theInfo) {}
};

class PDSCHSysInfoListSFNHCRr5 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFNHCRr5(): Sequence(&theInfo) {}
};

class PDSCHSysInfoListSFNLCRr4 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PDSCHSysInfoListSFNLCRr4(): Sequence(&theInfo) {}
};

enum TDD768PICHCCodeValues {
	cc32_1_TDD768PICHCCode = 0,
	cc32_2_TDD768PICHCCode = 1,
	cc32_3_TDD768PICHCCode = 2,
	cc32_4_TDD768PICHCCode = 3,
	cc32_5_TDD768PICHCCode = 4,
	cc32_6_TDD768PICHCCode = 5,
	cc32_7_TDD768PICHCCode = 6,
	cc32_8_TDD768PICHCCode = 7,
	cc32_9_TDD768PICHCCode = 8,
	cc32_10_TDD768PICHCCode = 9,
	cc32_11_TDD768PICHCCode = 10,
	cc32_12_TDD768PICHCCode = 11,
	cc32_13_TDD768PICHCCode = 12,
	cc32_14_TDD768PICHCCode = 13,
	cc32_15_TDD768PICHCCode = 14,
	cc32_16_TDD768PICHCCode = 15,
	cc32_17_TDD768PICHCCode = 16,
	cc32_18_TDD768PICHCCode = 17,
	cc32_19_TDD768PICHCCode = 18,
	cc32_20_TDD768PICHCCode = 19,
	cc32_21_TDD768PICHCCode = 20,
	cc32_22_TDD768PICHCCode = 21,
	cc32_23_TDD768PICHCCode = 22,
	cc32_24_TDD768PICHCCode = 23,
	cc32_25_TDD768PICHCCode = 24,
	cc32_26_TDD768PICHCCode = 25,
	cc32_27_TDD768PICHCCode = 26,
	cc32_28_TDD768PICHCCode = 27,
	cc32_29_TDD768PICHCCode = 28,
	cc32_30_TDD768PICHCCode = 29,
	cc32_31_TDD768PICHCCode = 30,
	cc32_32_TDD768PICHCCode = 31,
};
typedef Enumerated<CONSTRAINED, 31> TDD768PICHCCode;

class PICHInfoHCRVHCRr7ChannelisationCode : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PICHInfoHCRVHCRr7ChannelisationCode(): Choice(&theInfo) {}
};

class PICHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	PICHInfoHCRVHCRr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -10, 5> PICHPowerOffset;

typedef Integer<CONSTRAINED, 1, 14> PLCCHInfoPlcchSequenceNumber;

typedef Integer<CONSTRAINED, 0, 10> TPCCommandTargetRate;

class PLCCHInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PLCCHInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TDDPRACHCCodeLCRr4, CONSTRAINED, 1, 4> PRACHChanCodesLCRr4;

class PRACHDefinitionLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PRACHDefinitionLCRr4(): Sequence(&theInfo) {}
};

enum PRACHMidambleValues {
	direct_PRACHMidamble = 0,
	direct_Inverted_PRACHMidamble = 1,
};
typedef Enumerated<CONSTRAINED, 1> PRACHMidamble;

typedef SequenceOf<ASCSettingFDD, CONSTRAINED, 1, maxASC> PRACHPartitioningFdd;

typedef SequenceOf<ASCSettingTDD, CONSTRAINED, 1, maxASC> PRACHPartitioningTdd;

class PRACHPartitioning : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHPartitioning(): Choice(&theInfo) {}
};

enum SFPRACHValues {
	sfpr32_SFPRACH = 0,
	sfpr64_SFPRACH = 1,
	sfpr128_SFPRACH = 2,
	sfpr256_SFPRACH = 3,
};
typedef Enumerated<CONSTRAINED, 3> SFPRACH;

class PRACHRACHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PRACHRACHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum TDDPRACHCCode8Values {
	cc8_1_TDDPRACHCCode8 = 0,
	cc8_2_TDDPRACHCCode8 = 1,
	cc8_3_TDDPRACHCCode8 = 2,
	cc8_4_TDDPRACHCCode8 = 3,
	cc8_5_TDDPRACHCCode8 = 4,
	cc8_6_TDDPRACHCCode8 = 5,
	cc8_7_TDDPRACHCCode8 = 6,
	cc8_8_TDDPRACHCCode8 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TDDPRACHCCode8;

typedef SequenceOf<TDDPRACHCCode8, CONSTRAINED, 1, 8> TDDPRACHCCodeListSf8;

enum TDDPRACHCCode16Values {
	cc16_1_TDDPRACHCCode16 = 0,
	cc16_2_TDDPRACHCCode16 = 1,
	cc16_3_TDDPRACHCCode16 = 2,
	cc16_4_TDDPRACHCCode16 = 3,
	cc16_5_TDDPRACHCCode16 = 4,
	cc16_6_TDDPRACHCCode16 = 5,
	cc16_7_TDDPRACHCCode16 = 6,
	cc16_8_TDDPRACHCCode16 = 7,
	cc16_9_TDDPRACHCCode16 = 8,
	cc16_10_TDDPRACHCCode16 = 9,
	cc16_11_TDDPRACHCCode16 = 10,
	cc16_12_TDDPRACHCCode16 = 11,
	cc16_13_TDDPRACHCCode16 = 12,
	cc16_14_TDDPRACHCCode16 = 13,
	cc16_15_TDDPRACHCCode16 = 14,
	cc16_16_TDDPRACHCCode16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDDPRACHCCode16;

typedef SequenceOf<TDDPRACHCCode16, CONSTRAINED, 1, 8> TDDPRACHCCodeListSf16;

class TDDPRACHCCodeList : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TDDPRACHCCodeList(): Choice(&theInfo) {}
};

class PRACHRACHInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PRACHRACHInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class PRACHRACHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHRACHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class PRACHRACHInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfo(): Sequence(&theInfo) {}
};

enum TDD768PRACHCCode32Values {
	cc32_1_TDD768PRACHCCode32 = 0,
	cc32_2_TDD768PRACHCCode32 = 1,
	cc32_3_TDD768PRACHCCode32 = 2,
	cc32_4_TDD768PRACHCCode32 = 3,
	cc32_5_TDD768PRACHCCode32 = 4,
	cc32_6_TDD768PRACHCCode32 = 5,
	cc32_7_TDD768PRACHCCode32 = 6,
	cc32_8_TDD768PRACHCCode32 = 7,
	cc32_9_TDD768PRACHCCode32 = 8,
	cc32_10_TDD768PRACHCCode32 = 9,
	cc32_11_TDD768PRACHCCode32 = 10,
	cc32_12_TDD768PRACHCCode32 = 11,
	cc32_13_TDD768PRACHCCode32 = 12,
	cc32_14_TDD768PRACHCCode32 = 13,
	cc32_15_TDD768PRACHCCode32 = 14,
	cc32_16_TDD768PRACHCCode32 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDD768PRACHCCode32;

typedef SequenceOf<TDD768PRACHCCode32, CONSTRAINED, 1, 16> TDD768PRACHCCodeListSf32;

enum TDD768PRACHCCode16Values {
	cc16_1_TDD768PRACHCCode16 = 0,
	cc16_2_TDD768PRACHCCode16 = 1,
	cc16_3_TDD768PRACHCCode16 = 2,
	cc16_4_TDD768PRACHCCode16 = 3,
	cc16_5_TDD768PRACHCCode16 = 4,
	cc16_6_TDD768PRACHCCode16 = 5,
	cc16_7_TDD768PRACHCCode16 = 6,
	cc16_8_TDD768PRACHCCode16 = 7,
	cc16_9_TDD768PRACHCCode16 = 8,
	cc16_10_TDD768PRACHCCode16 = 9,
	cc16_11_TDD768PRACHCCode16 = 10,
	cc16_12_TDD768PRACHCCode16 = 11,
	cc16_13_TDD768PRACHCCode16 = 12,
	cc16_14_TDD768PRACHCCode16 = 13,
	cc16_15_TDD768PRACHCCode16 = 14,
	cc16_16_TDD768PRACHCCode16 = 15,
};
typedef Enumerated<CONSTRAINED, 15> TDD768PRACHCCode16;

typedef SequenceOf<TDD768PRACHCCode16, CONSTRAINED, 1, 16> TDD768PRACHCCodeListSf16;

class TDD768PRACHCCodeList : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TDD768PRACHCCodeList(): Choice(&theInfo) {}
};

class PRACHRACHInfoVHCRr7 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PRACHRACHInfoVHCRr7(): Sequence(&theInfo) {}
};

class PRACHRACHInfoLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRv770ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 62> SYNCULInfor4PrxUpPCHdes;

typedef Integer<CONSTRAINED, 0, 3> SYNCULInfor4PowerRampStep;

enum SYNCULInfor4max_SYNC_UL_TransmissionsValues {
	tr1_SYNCULInfor4max_SYNC_UL_Transmissions = 0,
	tr2_SYNCULInfor4max_SYNC_UL_Transmissions = 1,
	tr4_SYNCULInfor4max_SYNC_UL_Transmissions = 2,
	tr8_SYNCULInfor4max_SYNC_UL_Transmissions = 3,
};
typedef Enumerated<CONSTRAINED, 3> SYNCULInfor4max_SYNC_UL_Transmissions;

typedef Integer<CONSTRAINED, 1, 32> SYNCULInfor4Mmax;

class SYNCULInfor4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SYNCULInfor4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHDefinitionLCRr4, CONSTRAINED, 1, maxPRACH_FPACH> PRACHRACHInfoLCRr4PrachDefinitionList;

class PRACHRACHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHRACHInfoLCRr4(): Sequence(&theInfo) {}
};

class PRACHSystemInformationModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	PRACHSystemInformationModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null PRACHSystemInformationModeSpecificInfoTdd;

class PRACHSystemInformationModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PRACHSystemInformationModeSpecificInfo(): Choice(&theInfo) {}
};

class PRACHSystemInformation : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	PRACHSystemInformation(): Sequence(&theInfo) {}
};

class PRACHSystemInformationVHCRr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PRACHSystemInformationVHCRr7(): Sequence(&theInfo) {}
};

class PRACHSystemInformationLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRr4(): Sequence(&theInfo) {}
};

class PRACHSystemInformationLCRv770ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PRACHSystemInformationLCRv770ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<PRACHSystemInformation, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationList;

typedef SequenceOf<PRACHSystemInformationVHCRr7, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListVHCRr7;

typedef SequenceOf<PRACHSystemInformationLCRr4, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRr4;

typedef SequenceOf<PRACHSystemInformationLCRv770ext, CONSTRAINED, 1, maxPRACH> PRACHSystemInformationListLCRv770ext;

typedef Boolean PrimaryCCPCHInfoLCRr4TstdIndicator;

typedef Boolean PrimaryCCPCHInfoLCRr4SctdIndicator;

class PrimaryCCPCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean PrimaryCCPCHInfoLCRr4extTstdIndicator;

class PrimaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PrimaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}
};

typedef Null PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationPending;

typedef Integer<CONSTRAINED, 1, hiPUSCHidentities> PUSCHIdentity;

class PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

typedef Boolean UplinkTimeslotsCodesDynamicSFusage;

typedef SequenceOf<ULTSChannelisationCode, CONSTRAINED, 1, 2> ULTSChannelisationCodeList;

typedef Null UplinkTimeslotsCodesMoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots;

class UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsConsecutive(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsParametersSameAsLast(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsParametersNewParameters(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsParameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslots : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslots(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslots, CONSTRAINED, 1, maxTS_1> UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslotsTimeslotList;

class UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesMoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesMoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesMoreTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodes : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodes(): Sequence(&theInfo) {}
};

class PUSCHInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfo(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignmentConfiguration(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocationPuschAllocationAssignment(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfoPuschAllocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfoPuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfo(): Sequence(&theInfo) {}
};

typedef Null PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationPending;

typedef Null PUSCHPowerControlInfor4TddOptionTdd384;

class PUSCHPowerControlInfor4TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor4TddOptionTdd128(): Sequence(&theInfo) {}
};

class PUSCHPowerControlInfor4TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor4TddOption(): Choice(&theInfo) {}
};

class PUSCHPowerControlInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor4(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

class PUSCHInfor4TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfor4TddOptionTdd384(): Sequence(&theInfo) {}
};

typedef Boolean UplinkTimeslotsCodesLCRr4DynamicSFusage;

typedef Null UplinkTimeslotsCodesLCRr4MoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots;

class UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsConsecutive(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4ParametersSameAsLast(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4ParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4ParametersNewParameters(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4Parameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsLCRr4, CONSTRAINED, 1, maxTS_LCR_1> UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslotsTimeslotList;

class UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4MoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr4MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4MoreTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr4(): Sequence(&theInfo) {}
};

class PUSCHInfor4TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHInfor4TddOptionTdd128(): Sequence(&theInfo) {}
};

class PUSCHInfor4TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHInfor4TddOption(): Choice(&theInfo) {}
};

class PUSCHInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfor4(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignmentConfiguration(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocationPuschAllocationAssignment(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4PuschAllocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4PuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor4(): Sequence(&theInfo) {}
};

typedef Null PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationPending;

typedef Null PUSCHPowerControlInfor7TddOptionTdd384;

typedef Null PUSCHPowerControlInfor7TddOptionTdd768;

class PUSCHPowerControlInfor7TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor7TddOptionTdd128(): Sequence(&theInfo) {}
};

class PUSCHPowerControlInfor7TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor7TddOption(): Choice(&theInfo) {}
};

class PUSCHPowerControlInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHPowerControlInfor7(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationOldConfiguration(): Sequence(&theInfo) {}
};

typedef Boolean UplinkTimeslotsCodesVHCRDynamicSFusage;

enum ULTSChannelisationCodeVHCRValues {
	cc1_1_ULTSChannelisationCodeVHCR = 0,
	cc2_1_ULTSChannelisationCodeVHCR = 1,
	cc2_2_ULTSChannelisationCodeVHCR = 2,
	cc4_1_ULTSChannelisationCodeVHCR = 3,
	cc4_2_ULTSChannelisationCodeVHCR = 4,
	cc4_3_ULTSChannelisationCodeVHCR = 5,
	cc4_4_ULTSChannelisationCodeVHCR = 6,
	cc8_1_ULTSChannelisationCodeVHCR = 7,
	cc8_2_ULTSChannelisationCodeVHCR = 8,
	cc8_3_ULTSChannelisationCodeVHCR = 9,
	cc8_4_ULTSChannelisationCodeVHCR = 10,
	cc8_5_ULTSChannelisationCodeVHCR = 11,
	cc8_6_ULTSChannelisationCodeVHCR = 12,
	cc8_7_ULTSChannelisationCodeVHCR = 13,
	cc8_8_ULTSChannelisationCodeVHCR = 14,
	cc16_1_ULTSChannelisationCodeVHCR = 15,
	cc16_2_ULTSChannelisationCodeVHCR = 16,
	cc16_3_ULTSChannelisationCodeVHCR = 17,
	cc16_4_ULTSChannelisationCodeVHCR = 18,
	cc16_5_ULTSChannelisationCodeVHCR = 19,
	cc16_6_ULTSChannelisationCodeVHCR = 20,
	cc16_7_ULTSChannelisationCodeVHCR = 21,
	cc16_8_ULTSChannelisationCodeVHCR = 22,
	cc16_9_ULTSChannelisationCodeVHCR = 23,
	cc16_10_ULTSChannelisationCodeVHCR = 24,
	cc16_11_ULTSChannelisationCodeVHCR = 25,
	cc16_12_ULTSChannelisationCodeVHCR = 26,
	cc16_13_ULTSChannelisationCodeVHCR = 27,
	cc16_14_ULTSChannelisationCodeVHCR = 28,
	cc16_15_ULTSChannelisationCodeVHCR = 29,
	cc16_16_ULTSChannelisationCodeVHCR = 30,
	cc32_1_ULTSChannelisationCodeVHCR = 31,
	cc32_2_ULTSChannelisationCodeVHCR = 32,
	cc32_3_ULTSChannelisationCodeVHCR = 33,
	cc32_4_ULTSChannelisationCodeVHCR = 34,
	cc32_5_ULTSChannelisationCodeVHCR = 35,
	cc32_6_ULTSChannelisationCodeVHCR = 36,
	cc32_7_ULTSChannelisationCodeVHCR = 37,
	cc32_8_ULTSChannelisationCodeVHCR = 38,
	cc32_9_ULTSChannelisationCodeVHCR = 39,
	cc32_10_ULTSChannelisationCodeVHCR = 40,
	cc32_11_ULTSChannelisationCodeVHCR = 41,
	cc32_12_ULTSChannelisationCodeVHCR = 42,
	cc32_13_ULTSChannelisationCodeVHCR = 43,
	cc32_14_ULTSChannelisationCodeVHCR = 44,
	cc32_15_ULTSChannelisationCodeVHCR = 45,
	cc32_16_ULTSChannelisationCodeVHCR = 46,
	cc32_17_ULTSChannelisationCodeVHCR = 47,
	cc32_18_ULTSChannelisationCodeVHCR = 48,
	cc32_19_ULTSChannelisationCodeVHCR = 49,
	cc32_20_ULTSChannelisationCodeVHCR = 50,
	cc32_21_ULTSChannelisationCodeVHCR = 51,
	cc32_22_ULTSChannelisationCodeVHCR = 52,
	cc32_23_ULTSChannelisationCodeVHCR = 53,
	cc32_24_ULTSChannelisationCodeVHCR = 54,
	cc32_25_ULTSChannelisationCodeVHCR = 55,
	cc32_26_ULTSChannelisationCodeVHCR = 56,
	cc32_27_ULTSChannelisationCodeVHCR = 57,
	cc32_28_ULTSChannelisationCodeVHCR = 58,
	cc32_29_ULTSChannelisationCodeVHCR = 59,
	cc32_30_ULTSChannelisationCodeVHCR = 60,
	cc32_31_ULTSChannelisationCodeVHCR = 61,
	cc32_32_ULTSChannelisationCodeVHCR = 62,
};
typedef Enumerated<CONSTRAINED, 62> ULTSChannelisationCodeVHCR;

typedef SequenceOf<ULTSChannelisationCodeVHCR, CONSTRAINED, 1, 2> ULTSChannelisationCodeListVHCR;

typedef Null UplinkTimeslotsCodesVHCRMoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_1> UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots;

class UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsConsecutive(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCRParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCRParametersSameAsLast(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCRParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCRParametersNewParameters(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCRParameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCRParameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsVHCR : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsVHCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsVHCR, CONSTRAINED, 1, maxTS_1> UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslotsTimeslotList;

class UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCRMoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesVHCRMoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCRMoreTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesVHCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesVHCR(): Sequence(&theInfo) {}
};

class PUSCHInfoVHCR : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfoVHCR(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfigurationNewConfiguration(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignmentConfiguration(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocationPuschAllocationAssignment(): Sequence(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7PuschAllocation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7PuschAllocation(): Choice(&theInfo) {}
};

class PUSCHCapacityAllocationInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	PUSCHCapacityAllocationInfor7(): Sequence(&theInfo) {}
};

class PUSCHInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	PUSCHInfoLCRr4(): Sequence(&theInfo) {}
};

class PUSCHSysInfo : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfo(): Sequence(&theInfo) {}
};

class PUSCHSysInfoVHCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoVHCR(): Sequence(&theInfo) {}
};

class PUSCHSysInfoHCRr5 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoHCRr5(): Sequence(&theInfo) {}
};

class PUSCHSysInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	PUSCHSysInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<PUSCHSysInfo, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoList;

typedef SequenceOf<PUSCHSysInfoHCRr5, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoListHCRr5;

typedef SequenceOf<PUSCHSysInfoLCRr4, CONSTRAINED, 1, maxPUSCH> PUSCHSysInfoListLCRr4;

class PUSCHSysInfoListSFN : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFN(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNHCRr5 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNHCRr5(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNLCRr4 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNLCRr4(): Sequence(&theInfo) {}
};

class PUSCHSysInfoListSFNVHCR : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	PUSCHSysInfoListSFNVHCR(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 8191> ReducedScramblingCodeNumber;

typedef Null RepetitionPeriodAndLengthForSPSRepetitionPeriod1;

typedef Integer<CONSTRAINED, 1, 1> RepetitionPeriodAndLengthForSPSRepetitionPeriod2;

typedef Integer<CONSTRAINED, 1, 3> RepetitionPeriodAndLengthForSPSRepetitionPeriod4;

typedef Integer<CONSTRAINED, 1, 7> RepetitionPeriodAndLengthForSPSRepetitionPeriod8;

typedef Integer<CONSTRAINED, 1, 15> RepetitionPeriodAndLengthForSPSRepetitionPeriod16;

typedef Integer<CONSTRAINED, 1, 31> RepetitionPeriodAndLengthForSPSRepetitionPeriod32;

class RepetitionPeriodAndLengthForSPS : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	RepetitionPeriodAndLengthForSPS(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> RepPerLengthOffsetMICHRpp42;

typedef Integer<CONSTRAINED, 0, 7> RepPerLengthOffsetMICHRpp82;

typedef Integer<CONSTRAINED, 0, 7> RepPerLengthOffsetMICHRpp84;

typedef Integer<CONSTRAINED, 0, 15> RepPerLengthOffsetMICHRpp162;

typedef Integer<CONSTRAINED, 0, 15> RepPerLengthOffsetMICHRpp164;

typedef Integer<CONSTRAINED, 0, 31> RepPerLengthOffsetMICHRpp322;

typedef Integer<CONSTRAINED, 0, 31> RepPerLengthOffsetMICHRpp324;

typedef Integer<CONSTRAINED, 0, 63> RepPerLengthOffsetMICHRpp642;

typedef Integer<CONSTRAINED, 0, 63> RepPerLengthOffsetMICHRpp644;

class RepPerLengthOffsetMICH : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	RepPerLengthOffsetMICH(): Choice(&theInfo) {}
};

typedef Boolean RLAdditionInformationDummy;

class RLAdditionInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	RLAdditionInformation(): Sequence(&theInfo) {}
};

class RLAdditionInformationr6DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLAdditionInformationr6DldpchInfo(): Choice(&theInfo) {}
};

class RLAdditionInformationr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationr6(): Sequence(&theInfo) {}
};

class RLAdditionInformationr7DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLAdditionInformationr7DldpchInfo(): Choice(&theInfo) {}
};

class RLAdditionInformationr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationr7(): Sequence(&theInfo) {}
};

class RLAdditionInformationr8DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLAdditionInformationr8DldpchInfo(): Choice(&theInfo) {}
};

typedef Null DTXDRXTimingInfor7TimingContinue;

class DTXDRXTimingInfor7Timing : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	DTXDRXTimingInfor7Timing(): Choice(&theInfo) {}
};

class DTXDRXTimingInfor7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DTXDRXTimingInfor7(): Sequence(&theInfo) {}
};

class TargetCellPreconfigInfo : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	TargetCellPreconfigInfo(): Sequence(&theInfo) {}
};

class RLAdditionInformationr8 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RLAdditionInformationr8(): Sequence(&theInfo) {}
};

class RLAdditionInformationr9DldpchInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	RLAdditionInformationr9DldpchInfo(): Choice(&theInfo) {}
};

class TargetCellPreconfigInfor9 : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	TargetCellPreconfigInfor9(): Sequence(&theInfo) {}
};

class RLAdditionInformationr9 : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	RLAdditionInformationr9(): Sequence(&theInfo) {}
};

class RLAdditionInformationv6b0ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv6b0ext(): Sequence(&theInfo) {}
};

typedef MIMOParametersv7f0ext TargetCellPreconfigInfov890ext;

class RLAdditionInformationv890ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv890ext(): Sequence(&theInfo) {}
};

enum SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestrictionValues {
	true_SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction = 0,
};
typedef Enumerated<CONSTRAINED, 0> SecondaryCellMIMOparametersFDDv950extprecodingWeightSetRestriction;

class SecondaryCellMIMOparametersFDDv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCellMIMOparametersFDDv950ext(): Sequence(&theInfo) {}
};

typedef SecondaryCellMIMOparametersFDDv950ext TargetCellPreconfigInfov950ext;

class RLAdditionInformationv950ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	RLAdditionInformationv950ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLAdditionInformation, CONSTRAINED, 1, maxRL_1> RLAdditionInformationList;

typedef SequenceOf<RLAdditionInformationr6, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr6;

typedef SequenceOf<RLAdditionInformationr7, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr7;

typedef SequenceOf<RLAdditionInformationv6b0ext, CONSTRAINED, 1, maxRL> RLAdditionInformationlistv6b0ext;

typedef SequenceOf<RLAdditionInformationr8, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr8;

typedef SequenceOf<RLAdditionInformationv890ext, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListv890ext;

typedef SequenceOf<RLAdditionInformationr9, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListr9;

typedef SequenceOf<RLAdditionInformationv950ext, CONSTRAINED, 1, maxRL_1> RLAdditionInformationListv950ext;

class RLAdditionInformationSecULFreq : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	RLAdditionInformationSecULFreq(): Sequence(&theInfo) {}
};

typedef SequenceOf<RLAdditionInformationSecULFreq, CONSTRAINED, 1, maxEDCHRL_1> RLAdditionInformationListSecULFreq;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxRL> RLRemovalInformationList;

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxEDCHRL> RLRemovalInformationListSecULFreq;

enum SCCPCHChannelisationCodeVHCRValues {
	cc32_1_SCCPCHChannelisationCodeVHCR = 0,
	cc32_2_SCCPCHChannelisationCodeVHCR = 1,
	cc32_3_SCCPCHChannelisationCodeVHCR = 2,
	cc32_4_SCCPCHChannelisationCodeVHCR = 3,
	cc32_5_SCCPCHChannelisationCodeVHCR = 4,
	cc32_6_SCCPCHChannelisationCodeVHCR = 5,
	cc32_7_SCCPCHChannelisationCodeVHCR = 6,
	cc32_8_SCCPCHChannelisationCodeVHCR = 7,
	cc32_9_SCCPCHChannelisationCodeVHCR = 8,
	cc32_10_SCCPCHChannelisationCodeVHCR = 9,
	cc32_11_SCCPCHChannelisationCodeVHCR = 10,
	cc32_12_SCCPCHChannelisationCodeVHCR = 11,
	cc32_13_SCCPCHChannelisationCodeVHCR = 12,
	cc32_14_SCCPCHChannelisationCodeVHCR = 13,
	cc32_15_SCCPCHChannelisationCodeVHCR = 14,
	cc32_16_SCCPCHChannelisationCodeVHCR = 15,
	cc32_17_SCCPCHChannelisationCodeVHCR = 16,
	cc32_18_SCCPCHChannelisationCodeVHCR = 17,
	cc32_19_SCCPCHChannelisationCodeVHCR = 18,
	cc32_20_SCCPCHChannelisationCodeVHCR = 19,
	cc32_21_SCCPCHChannelisationCodeVHCR = 20,
	cc32_22_SCCPCHChannelisationCodeVHCR = 21,
	cc32_23_SCCPCHChannelisationCodeVHCR = 22,
	cc32_24_SCCPCHChannelisationCodeVHCR = 23,
	cc32_25_SCCPCHChannelisationCodeVHCR = 24,
	cc32_26_SCCPCHChannelisationCodeVHCR = 25,
	cc32_27_SCCPCHChannelisationCodeVHCR = 26,
	cc32_28_SCCPCHChannelisationCodeVHCR = 27,
	cc32_29_SCCPCHChannelisationCodeVHCR = 28,
	cc32_30_SCCPCHChannelisationCodeVHCR = 29,
	cc32_31_SCCPCHChannelisationCodeVHCR = 30,
	cc32_32_SCCPCHChannelisationCodeVHCR = 31,
};
typedef Enumerated<CONSTRAINED, 31> SCCPCHChannelisationCodeVHCR;

typedef SequenceOf<SCCPCHChannelisationCodeVHCR, CONSTRAINED, 1, 32> SCCPCHChannelisationCodeListVHCR;

class SCCPCHSystemInformation : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHSystemInformation(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoLCRr4ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoLCRr4ext(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationLCRr4ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHSystemInformationLCRr4ext(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd384(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfoTdd768(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoHCRVHCRr7(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationHCRVHCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SCCPCHSystemInformationHCRVHCRr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<SCCPCHSystemInformation, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationList;

typedef SequenceOf<SCCPCHSystemInformationHCRVHCRr7, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListHCRVHCRr7;

typedef SequenceOf<SCCPCHSystemInformationLCRr4ext, CONSTRAINED, 1, maxSCCPCH> SCCPCHSystemInformationListLCRr4ext;

typedef Boolean SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFddSttdIndicator;

class SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd384(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfoTdd128(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr6 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr6(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 3> MBMSMCCHConfigurationInfor6AccessInfoPeriodCoefficient;

typedef Integer<CONSTRAINED, 0, 3> MBMSMCCHConfigurationInfor6RepetitionPeriodCoefficient;

typedef Integer<CONSTRAINED, 7, 10> MBMSMCCHConfigurationInfor6ModificationPeriodCoefficient;

enum MBMSTCTFPresenceValues {
	false_MBMSTCTFPresence = 0,
};
typedef Enumerated<CONSTRAINED, 0> MBMSTCTFPresence;

class MBMSMCCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	MBMSMCCHConfigurationInfor6(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr6FachCarryingMCCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr6FachCarryingMCCH(): Sequence(&theInfo) {}
};

typedef SequenceOf<TransportFormatSet, CONSTRAINED, 1, maxFACHPCH> MBMSFACHCarryingMTCHList;

typedef Integer<CONSTRAINED, 0, 31> MBMSMSCHSchedulingInfoSchedulingPeriod32Offset;

typedef Integer<CONSTRAINED, 0, 63> MBMSMSCHSchedulingInfoSchedulingPeriod64Offset;

typedef Integer<CONSTRAINED, 0, 127> MBMSMSCHSchedulingInfoSchedulingPeriod128Offset;

typedef Integer<CONSTRAINED, 0, 255> MBMSMSCHSchedulingInfoSchedulingPeriod256Offset;

typedef Integer<CONSTRAINED, 0, 511> MBMSMSCHSchedulingInfoSchedulingPeriod512Offset;

typedef Integer<CONSTRAINED, 0, 1023> MBMSMSCHSchedulingInfoSchedulingPeriod1024Offset;

class MBMSMSCHSchedulingInfo : Choice {
private:
	static const void *choicesInfo[6];
public:
	static const Info theInfo;
	MBMSMSCHSchedulingInfo(): Choice(&theInfo) {}
};

class MBMSMSCHConfigurationInfor6 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	MBMSMSCHConfigurationInfor6(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr6FachCarryingMSCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr6FachCarryingMSCH(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr6 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr6(): Sequence(&theInfo) {}
};

typedef Boolean SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddSttdIndicator;

typedef Null SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulationModQPSK;

typedef Integer<CONSTRAINED, -11, 4> SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulationMod16QAM;

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFddModulation(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

enum SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384modulationValues {
	modQPSK_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384modulation = 0,
	mod16QAM_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384modulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384modulation;

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd384(): Sequence(&theInfo) {}
};

enum SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768modulationValues {
	modQPSK_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768modulation = 0,
	mod16QAM_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768modulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768modulation;

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd768(): Sequence(&theInfo) {}
};

enum TimeSlotLCRextValues {
	ts7_TimeSlotLCRext = 0,
	spare3_TimeSlotLCRext = 1,
	spare2_TimeSlotLCRext = 2,
	spare1_TimeSlotLCRext = 3,
};
typedef Enumerated<CONSTRAINED, 3> TimeSlotLCRext;

enum SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128modulationValues {
	modQPSK_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128modulation = 0,
	mod16QAM_SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128modulation = 1,
};
typedef Enumerated<CONSTRAINED, 1> SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128modulation;

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfoTdd128(): Sequence(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[4];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class SecondaryCCPCHInfoMBMSr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoMBMSr7(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr7FachCarryingMCCH : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr7FachCarryingMCCH(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr7FachCarryingMSCH : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr7FachCarryingMSCH(): Sequence(&theInfo) {}
};

class SCCPCHSystemInformationMBMSr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	SCCPCHSystemInformationMBMSr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4> SecondaryCCPCHFrameType2InfoSubFrameNumber;

typedef Null SecondaryCCPCHFrameType2InfoModulationModQPSK;

typedef Integer<CONSTRAINED, -11, 4> SecondaryCCPCHFrameType2InfoModulationMod16QAMCpichSecCCPCHPowerOffset;

class SecondaryCCPCHFrameType2InfoModulationMod16QAM : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	SecondaryCCPCHFrameType2InfoModulationMod16QAM(): Sequence(&theInfo) {}
};

class SecondaryCCPCHFrameType2InfoModulation : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SecondaryCCPCHFrameType2InfoModulation(): Choice(&theInfo) {}
};

class SecondaryCCPCHFrameType2Info : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	SecondaryCCPCHFrameType2Info(): Sequence(&theInfo) {}
};

typedef Boolean SecondaryCCPCHInfoDiffMBMSSttdIndicator;

class SecondaryCCPCHInfoDiffMBMS : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SecondaryCCPCHInfoDiffMBMS(): Sequence(&theInfo) {}
};

typedef Boolean ServingCellChangeMACreset;

enum ServingCellChangeMsgTypeValues {
	radioBearerSetup_ServingCellChangeMsgType = 0,
	radioBearerReconfiguration_ServingCellChangeMsgType = 1,
	transportChannelReconfiguration_ServingCellChangeMsgType = 2,
	physicalChannelReconfiguration_ServingCellChangeMsgType = 3,
};
typedef Enumerated<CONSTRAINED, 3> ServingCellChangeMsgType;

typedef Integer<CONSTRAINED, 0, 3> ServingCellChangeTrId;

class ServingCellChangeParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ServingCellChangeParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 4095> SFNTimeInfoActivationTimeSFN;

class SFNTimeInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SFNTimeInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> SpecialBurstScheduling;

enum SpreadingFactorValues {
	sf4_SpreadingFactor = 0,
	sf8_SpreadingFactor = 1,
	sf16_SpreadingFactor = 2,
	sf32_SpreadingFactor = 3,
	sf64_SpreadingFactor = 4,
	sf128_SpreadingFactor = 5,
	sf256_SpreadingFactor = 6,
};
typedef Enumerated<CONSTRAINED, 6> SpreadingFactor;

class SPSInformationTDD128r8 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SPSInformationTDD128r8(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 8, 8> SynchronisationParametersr4SyncULCodesBitmap;

typedef Integer<CONSTRAINED, 0, 62> SynchronisationParametersr4PrxUpPCHdes;

enum SYNCULProcedurer4max_SYNC_UL_TransmissionsValues {
	tr1_SYNCULProcedurer4max_SYNC_UL_Transmissions = 0,
	tr2_SYNCULProcedurer4max_SYNC_UL_Transmissions = 1,
	tr4_SYNCULProcedurer4max_SYNC_UL_Transmissions = 2,
	tr8_SYNCULProcedurer4max_SYNC_UL_Transmissions = 3,
};
typedef Enumerated<CONSTRAINED, 3> SYNCULProcedurer4max_SYNC_UL_Transmissions;

typedef Integer<CONSTRAINED, 0, 3> SYNCULProcedurer4PowerRampStep;

class SYNCULProcedurer4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	SYNCULProcedurer4(): Sequence(&theInfo) {}
};

class SynchronisationParametersr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	SynchronisationParametersr4(): Sequence(&theInfo) {}
};

class TDDMBSFNTSlotInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TDDMBSFNTSlotInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TDDMBSFNTSlotInfo, CONSTRAINED, 1, maxTS> TDDMBSFNInformation;

enum TFCControlDurationValues {
	tfc_cd1_TFCControlDuration = 0,
	tfc_cd2_TFCControlDuration = 1,
	tfc_cd4_TFCControlDuration = 2,
	tfc_cd8_TFCControlDuration = 3,
	tfc_cd16_TFCControlDuration = 4,
	tfc_cd24_TFCControlDuration = 5,
	tfc_cd32_TFCControlDuration = 6,
	tfc_cd48_TFCControlDuration = 7,
	tfc_cd64_TFCControlDuration = 8,
	tfc_cd128_TFCControlDuration = 9,
	tfc_cd192_TFCControlDuration = 10,
	tfc_cd256_TFCControlDuration = 11,
	tfc_cd512_TFCControlDuration = 12,
};
typedef Enumerated<CONSTRAINED, 12> TFCControlDuration;

typedef SequenceOf<TimeslotNumber, CONSTRAINED, 1, maxTS> TimeslotList;

typedef SequenceOf<TimeslotNumber, CONSTRAINED, 1, maxTS> TimeslotListr4Tdd384;

typedef SequenceOf<TimeslotNumberLCRr4, CONSTRAINED, 1, maxTS_LCR> TimeslotListr4Tdd128;

class TimeslotListr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TimeslotListr4(): Choice(&theInfo) {}
};

enum UL16QAMConfigmac_es_e_resetIndicatorValues {
	true_UL16QAMConfigmac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> UL16QAMConfigmac_es_e_resetIndicator;

class UL16QAMConfig : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	UL16QAMConfig(): Sequence(&theInfo) {}
};

class ULCCTrCH : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCH(): Sequence(&theInfo) {}
};

class ULCCTrCHr4TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr4TddOptionTdd384(): Sequence(&theInfo) {}
};

class ULCCTrCHr4TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr4TddOptionTdd128(): Sequence(&theInfo) {}
};

class ULCCTrCHr4TddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULCCTrCHr4TddOption(): Choice(&theInfo) {}
};

class ULCCTrCHr4 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCHr4(): Sequence(&theInfo) {}
};

class ULCCTrCHr7TddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr7TddOptionTdd384(): Sequence(&theInfo) {}
};

class ULCCTrCHr7TddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr7TddOptionTdd768(): Sequence(&theInfo) {}
};

typedef Boolean UplinkTimeslotsCodesLCRr7DynamicSFusage;

class ULTSChannelisationCodeListr7 : Sequence {
private:
	static const void *itemsInfo[0];
	static bool itemsPres[0];
public:
	static const Info theInfo;
	ULTSChannelisationCodeListr7(): Sequence(&theInfo) {}
};

typedef Null UplinkTimeslotsCodesLCRr7MoreTimeslotsNoMore;

typedef Integer<CONSTRAINED, 1, maxTS_LCR_1> UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutiveNumAdditionalTimeslots;

class UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsConsecutive(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7ParametersSameAsLast(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7ParametersNewParameters : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7ParametersNewParameters(): Sequence(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7Parameters : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7Parameters(): Choice(&theInfo) {}
};

class UplinkAdditionalTimeslotsLCRr7 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	UplinkAdditionalTimeslotsLCRr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<UplinkAdditionalTimeslotsLCRr7, CONSTRAINED, 1, maxTS_LCR_1> UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslotsTimeslotList;

class UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7MoreTimeslotsAdditionalTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr7MoreTimeslots : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7MoreTimeslots(): Choice(&theInfo) {}
};

class UplinkTimeslotsCodesLCRr7 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	UplinkTimeslotsCodesLCRr7(): Sequence(&theInfo) {}
};

class ULCCTrCHr7TddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULCCTrCHr7TddOptionTdd128(): Sequence(&theInfo) {}
};

class ULCCTrCHr7TddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULCCTrCHr7TddOption(): Choice(&theInfo) {}
};

class ULCCTrCHr7 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULCCTrCHr7(): Sequence(&theInfo) {}
};

typedef SequenceOf<ULCCTrCH, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHList;

typedef SequenceOf<ULCCTrCHr4, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr4;

typedef SequenceOf<ULCCTrCHr7, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListr7;

typedef SequenceOf<TFCSIdentityPlain, CONSTRAINED, 1, maxCCTrCH> ULCCTrCHListToRemove;

typedef Boolean ULDPCHInfoModeSpecificInfoFddTfciExistence;

class ULDPCHInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ULDPCHInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null ULTimingAdvanceControlDisabled;

typedef Integer<CONSTRAINED, 0, 63> ULTimingAdvance;

class ULTimingAdvanceControlEnabled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlEnabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControl : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControl(): Choice(&theInfo) {}
};

class ULDPCHInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfo(): Sequence(&theInfo) {}
};

class ULChannelRequirement : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirement(): Choice(&theInfo) {}
};

typedef Boolean ULDPCHInfor4ModeSpecificInfoFddTfciExistence;

class ULDPCHInfor4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ULDPCHInfor4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null ULTimingAdvanceControlr4Disabled;

class ULTimingAdvanceControlr4EnabledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4EnabledTddOptionTdd384(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr4EnabledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4EnabledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr4EnabledTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4EnabledTddOption(): Choice(&theInfo) {}
};

class ULTimingAdvanceControlr4Enabled : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr4(): Choice(&theInfo) {}
};

class ULDPCHInfor4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfor4 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor4(): Sequence(&theInfo) {}
};

class ULChannelRequirementr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirementr4(): Choice(&theInfo) {}
};

typedef Boolean ULDPCHInfor5ModeSpecificInfoFddTfciExistence;

class ULDPCHInfor5ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	ULDPCHInfor5ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor5ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor5ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor5ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor5ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfor5 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor5(): Sequence(&theInfo) {}
};

class ULChannelRequirementr5 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULChannelRequirementr5(): Choice(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetID : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetID(): Choice(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetIDr4 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr4(): Choice(&theInfo) {}
};

class ULChannelRequirementWithCPCHSetIDr5 : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULChannelRequirementWithCPCHSetIDr5(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor6Fdd : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6Fdd(): Sequence(&theInfo) {}
};

typedef Null ULDPCHPowerControlInfor6TddUlOLPCSignallingBroadcastULOLPCinfo;

class ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd384(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalledTddOption(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6TddUlOLPCSignallingIndividuallySignalled(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor6TddUlOLPCSignalling : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6TddUlOLPCSignalling(): Choice(&theInfo) {}
};

class ULDPCHPowerControlInfor6Tdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6Tdd(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfor6 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfor6(): Choice(&theInfo) {}
};

typedef Boolean ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresentTfciExistence;

class ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresencePresent(): Sequence(&theInfo) {}
};

typedef Boolean ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresentTfciExistence;

class ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresenceNotPresent(): Sequence(&theInfo) {}
};

class ULDPCHInfor6ModeSpecificInfoFddDpdchPresence : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfoFddDpdchPresence(): Choice(&theInfo) {}
};

class ULDPCHInfor6ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor6ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor6ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor6ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfor6 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor6(): Sequence(&theInfo) {}
};

typedef Boolean ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresentTfciExistence;

class ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresencePresent(): Sequence(&theInfo) {}
};

typedef Boolean ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresentTfciExistence;

class ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresenceNotPresent(): Sequence(&theInfo) {}
};

class ULDPCHInfor7ModeSpecificInfoFddDpdchPresence : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfoFddDpdchPresence(): Choice(&theInfo) {}
};

class ULDPCHInfor7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null ULTimingAdvanceControlr7Disabled;

class ULTimingAdvanceControlr7EnabledTddOptionTdd384 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7EnabledTddOptionTdd384(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr7EnabledTddOptionTdd768 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7EnabledTddOptionTdd768(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr7EnabledTddOptionTdd128 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7EnabledTddOptionTdd128(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr7EnabledTddOption : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7EnabledTddOption(): Choice(&theInfo) {}
};

class ULTimingAdvanceControlr7Enabled : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlr7 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlr7(): Choice(&theInfo) {}
};

class ULDPCHInfor7ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULDPCHInfor7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULDPCHInfor7ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULDPCHInfor7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHInfor7(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostFDD(): Sequence(&theInfo) {}
};

class ULDPCHInfoPostFDD : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULDPCHInfoPostFDD(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDD(): Sequence(&theInfo) {}
};

class ULDPCHInfoPostTDD : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDD(): Sequence(&theInfo) {}
};

class ULDPCHPowerControlInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULDPCHPowerControlInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Null ULTimingAdvanceControlLCRr4Disabled;

class ULTimingAdvanceControlLCRr4Enabled : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlLCRr4Enabled(): Sequence(&theInfo) {}
};

class ULTimingAdvanceControlLCRr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULTimingAdvanceControlLCRr4(): Choice(&theInfo) {}
};

class ULDPCHInfoPostTDDLCRr4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULDPCHInfoPostTDDLCRr4(): Sequence(&theInfo) {}
};

typedef Null ULEDCHInformationextFdd;

class ULEDCHInformationextTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ULEDCHInformationextTdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationext : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULEDCHInformationext(): Choice(&theInfo) {}
};

enum ULEDCHInformationr6mac_es_e_resetIndicatorValues {
	true_ULEDCHInformationr6mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr6mac_es_e_resetIndicator;

class ULEDCHInformationr6 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULEDCHInformationr6(): Sequence(&theInfo) {}
};

enum ULEDCHInformationr7mac_es_e_resetIndicatorValues {
	true_ULEDCHInformationr7mac_es_e_resetIndicator = 0,
};
typedef Enumerated<CONSTRAINED, 0> ULEDCHInformationr7mac_es_e_resetIndicator;

class ULEDCHInformationr7ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	ULEDCHInformationr7ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationr7ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ULEDCHInformationr7ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class ULEDCHInformationr7ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ULEDCHInformationr7ModeSpecificInfo(): Choice(&theInfo) {}
};

class ULEDCHInformationr7 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ULEDCHInformationr7(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> SatID;

typedef Integer<CONSTRAINED, -2048, 2047> AcquisitionSatInfoDoppler0thOrder;

typedef Integer<CONSTRAINED, -42, 21> ExtraDopplerInfoDoppler1stOrder;

enum DopplerUncertaintyValues {
	hz12_5_DopplerUncertainty = 0,
	hz25_DopplerUncertainty = 1,
	hz50_DopplerUncertainty = 2,
	hz100_DopplerUncertainty = 3,
	hz200_DopplerUncertainty = 4,
	spare3_DopplerUncertainty = 5,
	spare2_DopplerUncertainty = 6,
	spare1_DopplerUncertainty = 7,
};
typedef Enumerated<CONSTRAINED, 7> DopplerUncertainty;

class ExtraDopplerInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ExtraDopplerInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 1022> AcquisitionSatInfoCodePhase;

typedef Integer<CONSTRAINED, 0, 19> AcquisitionSatInfoIntegerCodePhase;

typedef Integer<CONSTRAINED, 0, 3> AcquisitionSatInfoGpsBitNumber;

enum CodePhaseSearchWindowValues {
	w1023_CodePhaseSearchWindow = 0,
	w1_CodePhaseSearchWindow = 1,
	w2_CodePhaseSearchWindow = 2,
	w3_CodePhaseSearchWindow = 3,
	w4_CodePhaseSearchWindow = 4,
	w6_CodePhaseSearchWindow = 5,
	w8_CodePhaseSearchWindow = 6,
	w12_CodePhaseSearchWindow = 7,
	w16_CodePhaseSearchWindow = 8,
	w24_CodePhaseSearchWindow = 9,
	w32_CodePhaseSearchWindow = 10,
	w48_CodePhaseSearchWindow = 11,
	w64_CodePhaseSearchWindow = 12,
	w96_CodePhaseSearchWindow = 13,
	w128_CodePhaseSearchWindow = 14,
	w192_CodePhaseSearchWindow = 15,
};
typedef Enumerated<CONSTRAINED, 15> CodePhaseSearchWindow;

typedef Integer<CONSTRAINED, 0, 31> AzimuthAndElevationAzimuth;

typedef Integer<CONSTRAINED, 0, 7> AzimuthAndElevationElevation;

class AzimuthAndElevation : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AzimuthAndElevation(): Sequence(&theInfo) {}
};

class AcquisitionSatInfo : Sequence {
private:
	static const void *itemsInfo[8];
	static bool itemsPres[8];
public:
	static const Info theInfo;
	AcquisitionSatInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<AcquisitionSatInfo, CONSTRAINED, 1, maxSat> AcquisitionSatInfoList;

typedef Integer<CONSTRAINED, 1, 16> MeasurementIdentity;

typedef SequenceOf<MeasurementIdentity, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDList;

typedef Integer<CONSTRAINED, 1, 32> MeasurementIdentityr9;

typedef SequenceOf<MeasurementIdentityr9, CONSTRAINED, 1, maxAdditionalMeas> AdditionalMeasurementIDListr9;

typedef Integer<CONSTRAINED, 0, 3> AlmanacSatInfoDataID;

typedef BitString<CONSTRAINED, 16, 16> AlmanacSatInfoE;

typedef BitString<CONSTRAINED, 8, 8> AlmanacSatInfoToa;

typedef BitString<CONSTRAINED, 16, 16> AlmanacSatInfoDeltaI;

typedef BitString<CONSTRAINED, 16, 16> AlmanacSatInfoOmegaDot;

typedef BitString<CONSTRAINED, 8, 8> AlmanacSatInfoSatHealth;

typedef BitString<CONSTRAINED, 24, 24> AlmanacSatInfoASqrt;

typedef BitString<CONSTRAINED, 24, 24> AlmanacSatInfoOmega0;

typedef BitString<CONSTRAINED, 24, 24> AlmanacSatInfoM0;

typedef BitString<CONSTRAINED, 24, 24> AlmanacSatInfoOmega;

typedef BitString<CONSTRAINED, 11, 11> AlmanacSatInfoAf0;

typedef BitString<CONSTRAINED, 11, 11> AlmanacSatInfoAf1;

class AlmanacSatInfo : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	AlmanacSatInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<AlmanacSatInfo, CONSTRAINED, 1, maxSat> AlmanacSatInfoList;

typedef BitString<CONSTRAINED, 2, 2> GANSSSATInfoAlmanacSBASecefSbasAlmDataID;

typedef Integer<CONSTRAINED, 0, 63> GANSSSATInfoAlmanacSBASecefSvID;

typedef BitString<CONSTRAINED, 8, 8> GANSSSATInfoAlmanacSBASecefSbasAlmHealth;

typedef BitString<CONSTRAINED, 15, 15> GANSSSATInfoAlmanacSBASecefSbasAlmXg;

typedef BitString<CONSTRAINED, 15, 15> GANSSSATInfoAlmanacSBASecefSbasAlmYg;

typedef BitString<CONSTRAINED, 9, 9> GANSSSATInfoAlmanacSBASecefSbasAlmZg;

typedef BitString<CONSTRAINED, 3, 3> GANSSSATInfoAlmanacSBASecefSbasAlmXgdot;

typedef BitString<CONSTRAINED, 3, 3> GANSSSATInfoAlmanacSBASecefSbasAlmYgDot;

typedef BitString<CONSTRAINED, 4, 4> GANSSSATInfoAlmanacSBASecefSbasAlmZgDot;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacSBASecefSbasAlmTo;

class GANSSSATInfoAlmanacSBASecef : Sequence {
private:
	static const void *itemsInfo[10];
	static bool itemsPres[10];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacSBASecef(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacSBASecef, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacSBASecefList;

class ALMECEFsbasAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMECEFsbasAlmanacSet(): Sequence(&theInfo) {}
};

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacGLOkpGloAlmNA;

typedef BitString<CONSTRAINED, 5, 5> GANSSSATInfoAlmanacGLOkpGloAlmnA;

typedef BitString<CONSTRAINED, 5, 5> GANSSSATInfoAlmanacGLOkpGloAlmHA;

typedef BitString<CONSTRAINED, 21, 21> GANSSSATInfoAlmanacGLOkpGloAlmLambdaA;

typedef BitString<CONSTRAINED, 21, 21> GANSSSATInfoAlmanacGLOkpGloAlmTlambdaA;

typedef BitString<CONSTRAINED, 18, 18> GANSSSATInfoAlmanacGLOkpGloAlmDeltaIA;

typedef BitString<CONSTRAINED, 22, 22> GANSSSATInfoAlmanacGLOkpGloAkmDeltaTA;

typedef BitString<CONSTRAINED, 7, 7> GANSSSATInfoAlmanacGLOkpGloAlmDeltaTdotA;

typedef BitString<CONSTRAINED, 15, 15> GANSSSATInfoAlmanacGLOkpGloAlmEpsilonA;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacGLOkpGloAlmOmegaA;

typedef BitString<CONSTRAINED, 10, 10> GANSSSATInfoAlmanacGLOkpGloAlmTauA;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacGLOkpGloAlmCA;

typedef BitString<CONSTRAINED, 2, 2> GANSSSATInfoAlmanacGLOkpGloAlmMA;

class GANSSSATInfoAlmanacGLOkp : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacGLOkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacGLOkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacGLOkpList;

class ALMGlonassAlmanacSet : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ALMGlonassAlmanacSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> ALMkeplerianParametersToa;

typedef Integer<CONSTRAINED, 0, 3> ALMkeplerianParametersIoda;

typedef Integer<CONSTRAINED, 0, 63> GANSSSATInfoAlmanacKpSvId;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacKpGanssalme;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacKpGanssdeltaIalm;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacKpGanssomegadotalm;

typedef BitString<CONSTRAINED, 4, 4> GANSSSATInfoAlmanacKpGansssvhealthalm;

typedef BitString<CONSTRAINED, 17, 17> GANSSSATInfoAlmanacKpGanssdeltaasqrtalm;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacKpGanssomegazeroalm;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacKpGanssmzeroalm;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacKpGanssomegaalm;

typedef BitString<CONSTRAINED, 14, 14> GANSSSATInfoAlmanacKpGanssafzeroalm;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacKpGanssafonealm;

class GANSSSATInfoAlmanacKp : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacKp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacKp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacKpList;

class ALMkeplerianParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	ALMkeplerianParameters(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> ALMMidiAlmanacSetToa;

typedef Integer<CONSTRAINED, 0, 63> GANSSSATInfoAlmanacMIDIkpSvID;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacMIDIkpMidiAlmE;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacMIDIkpMidiAlmDeltaI;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacMIDIkpMidiAlmOmegaDot;

typedef BitString<CONSTRAINED, 17, 17> GANSSSATInfoAlmanacMIDIkpMidiAlmSqrtA;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacMIDIkpMidiAlmOmega0;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacMIDIkpMidiAlmOmega;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacMIDIkpMidiAlmMo;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacMIDIkpMidiAlmaf0;

typedef BitString<CONSTRAINED, 10, 10> GANSSSATInfoAlmanacMIDIkpMidiAlmaf1;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacMIDIkpMidiAlmL1Health;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacMIDIkpMidiAlmL2Health;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacMIDIkpMidiAlmL5Health;

class GANSSSATInfoAlmanacMIDIkp : Sequence {
private:
	static const void *itemsInfo[13];
	static bool itemsPres[13];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacMIDIkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacMIDIkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacMIDIkpList;

class ALMMidiAlmanacSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMMidiAlmanacSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> ALMNAVKeplerianSetToa;

typedef Integer<CONSTRAINED, 0, 63> GANSSSATInfoAlmanacNAVkpSvID;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacNAVkpNavAlmE;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacNAVkpNavAlmDeltaI;

typedef BitString<CONSTRAINED, 16, 16> GANSSSATInfoAlmanacNAVkpNavAlmOMEGADOT;

typedef BitString<CONSTRAINED, 8, 8> GANSSSATInfoAlmanacNAVkpNavAlmSVHealth;

typedef BitString<CONSTRAINED, 24, 24> GANSSSATInfoAlmanacNAVkpNavAlmSqrtA;

typedef BitString<CONSTRAINED, 24, 24> GANSSSATInfoAlmanacNAVkpNavAlmOMEGAo;

typedef BitString<CONSTRAINED, 24, 24> GANSSSATInfoAlmanacNAVkpNavAlmOmega;

typedef BitString<CONSTRAINED, 24, 24> GANSSSATInfoAlmanacNAVkpNavAlmMo;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacNAVkpNavAlmaf0;

typedef BitString<CONSTRAINED, 11, 11> GANSSSATInfoAlmanacNAVkpNavAlmaf1;

class GANSSSATInfoAlmanacNAVkp : Sequence {
private:
	static const void *itemsInfo[11];
	static bool itemsPres[11];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacNAVkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacNAVkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacNAVkpList;

class ALMNAVKeplerianSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMNAVKeplerianSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 147> ALMReducedKeplerianSetToa;

typedef Integer<CONSTRAINED, 0, 63> GANSSSATInfoAlmanacREDkpSvID;

typedef BitString<CONSTRAINED, 8, 8> GANSSSATInfoAlmanacREDkpRedAlmDeltaA;

typedef BitString<CONSTRAINED, 7, 7> GANSSSATInfoAlmanacREDkpRedAlmOmega0;

typedef BitString<CONSTRAINED, 7, 7> GANSSSATInfoAlmanacREDkpRedAlmPhi0;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacREDkpRedAlmL1Health;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacREDkpRedAlmL2Health;

typedef BitString<CONSTRAINED, 1, 1> GANSSSATInfoAlmanacREDkpRedAlmL5Health;

class GANSSSATInfoAlmanacREDkp : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	GANSSSATInfoAlmanacREDkp(): Sequence(&theInfo) {}
};

typedef SequenceOf<GANSSSATInfoAlmanacREDkp, CONSTRAINED, 1, maxGANSSSat> GANSSSATInfoAlmanacREDkpList;

class ALMReducedKeplerianSet : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	ALMReducedKeplerianSet(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> AuxInfoGANSSID1elementSvID;

typedef BitString<CONSTRAINED, 8, 8> AuxInfoGANSSID1elementSignalsAvailable;

class AuxInfoGANSSID1element : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	AuxInfoGANSSID1element(): Sequence(&theInfo) {}
};

typedef SequenceOf<AuxInfoGANSSID1element, CONSTRAINED, 1, maxGANSSSat> AuxInfoGANSSID1;

typedef Integer<CONSTRAINED, 0, 63> AuxInfoGANSSID3elementSvID;

typedef BitString<CONSTRAINED, 8, 8> AuxInfoGANSSID3elementSignalsAvailable;

typedef Integer<CONSTRAINED, -7, 13> AuxInfoGANSSID3elementChannelNumber;

class AuxInfoGANSSID3element : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	AuxInfoGANSSID3element(): Sequence(&theInfo) {}
};

typedef SequenceOf<AuxInfoGANSSID3element, CONSTRAINED, 1,  maxGANSSSat> AuxInfoGANSSID3;

enum AverageRLCBufferPayloadValues {
	pla0_AverageRLCBufferPayload = 0,
	pla4_AverageRLCBufferPayload = 1,
	pla8_AverageRLCBufferPayload = 2,
	pla16_AverageRLCBufferPayload = 3,
	pla32_AverageRLCBufferPayload = 4,
	pla64_AverageRLCBufferPayload = 5,
	pla128_AverageRLCBufferPayload = 6,
	pla256_AverageRLCBufferPayload = 7,
	pla512_AverageRLCBufferPayload = 8,
	pla1024_AverageRLCBufferPayload = 9,
	pla2k_AverageRLCBufferPayload = 10,
	pla4k_AverageRLCBufferPayload = 11,
	pla8k_AverageRLCBufferPayload = 12,
	pla16k_AverageRLCBufferPayload = 13,
	pla32k_AverageRLCBufferPayload = 14,
	pla64k_AverageRLCBufferPayload = 15,
	pla128k_AverageRLCBufferPayload = 16,
	pla256k_AverageRLCBufferPayload = 17,
	pla512k_AverageRLCBufferPayload = 18,
	pla1024k_AverageRLCBufferPayload = 19,
	spare12_AverageRLCBufferPayload = 20,
	spare11_AverageRLCBufferPayload = 21,
	spare10_AverageRLCBufferPayload = 22,
	spare9_AverageRLCBufferPayload = 23,
	spare8_AverageRLCBufferPayload = 24,
	spare7_AverageRLCBufferPayload = 25,
	spare6_AverageRLCBufferPayload = 26,
	spare5_AverageRLCBufferPayload = 27,
	spare4_AverageRLCBufferPayload = 28,
	spare3_AverageRLCBufferPayload = 29,
	spare2_AverageRLCBufferPayload = 30,
	spare1_AverageRLCBufferPayload = 31,
};
typedef Enumerated<CONSTRAINED, 31> AverageRLCBufferPayload;

typedef Integer<CONSTRAINED, 0, 63> BadSatListItem;

typedef SequenceOf<BadSatListItem, CONSTRAINED, 1, maxSat> BadSatList;

typedef Integer<CONSTRAINED, 0, 63> DLTransportChannelBLER;

class BLERMeasurementResults : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	BLERMeasurementResults(): Sequence(&theInfo) {}
};

typedef SequenceOf<BLERMeasurementResults, CONSTRAINED, 1, maxTrCH> BLERMeasurementResultsList;

typedef SequenceOf<TransportChannelIdentity, CONSTRAINED, 1, maxTrCH> BLERTransChIdList;

enum BSICVerificationRequiredValues {
	required_BSICVerificationRequired = 0,
	notRequired_BSICVerificationRequired = 1,
};
typedef Enumerated<CONSTRAINED, 1> BSICVerificationRequired;

typedef Integer<CONSTRAINED, 0, maxCellMeas> BSICReportedVerifiedBSIC;

class BSICReported : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	BSICReported(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> BurstModeParametersBurstStart;

typedef Integer<CONSTRAINED, 10, 25> BurstModeParametersBurstLength;

typedef Integer<CONSTRAINED, 1, 16> BurstModeParametersBurstFreq;

class BurstModeParameters : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	BurstModeParameters(): Sequence(&theInfo) {}
};

enum TriggeringCondition2Values {
	activeSetCellsOnly_TriggeringCondition2 = 0,
	monitoredSetCellsOnly_TriggeringCondition2 = 1,
	activeSetAndMonitoredSetCells_TriggeringCondition2 = 2,
	detectedSetCellsOnly_TriggeringCondition2 = 3,
	detectedSetAndMonitoredSetCells_TriggeringCondition2 = 4,
};
typedef Enumerated<CONSTRAINED, 4> TriggeringCondition2;

typedef Integer<CONSTRAINED, 0, 29> ReportingRange;

class ForbiddenAffectCell : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	ForbiddenAffectCell(): Choice(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCell, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellList;

typedef Integer<CONSTRAINED, 0, 20> W;

enum ReportDeactivationThresholdValues {
	notApplicable_ReportDeactivationThreshold = 0,
	t1_ReportDeactivationThreshold = 1,
	t2_ReportDeactivationThreshold = 2,
	t3_ReportDeactivationThreshold = 3,
	t4_ReportDeactivationThreshold = 4,
	t5_ReportDeactivationThreshold = 5,
	t6_ReportDeactivationThreshold = 6,
	t7_ReportDeactivationThreshold = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportDeactivationThreshold;

enum ReportingAmountValues {
	ra1_ReportingAmount = 0,
	ra2_ReportingAmount = 1,
	ra4_ReportingAmount = 2,
	ra8_ReportingAmount = 3,
	ra16_ReportingAmount = 4,
	ra32_ReportingAmount = 5,
	ra64_ReportingAmount = 6,
	ra_Infinity_ReportingAmount = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportingAmount;

enum ReportingIntervalValues {
	noPeriodicalreporting_ReportingInterval = 0,
	ri0_25_ReportingInterval = 1,
	ri0_5_ReportingInterval = 2,
	ri1_ReportingInterval = 3,
	ri2_ReportingInterval = 4,
	ri4_ReportingInterval = 5,
	ri8_ReportingInterval = 6,
	ri16_ReportingInterval = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReportingInterval;

class Event1a : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1a(): Sequence(&theInfo) {}
};

enum TriggeringCondition1Values {
	activeSetCellsOnly_TriggeringCondition1 = 0,
	monitoredSetCellsOnly_TriggeringCondition1 = 1,
	activeSetAndMonitoredSetCells_TriggeringCondition1 = 2,
};
typedef Enumerated<CONSTRAINED, 2> TriggeringCondition1;

class Event1b : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event1b(): Sequence(&theInfo) {}
};

enum ReplacementActivationThresholdValues {
	notApplicable_ReplacementActivationThreshold = 0,
	t1_ReplacementActivationThreshold = 1,
	t2_ReplacementActivationThreshold = 2,
	t3_ReplacementActivationThreshold = 3,
	t4_ReplacementActivationThreshold = 4,
	t5_ReplacementActivationThreshold = 5,
	t6_ReplacementActivationThreshold = 6,
	t7_ReplacementActivationThreshold = 7,
};
typedef Enumerated<CONSTRAINED, 7> ReplacementActivationThreshold;

class Event1c : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	Event1c(): Sequence(&theInfo) {}
};

typedef Null IntraFreqEventE1d;

typedef Integer<CONSTRAINED, -115, 165> ThresholdUsedFrequency;

class Event1e : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1e(): Sequence(&theInfo) {}
};

class Event1f : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	Event1f(): Sequence(&theInfo) {}
};

typedef Null IntraFreqEventE1g;

class IntraFreqEvent : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	IntraFreqEvent(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> Hysteresis;

enum TimeToTriggerValues {
	ttt0_TimeToTrigger = 0,
	ttt10_TimeToTrigger = 1,
	ttt20_TimeToTrigger = 2,
	ttt40_TimeToTrigger = 3,
	ttt60_TimeToTrigger = 4,
	ttt80_TimeToTrigger = 5,
	ttt100_TimeToTrigger = 6,
	ttt120_TimeToTrigger = 7,
	ttt160_TimeToTrigger = 8,
	ttt200_TimeToTrigger = 9,
	ttt240_TimeToTrigger = 10,
	tt320_TimeToTrigger = 11,
	ttt640_TimeToTrigger = 12,
	ttt1280_TimeToTrigger = 13,
	ttt2560_TimeToTrigger = 14,
	ttt5000_TimeToTrigger = 15,
};
typedef Enumerated<CONSTRAINED, 15> TimeToTrigger;

enum MaxNumberOfReportingCellsType1Values {
	e1_MaxNumberOfReportingCellsType1 = 0,
	e2_MaxNumberOfReportingCellsType1 = 1,
	e3_MaxNumberOfReportingCellsType1 = 2,
	e4_MaxNumberOfReportingCellsType1 = 3,
	e5_MaxNumberOfReportingCellsType1 = 4,
	e6_MaxNumberOfReportingCellsType1 = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfReportingCellsType1;

enum MaxNumberOfReportingCellsType3Values {
	viactCellsPlus1_MaxNumberOfReportingCellsType3 = 0,
	viactCellsPlus2_MaxNumberOfReportingCellsType3 = 1,
	viactCellsPlus3_MaxNumberOfReportingCellsType3 = 2,
	viactCellsPlus4_MaxNumberOfReportingCellsType3 = 3,
	viactCellsPlus5_MaxNumberOfReportingCellsType3 = 4,
	viactCellsPlus6_MaxNumberOfReportingCellsType3 = 5,
};
typedef Enumerated<CONSTRAINED, 5> MaxNumberOfReportingCellsType3;

enum MaxNumberOfReportingCellsType2Values {
	e1_MaxNumberOfReportingCellsType2 = 0,
	e2_MaxNumberOfReportingCellsType2 = 1,
	e3_MaxNumberOfReportingCellsType2 = 2,
	e4_MaxNumberOfReportingCellsType2 = 3,
	e5_MaxNumberOfReportingCellsType2 = 4,
	e6_MaxNumberOfReportingCellsType2 = 5,
	e7_MaxNumberOfReportingCellsType2 = 6,
	e8_MaxNumberOfReportingCellsType2 = 7,
	e9_MaxNumberOfReportingCellsType2 = 8,
	e10_MaxNumberOfReportingCellsType2 = 9,
	e11_MaxNumberOfReportingCellsType2 = 10,
	e12_MaxNumberOfReportingCellsType2 = 11,
};
typedef Enumerated<CONSTRAINED, 11> MaxNumberOfReportingCellsType2;

class ReportingCellStatus : Choice {
private:
	static const void *choicesInfo[14];
public:
	static const Info theInfo;
	ReportingCellStatus(): Choice(&theInfo) {}
};

class IntraFreqEventCriteria : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteria(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteria, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaList;

class IntraFreqReportingCriteria : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteria(): Sequence(&theInfo) {}
};

enum ReportingIntervalLongValues {
	ril0_ReportingIntervalLong = 0,
	ril0_25_ReportingIntervalLong = 1,
	ril0_5_ReportingIntervalLong = 2,
	ril1_ReportingIntervalLong = 3,
	ril2_ReportingIntervalLong = 4,
	ril3_ReportingIntervalLong = 5,
	ril4_ReportingIntervalLong = 6,
	ril6_ReportingIntervalLong = 7,
	ril8_ReportingIntervalLong = 8,
	ril12_ReportingIntervalLong = 9,
	ril16_ReportingIntervalLong = 10,
	ril20_ReportingIntervalLong = 11,
	ril24_ReportingIntervalLong = 12,
	ril28_ReportingIntervalLong = 13,
	ril32_ReportingIntervalLong = 14,
	ril64_ReportingIntervalLong = 15,
};
typedef Enumerated<CONSTRAINED, 15> ReportingIntervalLong;

class PeriodicalReportingCriteria : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	PeriodicalReportingCriteria(): Sequence(&theInfo) {}
};

class CellDCHReportCriteria : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellDCHReportCriteria(): Choice(&theInfo) {}
};

class ForbiddenAffectCellLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	ForbiddenAffectCellLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<ForbiddenAffectCellLCRr4, CONSTRAINED, 1, maxCellMeas> ForbiddenAffectCellListLCRr4;

class Event1aLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	Event1aLCRr4(): Sequence(&theInfo) {}
};

class Event1bLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	Event1bLCRr4(): Sequence(&theInfo) {}
};

typedef Null IntraFreqEventLCRr4E1d;

typedef Null IntraFreqEventLCRr4E1g;

class IntraFreqEventLCRr4 : Choice {
private:
	static const void *choicesInfo[9];
public:
	static const Info theInfo;
	IntraFreqEventLCRr4(): Choice(&theInfo) {}
};

class IntraFreqEventCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	IntraFreqEventCriteriaLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<IntraFreqEventCriteriaLCRr4, CONSTRAINED, 1, maxMeasEvent> IntraFreqEventCriteriaListLCRr4;

class IntraFreqReportingCriteriaLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	IntraFreqReportingCriteriaLCRr4(): Sequence(&theInfo) {}
};

class CellDCHReportCriteriaLCRr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellDCHReportCriteriaLCRr4(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxMeasOccasionPattern_1> CellDCHMeasOccasionPatternLCRPatternIdentifier;

enum CellDCHMeasOccasionPatternLCRstatusFlagValues {
	activate_CellDCHMeasOccasionPatternLCRstatusFlag = 0,
	deactivate_CellDCHMeasOccasionPatternLCRstatusFlag = 1,
};
typedef Enumerated<CONSTRAINED, 1> CellDCHMeasOccasionPatternLCRstatusFlag;

typedef BitString<CONSTRAINED, 5, 5> CellDCHMeasOccasionPatternLCRMeasurementPurpose;

typedef Integer<CONSTRAINED, 1, 9> MeasurementOccasionPatternParameterMeasurementOccasionCoeff;

typedef Integer<CONSTRAINED, 0, 511> MeasurementOccasionPatternParameterMeasurementOccasionOffset;

typedef Integer<CONSTRAINED, 1, 512> MeasurementOccasionPatternParameterMeasurementOccasionLength;

typedef BitString<CONSTRAINED, 7, 7> MeasurementOccasionPatternParameterTimeslotBitmap;

class MeasurementOccasionPatternParameter : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	MeasurementOccasionPatternParameter(): Sequence(&theInfo) {}
};

class CellDCHMeasOccasionPatternLCR : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellDCHMeasOccasionPatternLCR(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellDCHMeasOccasionPatternLCR, CONSTRAINED, 1, maxMeasOccasionPattern> CellDCHMeasOccasionInfoTDD128r9CellDCHMeasOccasionSequenceList;

class CellDCHMeasOccasionInfoTDD128r9 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellDCHMeasOccasionInfoTDD128r9(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -20, 20> CellIndividualOffset;

typedef Integer<CONSTRAINED, 0, 960> ReferenceTimeDifferenceToCellAccuracy40;

typedef Integer<CONSTRAINED, 0, 150> ReferenceTimeDifferenceToCellAccuracy256;

typedef Integer<CONSTRAINED, 0, 15> ReferenceTimeDifferenceToCellAccuracy2560;

class ReferenceTimeDifferenceToCell : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	ReferenceTimeDifferenceToCell(): Choice(&theInfo) {}
};

typedef Boolean CellInfoModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfoModeSpecificInfoFddTxDiversityIndicator;

class CellInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class TimeslotInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TimeslotInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfo, CONSTRAINED, 1, maxTS> TimeslotInfoList;

typedef Boolean CellInfoModeSpecificInfoTddReadSFNIndicator;

class CellInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CellInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfo(): Sequence(&theInfo) {}
};

typedef Boolean CellInfor4ModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfor4ModeSpecificInfoFddTxDiversityIndicator;

class CellInfor4ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor4ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfo, CONSTRAINED, 1, maxTS> TimeslotInfoListr4Tdd384;

class TimeslotInfoLCRr4 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	TimeslotInfoLCRr4(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfoLCRr4, CONSTRAINED, 1, maxTS_LCR> TimeslotInfoListr4Tdd128;

class TimeslotInfoListr4 : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	TimeslotInfoListr4(): Choice(&theInfo) {}
};

typedef Boolean CellInfor4ModeSpecificInfoTddReadSFNIndicator;

class CellInfor4ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor4ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfor4ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfor4ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellInfor4 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellInfor4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -50, 50> QOffsetSN;

typedef Null PenaltyTimeRSCPNotUsed;

enum TemporaryOffset1Values {
	to3_TemporaryOffset1 = 0,
	to6_TemporaryOffset1 = 1,
	to9_TemporaryOffset1 = 2,
	to12_TemporaryOffset1 = 3,
	to15_TemporaryOffset1 = 4,
	to18_TemporaryOffset1 = 5,
	to21_TemporaryOffset1 = 6,
	infinite_TemporaryOffset1 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TemporaryOffset1;

class PenaltyTimeRSCP : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	PenaltyTimeRSCP(): Choice(&theInfo) {}
};

class HCSCellReselectInformationRSCP : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationRSCP(): Sequence(&theInfo) {}
};

class HCSNeighbouringCellInformationRSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationRSCP(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoMCRSCPModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCPModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoMCRSCPModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCPModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoMCRSCPModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCPModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoMCRSCPModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCPModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoMCRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoMCRSCP(): Sequence(&theInfo) {}
};

class CellInfoLCRr8ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellInfoLCRr8ext(): Sequence(&theInfo) {}
};

typedef Boolean CellInfor9ModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfor9ModeSpecificInfoFddTxDiversityIndicator;

class CellInfor9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellInfor9ModeSpecificInfoTddReadSFNIndicator;

class CellInfor9ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor9ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfor9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfor9ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellInfor9 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfor9(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIRSCPModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfoSIRSCPModeSpecificInfoFddTxDiversityIndicator;

class CellInfoSIRSCPModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIRSCPModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIRSCPModeSpecificInfoTddReadSFNIndicator;

class CellInfoSIRSCPModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIRSCPModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfoSIRSCPModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfoSIRSCPModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCPModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCPModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112RSCP : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112RSCP(): Sequence(&theInfo) {}
};

class CellInfoSIRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIRSCP(): Sequence(&theInfo) {}
};

typedef SequenceOf<TimeslotInfoLCRr4, CONSTRAINED, 1, maxTS_LCR> TimeslotInfoListLCRr4;

typedef Boolean CellInfoSIRSCPLCRr4ReadSFNIndicator;

class CellInfoSIRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIECN0ModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfoSIECN0ModeSpecificInfoFddTxDiversityIndicator;

class CellInfoSIECN0ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIECN0ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIECN0ModeSpecificInfoTddReadSFNIndicator;

class CellInfoSIECN0ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIECN0ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfoSIECN0ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfoSIECN0ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ECN0(): Sequence(&theInfo) {}
};

class CellInfoSIECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIECN0(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIECN0LCRr4ReadSFNIndicator;

class CellInfoSIECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIECN0LCRr4(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSRSCPModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfoSIHCSRSCPModeSpecificInfoFddTxDiversityIndicator;

class CellInfoSIHCSRSCPModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSRSCPModeSpecificInfoTddReadSFNIndicator;

class CellInfoSIHCSRSCPModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfoSIHCSRSCPModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCPModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSRSCP(): Sequence(&theInfo) {}
};

class CellInfoSIHCSRSCP : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCP(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSRSCPLCRr4ReadSFNIndicator;

class CellInfoSIHCSRSCPLCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIHCSRSCPLCRr4(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSECN0ModeSpecificInfoFddReadSFNIndicator;

typedef Boolean CellInfoSIHCSECN0ModeSpecificInfoFddTxDiversityIndicator;

class CellInfoSIHCSECN0ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSECN0ModeSpecificInfoTddReadSFNIndicator;

class CellInfoSIHCSECN0ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellInfoSIHCSECN0ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0ModeSpecificInfo(): Choice(&theInfo) {}
};

typedef Null PenaltyTimeECN0NotUsed;

enum TemporaryOffset2Values {
	to2_TemporaryOffset2 = 0,
	to3_TemporaryOffset2 = 1,
	to4_TemporaryOffset2 = 2,
	to6_TemporaryOffset2 = 3,
	to8_TemporaryOffset2 = 4,
	to10_TemporaryOffset2 = 5,
	to12_TemporaryOffset2 = 6,
	infinite_TemporaryOffset2 = 7,
};
typedef Enumerated<CONSTRAINED, 7> TemporaryOffset2;

class TemporaryOffsetList : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	TemporaryOffsetList(): Sequence(&theInfo) {}
};

class PenaltyTimeECN0 : Choice {
private:
	static const void *choicesInfo[7];
public:
	static const Info theInfo;
	PenaltyTimeECN0(): Choice(&theInfo) {}
};

class HCSCellReselectInformationECN0 : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	HCSCellReselectInformationECN0(): Sequence(&theInfo) {}
};

class HCSNeighbouringCellInformationECN0 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	HCSNeighbouringCellInformationECN0(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112HCSECN0 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112HCSECN0(): Sequence(&theInfo) {}
};

class CellInfoSIHCSECN0 : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0(): Sequence(&theInfo) {}
};

typedef Boolean CellInfoSIHCSECN0LCRr4ReadSFNIndicator;

class CellInfoSIHCSECN0LCRr4 : Sequence {
private:
	static const void *itemsInfo[7];
	static bool itemsPres[7];
public:
	static const Info theInfo;
	CellInfoSIHCSECN0LCRr4(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 16777215> SFNSFNObsTimeDifference1;

typedef Integer<CONSTRAINED, 0, 65535> SFNSFNObsTimeDifference2;

class SFNSFNObsTimeDifference : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	SFNSFNObsTimeDifference(): Choice(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 15> CountCSFNFramedifferenceCountCSFNHigh;

typedef Integer<CONSTRAINED, 0, 255> CountCSFNFramedifferenceOff;

class CountCSFNFramedifference : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CountCSFNFramedifference(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 38399> CellSynchronisationInfoModeSpecificInfoFddTm;

class CellSynchronisationInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSynchronisationInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSynchronisationInfoModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSynchronisationInfoModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSynchronisationInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellSynchronisationInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSynchronisationInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSynchronisationInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> CPICHEcN0;

typedef Integer<CONSTRAINED, 0, 127> CPICHRSCP;

typedef Integer<CONSTRAINED, 46, 173> Pathloss;

class CellMeasuredResultsModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellMeasuredResultsModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 127> PrimaryCCPCHRSCP;

typedef Integer<CONSTRAINED, 0, 127> TimeslotISCP;

typedef SequenceOf<TimeslotISCP, CONSTRAINED, 1, maxTS> TimeslotISCPList;

class CellMeasuredResultsModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellMeasuredResultsModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellMeasuredResultsModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasuredResultsModeSpecificInfo(): Choice(&theInfo) {}
};

class CellMeasuredResults : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellMeasuredResults(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -5, -1> DeltaRSCP;

class DeltaRSCPPerCell : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DeltaRSCPPerCell(): Sequence(&theInfo) {}
};

class CellMeasuredResultsr9ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellMeasuredResultsr9ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellMeasuredResultsr9ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellMeasuredResultsr9ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellMeasuredResultsr9ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasuredResultsr9ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellMeasuredResultsr9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellMeasuredResultsr9(): Sequence(&theInfo) {}
};

enum CellMeasuredResultsv920extcsgMemberIndicationValues {
	member_CellMeasuredResultsv920extcsgMemberIndication = 0,
};
typedef Enumerated<CONSTRAINED, 0> CellMeasuredResultsv920extcsgMemberIndication;

class CellMeasuredResultsv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellMeasuredResultsv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsFdd;

typedef SequenceOf<PrimaryCCPCHInfo, CONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsTdd;

class CellMeasurementEventResults : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasurementEventResults(): Choice(&theInfo) {}
};

typedef SequenceOf<PrimaryCPICHInfo, CONSTRAINED, 1,  maxCellMeasOnSecULFreq> CellMeasurementEventResultsOnSecUlFreqFdd;

typedef Null CellMeasurementEventResultsOnSecUlFreqSpare;

class CellMeasurementEventResultsOnSecUlFreq : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellMeasurementEventResultsOnSecUlFreq(): Choice(&theInfo) {}
};

typedef SequenceOf<PrimaryCCPCHInfoLCRr4, CONSTRAINED, 1, maxCellMeas> CellMeasurementEventResultsLCRr4;

enum SFNSFNOTDTypeValues {
	noReport_SFNSFNOTDType = 0,
	type1_SFNSFNOTDType = 1,
	type2_SFNSFNOTDType = 2,
};
typedef Enumerated<CONSTRAINED, 2> SFNSFNOTDType;

typedef Boolean CellReportingQuantitiesCellIdentityreportingIndicator;

typedef Boolean CellReportingQuantitiesCellSynchronisationInfoReportingIndicator;

typedef Boolean CellReportingQuantitiesModeSpecificInfoFddCpichEcN0reportingIndicator;

typedef Boolean CellReportingQuantitiesModeSpecificInfoFddCpichRSCPreportingIndicator;

typedef Boolean CellReportingQuantitiesModeSpecificInfoFddPathlossreportingIndicator;

class CellReportingQuantitiesModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	CellReportingQuantitiesModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Boolean CellReportingQuantitiesModeSpecificInfoTddTimeslotISCPreportingIndicator;

typedef Boolean CellReportingQuantitiesModeSpecificInfoTddProposedTGSNReportingRequired;

typedef Boolean CellReportingQuantitiesModeSpecificInfoTddPrimaryCCPCHRSCPreportingIndicator;

typedef Boolean CellReportingQuantitiesModeSpecificInfoTddPathlossreportingIndicator;

class CellReportingQuantitiesModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellReportingQuantitiesModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellReportingQuantitiesModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CellReportingQuantitiesModeSpecificInfo(): Choice(&theInfo) {}
};

class CellReportingQuantities : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellReportingQuantities(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ModeSpecificInfoTdd : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ModeSpecificInfoTdd(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ModeSpecificInfoGsm : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ModeSpecificInfoGsm(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoSIB1112ModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[3];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112ModeSpecificInfo(): Choice(&theInfo) {}
};

class CellSelectReselectInfoSIB1112 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	CellSelectReselectInfoSIB1112(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, -2, -1> DeltaQrxlevmin;

class CellSelectReselectInfov590ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CellSelectReselectInfov590ext(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoPCHFACHv5b0ext : Sequence {
private:
	static const void *itemsInfo[6];
	static bool itemsPres[6];
public:
	static const Info theInfo;
	CellSelectReselectInfoPCHFACHv5b0ext(): Sequence(&theInfo) {}
};

class CellSelectReselectInfoTreselectionScalingv5c0ext : Sequence {
private:
	static const void *itemsInfo[4];
	static bool itemsPres[4];
public:
	static const Info theInfo;
	CellSelectReselectInfoTreselectionScalingv5c0ext(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterFreqCellID;

typedef SequenceOf<InterFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> InterRATCellID;

typedef SequenceOf<InterRATCellID, CONSTRAINED, 1, maxCellMeas> CellsForInterRATMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeas_1> IntraFreqCellID;

typedef SequenceOf<IntraFreqCellID, CONSTRAINED, 1, maxCellMeas> CellsForIntraFreqMeasList;

typedef Integer<CONSTRAINED, 0, maxCellMeasOnSecULFreq_1> IntraFreqCellIDOnSecULFreq;

typedef SequenceOf<IntraFreqCellIDOnSecULFreq, CONSTRAINED, 1, maxCellMeasOnSecULFreq> CellsForIntraFreqMeasListOnSecULFreq;

class CellToReport : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CellToReport(): Sequence(&theInfo) {}
};

typedef SequenceOf<CellToReport, CONSTRAINED, 1, maxCellMeas> CellToReportList;

typedef BitString<CONSTRAINED, 11, 11> CNAVclockModelCnavToc;

typedef BitString<CONSTRAINED, 11, 11> CNAVclockModelCnavTop;

typedef BitString<CONSTRAINED, 5, 5> CNAVclockModelCnavURA0;

typedef BitString<CONSTRAINED, 3, 3> CNAVclockModelCnavURA1;

typedef BitString<CONSTRAINED, 3, 3> CNAVclockModelCnavURA2;

typedef BitString<CONSTRAINED, 10, 10> CNAVclockModelCnavAf2;

typedef BitString<CONSTRAINED, 20, 20> CNAVclockModelCnavAf1;

typedef BitString<CONSTRAINED, 26, 26> CNAVclockModelCnavAf0;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavTgd;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl1cp;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl1cd;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl1ca;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl2c;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl5i5;

typedef BitString<CONSTRAINED, 13, 13> CNAVclockModelCnavISCl5q5;

class CNAVclockModel : Sequence {
private:
	static const void *itemsInfo[15];
	static bool itemsPres[15];
public:
	static const Info theInfo;
	CNAVclockModel(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 1, 512> CSGCellInfoModeSpecificInfoFddNumberOfPSCs;

class CSGCellInfoModeSpecificInfoFdd : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGCellInfoModeSpecificInfoFdd(): Sequence(&theInfo) {}
};

typedef Null CSGCellInfoModeSpecificInfoTdd;

class CSGCellInfoModeSpecificInfo : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CSGCellInfoModeSpecificInfo(): Choice(&theInfo) {}
};

class CSGCellInfo : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CSGCellInfo, CONSTRAINED, 1, maxMeasCSGRange> CSGCellInfoList;

class CSGInterFreqCellInfo : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGInterFreqCellInfo(): Sequence(&theInfo) {}
};

typedef SequenceOf<CSGInterFreqCellInfo, CONSTRAINED, 1, maxFreq> CSGInterFreqCellInfoList;

typedef CSGCellInfoList CSGIntraFreqCellInfoList;

enum CSGProximityDetectionuTRACSGProximityDetecValues {
	enable_CSGProximityDetectionuTRACSGProximityDetec = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityDetectionuTRACSGProximityDetec;

enum CSGProximityDetectione_UTRACSGProximityDetecValues {
	enable_CSGProximityDetectione_UTRACSGProximityDetec = 0,
};
typedef Enumerated<CONSTRAINED, 0> CSGProximityDetectione_UTRACSGProximityDetec;

class CSGProximityDetection : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGProximityDetection(): Sequence(&theInfo) {}
};

enum CSGProximityIndicationcSGproximityIndValues {
	entering_CSGProximityIndicationcSGproximityInd = 0,
	leaving_CSGProximityIndicationcSGproximityInd = 1,
};
typedef Enumerated<CONSTRAINED, 1> CSGProximityIndicationcSGproximityInd;

class CSGProximityIndicationRadioAccessTechnologyUTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGProximityIndicationRadioAccessTechnologyUTRA(): Sequence(&theInfo) {}
};

class CSGProximityIndicationRadioAccessTechnologyEUTRA : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	CSGProximityIndicationRadioAccessTechnologyEUTRA(): Sequence(&theInfo) {}
};

class CSGProximityIndicationRadioAccessTechnology : Choice {
private:
	static const void *choicesInfo[2];
public:
	static const Info theInfo;
	CSGProximityIndicationRadioAccessTechnology(): Choice(&theInfo) {}
};

class CSGProximityIndication : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	CSGProximityIndication(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 7> GANSSSignalId;

typedef BitString<CONSTRAINED, 1, 1024> DataBitAssistanceDatabits;

class DataBitAssistance : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataBitAssistance(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> DataBitAssistanceSatSatID;

typedef SequenceOf<DataBitAssistance, CONSTRAINED, 1, maxSgnType> DataBitAssistanceSgnList;

class DataBitAssistanceSat : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DataBitAssistanceSat(): Sequence(&theInfo) {}
};

typedef SequenceOf<DataBitAssistanceSat, CONSTRAINED, 1, maxGANSSSat> DataBitAssistanceList;

typedef Integer<CONSTRAINED, -127, 127> DeltaPRC;

typedef Integer<CONSTRAINED, -7, 7> DeltaRRC;

typedef BitString<CONSTRAINED, 11, 11> DeltaUT1B1;

typedef BitString<CONSTRAINED, 10, 10> DeltaUT1B2;

class DeltaUT1 : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DeltaUT1(): Sequence(&theInfo) {}
};

enum GANSSStatusHealthValues {
	udre_scale_1dot0_GANSSStatusHealth = 0,
	udre_scale_0dot75_GANSSStatusHealth = 1,
	udre_scale_0dot5_GANSSStatusHealth = 2,
	udre_scale_0dot3_GANSSStatusHealth = 3,
	udre_scale_0dot2_GANSSStatusHealth = 4,
	udre_scale_0dot1_GANSSStatusHealth = 5,
	no_data_GANSSStatusHealth = 6,
	invalid_data_GANSSStatusHealth = 7,
};
typedef Enumerated<CONSTRAINED, 7> GANSSStatusHealth;

typedef Integer<CONSTRAINED, 0, 63> DGANSSSignalInformationSatId;

typedef BitString<CONSTRAINED, 10, 10> DGANSSSignalInformationIodedganss;

enum UDREValues {
	lessThan1_UDRE = 0,
	between1_and_4_UDRE = 1,
	between4_and_8_UDRE = 2,
	over8_UDRE = 3,
};
typedef Enumerated<CONSTRAINED, 3> UDRE;

class DGANSSSignalInformation : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSSignalInformation(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformation, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationList;

class DGANSSInfo : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSInfo(): Sequence(&theInfo) {}
};

typedef Integer<CONSTRAINED, 0, 63> DGANSSSignalInformationr9SatId;

typedef BitString<CONSTRAINED, 10, 10> DGANSSSignalInformationr9Iodedganss;

enum UDREGrowthRateValues {
	growth_1_5_UDREGrowthRate = 0,
	growth_2_UDREGrowthRate = 1,
	growth_4_UDREGrowthRate = 2,
	growth_6_UDREGrowthRate = 3,
	growth_8_UDREGrowthRate = 4,
	growth_10_UDREGrowthRate = 5,
	growth_12_UDREGrowthRate = 6,
	growth_16_UDREGrowthRate = 7,
};
typedef Enumerated<CONSTRAINED, 7> UDREGrowthRate;

enum UDREValidityTimeValues {
	val_20sec_UDREValidityTime = 0,
	val_40sec_UDREValidityTime = 1,
	val_80sec_UDREValidityTime = 2,
	val_160sec_UDREValidityTime = 3,
	val_320sec_UDREValidityTime = 4,
	val_640sec_UDREValidityTime = 5,
	val_1280sec_UDREValidityTime = 6,
	val_2560sec_UDREValidityTime = 7,
};
typedef Enumerated<CONSTRAINED, 7> UDREValidityTime;

class DGANSSSignalInformationr9 : Sequence {
private:
	static const void *itemsInfo[5];
	static bool itemsPres[5];
public:
	static const Info theInfo;
	DGANSSSignalInformationr9(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformationr9, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListr9;

class DGANSSInfor9 : Sequence {
private:
	static const void *itemsInfo[3];
	static bool itemsPres[3];
public:
	static const Info theInfo;
	DGANSSInfor9(): Sequence(&theInfo) {}
};

class DGANSSSignalInformationv920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DGANSSSignalInformationv920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSSignalInformationv920ext, CONSTRAINED, 1, maxGANSSSat> DGANSSSignalInformationListv920ext;

class DGANSSInfov920ext : Sequence {
private:
	static const void *itemsInfo[1];
	static bool itemsPres[1];
public:
	static const Info theInfo;
	DGANSSInfov920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGANSSInfo, CONSTRAINED, 1, maxSgnType> DGANSSInfoList;

typedef SequenceOf<DGANSSInfor9, CONSTRAINED, 1, maxSgnType> DGANSSInfoListr9;

typedef SequenceOf<DGANSSInfov920ext, CONSTRAINED, 1, maxSgnType> DGANSSInfoListv920ext;

typedef BitString<CONSTRAINED, 8, 8> DGANSSSigIdReq;

typedef Integer<CONSTRAINED, 0, 255> IODE;

typedef Integer<CONSTRAINED, -2047, 2047> PRC;

typedef Integer<CONSTRAINED, -127, 127> RRC_;

class DGPSCorrectionSatInfo : Sequence {
private:
	static const void *itemsInfo[9];
	static bool itemsPres[9];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfo(): Sequence(&theInfo) {}
};

class DGPSCorrectionSatInfov920ext : Sequence {
private:
	static const void *itemsInfo[2];
	static bool itemsPres[2];
public:
	static const Info theInfo;
	DGPSCorrectionSatInfov920ext(): Sequence(&theInfo) {}
};

typedef SequenceOf<DGPSCorrectionSatInfo, CONSTRAINED, 1, maxSat> DGPSCorrectionSatInfoList;

