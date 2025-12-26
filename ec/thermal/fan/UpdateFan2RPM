void UpdateFan2RPM(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_00f01820;
  if ((DAT_00f01821 != 0) || (uVar1 != 0)) {
    uVar1 = (uint)DAT_00f01821 * 0x100 + uVar1;
    if (6999 < uVar1) {
      Fan_Real_Speed_2 = 7000;
      goto LAB_0000f420;
    }
    uVar1 = 0x20e6da / uVar1;
  }
  Fan_Real_Speed_2 = (ushort)uVar1;
LAB_0000f420:
  nAtmFan2Speed = (char)(Fan_Real_Speed_2 / 100);
  return;
}
