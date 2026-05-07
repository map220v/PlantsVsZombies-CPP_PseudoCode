// Class: PlantImitater


/* PlantImitater::GetImitatedPlant() const */

RtWeakPtr<Sexy::SoundResource> * PlantImitater::GetImitatedPlant(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x28));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImitater::StaticClassInit() */

void PlantImitater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantImitater");
    (*pcVar2)(plVar1,asStack_10,FUN_0403912c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImitater::StaticGetClass() */

long * PlantImitater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantImitater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImitater::GetClass() const */

long * PlantImitater::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantImitater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImitater::~PlantImitater() */

void __thiscall PlantImitater::~PlantImitater(PlantImitater *this)

{
  *(undefined ***)this = &PTR_GetClass_067bb3c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantImitater::~PlantImitater() */

void __thiscall PlantImitater::~PlantImitater(PlantImitater *this)

{
  ~PlantImitater(this);
  AK::FreeHook(this);
  return;
}


/* PlantImitater::SetImitatedPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall PlantImitater::SetImitatedPlant(PlantImitater *this,RtWeakPtr *param_2)

{
  PlantType *pPVar1;
  long lVar2;
  long lVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),param_2);
  lVar3 = *(long *)(this + 0x10);
  pPVar1 = (PlantType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  lVar2 = PlantType::GetProps(pPVar1);
  FUN_040381b0(lVar3 + 0x230,*(undefined4 *)(lVar2 + 0xbc));
  lVar3 = *(long *)(this + 0x10);
  pPVar1 = (PlantType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  lVar2 = PlantType::GetProps(pPVar1);
  FUN_040381b8(lVar3 + 0x234,*(undefined4 *)(lVar2 + 0xbc));
  return;
}


/* PlantImitater::PlantImitater() */

void __thiscall PlantImitater::PlantImitater(PlantImitater *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bb3c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x30] = (PlantImitater)0x0;
  return;
}


/* PlantImitater::StaticNew() */

PlantImitater * PlantImitater::StaticNew(void)

{
  PlantImitater *this;
  
  this = ::operator_new(0x38);
  PlantImitater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImitater::SyncPlantBoost(PlantBoostType, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
PlantImitater::SyncPlantBoost(PlantImitater *this,int param_2,RtWeakPtrBase *param_3)

{
  undefined4 uVar1;
  PlantNameMapperServerID *pPVar2;
  undefined8 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0x11) {
    pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    uVar1 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar4 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar3,uVar1,0x11,0);
    FUN_040381a4(*(long *)(this + 0x10) + 0x3d0,(int)fVar4 == 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImitater::swapForImitatedPlant() */

void __thiscall PlantImitater::swapForImitatedPlant(PlantImitater *this)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  UINewPVPTopZombieQueue *this_01;
  PVPManager *this_02;
  string *psVar6;
  long lVar7;
  Plant *pPVar8;
  Board *pBVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x28);
  this[0x30] = (PlantImitater)0x1;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar3) {
    FUN_040381b0(*(long *)(this + 0x10) + 0x230,4);
    cVar4 = RiftUtils::IsRiftTimedLevel();
    if ((cVar4 == '\0') && (cVar4 = CustomLevelUtils::IsCustomLevel(), cVar4 == '\0')) {
      iVar5 = *(int *)(*(long *)(this + 0x10) + 0x114);
      iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar8 = (Plant *)Board::AddPlant(pBVar9,iVar5,iVar1,(string *)(lVar7 + 8),-1,false,false,
                                        false,false);
      lVar7 = FUN_04038814(*(undefined8 *)(this + 0x10));
      Plant::FadeIn(pPVar8,*(float *)(lVar7 + 0x2b8));
      fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      if (0.0 < fVar10) {
        fVar11 = (float)Plant::GetMaxHealth(pPVar8);
        Plant::SetMaxHealth(pPVar8,fVar11 * (fVar10 + 1.0));
        fVar11 = (float)FUN_040381ac(*(undefined4 *)(pPVar8 + 0xd8));
        Plant::SetHealth(pPVar8,fVar11 * (fVar10 + 1.0));
        fVar11 = (float)PVZ_EOT();
        Plant::SetAttackUpValue(pPVar8,true,fVar11,fVar10);
      }
    }
    else {
      iVar5 = 0;
      this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      if (this_01 != (UINewPVPTopZombieQueue *)0x0) {
        for (; cVar4 = FUN_040381cc(this_01[0x199]), iVar5 < cVar4; iVar5 = iVar5 + 1) {
          UINewPVPTopZombieQueue::gettItem(this_01,iVar5);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
          if ((bVar3) &&
             (cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar4 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            SeedPacket::GetPlantType();
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
            if (bVar3) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              SeedPacket::GetPlantType();
              cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              if (cVar4 != '\0') {
                this_02 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                psVar6 = (string *)PVPManager::GetPVPMapDataList(this_02);
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                cVar4 = std::operator==(psVar6,(string *)(lVar7 + 8));
                if (cVar4 != '\0') {
                  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
                  iVar5 = FUN_040381c8(*(undefined4 *)(lVar7 + 0x1cc));
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
                  goto LAB_04038a54;
                }
              }
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
      }
      iVar5 = 1;
LAB_04038a54:
      iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
      iVar2 = *(int *)(*(long *)(this + 0x10) + 0x110);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pPVar8 = (Plant *)Board::AddPlant(pBVar9,iVar1,iVar2,(string *)(lVar7 + 8),iVar5,false,false,
                                        false,false);
      lVar7 = FUN_04038814(*(undefined8 *)(this + 0x10));
      Plant::FadeIn(pPVar8,*(float *)(lVar7 + 0x2b8));
      fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      if (0.0 < fVar10) {
        fVar11 = (float)Plant::GetMaxHealth(pPVar8);
        Plant::SetMaxHealth(pPVar8,fVar11 * (fVar10 + 1.0));
        fVar11 = (float)FUN_040381ac(*(undefined4 *)(pPVar8 + 0xd8));
        Plant::SetHealth(pPVar8,fVar11 * (fVar10 + 1.0));
        fVar11 = (float)PVZ_EOT();
        Plant::SetAttackUpValue(pPVar8,true,fVar11,fVar10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImitater::OnAnimCommand(std::string const&, std::string const&) */

bool PlantImitater::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    swapForImitatedPlant((PlantImitater *)param_1);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImitater::Initialize() */

void __thiscall PlantImitater::Initialize(PlantImitater *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantImitater)0x0;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Imitater_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

