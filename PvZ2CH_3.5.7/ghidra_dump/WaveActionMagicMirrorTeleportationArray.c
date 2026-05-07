// Class: WaveActionMagicMirrorTeleportationArray


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArray::StaticClassInit() */

void WaveActionMagicMirrorTeleportationArray::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WaveActionMagicMirrorTeleportationArray");
    (*pcVar2)(plVar1,asStack_10,FUN_04c91960,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionMagicMirrorTeleportationArray::StaticGetClass() */

long * WaveActionMagicMirrorTeleportationArray::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArray",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArray::WaveActionMagicMirrorTeleportationArray() */

void __thiscall
WaveActionMagicMirrorTeleportationArray::WaveActionMagicMirrorTeleportationArray
          (WaveActionMagicMirrorTeleportationArray *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06995510;
  return;
}


/* WaveActionMagicMirrorTeleportationArray::StaticNew() */

WaveActionMagicMirrorTeleportationArray * WaveActionMagicMirrorTeleportationArray::StaticNew(void)

{
  WaveActionMagicMirrorTeleportationArray *this;
  
  this = ::operator_new(0x18);
  WaveActionMagicMirrorTeleportationArray(this);
  return this;
}


/* WaveActionMagicMirrorTeleportationArray::~WaveActionMagicMirrorTeleportationArray() */

void __thiscall
WaveActionMagicMirrorTeleportationArray::~WaveActionMagicMirrorTeleportationArray
          (WaveActionMagicMirrorTeleportationArray *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06995510;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionMagicMirrorTeleportationArray::~WaveActionMagicMirrorTeleportationArray() */

void __thiscall
WaveActionMagicMirrorTeleportationArray::~WaveActionMagicMirrorTeleportationArray
          (WaveActionMagicMirrorTeleportationArray *this)

{
  ~WaveActionMagicMirrorTeleportationArray(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArray::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&)
    */

void WaveActionMagicMirrorTeleportationArray::WaveStart(WaveAction *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FairyTaleWindWaveActionProps *pFVar6;
  long lVar7;
  int *piVar8;
  RtObject *pRVar9;
  GridItemMagicMirror *this;
  GridItemMagicMirror *this_00;
  undefined8 uVar10;
  Board *pBVar11;
  float fVar12;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar6 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar10 = *(undefined8 *)(pFVar6 + 0x40);
  lVar7 = FUN_04c915d4(uVar10,*(undefined8 *)(pFVar6 + 0x48));
  if (lVar7 != 0) {
    local_20 = FUN_04c91b70(uVar10);
    local_18 = FUN_04c91bc0(*(undefined8 *)(pFVar6 + 0x48));
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar5)
    {
      piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      fVar12 = (float)piVar8[4];
      iVar1 = piVar8[1];
      iVar2 = *piVar8;
      iVar3 = piVar8[2];
      iVar4 = piVar8[3];
      pBVar11 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"magic_mirror");
      pRVar9 = (RtObject *)Board::AddGridItem(pBVar11,asStack_10,iVar2,iVar1,1);
      std::string::~string(asStack_10);
      nop();
      this = Sexy::RtObject::Cast<GridItemMagicMirror>(pRVar9);
      GridItemMagicMirror::setValues(this,fVar12);
      pBVar11 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"magic_mirror");
      pRVar9 = (RtObject *)Board::AddGridItem(pBVar11,asStack_10,iVar3,iVar4,1);
      std::string::~string(asStack_10);
      nop();
      this_00 = Sexy::RtObject::Cast<GridItemMagicMirror>(pRVar9);
      GridItemMagicMirror::setValues(this_00,fVar12);
      GridItemMagicMirror2::setBrotherMagicMirror((GridItemMagicMirror2 *)this);
      GridItemMagicMirror2::setBrotherMagicMirror((GridItemMagicMirror2 *)this_00);
      __gnu_cxx::
      __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
      ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                    *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

