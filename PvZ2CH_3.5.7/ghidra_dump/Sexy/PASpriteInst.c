// Class: Sexy::PASpriteInst


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PASpriteInst::GetObjectInst(std::string const&) */

void __thiscall Sexy::PASpriteInst::GetObjectInst(PASpriteInst *this,string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char *__s2;
  long lVar5;
  char *__s1;
  undefined8 uVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_20);
  Set8BytesTo0(asStack_18);
  iVar1 = FUN_054743b0(param_1,0x5c,0);
  if (iVar1 == -1) {
    thunk_FUN_05475e00(asStack_20,param_1);
  }
  else {
    FUN_05475ffc(asStack_10,param_1,0,(long)iVar1);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475ffc(asStack_10,param_1,(long)(iVar1 + 1),0xffffffffffffffff);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
  }
  uVar6 = *(undefined8 *)(this + 0x48);
  lVar5 = 0;
  iVar2 = FUN_05172a9c(uVar6,*(undefined8 *)(this + 0x50));
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)FUN_05172aa8(uVar6,lVar5);
      __s1 = (char *)*puVar4;
      if (__s1 != (char *)0x0) {
        __s2 = (char *)FUN_0547429c(asStack_20);
        iVar3 = strcasecmp(__s1,__s2);
        if (iVar3 == 0) {
          if (iVar1 != -1) {
            if ((PASpriteInst *)puVar4[1] == (PASpriteInst *)0x0) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
              puVar4 = (undefined8 *)GetObjectInst((PASpriteInst *)puVar4[1],asStack_18);
            }
          }
          goto LAB_05173740;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar2);
  }
  puVar4 = (undefined8 *)0x0;
LAB_05173740:
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* Sexy::PASpriteInst::SetSpriteVisibility(std::string const&, bool) */

byte __thiscall
Sexy::PASpriteInst::SetSpriteVisibility(PASpriteInst *this,string *param_1,bool param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  
  cVar1 = std::operator==((string *)(*(long *)(this + 0x18) + 8),param_1);
  bVar8 = cVar1 != '\0';
  if ((bool)bVar8) {
    this[10] = (PASpriteInst)param_2;
  }
  uVar7 = *(undefined8 *)(this + 0x48);
  uVar6 = 0;
  uVar3 = FUN_05172a9c(uVar7,*(undefined8 *)(this + 0x50));
  do {
    uVar5 = uVar6;
    if (uVar3 <= uVar6) {
      return bVar8;
    }
    while( true ) {
      uVar6 = uVar5 + 1;
      lVar4 = FUN_05172aa8(uVar7,uVar5);
      if (*(PASpriteInst **)(lVar4 + 8) == (PASpriteInst *)0x0) break;
      bVar2 = SetSpriteVisibility(*(PASpriteInst **)(lVar4 + 8),param_1,param_2);
      uVar7 = *(undefined8 *)(this + 0x48);
      bVar8 = bVar2 | bVar8;
      uVar3 = FUN_05172a9c(uVar7,*(undefined8 *)(this + 0x50));
      uVar5 = uVar6;
      if (uVar3 <= uVar6) {
        return bVar8;
      }
    }
  } while( true );
}


/* Sexy::PASpriteInst::GetSpriteVisibility(std::string const&) */

PASpriteInst __thiscall Sexy::PASpriteInst::GetSpriteVisibility(PASpriteInst *this,string *param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  PASpriteInst PVar8;
  
  cVar1 = std::operator==((string *)(*(long *)(this + 0x18) + 8),param_1);
  PVar8 = (PASpriteInst)0x0;
  if (cVar1 != '\0') {
    PVar8 = this[10];
  }
  uVar7 = *(undefined8 *)(this + 0x48);
  uVar6 = 0;
  uVar3 = FUN_05172a9c(uVar7,*(undefined8 *)(this + 0x50));
  do {
    uVar5 = uVar6;
    if (uVar3 <= uVar6) {
      return PVar8;
    }
    while( true ) {
      uVar6 = uVar5 + 1;
      lVar4 = FUN_05172aa8(uVar7,uVar5);
      if (*(PASpriteInst **)(lVar4 + 8) == (PASpriteInst *)0x0) break;
      bVar2 = GetSpriteVisibility(*(PASpriteInst **)(lVar4 + 8),param_1);
      uVar7 = *(undefined8 *)(this + 0x48);
      PVar8 = (PASpriteInst)(bVar2 | (byte)PVar8);
      uVar3 = FUN_05172a9c(uVar7,*(undefined8 *)(this + 0x50));
      uVar5 = uVar6;
      if (uVar3 <= uVar6) {
        return PVar8;
      }
    }
  } while( true );
}


/* Sexy::PASpriteInst::PASpriteInst() */

void __thiscall Sexy::PASpriteInst::PASpriteInst(PASpriteInst *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined8 *)this = 0;
  *(undefined2 *)(this + 8) = 0;
  this[0xb] = (PASpriteInst)0x1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  Color::Color((Color *)(this + 0x20));
  PATransform::PATransform((PATransform *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this[10] = (PASpriteInst)0x1;
  return;
}


/* Sexy::PASpriteInst::~PASpriteInst() */

void __thiscall Sexy::PASpriteInst::~PASpriteInst(PASpriteInst *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  PASpriteInst *this_00;
  undefined8 uVar4;
  
  lVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x48);
    iVar1 = FUN_05172a9c(uVar4,*(undefined8 *)(this + 0x50));
    lVar2 = lVar3;
    do {
      lVar3 = lVar2 + 1;
      if (iVar1 <= (int)lVar2) {
        std::vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>>::~vector
                  ((vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>> *)(this + 0x48));
        return;
      }
      lVar2 = FUN_05172aa8(uVar4,lVar2);
      this_00 = *(PASpriteInst **)(lVar2 + 8);
      lVar2 = lVar3;
    } while (this_00 == (PASpriteInst *)0x0);
    ~PASpriteInst(this_00);
    AK::FreeHook(this_00);
  } while( true );
}

