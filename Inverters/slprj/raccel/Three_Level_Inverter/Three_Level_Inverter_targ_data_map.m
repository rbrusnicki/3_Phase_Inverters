  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% rtP.TriangularWave1_rep_seq_y
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.TriangularWave2_rep_seq_y
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtP.LookUpTable1_bp01Data
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% rtP.APhaseRef_Amp
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% rtP.APhaseRef_Bias
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10;
	
	  ;% rtP.APhaseRef_Freq
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 11;
	
	  ;% rtP.APhaseRef_Phase
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% rtP.LookUpTable1_bp01Data_gmm2er1ewv
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtP.Gain3_Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 16;
	
	  ;% rtP.BPhaseRef_Amp
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 17;
	
	  ;% rtP.BPhaseRef_Bias
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 18;
	
	  ;% rtP.BPhaseRef_Freq
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 19;
	
	  ;% rtP.BPhaseRef_Phase
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 20;
	
	  ;% rtP.Gain1_Gain
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 21;
	
	  ;% rtP.CPhaseRef_Amp
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 22;
	
	  ;% rtP.CPhaseRef_Bias
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 23;
	
	  ;% rtP.CPhaseRef_Freq
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 24;
	
	  ;% rtP.CPhaseRef_Phase
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 25;
	
	  ;% rtP.Gain2_Gain
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 26;
	
	  ;% rtP.Constant_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 27;
	
	  ;% rtP.Constant_Value_hgjkweesvu
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 28;
	
	  ;% rtP.Constant_Value_gsjvaoguds
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 29;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtB.kpvcg2livq
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.g4gix24ltw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.ng1u4u31jv
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.mggvnssrjp
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.i2jwrzmiww
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% rtB.h4v4uhqjpn
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% rtB.dlcsyhrugj
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% rtB.kue0mfqq14
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% rtB.lkb1hwvu24
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.gmyffav5en
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.htnkn4r2ij
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.oh5kuff3qk
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.opnaairama
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.mvm05334ry
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.f2kblflu05
	  section.data(7).logicalSrcIdx = 14;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.bfkweff2jd
	  section.data(8).logicalSrcIdx = 15;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.dknfxbmma2
	  section.data(9).logicalSrcIdx = 16;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.bl3oiefdou
	  section.data(10).logicalSrcIdx = 17;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.gqgeoel2ld
	  section.data(11).logicalSrcIdx = 18;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.ane3mwsg13
	  section.data(12).logicalSrcIdx = 19;
	  section.data(12).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.jg01x4lfds.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nbnsl1ab2x.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.cninge1sea
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.owfgbizw04
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.heqsunz4yl
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.c2pqkrnhwd
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.n1jcafjbat
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.oqxsbhtc4o
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 111207102;
  targMap.checksum1 = 1576877543;
  targMap.checksum2 = 1646576327;
  targMap.checksum3 = 3709386535;

