// Class: PlantClawGloriosa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::StaticClassInit() */

void PlantClawGloriosa::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantClawGloriosa");
    (*pcVar2)(plVar1,asStack_10,FUN_03b02294,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantClawGloriosa::StaticGetClass() */

long * PlantClawGloriosa::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantClawGloriosa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantClawGloriosa::GetClass() const */

long * PlantClawGloriosa::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantClawGloriosa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::CalcZombieDPS(Zombie*) */

void __thiscall PlantClawGloriosa::CalcZombieDPS(PlantClawGloriosa *this,Zombie *param_1)

{
  float *pfVar1;
  float fVar2;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x498))(param_1);
  local_10 = (float)Zombie::GetExtraDPSmodifier(param_1);
  local_10 = local_10 * fVar2;
  local_c = 0.0;
  pfVar1 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*pfVar1);
}


/* PlantClawGloriosa::onKilled(bool) */

void PlantClawGloriosa::onKilled(bool param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)((ulong)param_1 + 0x30));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)((ulong)param_1 + 0x30));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* PlantClawGloriosa::CanBeTarget(Sexy::RtWeakPtr<Zombie>) */

byte __thiscall PlantClawGloriosa::CanBeTarget(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  undefined8 uVar4;
  Zombie *pZVar5;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar3 + 0x330))();
    if (cVar1 == '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = RealObject::IsOnOpposingTeam(uVar4,1);
      if (cVar1 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar1 = (**(code **)(*plVar3 + 0x328))();
        if (cVar1 == '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = Zombie::IsBerserk(pZVar5);
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            cVar1 = Zombie::HasFogImmune(pZVar5);
            if (cVar1 == '\0') {
              plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
              cVar1 = (**(code **)(*plVar3 + 0x4d8))();
              if (cVar1 == '\0') {
                plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                cVar1 = (**(code **)(*plVar3 + 0x508))();
                if (cVar1 == '\0') {
                  pZVar5 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                  cVar1 = Zombie::IsControlled(pZVar5);
                  if (cVar1 == '\0') {
                    pZVar5 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                    cVar1 = Zombie::IsFlying(pZVar5);
                    if (cVar1 == '\0') {
                      pZVar5 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                      cVar1 = Zombie::IsInvisible(pZVar5);
                      if (cVar1 == '\0') {
                        pZVar5 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                        cVar1 = Zombie::IsIgnoringAllDamage(pZVar5);
                        if (cVar1 == '\0') {
                          pZVar5 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                          cVar1 = Zombie::IsTargetable(pZVar5);
                          if (cVar1 != '\0') {
                            uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                            bVar2 = Zombie::HasCondition(uVar4,0x92);
                            return bVar2 ^ 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* PlantClawGloriosa::ResetZombie(Zombie*) */

void PlantClawGloriosa::ResetZombie(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  Zombie *pZVar1;
  long lVar2;
  RealObject *pRVar3;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Zombie::EndCondition(pZVar1,2);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Zombie::EndCondition(pZVar1,0x18);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_03aff3d8(0x3e4ccccd,lVar2 + 0x360);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Zombie::ResetTargetPostion(pZVar1);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Zombie::Heal(pZVar1);
  pRVar3 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  RealObject::JoinTeam(pRVar3,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::CanBeClawedByClawGloriosa(Zombie*) */

void __thiscall
PlantClawGloriosa::CanBeClawedByClawGloriosa(PlantClawGloriosa *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Zombie::GetSizeType(param_1);
  if ((iVar3 == 0) && (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar2 = CanBeTarget(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::CanBesuckedByClawGloriosa(Zombie*) */

void __thiscall
PlantClawGloriosa::CanBesuckedByClawGloriosa(PlantClawGloriosa *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Zombie::GetSizeType(param_1);
  if (((iVar3 == 0) || (iVar3 = Zombie::GetSizeType(param_1), iVar3 == 1)) &&
     (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar2 = CanBeTarget(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantClawGloriosa::PlantClawGloriosa() */

void __thiscall PlantClawGloriosa::PlantClawGloriosa(PlantClawGloriosa *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06728860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  DVec3::DVec3((DVec3 *)(this + 0x70));
  return;
}


/* PlantClawGloriosa::StaticNew() */

PlantClawGloriosa * PlantClawGloriosa::StaticNew(void)

{
  PlantClawGloriosa *this;
  
  this = ::operator_new(0x80);
  PlantClawGloriosa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::setState(unsigned int) */

void __thiscall PlantClawGloriosa::setState(PlantClawGloriosa *this,uint param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  PlantAnimRig_ClawGloriosa *pPVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xc) {
    pPVar5 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c();
    PlantAnimRig_ClawGloriosa::PlayShieldAnim(pPVar5);
  }
  else if (param_1 == 0xd) {
    lVar4 = FUN_03b00abc();
    fVar8 = (float)PVZ_T();
    uVar6 = *(undefined8 *)(this + 0x10);
    fVar8 = fVar8 + *(float *)(lVar4 + 0x2b8);
    *(float *)(this + 0x68) = fVar8;
    iVar2 = FUN_03aff3d0(uVar6);
    if (1 < iVar2) {
      fVar8 = fVar8 - *(float *)(lVar4 + 700);
      *(float *)(this + 0x68) = fVar8;
      iVar2 = FUN_03aff3d0(uVar6);
      if (2 < iVar2) {
        *(float *)(this + 0x68) = fVar8 - *(float *)(lVar4 + 0x2c0);
      }
    }
    pPVar5 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(uVar6);
    PlantAnimRig_ClawGloriosa::PlayRecoveryAnim(pPVar5);
  }
  else if (param_1 == 0xb) {
    this_00 = (RtWeakPtr *)(this + 0x30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar7 = PVZ_EOT();
    this[0x6e] = (PlantClawGloriosa)0x0;
    this[0x6c] = (PlantClawGloriosa)0x1;
    this[0x6d] = (PlantClawGloriosa)0x1;
    *(undefined4 *)(this + 0x68) = uVar7;
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar3 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantClawGloriosa::Initialize() */

void __thiscall PlantClawGloriosa::Initialize(PlantClawGloriosa *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* PlantClawGloriosa::CancelPlantfood() */

void __thiscall PlantClawGloriosa::CancelPlantfood(PlantClawGloriosa *this)

{
  setState(this,0xb);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::onApplyCondition(PlantConditions) */

void __thiscall PlantClawGloriosa::onApplyCondition(PlantClawGloriosa *this,int param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    this_00 = (RtWeakPtr *)(this + 0x30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      ResetZombie((Zombie *)this);
      setState(this,0xd);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantClawGloriosa::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantClawGloriosa::onAnimStoppedCallback(PlantClawGloriosa *this,string *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  Zombie *this_01;
  PlantAnimRig_ClawGloriosa *pPVar4;
  undefined4 uVar5;
  
  bVar1 = std::operator==(param_1,"attack_claw");
  if (bVar1) {
    this_00 = (RtWeakPtr *)(this + 0x30);
    this[0x6d] = (PlantClawGloriosa)0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar2 = RealObject::IsOnTeam(uVar3,1);
      if (cVar2 != '\0') {
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        Zombie::ResetTargetPostion(this_01);
        setState(this,0xc);
        return;
      }
    }
    this[0x6c] = (PlantClawGloriosa)0x1;
    setState(this,0xb);
    return;
  }
  bVar1 = std::operator==(param_1,"plantfood");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"plantfood_avatar"), !bVar1)) {
    bVar1 = std::operator==(param_1,"attack_box_shield");
    if (bVar1) {
      this[0x6d] = (PlantClawGloriosa)0x1;
      pPVar4 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_ClawGloriosa::PlayShieldAnim(pPVar4);
      return;
    }
    bVar1 = std::operator==(param_1,"attack_box_recovery");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"attack_punch_recovery");
      if (bVar1) {
        uVar5 = PVZ_T();
        this[0x6d] = (PlantClawGloriosa)0x1;
        *(undefined4 *)(this + 0x68) = uVar5;
      }
      return;
    }
    this[0x6d] = (PlantClawGloriosa)0x1;
    pPVar4 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_ClawGloriosa::PlayRecoveryAnim(pPVar4);
    return;
  }
  setState(this,0xb);
  return;
}


/* PlantClawGloriosa::ApplyPlantfood() */

void __thiscall PlantClawGloriosa::ApplyPlantfood(PlantClawGloriosa *this)

{
  PlantAnimRig_ClawGloriosa *this_00;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,5);
  this_00 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_ClawGloriosa::PlayPlantFood(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::FindTargetAndClaw() */

void __thiscall PlantClawGloriosa::FindTargetAndClaw(PlantClawGloriosa *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  GridItem *pGVar6;
  float *pfVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PlantAnimRig_ClawGloriosa *this_03;
  RtObject *this_04;
  float fVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  bVar1 = false;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar4,auStack_30,0xffffffff,0xffffffff);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar2) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      this_04 = (RtObject *)*puVar5;
      this_01 = Sexy::RtObject::Cast<Zombie>(this_04);
      pGVar6 = Sexy::RtObject::Cast<GridItem>(this_04);
      if (this_01 != (Zombie *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar3 = CanBeTarget(this,aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        if (cVar3 != '\0') {
          cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
          if (cVar3 == '\0') {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_01);
            fVar8 = *pfVar7;
            this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this_02);
            if (*pfVar7 <= fVar8) goto LAB_03b013c0;
          }
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        }
      }
LAB_03b013c0:
      if ((pGVar6 != (GridItem *)0x0) &&
         (cVar3 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar3 != '\0')) {
        bVar1 = true;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    } while (bVar2);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (((bVar2) || (bVar1)) && (this[0x6c] != (PlantClawGloriosa)0x0)) {
    this[0x6c] = (PlantClawGloriosa)0x0;
    this_03 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(*(undefined8 *)(this + 0x10));
    std::string::string((string *)aRStack_40,"attack_claw");
    std::string::string((string *)aRStack_38,"onAnimStoppedCallback");
    PlantAnimRig_ClawGloriosa::PlayAttackAnim(this_03,(string *)aRStack_40,(string *)aRStack_38);
    std::string::~string((string *)aRStack_38);
    nop();
    std::string::~string((string *)aRStack_40);
    nop();
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::BoxTargetZombies() */

void __thiscall PlantClawGloriosa::BoxTargetZombies(PlantClawGloriosa *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  Zombie *pZVar4;
  RtWeakPtr *pRVar5;
  ResourceInfo *pRVar6;
  GridItem *pGVar7;
  RealObject *this_01;
  undefined8 local_78;
  undefined8 local_70;
  string asStack_68 [96];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_68,"Play_Bonk");
  RealObject::PlayPositionalSound(this_01,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    pRVar5 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
    if ((pRVar6 != (ResourceInfo *)0x0) &&
       (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)pRVar6), pZVar4 != (Zombie *)0x0)) {
      FUN_03aff3ec(*(undefined8 *)(lVar3 + 0x70),1);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    pRVar5 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
    if (((pRVar6 != (ResourceInfo *)0x0) &&
        (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)pRVar6), pGVar7 != (GridItem *)0x0)) &&
       (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(), cVar2 != '\0')) {
      FUN_03aff3ec(*(undefined8 *)(lVar3 + 0x70),1);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::PunchTargetZombies() */

void __thiscall PlantClawGloriosa::PunchTargetZombies(PlantClawGloriosa *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr *pRVar5;
  ResourceInfo *pRVar6;
  Zombie *this_01;
  undefined8 *puVar7;
  ZombieTosserSubSystem *pZVar8;
  GridItem *pGVar9;
  RealObject *this_02;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_68,"Play_Plant_BonkChoy_Impact_Final");
  RealObject::PlayPositionalSound(this_02,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar1) {
    pRVar5 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
    if ((pRVar6 != (ResourceInfo *)0x0) &&
       (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)pRVar6), this_01 != (Zombie *)0x0)) {
      FUN_03aff3ec(*(undefined8 *)(lVar4 + 0x70),2);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      (**(code **)(*(long *)this_01 + 0x110))(this_01,asStack_68);
      cVar2 = CanBesuckedByClawGloriosa(this,this_01);
      if (cVar2 != '\0') {
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_01);
        local_c0 = *puVar7;
        local_b8 = *(undefined4 *)(puVar7 + 1);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_c0 = CONCAT44(local_c0._4_4_,(float)(iVar3 << 1) + (float)local_c0);
        pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x41a00000,0x3f800000,pZVar8,this_01,
                   (__normal_iterator *)&local_c0,aRStack_b0,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
      }
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
  }
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1) {
    pRVar5 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
    if (((pRVar6 != (ResourceInfo *)0x0) &&
        (pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)pRVar6), pGVar9 != (GridItem *)0x0)) &&
       (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(), cVar2 != '\0')) {
      FUN_03aff3ec(*(undefined8 *)(lVar4 + 0x70),2);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      (**(code **)(*(long *)pGVar9 + 0x110))(pGVar9,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::PlantFoodPunchTargets() */

void __thiscall PlantClawGloriosa::PlantFoodPunchTargets(PlantClawGloriosa *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  GridItem *pGVar8;
  ZombieTosserSubSystem *pZVar9;
  RealObject *this_01;
  RtObject *this_02;
  float fVar10;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_68,"Play_Plant_BonkChoy_Impact_Final");
  RealObject::PlayPositionalSound(this_01,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  uVar3 = operator|(2,4);
  Sexy::Insets::Insets
            ((Insets *)asStack_68,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar3,asStack_68);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
    this_02 = (RtObject *)*puVar7;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
    pGVar8 = Sexy::RtObject::Cast<GridItem>(this_02);
    cVar2 = RealObject::IsOnTeam(this_02,1);
    if (cVar2 == '\0') {
      if (this_00 == (Zombie *)0x0) {
LAB_03b01b8c:
        if ((pGVar8 == (GridItem *)0x0) ||
           (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 == '\0'))
        goto LAB_03b01b34;
        FUN_03aff3ec(*(undefined8 *)(lVar5 + 0x70),3);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,asStack_68);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)&local_d8);
        cVar2 = CanBeTarget(this,asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d8);
        if (cVar2 == '\0') goto LAB_03b01b8c;
        cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x3f0))(this_00), cVar2 != '\0')) {
          iVar4 = Zombie::GetFacing(this_00);
          if (iVar4 == 1) {
            iVar4 = PlantFramework::Rand((PlantFramework *)this,300);
            fVar10 = -500.0;
          }
          else {
            iVar4 = PlantFramework::Rand((PlantFramework *)this,300);
            fVar10 = 1000.0;
          }
          EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,fVar10,(float)iVar4,0.0);
          Zombie::FlickOff(this_00,(SexyVector3 *)asStack_68);
          goto LAB_03b01b34;
        }
        fVar10 = (float)FUN_03aff3e0(*(undefined4 *)(this_00 + 0x360));
        if (fVar10 != 0.2) {
          FUN_03aff3d8(0x3e4ccccd,this_00 + 0x360);
          Zombie::ResetTargetPostion(this_00);
        }
        Plant::GetProps();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
        FUN_03aff3ec(*(undefined8 *)(lVar6 + 0x70),3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68)
        ;
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
           (cVar2 = CanBesuckedByClawGloriosa(this,this_00), cVar2 != '\0')) {
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_d8 = *puVar7;
          local_d0 = *(undefined4 *)(puVar7 + 1);
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_d8 = CONCAT44(local_d8._4_4_,
                              (float)local_d8 + *(float *)(lVar5 + 0x2ec) * (float)iVar4);
          pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x41a00000,0x3f800000,pZVar9,this_00,
                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_d8,aRStack_b0,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
      }
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
LAB_03b01b34:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantClawGloriosa::zombieIsBlacklisted(PlantClawGloriosa *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  uVar3 = FUN_03b00744(*(undefined8 *)(lVar2 + 0x300));
  uVar4 = FUN_03b00794(*(undefined8 *)(lVar2 + 0x308));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_03b00794(*(undefined8 *)(lVar2 + 0x308));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::ClawTargetZombie() */

void __thiscall PlantClawGloriosa::ClawTargetZombie(PlantClawGloriosa *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  long *plVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  float *pfVar9;
  undefined8 uVar10;
  Zombie *pZVar11;
  long lVar12;
  SexyVector3 *pSVar13;
  RealObject *pRVar14;
  float fVar15;
  Zombie *pZVar16;
  float fVar17;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  (**(code **)(*(long *)this + 0x2b8))(auStack_90,this,0);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,4,auStack_90,0xffffffff,0xffffffff);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    cVar2 = CanBeClawedByClawGloriosa(this,(Zombie *)pRVar5);
    if (cVar2 != '\0') {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar2 = zombieIsBlacklisted(this,(Zombie *)pRVar5);
      if (cVar2 == '\0') {
        this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x30);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aDStack_68,*pfVar9 + *(float *)(lVar4 + 0x2d4),
                   pfVar9[1] + *(float *)(lVar4 + 0x2d8),pfVar9[2]);
        pRVar14 = *(RealObject **)(this + 0x10);
        std::string::string((string *)&local_98,"Play_Plant_Pokra_Attack_01_Start");
        RealObject::PlayPositionalSound(pRVar14,(string *)&local_98,0.0);
        std::string::~string((string *)&local_98);
        nop();
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,this_00);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_98);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pZVar16 = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar16,0,uVar10,0x18,1);
        pZVar11 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
        ;
        Zombie::SetTargetPosition(pZVar11,(SexyVector3 *)aDStack_68);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        FUN_03aff3d8(*(undefined4 *)(lVar4 + 0x2dc),lVar12 + 0x360);
        pRVar14 = (RealObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
        ;
        RealObject::JoinTeam(pRVar14,1);
        fVar17 = *(float *)(lVar4 + 0x2c4);
        iVar3 = FUN_03aff3d0(*(undefined8 *)(this + 0x10));
        if ((1 < iVar3) && (fVar17 = fVar17 + *(float *)(lVar4 + 0x2c8), iVar3 != 2)) {
          fVar17 = fVar17 + *(float *)(lVar4 + 0x2cc);
        }
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
        fVar15 = (float)CalcZombieDPS(this,(Zombie *)pRVar5);
        pZVar11 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
        ;
        Zombie::SetHitpoints(pZVar11,fVar15 * fVar17);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        (**(code **)(*plVar6 + 0x298))((ulong)pZVar16 & 0xffffffff);
        pSVar13 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(this + 0x10));
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x70),pSVar13);
        goto LAB_03b01f38;
      }
    }
    FUN_03aff3ec(*(undefined8 *)(lVar4 + 0x70),0);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar6 + 0x110))(plVar6,aDStack_68);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_98);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
      if ((pGVar8 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(), cVar2 != '\0')) {
        FUN_03aff3ec(*(undefined8 *)(lVar4 + 0x70),0);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
  }
LAB_03b01f38:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantClawGloriosa::~PlantClawGloriosa() */

void __thiscall PlantClawGloriosa::~PlantClawGloriosa(PlantClawGloriosa *this)

{
  *(undefined ***)this = &PTR_GetClass_06728860;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x50));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantClawGloriosa::~PlantClawGloriosa() */

void __thiscall PlantClawGloriosa::~PlantClawGloriosa(PlantClawGloriosa *this)

{
  ~PlantClawGloriosa(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::FindTargetsAndBox() */

void __thiscall PlantClawGloriosa::FindTargetsAndBox(PlantClawGloriosa *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *pZVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  long lVar7;
  PlantAnimRig_ClawGloriosa *this_01;
  char *__s;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,1);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,auStack_30,0xffffffff,0xffffffff);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            (this_00);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if (pZVar4 != (Zombie *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar2 = CanBeTarget(this,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back(this_00,(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
    if ((pGVar6 != (GridItem *)0x0) &&
       (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar2 != '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back(this_00,(RtWeakPtr *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar7 = FUN_03aff3fc(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (lVar7 != 0) {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xc) {
      if (this[0x6d] == (PlantClawGloriosa)0x0) goto LAB_03b02a28;
      this[0x6d] = (PlantClawGloriosa)0x0;
      this_01 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c();
      __s = "attack_box_shield";
    }
    else {
      if ((*(int *)(*(long *)(this + 0x10) + 200) != 0xd) || (this[0x6d] == (PlantClawGloriosa)0x0))
      goto LAB_03b02a28;
      this[0x6d] = (PlantClawGloriosa)0x0;
      if (this[0x6e] == (PlantClawGloriosa)0x0) {
        this_01 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c();
        __s = "attack_box_recovery";
      }
      else {
        this[0x6e] = (PlantClawGloriosa)0x0;
        this_01 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c();
        __s = "attack_punch_recovery";
      }
    }
    std::string::string((string *)aRStack_40,__s);
    std::string::string((string *)aRStack_38,"onAnimStoppedCallback");
    PlantAnimRig_ClawGloriosa::PlayAttackAnim(this_01,(string *)aRStack_40,(string *)aRStack_38);
    std::string::~string((string *)aRStack_38);
    nop();
    std::string::~string((string *)aRStack_40);
    nop();
  }
LAB_03b02a28:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::UpdateActions() */

void __thiscall PlantClawGloriosa::UpdateActions(PlantClawGloriosa *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0xc) {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x30);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar1 == '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar5 + 0x330))();
      if (cVar1 == '\0') {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        if (((*pfVar6 != *(float *)(this + 0x70)) || (pfVar6[1] != *(float *)(this + 0x74))) &&
           (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00), bVar2)) {
          Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
          ResetZombie((Zombie *)this);
          setState(this,0xd);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        }
        goto LAB_03b02b44;
      }
    }
    this[0x6d] = (PlantClawGloriosa)0x1;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar4 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
    if ((fVar7 < *(float *)(lVar4 + 0x2d0)) &&
       (iVar3 = FUN_03aff3c8(*(undefined4 *)(*(long *)(this + 0x10) + 0x50)), 4 < iVar3)) {
      this[0x6e] = (PlantClawGloriosa)0x1;
    }
    setState(this,0xd);
  }
  else {
    if (iVar3 != 0xd) {
      if (iVar3 == 0xb) {
        FindTargetAndClaw(this);
      }
      goto LAB_03b02b00;
    }
    fVar9 = *(float *)(this + 0x68);
    fVar7 = (float)PVZ_T();
    if (fVar9 < fVar7) {
      uVar8 = PVZ_EOT();
      this[0x6c] = (PlantClawGloriosa)0x1;
      *(undefined4 *)(this + 0x68) = uVar8;
      setState(this,0xb);
      goto LAB_03b02b00;
    }
LAB_03b02b44:
    FindTargetsAndBox(this);
  }
LAB_03b02b00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantClawGloriosa::PlantFoodSuckTargets() */

void __thiscall PlantClawGloriosa::PlantFoodSuckTargets(PlantClawGloriosa *this)

{
  RtWeakPtr *this_00;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_01;
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  Zombie *this_02;
  float *pfVar6;
  long *plVar7;
  RealObject *this_03;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03b00abc(*(undefined8 *)(this + 0x10));
  this_03 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_20,"Play_Plant_DarkAges_FumeShroom_PF_Attack");
  RealObject::PlayPositionalSound(this_03,asStack_20,0.0);
  std::string::~string(asStack_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(asStack_20,2,aIStack_30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    ResetZombie((Zombie *)this);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar7 + 0x298))(*(undefined4 *)(lVar3 + 0x2e8));
    this[0x6c] = (PlantClawGloriosa)0x1;
    this[0x6d] = (PlantClawGloriosa)0x1;
  }
  this_01 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0x50);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            (this_01);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back(this_01,(RtWeakPtr *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    uVar4 = FUN_03aff3fc(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
    if (*(float *)(lVar3 + 0x2f8) <= (float)uVar4) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_01);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
    cVar2 = CanBeTarget(this,aIStack_30);
    if ((cVar2 == '\0') || (cVar2 = CanBesuckedByClawGloriosa(this,this_02), cVar2 == '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      EATextSquish::Vec3::Vec3((Vec3 *)aIStack_30,*(float *)(lVar3 + 0x2e0) + *pfVar6,pfVar6[1],0.0)
      ;
      Zombie::SetTargetPosition(this_02,(SexyVector3 *)aIStack_30);
      FUN_03aff3d8(*(undefined4 *)(lVar3 + 0x2e4),this_02 + 0x360);
      (**(code **)(*(long *)this_02 + 0x298))(*(undefined4 *)(lVar3 + 0x2e8),this_02);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantClawGloriosa::OnAnimCommand(std::string const&, std::string const&) */

undefined8 __thiscall
PlantClawGloriosa::OnAnimCommand(PlantClawGloriosa *this,string *param_1,string *param_2)

{
  bool bVar1;
  PlantAnimRig_ClawGloriosa *this_00;
  
  bVar1 = std::operator==(param_1,"use_special");
  if (bVar1) {
    bVar1 = std::operator==(param_2,"attack_claw");
    if (bVar1) {
      ClawTargetZombie(this);
      return 1;
    }
    bVar1 = std::operator==(param_2,"attack_box");
    if (bVar1) {
      BoxTargetZombies(this);
    }
    else {
      bVar1 = std::operator==(param_2,"attack_punch");
      if (bVar1) {
        PunchTargetZombies(this);
      }
      else {
        bVar1 = std::operator==(param_2,"plantfood_suck_start");
        if (bVar1) {
          PlantFoodSuckTargets(this);
          this_00 = (PlantAnimRig_ClawGloriosa *)FUN_03b00b9c(*(undefined8 *)(this + 0x10));
          PlantAnimRig_ClawGloriosa::PlaySuckEffect(this_00);
        }
        else {
          bVar1 = std::operator==(param_2,"plantfood_punch");
          if (bVar1) {
            PlantFoodPunchTargets(this);
          }
        }
      }
    }
  }
  return 1;
}

