// Class: EA::Text::FontDescription


/* EA::Text::FontDescription::FontDescription() */

void __thiscall EA::Text::FontDescription::FontDescription(FontDescription *this)

{
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x6c) = 0xff000000;
  *(undefined2 *)this = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0x43c80000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 100) = 0x3f800000;
  return;
}


/* EA::Text::FontDescription::TEMPNAMEPLACEHOLDERVALUE(EA::Text::FontDescription const&) const */

bool __thiscall
EA::Text::FontDescription::operator==(FontDescription *this,FontDescription *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((((*(float *)(this + 0x40) == *(float *)(param_1 + 0x40)) &&
       (*(int *)(this + 0x44) == *(int *)(param_1 + 0x44))) &&
      (*(float *)(this + 0x48) == *(float *)(param_1 + 0x48))) &&
     ((*(int *)(this + 0x58) == *(int *)(param_1 + 0x58) &&
      (iVar2 = StdC::Stricmp((wchar16 *)this,(wchar16 *)param_1), iVar2 == 0)))) {
    bVar1 = *(int *)(this + 0x5c) == *(int *)(param_1 + 0x5c);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

