void UpdateFan1RPM(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_00f0181e;
  if ((DAT_00f0181f != 0) || (uVar1 != 0)) {
    uVar1 = (uint)DAT_00f0181f * 0x100 + uVar1;
    if (6999 < uVar1) {
      Fan_Real_Speed_1 = 7000;
      goto LAB_0000f3b8;
    }
    uVar1 = 0x20e6da / uVar1;
  }
  Fan_Real_Speed_1 = (ushort)uVar1;
LAB_0000f3b8:
  nAtmFanSpeed = (char)(Fan_Real_Speed_1 / 100);
  return;
}
