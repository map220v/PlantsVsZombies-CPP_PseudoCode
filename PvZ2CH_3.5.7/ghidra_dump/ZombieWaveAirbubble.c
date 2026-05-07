// Class: ZombieWaveAirbubble


/* ZombieWaveAirbubble::onApplyCondition(ZombieConditions) */

void __thiscall ZombieWaveAirbubble::onApplyCondition(undefined8 param_1,int param_2)

{
  if (((param_2 != 3) && (param_2 != 0x18)) && (param_2 != 2)) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWaveAirbubble::StaticClassInit() */

void ZombieWaveAirbubble::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWaveAirbubble");
    (*pcVar2)(plVar1,asStack_10,FUN_04a71124,0x850,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWaveAirbubble::SetFloatInfo(float, float) */

void __thiscall
ZombieWaveAirbubble::SetFloatInfo(ZombieWaveAirbubble *this,float param_1,float param_2)

{
  *(float *)(this + 0x844) = param_1;
  *(float *)(this + 0x848) = param_2;
  return;
}


/* ZombieWaveAirbubble::~ZombieWaveAirbubble() */

void __thiscall ZombieWaveAirbubble::~ZombieWaveAirbubble(ZombieWaveAirbubble *this)

{
  *(undefined ***)this = &PTR_GetClass_06939140;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWaveAirbubble_06939bf8;
  ZombieAirbubble::~ZombieAirbubble((ZombieAirbubble *)this);
  return;
}


/* non-virtual thunk to ZombieWaveAirbubble::~ZombieWaveAirbubble() */

void __thiscall ZombieWaveAirbubble::~ZombieWaveAirbubble(ZombieWaveAirbubble *this)

{
  ~ZombieWaveAirbubble(this + -0x10);
  return;
}


/* ZombieWaveAirbubble::~ZombieWaveAirbubble() */

void __thiscall ZombieWaveAirbubble::~ZombieWaveAirbubble(ZombieWaveAirbubble *this)

{
  ~ZombieWaveAirbubble(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWaveAirbubble::~ZombieWaveAirbubble() */

void __thiscall ZombieWaveAirbubble::~ZombieWaveAirbubble(ZombieWaveAirbubble *this)

{
  ~ZombieWaveAirbubble(this + -0x10);
  return;
}


/* ZombieWaveAirbubble::ZombieWaveAirbubble() */

void __thiscall ZombieWaveAirbubble::ZombieWaveAirbubble(ZombieWaveAirbubble *this)

{
  ZombieAirbubble::ZombieAirbubble((ZombieAirbubble *)this);
  *(undefined ***)this = &PTR_GetClass_06939140;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWaveAirbubble_06939bf8;
  return;
}


/* ZombieWaveAirbubble::StaticNew() */

ZombieWaveAirbubble * ZombieWaveAirbubble::StaticNew(void)

{
  ZombieWaveAirbubble *this;
  
  this = ::operator_new(0x850);
  ZombieWaveAirbubble(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWaveAirbubble::onEnterState_DestroyingPlant(ZombieState) */

void ZombieWaveAirbubble::onEnterState_DestroyingPlant(ZombieAirbubble *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *pPVar4;
  Board *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x828);
  local_8 = ___stack_chk_guard;
  ZombieAirbubble::SetTargetColAndRow(param_1,-1,-1);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(param_1 + 0x830));
  iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 0x834));
  Board::SetGridSquareLocked(this_00,iVar2,iVar3,false);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Plant::KillPlant(pPVar4,0,0,1);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWaveAirbubble::moveToDestination(float, float) */

void __thiscall
ZombieWaveAirbubble::moveToDestination(ZombieWaveAirbubble *this,float param_1,float param_2)

{
  int iVar1;
  SexyVector3 *pSVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar6 = *(float *)(pSVar2 + 8);
  fVar8 = *(float *)pSVar2;
  fVar7 = *(float *)(pSVar2 + 4);
  fVar5 = param_2 - fVar7;
  fVar4 = (float)Sexy::SexyMath::Fabs(fVar6);
  fVar4 = -fVar4;
  EATextSquish::Vec3::Vec3(aVStack_38,param_1 - fVar8,fVar5,fVar4);
  local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)aVStack_38);
  local_24 = fVar5;
  local_20 = fVar4;
  fVar4 = (float)PVZ_Dt();
  fVar5 = *(float *)(this + 0x844);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar4 * fVar5 * (float)iVar1);
  DVec3::DVec3((DVec3 *)&local_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)&local_28);
  fVar5 = *(float *)(this + 0x848);
  fVar4 = (float)PVZ_T();
  fVar4 = sinf(fVar4 + fVar5);
  fVar5 = (float)PVZ_Dt();
  local_18 = local_18 + fVar4 * fVar5 * 60.0;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (50.0 <= fVar6) {
LAB_04a6fbe8:
    uVar3 = 0;
  }
  else {
    if (fVar8 < param_1) {
      if (param_1 <= *(float *)pSVar2) goto LAB_04a6fc4c;
LAB_04a6fc28:
      uVar3 = 0;
LAB_04a6fc2c:
      fVar4 = *(float *)(pSVar2 + 4);
      if (param_2 <= fVar7) goto LAB_04a6fbac;
LAB_04a6fc38:
      if (fVar4 < param_2) goto LAB_04a6fbe8;
    }
    else {
      if (param_1 < *(float *)pSVar2) {
        if (param_1 < fVar8) goto LAB_04a6fc28;
LAB_04a6fc4c:
        uVar3 = 1;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
        local_18 = param_1;
        (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
        goto LAB_04a6fc2c;
      }
      uVar3 = 1;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
      local_18 = param_1;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      fVar4 = *(float *)(pSVar2 + 4);
      if (fVar7 < param_2) goto LAB_04a6fc38;
LAB_04a6fbac:
      if ((param_2 < fVar4) && (param_2 < fVar7)) goto LAB_04a6fbe8;
    }
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar2);
    local_14 = param_2;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieWaveAirbubble::updateState_DestroyingPlant() */

void __thiscall ZombieWaveAirbubble::updateState_DestroyingPlant(ZombieWaveAirbubble *this)

{
  ZombiePirateCaptainParrotProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombiePirateCaptainParrotProps>((Zombie *)this);
  if (fVar2 <= *(float *)(pZVar1 + 0x218)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombieWaveAirbubble::StaticGetClass() */

long * ZombieWaveAirbubble::StaticGetClass(void)

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
  uVar2 = ZombieAirbubble::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWaveAirbubble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWaveAirbubble::GetClass() const */

long * ZombieWaveAirbubble::GetClass(void)

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
  uVar2 = ZombieAirbubble::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWaveAirbubble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

