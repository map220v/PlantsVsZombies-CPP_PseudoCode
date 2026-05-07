// Class: WaveActionMagicMirrorTeleportationArray2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArray2::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
WaveActionMagicMirrorTeleportationArray2::AddResourceRequirements
          (WaveActionMagicMirrorTeleportationArray2 *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"HeianBox");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArray2::StaticClassInit() */

void WaveActionMagicMirrorTeleportationArray2::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionMagicMirrorTeleportationArray2");
    (*pcVar2)(plVar1,asStack_10,FUN_04c92e38,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionMagicMirrorTeleportationArray2::StaticGetClass() */

long * WaveActionMagicMirrorTeleportationArray2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArray2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArray2::WaveActionMagicMirrorTeleportationArray2() */

void __thiscall
WaveActionMagicMirrorTeleportationArray2::WaveActionMagicMirrorTeleportationArray2
          (WaveActionMagicMirrorTeleportationArray2 *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06995690;
  return;
}


/* WaveActionMagicMirrorTeleportationArray2::StaticNew() */

WaveActionMagicMirrorTeleportationArray2 * WaveActionMagicMirrorTeleportationArray2::StaticNew(void)

{
  WaveActionMagicMirrorTeleportationArray2 *this;
  
  this = ::operator_new(0x18);
  WaveActionMagicMirrorTeleportationArray2(this);
  return this;
}


/* WaveActionMagicMirrorTeleportationArray2::~WaveActionMagicMirrorTeleportationArray2() */

void __thiscall
WaveActionMagicMirrorTeleportationArray2::~WaveActionMagicMirrorTeleportationArray2
          (WaveActionMagicMirrorTeleportationArray2 *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06995690;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionMagicMirrorTeleportationArray2::~WaveActionMagicMirrorTeleportationArray2() */

void __thiscall
WaveActionMagicMirrorTeleportationArray2::~WaveActionMagicMirrorTeleportationArray2
          (WaveActionMagicMirrorTeleportationArray2 *this)

{
  ~WaveActionMagicMirrorTeleportationArray2(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArray2::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&)
    */

void WaveActionMagicMirrorTeleportationArray2::WaveStart(WaveAction *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  long lVar3;
  undefined8 *puVar4;
  RtObject *pRVar5;
  GridItemMagicMirror2 *this;
  GridItemMagicMirror2 *this_00;
  undefined8 uVar6;
  Board *pBVar7;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar6 = *(undefined8 *)(pFVar2 + 0x40);
  lVar3 = FUN_04c92a84(uVar6,*(undefined8 *)(pFVar2 + 0x48));
  if (lVar3 != 0) {
    local_48 = FUN_04c92fdc(uVar6);
    local_40 = FUN_04c9302c(*(undefined8 *)(pFVar2 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      local_28 = *puVar4;
      local_20 = puVar4[1];
      local_18 = puVar4[2];
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      local_10 = *(undefined4 *)(puVar4 + 3);
      std::to_string<ActivityTypeID>((ActivityTypeID *)((long)&local_18 + 4));
      std::operator+("magic_mirror_",asStack_38);
      pRVar5 = (RtObject *)Board::AddGridItem(pBVar7,asStack_30,(int)local_28,local_28._4_4_,1);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      this = Sexy::RtObject::Cast<GridItemMagicMirror2>(pRVar5);
      GridItemMagicMirror2::setValues(this,(float)local_18);
      FUN_04c926fc(local_10,this + 0x1c0);
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      std::to_string<ActivityTypeID>((ActivityTypeID *)((long)&local_18 + 4));
      std::operator+("magic_mirror_",asStack_38);
      pRVar5 = (RtObject *)Board::AddGridItem(pBVar7,asStack_30,(int)local_20,local_20._4_4_,1);
      std::string::~string(asStack_30);
      std::string::~string(asStack_38);
      this_00 = Sexy::RtObject::Cast<GridItemMagicMirror2>(pRVar5);
      GridItemMagicMirror2::setValues(this_00,(float)local_18);
      FUN_04c926fc(local_10,this_00 + 0x1c0);
      GridItemMagicMirror2::setBrotherMagicMirror(this);
      GridItemMagicMirror2::setBrotherMagicMirror(this_00);
      std::move_iterator<MagicMirrorTeleportationArrayData2*>::operator++
                ((move_iterator<MagicMirrorTeleportationArrayData2*> *)&local_48);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

