#ifndef NESTINGMARK_oETCS_Packet_TrainToTrack_Validated_train_data
#define NESTINGMARK_oETCS_Packet_TrainToTrack_Validated_train_data
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrainToTrack_Validated_train_data
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>

struct DATA_oETCS_TrainToTrack_Validated_train_data {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=RBC
// Validated train data.
// Packet Number = 11

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t NC_CDTRAIN;                             			// # 4	
	uint32_t NC_TRAIN;                               			// # 15	
	uint32_t L_TRAIN;                                			// # 12	
	uint32_t V_MAXTRAIN;                             			// # 7	
	uint32_t M_LOADINGGAUGE;                         			// # 8	
	uint32_t M_AXLELOADCAT;                          			// # 7	
	uint32_t M_AIRTIGHT;                             			// # 2	
	uint32_t N_AXLE;                                 			// # 10	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t M_VOLTAGE;                       		// # 4		// Identity of the traction system	// if ((M_VOLTAGE(k) != 0) and (NID_CTRACTION(k) != 0))
		uint32_t NID_CTRACTION;                   		// # 10		// only if M_VOLTAGE(k) != 0 and NID_CTRACTION(k) != 0        
        } a_data[33];
        } k;
    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t NID_NTC;                         		// # 8		// Type of National System available        
        } a_data[33];
        } n;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrainToTrack_Validated_train_data T_DATA_oETCS_TrainToTrack_Validated_train_data;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrainToTrack_Validated_train_data* TP_DATA_oETCS_TrainToTrack_Validated_train_data;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrainToTrack_Validated_train_data  oETCS_Packet_TrainToTrack_Validated_train_data;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrainToTrack_Validated_train_data  oETCS_Packet_TrainToTrack_Validated_train_data = new(T_DATA_oETCS_TrainToTrack_Validated_train_data);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrainToTrack_Validated_train_data->...
// maybe : memset(oETCS_Packet_TrainToTrack_Validated_train_data, 0, sizeof(T_DATA_oETCS_Packet_TrainToTrack_Validated_train_data));
// for complete 0 content.

#endif


