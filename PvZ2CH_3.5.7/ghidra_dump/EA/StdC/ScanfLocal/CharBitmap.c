// Class: EA::StdC::ScanfLocal::CharBitmap


/* EA::StdC::ScanfLocal::CharBitmap::CharBitmap() */

void __thiscall EA::StdC::ScanfLocal::CharBitmap::CharBitmap(CharBitmap *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* EA::StdC::ScanfLocal::CharBitmap::Get8(int) const */

uint __thiscall EA::StdC::ScanfLocal::CharBitmap::Get8(CharBitmap *this,int param_1)

{
  return 1 << (ulong)(param_1 & 0x1f) & *(uint *)(this + (long)(int)((uint)param_1 >> 5 & 7) * 4);
}


/* EA::StdC::ScanfLocal::CharBitmap::Get32(int) const */

uint __thiscall EA::StdC::ScanfLocal::CharBitmap::Get32(CharBitmap *this,int param_1)

{
  if (0xff < param_1) {
    return *(uint *)this & 1;
  }
  return 1 << (ulong)(param_1 & 0x1f) & *(uint *)(this + (long)(int)((uint)param_1 >> 5 & 7) * 4);
}


/* EA::StdC::ScanfLocal::CharBitmap::Set8(int) */

void __thiscall EA::StdC::ScanfLocal::CharBitmap::Set8(CharBitmap *this,int param_1)

{
  long lVar1;
  
  lVar1 = ((ulong)((uint)param_1 >> 5) & 7) * 4;
  *(uint *)(this + lVar1) = *(uint *)(this + lVar1) | 1 << (ulong)(param_1 & 0x1f);
  return;
}


/* EA::StdC::ScanfLocal::CharBitmap::Set16(char16_t) */

void __thiscall EA::StdC::ScanfLocal::CharBitmap::Set16(CharBitmap *this,wchar16 param_1)

{
  long lVar1;
  
  if ((ushort)param_1 < 0x100) {
    lVar1 = (ulong)(uint)((int)(uint)(ushort)param_1 >> 5) * 4;
    *(uint *)(this + lVar1) = *(uint *)(this + lVar1) | 1 << (ulong)((ushort)param_1 & 0x1f);
  }
  return;
}


/* EA::StdC::ScanfLocal::CharBitmap::Set32(char32_t) */

void __thiscall EA::StdC::ScanfLocal::CharBitmap::Set32(CharBitmap *this,wchar32 param_1)

{
  ulong uVar1;
  
  if ((uint)param_1 < 0x100) {
    uVar1 = -(ulong)((uint)(param_1 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)(param_1 >> 5) << 2;
    *(uint *)(this + uVar1) = *(uint *)(this + uVar1) | 1 << (ulong)(uint)(param_1 & 0x1f);
  }
  return;
}


/* EA::StdC::ScanfLocal::CharBitmap::NegateAll() */

void __thiscall EA::StdC::ScanfLocal::CharBitmap::NegateAll(CharBitmap *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  uVar1 = *(undefined8 *)this;
  *(ulong *)(this + 8) =
       CONCAT17(~(byte)((ulong)uVar2 >> 0x38),
                CONCAT16(~(byte)((ulong)uVar2 >> 0x30),
                         CONCAT15(~(byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uVar2 >> 8),
                                                                      ~(byte)uVar2)))))));
  *(ulong *)this =
       CONCAT17(~(byte)((ulong)uVar1 >> 0x38),
                CONCAT16(~(byte)((ulong)uVar1 >> 0x30),
                         CONCAT15(~(byte)((ulong)uVar1 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uVar1 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uVar1 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uVar1 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uVar1 >> 8),
                                                                      ~(byte)uVar1)))))));
  uVar2 = *(undefined8 *)(this + 0x18);
  uVar1 = *(undefined8 *)(this + 0x10);
  *(ulong *)(this + 0x18) =
       CONCAT17(~(byte)((ulong)uVar2 >> 0x38),
                CONCAT16(~(byte)((ulong)uVar2 >> 0x30),
                         CONCAT15(~(byte)((ulong)uVar2 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uVar2 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uVar2 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uVar2 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uVar2 >> 8),
                                                                      ~(byte)uVar2)))))));
  *(ulong *)(this + 0x10) =
       CONCAT17(~(byte)((ulong)uVar1 >> 0x38),
                CONCAT16(~(byte)((ulong)uVar1 >> 0x30),
                         CONCAT15(~(byte)((ulong)uVar1 >> 0x28),
                                  CONCAT14(~(byte)((ulong)uVar1 >> 0x20),
                                           CONCAT13(~(byte)((ulong)uVar1 >> 0x18),
                                                    CONCAT12(~(byte)((ulong)uVar1 >> 0x10),
                                                             CONCAT11(~(byte)((ulong)uVar1 >> 8),
                                                                      ~(byte)uVar1)))))));
  return;
}

