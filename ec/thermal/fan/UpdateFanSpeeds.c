void UpdateFanSpeeds(void)

{
  byte bVar1;
  byte *pbVar2;
  
  if ((DAT_000805f4 >> 1 & 1) != 0) {
    return;
  }
  if (((DebugTemperature1 == 0) && (DebugTemperature2 == 0)) && (DebugTemperature3 == '\0')) {
    if ((FanEnabledSensors & 1) != 0) {
      Fan_Temp_CPU = Temperature_CPU;
    }
    if ((FanEnabledSensors >> 1 & 1) != 0) {
      Fan_Temp_GPU = Temperature_GPU;
    }
    if ((FanEnabledSensors >> 2 & 1) == 0) goto LAB_0000ed3a;
    pbVar2 = &Temperature_Sensors;
  }
  else {
    Fan_Temp_CPU = DebugTemperature1;
    Fan_Temp_GPU = DebugTemperature2;
    pbVar2 = (byte *)&DebugTemperature3;
  }
  Fan_Temp_Sensor = *pbVar2;
LAB_0000ed3a:
  bVar1 = FanEnabledSensors & 1;
  if ((FanEnabledSensors & 1) != 0) {
    if (((int)(uint)Fan_Level_CPU < (int)(NumFanSpeeds - 1)) &&
       (*FanLevelPointers[Fan_Level_CPU].Fan_OnTemps_CPU < Fan_Temp_CPU)) {
      Fan_Level_CPU = Fan_Level_CPU + 1;
    }
    bVar1 = Fan_Level_CPU;
    if ((Fan_Level_CPU != 0) && (Fan_Temp_CPU < *FanLevelPointers[Fan_Level_CPU].Fan_OffTemps_CP U))
    {
      bVar1 = Fan_Level_CPU - 1;
    }
  }
  Fan_Level_CPU = bVar1;
  bVar1 = FanEnabledSensors >> 1 & 1;
  if ((FanEnabledSensors >> 1 & 1) != 0) {
    if (((int)(uint)Fan_Level_GPU < (int)(NumFanSpeeds - 1)) &&
       (*FanLevelPointers[Fan_Level_GPU].Fan_OnTemps_GPU < Fan_Temp_GPU)) {
      Fan_Level_GPU = Fan_Level_GPU + 1;
    }
    bVar1 = Fan_Level_GPU;
    if ((Fan_Level_GPU != 0) && (Fan_Temp_GPU < *FanLevelPointers[Fan_Level_GPU].Fan_OffTemps_GP U))
    {
      bVar1 = Fan_Level_GPU - 1;
    }
  }
  Fan_Level_GPU = bVar1;
  bVar1 = FanEnabledSensors >> 2 & 1;
  if ((FanEnabledSensors >> 2 & 1) != 0) {
    if (((int)(uint)Fan_Level_Sensor < (int)(NumFanSpeeds - 1)) &&
       (*FanLevelPointers[Fan_Level_Sensor].Fan_OnTemps_Sensor < Fan_Temp_Sensor)) {
      Fan_Level_Sensor = Fan_Level_Sensor + 1;
    }
    bVar1 = Fan_Level_Sensor;
    if ((Fan_Level_Sensor != 0) &&
       (Fan_Temp_Sensor < *FanLevelPointers[Fan_Level_Sensor].Fan_OffTemps_Sensor)) {
      bVar1 = Fan_Level_Sensor - 1;
    }
  }
  Fan_Level_Sensor = bVar1;
  if (Fan_Level_GPU < Fan_Level_CPU) {
    Fan_Level = Fan_Level_CPU;
  }
  else {
    Fan_Level = Fan_Level_GPU;
  }
  if (Fan_Level < Fan_Level_Sensor) {
    Fan_Level = Fan_Level_Sensor;
  }
  if ((EnabledFans & 1) != 0) {
    Fan1_Target_Speed = Fan_Level;
    if (Fan_Level != 0) {
      Fan1_Target_Speed = *FanLevelPointers[Fan_Level].Fan1_Speeds;
    }
    if ((Fan_Slow_Accel == '\x01') && (Fan1_Target_Speed < 0x17)) {
      Fan1_UpdateCount = 100;
      Fan1_Target_Speed = 0x17;
      Fan1_Target_Speed_Backup = 0x17;
    }
    if ((EC_ThermalOptimisation == '\x01') && (Fan1_Target_Speed < 0x12)) {
      Fan1_Target_Speed = 0x12;
    }
    if ((EC_ThermalOptimisation == '\x02') && (Fan1_Target_Speed < 0x14)) {
      Fan1_Target_Speed = 0x14;
    }
    if ((EC_ThermalOptimisation == '\x03') && (Fan1_Target_Speed < 0x15)) {
      Fan1_Target_Speed = 0x15;
    }
    if (Fan1_Target_Speed == Fan1_Target_Speed_Backup) {
      Check_FANRPM_Count(&Fan1_UpdateCount,1);
    }
    else {
      Fan1_Target_Speed_Backup = Fan1_Target_Speed;
      Fan1_UpdateCount = 0;
    }
  }
  if ((EnabledFans >> 1 & 1) != 0) {
    Fan2_Target_Speed = Fan_Level;
    if (Fan_Level != 0) {
      Fan2_Target_Speed = *FanLevelPointers[Fan_Level].Fan2_Speeds;
    }
    if ((Fan_Slow_Accel == '\x01') && (Fan2_Target_Speed < 0x17)) {
      Fan2_UpdateCount = 100;
      Fan2_Target_Speed = 0x17;
      Fan2_Target_Speed_Backup = 0x17;
    }
    if ((EC_ThermalOptimisation == '\x01') && (Fan2_Target_Speed < 0x12)) {
      Fan2_Target_Speed = 0x12;
    }
    if ((EC_ThermalOptimisation == '\x02') && (Fan2_Target_Speed < 0x14)) {
      Fan2_Target_Speed = 0x14;
    }
    if ((EC_ThermalOptimisation == '\x03') && (Fan2_Target_Speed < 0x15)) {
      Fan2_Target_Speed = 0x15;
    }
    if (Fan2_Target_Speed == Fan2_Target_Speed_Backup) {
      Check_FANRPM_Count(&Fan2_UpdateCount,2);
    }
    else {
      Fan2_Target_Speed_Backup = Fan2_Target_Speed;
      Fan2_UpdateCount = 0;
    }
  }
  return;
}
