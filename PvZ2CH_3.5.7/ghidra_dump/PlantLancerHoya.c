// Class: PlantLancerHoya


/* PlantLancerHoya::GetTargetEntityTypesForWeapon(PlantWeapon) */

void PlantLancerHoya::GetTargetEntityTypesForWeapon(void)

{
  operator|(2,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::StaticClassInit() */

void PlantLancerHoya::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLancerHoya");
    (*pcVar2)(plVar1,asStack_10,FUN_04d05d94,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLancerHoya::StaticGetClass() */

long * PlantLancerHoya::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantLancerHoya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLancerHoya::GetClass() const */

long * PlantLancerHoya::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantLancerHoya",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&) */

void PlantLancerHoya::FindTargetZombieInRow
               (undefined8 param_1,PlantFramework *param_2,undefined4 param_3,ulong param_4,
               undefined8 param_5,undefined8 param_6)

{
  TRect aTStack_28 [8];
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_2 + 0x2b8))(aTStack_28,param_2,param_4 & 0xffffffff);
  local_20 = 800;
  PlantFramework::GetFinalAttackRect(param_2,aTStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aTStack_28);
  PlantFramework::FindTargetZombieInRow(param_1,param_2,param_3,param_4,param_5,param_6,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::CalcAttackDamage() */

void __thiscall PlantLancerHoya::CalcAttackDamage(PlantLancerHoya *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  float fVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 0x10) + 0xa8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (lVar3 != 0) {
        this_00 = *(Plant **)(this + 0x10);
        iVar2 = FUN_04d039ec(*(undefined4 *)(this_00 + 0x50));
        if (iVar2 == 5) {
          fVar4 = (float)Plant::GetExtraDPSmodifier(this_00);
          iVar2 = (int)(*(float *)(this + 0x38) + *(float *)(this + 0x34) * fVar4);
        }
        else {
          fVar4 = (float)Plant::GetExtraDPSmodifier(this_00);
          iVar2 = (int)(fVar4 * *(float *)(this + 0x34));
        }
        goto LAB_04d04274;
      }
    }
  }
  iVar2 = (int)*(float *)(this + 0x34);
LAB_04d04274:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::CalcPlantfoodAttackDamage() */

void __thiscall PlantLancerHoya::CalcPlantfoodAttackDamage(PlantLancerHoya *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 0x10) + 0xa8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (lVar2 != 0) {
        fVar3 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
        fVar3 = fVar3 * *(float *)(this + 0x3c);
        goto LAB_04d04338;
      }
    }
  }
  fVar3 = *(float *)(this + 0x3c);
LAB_04d04338:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::OnZombieFlyEndPlantfood(Zombie*) */

void __thiscall PlantLancerHoya::OnZombieFlyEndPlantfood(PlantLancerHoya *this,Zombie *param_1)

{
  char cVar1;
  ZombieTosserInSkySubSystem *pZVar2;
  SexyVector3 *pSVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Zombie*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x298))(0x40000000,param_1);
  }
  else {
    pZVar2 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnZombieLandEnd);
    Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
              (aDStack_38,aCStack_50);
    ZombieTosserInSkySubSystem::SetZombieLandEndFunc(pZVar2,param_1,aDStack_38);
    pZVar2 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnZombieInSky);
    Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
              (aDStack_38,aCStack_50);
    ZombieTosserInSkySubSystem::SetZombieInSkyFunc(pZVar2,param_1,aDStack_38);
    pZVar2 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    ZombieTosserInSkySubSystem::TossZombieInSky
              (pZVar2,param_1,*(Plant **)(this + 0x10),pSVar3,200.0,0.46,false,2.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLancerHoya::PlantLancerHoya() */

void __thiscall PlantLancerHoya::PlantLancerHoya(PlantLancerHoya *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a6280;
  Sexy::Insets::Insets((Insets *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  return;
}


/* PlantLancerHoya::StaticNew() */

PlantLancerHoya * PlantLancerHoya::StaticNew(void)

{
  PlantLancerHoya *this;
  
  this = ::operator_new(0xb8);
  PlantLancerHoya(this);
  return this;
}


/* PlantLancerHoya::CalcSpecialChargeDuration() */

undefined4 __thiscall PlantLancerHoya::CalcSpecialChargeDuration(PlantLancerHoya *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_04d050dc(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_04d039ec(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (2 < iVar1) {
    return *(undefined4 *)(lVar2 + 0x2c4);
  }
  if (iVar1 == 2) {
    return *(undefined4 *)(lVar2 + 0x2c0);
  }
  return *(undefined4 *)(lVar2 + 700);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::Initialize() */

void __thiscall PlantLancerHoya::Initialize(PlantLancerHoya *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PlantLancerHoya PVar3;
  PlantAnimRig_DevilsFlower *pPVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar4 = (PlantAnimRig_DevilsFlower *)FUN_04d05054(*(undefined8 *)(this + 0x10));
  if (pPVar4 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar4,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  lVar5 = FUN_04d050dc(*(undefined8 *)(this + 0x10));
  fVar9 = (float)PVZ_T();
  fVar10 = (float)CalcSpecialChargeDuration(this);
  this[0x2c] = (PlantLancerHoya)0x0;
  *(float *)(this + 0x28) = fVar10 + fVar9;
  uVar11 = PVZ_T();
  plVar7 = *(long **)(this + 0x10);
  fVar9 = *(float *)(lVar5 + 0x2cc);
  uVar12 = *(undefined4 *)(lVar5 + 0x2d0);
  uVar2 = *(undefined4 *)(lVar5 + 0x2d4);
  pcVar8 = *(code **)(*plVar7 + 0x178);
  *(undefined4 *)(this + 0x30) = uVar11;
  *(undefined4 *)(plVar7 + 0x19) = 10;
  *(float *)(this + 0x34) = fVar9 + fVar9;
  *(undefined4 *)(this + 0x38) = uVar12;
  *(undefined4 *)(this + 0x3c) = uVar2;
  puVar6 = (undefined8 *)(*pcVar8)(plVar7);
  uVar1 = puVar6[1];
  *(undefined8 *)(this + 0x40) = *puVar6;
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar12 = PVZ_T();
  *(undefined4 *)(this + 0x6c) = uVar12;
  uVar12 = PVZ_T();
  *(undefined4 *)(this + 0x68) = uVar12;
  PVar3 = (PlantLancerHoya)
          (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  this[0xb0] = PVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::registerForEvents() */

void __thiscall PlantLancerHoya::registerForEvents(PlantLancerHoya *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_d0 = local_80;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_d0);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantLancerHoya,bool(PlantLancerHoya::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98)
  ;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,2,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::setState(unsigned int) */

void __thiscall PlantLancerHoya::setState(PlantLancerHoya *this,uint param_1)

{
  int iVar1;
  long lVar2;
  UIEasyButtonWidget *this_00;
  long *plVar3;
  PlantAnimRig_LancerHoya *pPVar4;
  Effect_AngerFlame *this_01;
  code *pcVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_04d05670_default;
  lVar2 = FUN_04d050dc();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar3 + 0x118))();
    goto switchD_04d05670_default;
  case 0xb:
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    pcVar5 = *(code **)(*plVar3 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar5)(plVar3,aRStack_50);
    break;
  case 0xc:
    this_01 = (Effect_AngerFlame *)UIEasyButtonWidget::GetImageNormal(this_00);
    iVar1 = Effect_AngerFlame::GetFlameCol(this_01);
    if (iVar1 == 2) {
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x30) = fVar6 + *(float *)(lVar2 + 0x2b8);
    }
    pPVar4 = (PlantAnimRig_LancerHoya *)FUN_04d05054(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_LancerHoya::PlaySpecialAttack(pPVar4,aRStack_50);
    break;
  case 0xd:
    pPVar4 = (PlantAnimRig_LancerHoya *)FUN_04d05054();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_LancerHoya::PlayTurnToSpecial(pPVar4,aRStack_50);
    break;
  default:
    goto switchD_04d05670_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04d05670_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::onTouchEvent(Sexy::Touch const&) */

void __thiscall PlantLancerHoya::onTouchEvent(PlantLancerHoya *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  Plant *this_00;
  Board *this_01;
  float fVar3;
  float fVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    fVar3 = (float)FUN_04d03b74((float)*(int *)(param_1 + 0x10));
    fVar4 = (float)FUN_04d03b74((float)*(int *)(param_1 + 0x14));
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x40),(int)fVar3,(int)fVar4);
    if ((cVar1 != '\0') && (*(long *)(this + 0x10) != 0)) {
      ToolPacketData::GetProps();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if ((cVar1 != '\0') &&
         ((((this_00 = *(Plant **)(this + 0x10), *(long *)(this_00 + 0xa8) != 0 &&
            (*(int *)(this_00 + 200) - 10U < 2)) && (this[0x2c] != (PlantLancerHoya)0x0)) &&
          ((cVar1 = Plant::IsSuspended(this_00), cVar1 == '\0' &&
           (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')))))) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        cVar1 = Board::IsPlaying(this_01);
        if (cVar1 != '\0') {
          cVar1 = FUN_04d039f0(this_01[0x887]);
          if ((cVar1 != '\0') && (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 == '\0')
             ) {
            setState(this,0xc);
            goto LAB_04d0590c;
          }
        }
      }
    }
  }
  cVar1 = '\0';
LAB_04d0590c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantLancerHoya::UpdateStatus() */

void __thiscall PlantLancerHoya::UpdateStatus(PlantLancerHoya *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if ((this[0xb0] != (PlantLancerHoya)0x0) && (this[0x2c] != (PlantLancerHoya)0x0)) {
      setState(this,0xc);
      return;
    }
    fVar2 = (float)PVZ_T();
    if ((*(float *)(this + 0x28) < fVar2) && (this[0x2c] == (PlantLancerHoya)0x0)) {
      this[0x2c] = (PlantLancerHoya)0x1;
      setState(this,0xd);
      return;
    }
    fVar2 = (float)PVZ_T();
    if ((*(float *)(this + 0x30) < fVar2) &&
       (cVar1 = Plant::CanFindTargetInRow
                          (*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0)
       , cVar1 != '\0')) {
      setState(this,0xb);
      return;
    }
  }
  return;
}


/* PlantLancerHoya::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantLancerHoya::onAnimStoppedCallback(PlantLancerHoya *this,string *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_04d050dc(*(undefined8 *)(this + 0x10));
  lVar2 = FUN_05474374(param_1,"turn_to_special",0);
  if (lVar2 == -1) {
    lVar2 = FUN_05474374(param_1,"special_attack",0);
    if (lVar2 == -1) {
      lVar2 = FUN_05474374(param_1,"attack",0);
      if (lVar2 == -1) {
        lVar1 = FUN_05474374(param_1,"plantfood",0);
        if (lVar1 != -1) goto LAB_04d05abc;
      }
      else {
        setState(this,10);
        fVar3 = (float)PVZ_T();
        *(float *)(this + 0x30) = fVar3 + *(float *)(lVar1 + 0x2b8);
        fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
        *(float *)(this + 0x28) = *(float *)(this + 0x28) - fVar3;
      }
    }
    else {
      setState(this,10);
      fVar3 = (float)PVZ_T();
      fVar4 = (float)CalcSpecialChargeDuration(this);
      this[0x2c] = (PlantLancerHoya)0x0;
      *(float *)(this + 0x28) = fVar4 + fVar3;
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x30) = fVar3 + *(float *)(lVar1 + 0x2b8);
    }
    return;
  }
LAB_04d05abc:
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::OnZombieLandEnd(Zombie*) */

void __thiscall PlantLancerHoya::OnZombieLandEnd(PlantLancerHoya *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ZombieWithActions *pZVar4;
  Effect_PopAnim *this_00;
  PopAnim *pPVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  string asStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtMixedPtr<Sexy::Image> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 != '\0')) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_80,"POPANIM_EFFECTS_LANCERHOYA_BULLET");
      nop();
      GetPAMByName(asStack_80);
      pPVar5 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
      ;
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar5,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,*pfVar6,pfVar6[1],0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
      iVar2 = (**(code **)(*(long *)param_1 + 200))(param_1);
      FUN_04d039e4(this_00 + 0x1c,iVar2 + 1);
      Effect_PopAnim::SetCentered(this_00,true);
      std::string::string((string *)aRStack_68,"PLANTFOOD02_BULLET");
      Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      fVar8 = (float)FUN_04d039f4(*(undefined4 *)(param_1 + 0x280));
      if (0.0 < fVar8) {
        iVar2 = CalcPlantfoodAttackDamage(this);
        uVar7 = *(undefined8 *)(this + 0x10);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(float)iVar2,local_70,local_6c,
                   (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68,1,uVar7,aPStack_78,0);
        (**(code **)(*(long *)param_1 + 0x110))(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
      std::string::~string(asStack_80);
    }
    plVar3 = (long *)Zombie::GetAnimRig(param_1);
    (**(code **)(*plVar3 + 0x88))();
    fVar8 = (float)FUN_04d039f4(*(undefined4 *)(param_1 + 0x280));
    if (fVar8 <= 0.0) {
      Zombie::setZombieState(param_1,5,0);
    }
    else {
      pZVar4 = Sexy::RtObject::Cast<ZombieWithActions>((RtObject *)param_1);
      if (pZVar4 != (ZombieWithActions *)0x0) {
        ZombieWithActions::GetCurrentAction();
        Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      Zombie::SetIsControlled(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::OnZombieInSky(Zombie*) */

void __thiscall PlantLancerHoya::OnZombieInSky(PlantLancerHoya *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtMixedPtrBase aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) == 0) goto LAB_04d06d98;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    goto LAB_04d06d98;
  }
  lVar4 = *(long *)(*(long *)(this + 0x10) + 0xa8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (lVar4 == 0) goto LAB_04d06d98;
  iVar2 = CalcAttackDamage(this);
  fVar6 = (float)PVZ_Dt();
  uVar5 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)((float)iVar2 * fVar6),local_70,local_6c,aRStack_68,1,uVar5,aPStack_78,0)
  ;
  if (param_1 != (Zombie *)0x0) {
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      fVar6 = (float)FUN_04d039f4(*(undefined4 *)(param_1 + 0x280));
      if (fVar6 <= 0.0) goto LAB_04d06d84;
      (**(code **)(*(long *)param_1 + 0x110))(param_1,aRStack_68);
    }
    fVar6 = (float)FUN_04d039f4(*(undefined4 *)(param_1 + 0x280));
    if (0.0 < fVar6) {
      iVar2 = Zombie::getZombieStateSerialization(param_1);
      if (iVar2 != 0) {
        (**(code **)(*(long *)param_1 + 600))(param_1);
      }
      plVar3 = (long *)Zombie::GetAnimRig(param_1);
      (**(code **)(*plVar3 + 0x80))(0x41200000);
    }
  }
LAB_04d06d84:
  Sexy::OutputDebugStrF((wchar_t *)"PlantLancerHoya OnZombieInSky ");
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
LAB_04d06d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::OnZombieInSkyPlantfood(Zombie*) */

void __thiscall PlantLancerHoya::OnZombieInSkyPlantfood(PlantLancerHoya *this,Zombie *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = CalcPlantfoodAttackDamage(this);
  fVar3 = (float)PVZ_Dt();
  uVar2 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)((float)iVar1 * fVar3),local_70,local_6c,aDStack_68,1,uVar2,aPStack_78,0)
  ;
  if ((param_1 != (Zombie *)0x0) &&
     (fVar3 = (float)FUN_04d039f4(*(undefined4 *)(param_1 + 0x280)), 0.0 < fVar3)) {
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  }
  Sexy::OutputDebugStrF((wchar_t *)"PlantLancerHoya OnZombieInSkyPlantfood");
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLancerHoya::CancelPlantfood() */

void __thiscall PlantLancerHoya::CancelPlantfood(PlantLancerHoya *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x50));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x98));
  return;
}


/* PlantLancerHoya::~PlantLancerHoya() */

void __thiscall PlantLancerHoya::~PlantLancerHoya(PlantLancerHoya *this)

{
  *(undefined ***)this = &PTR_GetClass_069a6280;
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x98));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x80));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x50));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLancerHoya::~PlantLancerHoya() */

void __thiscall PlantLancerHoya::~PlantLancerHoya(PlantLancerHoya *this)

{
  ~PlantLancerHoya(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::CheckValidZombie(Zombie*, bool) */

void PlantLancerHoya::CheckValidZombie(Zombie *param_1,bool param_2)

{
  char cVar1;
  byte bVar2;
  ZombieZombossMech *pZVar3;
  Zombie *this;
  TitleStatus aTStack_70 [24];
  byte local_58;
  long local_8;
  
  this = (Zombie *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsTargetable(this);
  if (((((cVar1 == '\0') || (cVar1 = RealObject::IsOnOpposingTeam(this,1), cVar1 == '\0')) ||
       (cVar1 = FUN_04d043d4(*(undefined4 *)(this + 0xcc)), cVar1 != '\0')) ||
      ((((cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0' ||
         (cVar1 = Zombie::IsIgnoringAllDamage(this), cVar1 != '\0')) ||
        ((cVar1 = Zombie::IsControlled(this), cVar1 != '\0' ||
         ((cVar1 = Zombie::IsSuspended(this), cVar1 != '\0' ||
          (cVar1 = Zombie::HasFogImmune(this), cVar1 != '\0')))))) ||
       (cVar1 = Zombie::IsBerserk(this), cVar1 != '\0')))) ||
     (((cVar1 = Zombie::IsBoss(this), cVar1 != '\0' ||
       (pZVar3 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this),
       pZVar3 != (ZombieZombossMech *)0x0)) ||
      (cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 != '\0')))) {
    bVar2 = 0;
  }
  else {
    Zombie::GetCurrentTitleStatus();
    bVar2 = local_58;
    if (local_58 == 0) {
      bVar2 = (**(code **)(*(long *)this + 0x508))(this);
    }
    TitleStatus::~TitleStatus(aTStack_70);
    bVar2 = bVar2 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::onZombieDestroyed(Zombie*) */

void PlantLancerHoya::onZombieDestroyed(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::DoPlantfoodAttack() */

void __thiscall PlantLancerHoya::DoPlantfoodAttack(PlantLancerHoya *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  PlantLancerHoyaTossSystem *pPVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  RealObject *this_01;
  RealObject *this_02;
  float fVar10;
  float fVar11;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  Insets local_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50 [3];
  Delegate1<Zombie*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  Sexy::Insets::Insets(local_78,local_b0 + -1,local_ac + -1,3,3);
  if (cVar1 != '\0') {
    Sexy::Insets::Insets((Insets *)local_50,local_b0 + -2,local_ac + -2,5,5);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x50);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar11 = *pfVar4;
  fVar10 = pfVar4[1];
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_88,(float)iVar3 + fVar11,fVar10,0.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,local_78);
  fVar10 = (float)PVZ_T();
  *(float *)(this + 0x68) = fVar10 + 3.0;
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    cVar1 = CheckValidZombie((Zombie *)this,SUB81(pZVar6,0));
    if (cVar1 != '\0') {
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      pPVar7 = Board::GetGameSubSystem<PlantLancerHoyaTossSystem>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnZombieFlyEndPlantfood);
      Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
                (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      PlantLancerHoyaTossSystem::SetZombieFlyEndFunc(pPVar7,pZVar6,aDStack_38);
      pPVar7 = Board::GetGameSubSystem<PlantLancerHoyaTossSystem>(*(Board **)(gLawnApp + 0x9f0));
      PlantLancerHoyaTossSystem::TossZombies
                (local_88,local_84,local_80,0x3f800000,pPVar7,pZVar6,*(undefined8 *)(this + 0x10));
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_98 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar8,uVar9,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_98,(__normal_iterator *)local_50);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_90);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   this_00,(RtWeakPtr *)local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  EntityFinder::GetEntitiesInGridSquares((RtWeakPtr<Sexy::ResourceInfo> *)local_50,4,local_78);
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x98));
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_50);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_50);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    nop();
    cVar1 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10));
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this_01 + 0x200))(this_01), cVar1 != '\0')
       ) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)&local_98);
      std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::push_back
                ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                 (this + 0x98),(RtWeakPtr *)aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_90,"Play_Zomb_Kongfu_Hammer_Swing");
  RealObject::PlayPositionalSound(this_02,(string *)aRStack_90,0.0);
  std::string::~string((string *)aRStack_90);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::FindSpecialTargets(BoardEntityTypeFlag) */

void PlantLancerHoya::FindSpecialTargets
               (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *param_1
               ,long param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  BoardEntity **ppBVar5;
  RealObject *this;
  TRect *extraout_x1;
  undefined8 local_68;
  undefined8 local_60;
  Insets aIStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_58,*(int *)(*(long *)(param_2 + 0x10) + 0x114),
             *(int *)(*(long *)(param_2 + 0x10) + 0x110),3,1);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_58,extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x110);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,param_3,
             auStack_48,uVar1,uVar1);
  if ((param_3 == 4) && (lVar4 = FUN_04d03a0c(local_38,local_30), lVar4 != 0)) {
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2)
    {
      ppBVar5 = (BoardEntity **)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      nop();
      cVar3 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_2 + 0x10));
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*(long *)this + 0x200))(this), cVar3 != '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,ppBVar5);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)avStack_20);
  }
  else {
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,(vector *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::UpdateActions() */

void __thiscall PlantLancerHoya::UpdateActions(PlantLancerHoya *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtMixedPtrBase *pRVar5;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    UpdateStatus(this);
  }
  else if (*(int *)(*(long *)(this + 0x10) + 200) == 0xc) {
    iVar3 = CalcAttackDamage(this);
    fVar11 = (float)PVZ_Dt();
    uVar10 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point((Point *)&local_88,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)((float)iVar3 * fVar11),(undefined4)local_80,local_80._4_4_,
               (DamageInfo *)local_68,1,uVar10,(Point *)&local_88,0);
    fVar11 = (float)PVZ_T();
    if (fVar11 <= *(float *)(this + 0x6c)) {
      FindSpecialTargets((FastCurve *)&local_80,this,2);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88),
            bVar2) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
        if ((RtObject *)*puVar7 != (RtObject *)0x0) {
          pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          cVar1 = CheckValidZombie((Zombie *)this,SUB81(pZVar8,0));
          if (cVar1 != '\0') {
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
            (**(code **)(*(long *)pZVar8 + 0x110))(pZVar8,(DamageInfo *)local_68);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    fVar11 = (float)PVZ_T();
    if ((*(float *)(this + 0x6c) < fVar11) ||
       (lVar4 = FUN_04d03a00(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88)), lVar4 == 0)
       ) {
      fVar11 = (float)PVZ_T();
      if (*(float *)(this + 0x6c) < fVar11) {
        cVar1 = std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::
                empty((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *
                      )(this + 0x80));
        if (cVar1 == '\0') {
          std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
                    ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                     (this + 0x80));
        }
      }
    }
    else {
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x80));
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x80));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar2) {
        pRVar5 = (RtMixedPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
        if (cVar1 != '\0') {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
          (**(code **)(*plVar9 + 0x110))(plVar9,(DamageInfo *)local_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
    }
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    goto joined_r0x04d07a44;
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
joined_r0x04d07a44:
  if (((cVar1 != '\0') && (cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10)), cVar1 != '\0')) &&
     (fVar11 = (float)PVZ_T(), fVar11 < *(float *)(this + 0x68))) {
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x50));
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x50));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
      if (!bVar2) break;
      pRVar5 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
      if (cVar1 != '\0') {
        this_00 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        OnZombieInSkyPlantfood(this,(Zombie *)pRVar6);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x98));
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x98));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar2)
    {
      pRVar5 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
      if (cVar1 != '\0') {
        iVar3 = CalcPlantfoodAttackDamage(this);
        fVar11 = (float)PVZ_Dt();
        uVar10 = *(undefined8 *)(this + 0x10);
        Sexy::Point::Point((Point *)&local_88,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((float)iVar3 * fVar11),(undefined4)local_80,local_80._4_4_,
                   (DamageInfo *)local_68,1,uVar10,(Point *)&local_88,0);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
        (**(code **)(*plVar9 + 0x110))(plVar9,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::FindSpecialTargetMelee(BoardEntityTypeFlag) */

void __thiscall PlantLancerHoya::FindSpecialTargetMelee(PlantLancerHoya *this,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  RealObject *this_00;
  undefined8 uVar5;
  TRect *extraout_x1;
  undefined8 uVar6;
  undefined8 local_58;
  Insets aIStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_50,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_50,extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_2,
             auStack_40,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  if (param_2 == 2) {
    lVar3 = FUN_04d03a0c(local_20,local_18);
    if (lVar3 != 0) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      Sexy::Point::Point((Point *)&local_58,*(int *)(*(long *)(this + 0x10) + 0x114),
                         *(int *)(*(long *)(this + 0x10) + 0x110));
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_58);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar6,uVar5,(BoardEntitySorter_ClosestByColumn *)local_30);
      puVar4 = (undefined8 *)FUN_04d03a1c(local_20);
      uVar6 = *puVar4;
      goto LAB_04d07e18;
    }
LAB_04d07ec4:
    uVar6 = 0;
  }
  else {
    if (param_2 == 4) {
      lVar3 = FUN_04d03a0c(local_20,local_18);
      if (lVar3 == 0) goto LAB_04d07ec4;
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)local_30), bVar2
            ) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        nop();
        cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
        if ((cVar1 != '\0') &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar1 != '\0')) {
          uVar6 = *puVar4;
          goto LAB_04d07e18;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
    }
    uVar6 = 0;
  }
LAB_04d07e18:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::DoSpecialAttack() */

void __thiscall PlantLancerHoya::DoSpecialAttack(PlantLancerHoya *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_00;
  Zombie *pZVar4;
  long lVar5;
  ZombieTosserInSkySubSystem *pZVar6;
  SexyVector3 *pSVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  Delegate1<Zombie*> aDStack_38 [48];
  long local_8;
  
  lVar9 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04d039ec(*(undefined4 *)(lVar9 + 0x50));
  lVar9 = FUN_04d050dc(lVar9);
  fVar10 = (float)PVZ_T();
  *(float *)(this + 0x6c) = fVar10 + *(float *)(lVar9 + 0x2c8);
  if (iVar3 == 5) {
    FindSpecialTargets(avStack_68,this,2);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_68);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78)
      ;
      if ((RtObject *)*puVar8 != (RtObject *)0x0) {
        pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
        cVar1 = CheckValidZombie((Zombie *)this,SUB81(pZVar4,0));
        if (cVar1 != '\0') {
          pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                             (*(Board **)(gLawnApp + 0x9f0));
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnZombieLandEnd);
          Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
                    (aDStack_38,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
          ZombieTosserInSkySubSystem::SetZombieLandEndFunc(pZVar6,pZVar4,aDStack_38);
          pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                             (*(Board **)(gLawnApp + 0x9f0));
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnZombieInSky);
          Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
                    (aDStack_38,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
          ZombieTosserInSkySubSystem::SetZombieInSkyFunc(pZVar6,pZVar4,aDStack_38);
          pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                             (*(Board **)(gLawnApp + 0x9f0));
          pSVar7 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)pZVar4);
          ZombieTosserInSkySubSystem::TossZombieInSky
                    (pZVar6,pZVar4,*(Plant **)(this + 0x10),pSVar7,200.0,0.66,false,
                     *(float *)(lVar9 + 0x2c8));
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
    FindSpecialTargets((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,this,4);
    lVar5 = FUN_04d03a0c(local_50,local_48);
    if (lVar5 == 0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
    }
    else {
      fVar10 = (float)PVZ_T();
      *(float *)(this + 0x6c) = fVar10 + *(float *)(lVar9 + 0x2c8);
      std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
                ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                 (this + 0x80));
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)&local_78);
        std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::push_back
                  ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                   (this + 0x80),(RtWeakPtr *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
    }
  }
  else {
    this_00 = (RtObject *)FindSpecialTargetMelee(this,2);
    if (this_00 != (RtObject *)0x0) {
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
      cVar1 = CheckValidZombie((Zombie *)this,SUB81(pZVar4,0));
      if (cVar1 != '\0') {
        pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
        iVar3 = Zombie::GetSizeType(pZVar4);
        if ((iVar3 != 2) && (iVar3 = Zombie::GetSizeType(pZVar4), iVar3 != 1)) {
          cVar1 = Zombie::IsOnGround(pZVar4);
          if (cVar1 != '\0') {
            pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                               (*(Board **)(gLawnApp + 0x9f0));
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,OnZombieLandEnd);
            Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
                      (aDStack_38,(CBMemberTranslatorX *)&local_50);
            ZombieTosserInSkySubSystem::SetZombieLandEndFunc(pZVar6,pZVar4,aDStack_38);
            pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                               (*(Board **)(gLawnApp + 0x9f0));
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,OnZombieInSky);
            Sexy::Delegate1<Zombie*>::Delegate1<PlantLancerHoya,void(PlantLancerHoya::*)(Zombie*)>
                      (aDStack_38,(CBMemberTranslatorX *)&local_50);
            ZombieTosserInSkySubSystem::SetZombieInSkyFunc(pZVar6,pZVar4,aDStack_38);
            pZVar6 = Board::GetGameSubSystem<ZombieTosserInSkySubSystem>
                               (*(Board **)(gLawnApp + 0x9f0));
            pSVar7 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)pZVar4);
            ZombieTosserInSkySubSystem::TossZombieInSky
                      (pZVar6,pZVar4,*(Plant **)(this + 0x10),pSVar7,200.0,0.66,false,
                       *(float *)(lVar9 + 0x2c8));
          }
        }
      }
    }
    FindSpecialTargets((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,this,4);
    lVar5 = FUN_04d03a0c(local_50,local_48);
    if (lVar5 != 0) {
      fVar10 = (float)PVZ_T();
      *(float *)(this + 0x6c) = fVar10 + *(float *)(lVar9 + 0x2c8);
      std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
                ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                 (this + 0x80));
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)avStack_68,(RtWeakPtrBase *)&local_70);
        std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::push_back
                  ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
                   (this + 0x80),(RtWeakPtr *)avStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoya::OnAnimCommand(std::string const&, std::string const&) */

void PlantLancerHoya::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  Projectile *this;
  undefined8 uVar5;
  RealObject *this_00;
  float fVar6;
  Board *pBVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d050dc(*(undefined8 *)(param_1 + 0x10));
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    this_00 = *(RealObject **)(param_1 + 0x10);
    std::string::string(asStack_10,"Play_LightningReed_Fire");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    fVar6 = *(float *)((long)puVar3 + 4);
                    /* WARNING: Load size is inaccurate */
    pBVar7._0_4_ = *puVar3;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    lVar4 = FUN_04d03a20(*(undefined8 *)(lVar4 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(lVar4 + 8));
    this = (Projectile *)
           Board::AddProjectile
                     (pBVar7._0_4_,fVar6 - 20.0,0,uVar5,asStack_10,*(undefined8 *)(param_1 + 0x10),0
                     );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (this != (Projectile *)0x0) {
      Projectile::SetShadow(this,false);
    }
  }
  else {
    bVar2 = std::operator==(param_2,"special_use_action");
    if (bVar2) {
      DoSpecialAttack((PlantLancerHoya *)param_1);
    }
    else {
      bVar2 = std::operator==(param_2,"plantfood_use_action");
      bVar1 = false;
      if (bVar2) {
        bVar1 = false;
        DoPlantfoodAttack((PlantLancerHoya *)param_1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

