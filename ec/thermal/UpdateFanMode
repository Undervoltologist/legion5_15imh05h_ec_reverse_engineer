void UpdateFanMode(void)

{
  byte **ppbVar1;
  uint in_a0;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  
  if ((DAT_000805f4 & 1) != 0) {
    return;
  }
  if ((DAT_00080536 & 1) == 0) {
    if ((DAT_00080536 & 2) == 0) {
      if ((DAT_00080536 >> 2 & 1) == 0) goto LAB_0000e9c2;
      pbVar2 = &Temperature_Sensors;
    }
    else {
      pbVar2 = &Temperature_GPU;
    }
  }
  else {
    pbVar2 = &Temperature_CPU;
  }
  in_a0 = (uint)*pbVar2;
LAB_0000e9c2:
  if ((RealFanMode != FanMode) && (RealFanMode < NumFanModes)) {
    FanMode = RealFanMode;
    FanControlFlags = FanControlFlags & 0xfc | 0x80;
  }
  uVar4 = (uint)FanMode;
  DAT_00080532 = FanModes[uVar4].field0_0x0;
  DAT_00080533 = FanModes[uVar4].field1_0x1;
  if ((in_a0 < DAT_00080532) || ((FanControlFlags & 2) != 0)) {
    if ((in_a0 <= DAT_00080533) && ((FanControlFlags & 1) == 0)) {
      CurrentFanModes = FanModes[FanMode].Modes_1;
      NumFanSpeeds = FanModes[FanMode].FanSpeeds_1;
      FanControlFlags = FanControlFlags & 0xfd | 0x81;
    }
  }
  else {
    CurrentFanModes = FanModes[uVar4].Modes_2;
    NumFanSpeeds = FanModes[uVar4].FanSpeeds_2;
    FanControlFlags = FanControlFlags & 0xfe | 0x82;
  }
  if ((char)FanControlFlags < '\0') {
    ppbVar3 = &FanLevelPointers[0].Fan2_Speeds;
    ppbVar7 = &FanLevelPointers[0].Fan2_Accel;
    ppbVar6 = &FanLevelPointers[0].Fan_OffTemps_CPU;
    ppbVar5 = &FanLevelPointers[0].Fan_OffTemps_GPU;
    uVar4 = 0;
    do {
      *ppbVar3[-1] = 0;
      **ppbVar3 = 0;
      *ppbVar3[1] = 0;
      **ppbVar7 = 0;
      ppbVar1 = ppbVar7 + 1;
      ppbVar7 = ppbVar7 + 0xb;
      **ppbVar1 = 0;
      **ppbVar6 = 0;
      ppbVar1 = ppbVar6 + 1;
      ppbVar6 = ppbVar6 + 0xb;
      **ppbVar1 = 0;
      **ppbVar5 = 0;
      ppbVar1 = ppbVar5 + 1;
      ppbVar5 = ppbVar5 + 0xb;
      **ppbVar1 = 0;
      ppbVar1 = ppbVar3 + 8;
      ppbVar3 = ppbVar3 + 0xb;
      **ppbVar1 = 0;
    } while (ppbVar3 != (byte **)0x2153c);
    for (; uVar4 < NumFanSpeeds; uVar4 = uVar4 + 1 & 0xff) {
      if ((EnabledFans & 1) != 0) {
        *FanLevelPointers[uVar4].Fan1_Speeds = CurrentFanModes[uVar4].Fan1_RPM;
      }
      if ((EnabledFans >> 1 & 1) != 0) {
        *FanLevelPointers[uVar4].Fan2_Speeds = CurrentFanModes[uVar4].Fan2_RPM;
      }
      *FanLevelPointers[uVar4].Fan1_Accel = CurrentFanModes[uVar4].Fan1_Accel;
      *FanLevelPointers[uVar4].Fan2_Accel = CurrentFanModes[uVar4].Fan2_Accel;
      if ((FanEnabledSensors & 1) != 0) {
        pbVar2 = FanLevelPointers[uVar4].Fan_OffTemps_CPU;
        *FanLevelPointers[uVar4].Fan_OnTemps_CPU = CurrentFanModes[uVar4].OnTemp_CPU;
        *pbVar2 = CurrentFanModes[uVar4].OffTemp_CPU;
      }
      if ((FanEnabledSensors >> 1 & 1) != 0) {
        pbVar2 = FanLevelPointers[uVar4].Fan_OffTemps_GPU;
        *FanLevelPointers[uVar4].Fan_OnTemps_GPU = CurrentFanModes[uVar4].OnTemp_GPU;
        *pbVar2 = CurrentFanModes[uVar4].OffTemp_GPU;
      }
      if ((FanEnabledSensors >> 2 & 1) != 0) {
        pbVar2 = FanLevelPointers[uVar4].Fan_OffTemps_Sensor;
        *FanLevelPointers[uVar4].Fan_OnTemps_Sensor = CurrentFanModes[uVar4].OnTemp_Sensor;
        *pbVar2 = CurrentFanModes[uVar4].OffTemp_Sensor;
      }
    }
    Fan_Level_CPU = 0;
    Fan_Level_GPU = 0;
    Fan_Level_Sensor = 0;
    Fan_Level = 0;
    FanControlFlags = FanControlFlags & 0x7f;
  }
  return;
}
