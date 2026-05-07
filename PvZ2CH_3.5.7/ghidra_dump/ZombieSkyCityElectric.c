// Class: ZombieSkyCityElectric


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectric::StaticClassInit() */

void ZombieSkyCityElectric::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityElectric");
    (*pcVar2)(plVar1,asStack_10,FUN_047a70b4,0x8f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectric::StaticGetClass() */

long * ZombieSkyCityElectric::StaticGetClass(void)

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
  uVar2 = ZombieSkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectric::GetClass() const */

long * ZombieSkyCityElectric::GetClass(void)

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
  uVar2 = ZombieSkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectric::GetBarragePtr() */

ZombieSkyCityElectric * __thiscall ZombieSkyCityElectric::GetBarragePtr(ZombieSkyCityElectric *this)

{
  return this + 0x878;
}


/* ZombieSkyCityElectric::onEnterState_Glide(ZombieState) */

void __thiscall ZombieSkyCityElectric::onEnterState_Glide(ZombieSkyCityElectric *this)

{
  int iVar1;
  SexyVector3 *pSVar2;
  undefined4 uVar3;
  
  this[0x852] = (ZombieSkyCityElectric)0x1;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x858) = uVar3;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x85c),pSVar2);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(1);
  *(float *)(this + 0x868) = (float)iVar1;
  if (0.0 < *(float *)(this + 0x860)) {
    iVar1 = FUN_047a5dbc();
    *(float *)(this + 0x86c) = (float)iVar1;
    *(undefined4 *)(this + 0x870) = 0;
    nop();
    return;
  }
  *(undefined4 *)(this + 0x86c) = 0x443e0000;
  *(undefined4 *)(this + 0x870) = 0;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectric::updateState_Glide() */

void __thiscall ZombieSkyCityElectric::updateState_Glide(ZombieSkyCityElectric *this)

{
  Effect_Barrage *this_00;
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') goto LAB_047a7018;
  this_00 = (Effect_Barrage *)(this + 0x878);
  cVar1 = Effect_Barrage::IsInitlized(this_00);
  if (cVar1 == '\0') {
LAB_047a6f90:
    fVar3 = *(float *)(this + 0x858);
    fVar4 = (float)PVZ_T();
    if (fVar4 < fVar3 + 15.0) goto LAB_047a6fa8;
LAB_047a7040:
    (**(code **)(*(long *)this + 0x78))(this,this + 0x868);
    this[0x852] = (ZombieSkyCityElectric)0x0;
  }
  else {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    if ((600.0 < *(float *)(lVar2 + 4)) || (*(float *)(lVar2 + 4) < 100.0)) {
      Effect_Barrage::StopBarrage(this_00);
      goto LAB_047a6f90;
    }
    if (this[0x851] != (ZombieSkyCityElectric)0x0) {
      Effect_Barrage::Update(this_00);
      goto LAB_047a6f90;
    }
    Effect_Barrage::StartBasicBarrage(this_00);
    fVar3 = *(float *)(this + 0x858);
    this[0x851] = (ZombieSkyCityElectric)0x1;
    fVar4 = (float)PVZ_T();
    if (fVar3 + 15.0 <= fVar4) goto LAB_047a7040;
LAB_047a6fa8:
    if (this[0x852] != (ZombieSkyCityElectric)0x0) {
      fVar3 = (float)PVZ_T();
      fVar3 = (fVar3 - *(float *)(this + 0x858)) * 0.06666667;
      DVec3::DVec3((DVec3 *)&local_18);
      local_18 = *(float *)(this + 0x85c) +
                 (*(float *)(this + 0x868) - *(float *)(this + 0x85c)) * fVar3;
      local_14 = *(float *)(this + 0x860) +
                 (*(float *)(this + 0x86c) - *(float *)(this + 0x860)) * fVar3;
      local_10 = 0;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      goto LAB_047a7018;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_047a7018:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectric::ZombieSkyCityElectric() */

void __thiscall ZombieSkyCityElectric::ZombieSkyCityElectric(ZombieSkyCityElectric *this)

{
  int iVar1;
  undefined4 uVar2;
  
  ZombieSkyCity::ZombieSkyCity((ZombieSkyCity *)this);
  *(undefined ***)this = &PTR_GetClass_068df700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityElectric_068e0170;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  *(int *)(this + 0x854) = iVar1 + -1;
  DVec3::DVec3((DVec3 *)(this + 0x85c));
  DVec3::DVec3((DVec3 *)(this + 0x868));
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x878));
  this[0x851] = (ZombieSkyCityElectric)0x0;
  this[0x852] = (ZombieSkyCityElectric)0x0;
  *(undefined4 *)(this + 0x854) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x858) = uVar2;
  return;
}


/* ZombieSkyCityElectric::StaticNew() */

ZombieSkyCityElectric * ZombieSkyCityElectric::StaticNew(void)

{
  ZombieSkyCityElectric *this;
  
  this = ::operator_new(0x8f0);
  ZombieSkyCityElectric(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectric::DoAttack() */

void __thiscall ZombieSkyCityElectric::DoAttack(ZombieSkyCityElectric *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (((iVar1 != *(int *)(this + 0x854)) && (-1 < iVar1)) &&
     (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    pcVar5 = *(code **)(*(long *)this + 0x1f8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    lVar3 = (*pcVar5)(this,avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_20);
    if (lVar3 != 0) {
      *(int *)(this + 0x854) = iVar1;
      ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_SkyCity_Lightning_Release");
      ZombieWithActions::getBaseActionDefinition<ZombieElectricProjectileActionDefinition>();
      ZombieWithActions::tryStartAction((ZombieWithActions *)this,avStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectric::updateState_Walk() */

void __thiscall ZombieSkyCityElectric::updateState_Walk(ZombieSkyCityElectric *this)

{
  char cVar1;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if ((cVar1 != '\0') && (this[0x852] != (ZombieSkyCityElectric)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x11,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  DoAttack(this);
  return;
}


/* ZombieSkyCityElectric::~ZombieSkyCityElectric() */

void __thiscall ZombieSkyCityElectric::~ZombieSkyCityElectric(ZombieSkyCityElectric *this)

{
  *(undefined ***)this = &PTR_GetClass_068df700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityElectric_068e0170;
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x878));
  ZombieSkyCity::~ZombieSkyCity((ZombieSkyCity *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityElectric::~ZombieSkyCityElectric() */

void __thiscall ZombieSkyCityElectric::~ZombieSkyCityElectric(ZombieSkyCityElectric *this)

{
  ~ZombieSkyCityElectric(this + -0x10);
  return;
}


/* ZombieSkyCityElectric::~ZombieSkyCityElectric() */

void __thiscall ZombieSkyCityElectric::~ZombieSkyCityElectric(ZombieSkyCityElectric *this)

{
  ~ZombieSkyCityElectric(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityElectric::~ZombieSkyCityElectric() */

void __thiscall ZombieSkyCityElectric::~ZombieSkyCityElectric(ZombieSkyCityElectric *this)

{
  ~ZombieSkyCityElectric(this + -0x10);
  return;
}

