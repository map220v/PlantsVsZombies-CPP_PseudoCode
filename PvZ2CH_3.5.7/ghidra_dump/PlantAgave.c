// Class: PlantAgave


/* PlantAgave::PlantAgave() */

void __thiscall PlantAgave::PlantAgave(PlantAgave *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067df2a0;
  return;
}


/* PlantAgave::StaticNew() */

PlantAgave * PlantAgave::StaticNew(void)

{
  PlantAgave *this;
  
  this = ::operator_new(0x38);
  PlantAgave(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::StaticClassInit() */

void PlantAgave::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAgave");
    (*pcVar2)(plVar1,asStack_10,FUN_040ed140,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAgave::StaticGetClass() */

long * PlantAgave::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAgave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAgave::GetClass() const */

long * PlantAgave::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAgave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAgave::~PlantAgave() */

void __thiscall PlantAgave::~PlantAgave(PlantAgave *this)

{
  *(undefined ***)this = &PTR_GetClass_067df2a0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAgave::~PlantAgave() */

void __thiscall PlantAgave::~PlantAgave(PlantAgave *this)

{
  ~PlantAgave(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::DoSpecial(int) */

void PlantAgave::DoSpecial(int param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  Board *pBVar6;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*plVar2 + 0x180))();
  if (cVar1 != '\0') {
    lVar3 = plVar2[2];
    uVar5 = *(undefined4 *)(lVar3 + 0x1c);
    pBVar6._0_4_ = (Board *)FUN_040ecf54(*(undefined4 *)(lVar3 + 0x18),uVar5,
                                         *(undefined4 *)(lVar3 + 0x20));
    FUN_040ecf00(aRStack_10,plVar2[2]);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar3 = FUN_040ecf30(*(undefined8 *)(lVar3 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::AddProjectile(pBVar6._0_4_,uVar5,0,uVar4,aRStack_10,plVar2[2],0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Plant::GetAvatarEnable((Plant *)plVar2[2]);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    else {
      uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      lVar3 = Board::AddProjectile(pBVar6._0_4_,uVar5,0,uVar4,aRStack_10,plVar2[2],0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::SexyMath::DegToRad(15.0);
      FUN_040eced4(lVar3 + 0xc4);
      uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      lVar3 = Board::AddProjectile(pBVar6._0_4_,uVar5,0,uVar4,aRStack_10,plVar2[2],0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::SexyMath::DegToRad(-15.0);
      FUN_040eced4(lVar3 + 0xc4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x040ed720 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantAgave::updateChargingRate() */

void __thiscall PlantAgave::updateChargingRate(PlantAgave *this)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar4 = *(undefined4 *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  auVar3 = PVZ_T();
  local_10 = 0x3f800000;
  local_c = 0x40000000;
  fVar2 = CurveLerp<float>(auVar3,uVar4,auVar3._0_4_,&local_10,&local_c,1);
  lVar1 = ___stack_chk_guard;
  *(float *)(this + 0x34) = fVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::FindTarget(PlantWeapon) */

void PlantAgave::FindTarget
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,undefined4 param_3)

{
  int iVar1;
  ResourceInfo *pRVar2;
  UnchartedModePlantNumData aUStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
  (**(code **)(*param_2 + 0xe0))
            (aRStack_10,param_2,*(undefined4 *)(param_2[2] + 0x110),param_3,0,aUStack_18);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (pRVar2 == (ResourceInfo *)0x0) {
LAB_040ed890:
    (**(code **)(*param_2 + 0xf8))(aRStack_10,param_2,param_3);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (pRVar2 != (ResourceInfo *)0x0) {
      iVar1 = FUN_040ecef8(*(undefined4 *)(pRVar2 + 0x130));
      if ((-1 < iVar1) && (iVar1 - *(int *)(param_2[2] + 0x114) < 3)) goto LAB_040ed91c;
    }
  }
  else {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)pRVar2);
    if (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
      if ((iVar1 < 0) || (2 < iVar1 - *(int *)(param_2[2] + 0x114))) goto LAB_040ed890;
LAB_040ed91c:
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_040ed8f0;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
LAB_040ed8f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::setState(unsigned int) */

void __thiscall PlantAgave::setState(PlantAgave *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  float fVar4;
  float local_80;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_040edb40_default;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  switch(param_1) {
  case 10:
    local_80 = (float)PVZ_T();
    FUN_040ecf00((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,*(undefined8 *)(this + 0x10));
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    lVar1 = FUN_040ecf30(*(undefined8 *)(lVar1 + 0x70),0);
    fVar4 = *(float *)(lVar1 + 0x20);
    goto LAB_040edc54;
  case 0xb:
    *(undefined4 *)(this + 0x34) = 0x3f800000;
    plVar2 = (long *)FUN_040eda98();
    (**(code **)(*plVar2 + 0x118))();
    break;
  case 0xc:
    plVar2 = (long *)FUN_040eda98();
    pcVar3 = *(code **)(*plVar2 + 0x260);
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
    std::string::string(asStack_58,"Play_Plant_Agave_attack");
    goto LAB_040edc04;
  case 0xd:
    local_80 = (float)PVZ_T();
    FUN_040ecf00((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58,*(undefined8 *)(this + 0x10));
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    lVar1 = FUN_040ecf30(*(undefined8 *)(lVar1 + 0x70),0);
    fVar4 = *(float *)(lVar1 + 0x24);
LAB_040edc54:
    *(float *)(this + 0x28) = local_80 + fVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    break;
  case 0xe:
    plVar2 = (long *)FUN_040eda98();
    pcVar3 = *(code **)(*plVar2 + 600);
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
    fVar4 = (float)PVZ_T();
    this_00 = *(RealObject **)(this + 0x10);
    *(float *)(this + 0x2c) = fVar4 + *(float *)(this + 0x30);
    std::string::string(asStack_58,"Play_Plant_Agave_special");
LAB_040edc04:
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0xf:
    plVar2 = (long *)FUN_040eda98();
    pcVar3 = *(code **)(*plVar2 + 0x268);
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
  }
switchD_040edb40_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAgave::Initialize() */

void __thiscall PlantAgave::Initialize(PlantAgave *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,10);
  lVar2 = FUN_040ed9b8(*(undefined8 *)(this + 0x10));
  uVar3 = *(undefined4 *)(*(long *)(this + 0x10) + 0x50);
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  iVar1 = FUN_040ecef4(uVar3);
  if (1 < iVar1) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar2 + 0x2c0);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x2c) = uVar3;
    return;
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar2 + 700);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::UpdateActions() */

void __thiscall PlantAgave::UpdateActions(PlantAgave *this)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    fVar6 = *(float *)(this + 0x28);
    fVar5 = (float)PVZ_T();
    if (fVar6 < fVar5) {
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar4;
      cVar1 = (**(code **)(*(long *)this + 0x180))(this);
      if (cVar1 == '\0') {
        setState(this,0xb);
      }
    }
    break;
  case 0xb:
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      FindTarget(aRStack_10,this);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (pRVar3 == (ResourceInfo *)0x0) {
        iVar2 = FUN_040ecf24(*(undefined8 *)(this + 0x10));
        if (1 < iVar2) {
          setState(this,0xe);
        }
      }
      else {
        setState(this,0xc);
      }
    }
    break;
  case 0xd:
    fVar6 = *(float *)(this + 0x28);
    fVar5 = (float)PVZ_T();
    if (fVar6 < fVar5) {
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar4;
      setState(this,0xb);
    }
    break;
  case 0xe:
    updateChargingRate(this);
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      FindTarget(aRStack_10,this);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (pRVar3 != (ResourceInfo *)0x0) {
        uVar4 = PVZ_EOT();
        *(undefined4 *)(this + 0x2c) = uVar4;
        setState(this,0xf);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantAgave::onAnimStoppedCallback(PlantAgave *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack01");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"attack02");
    if (bVar1) {
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_40,"idle02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      goto LAB_040ee0d4;
    }
    bVar1 = std::operator==(param_1,"attack03");
    if (!bVar1) goto LAB_040ee0d4;
  }
  setState(this,0xd);
LAB_040ee0d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAgave::CancelPlantfood() */

void __thiscall PlantAgave::CancelPlantfood(PlantAgave *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::dealDamage(float, float&) */

void __thiscall PlantAgave::dealDamage(PlantAgave *this,float param_1,float *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  GridItem *this_00;
  Zombie *this_01;
  ResourceInfo *pRVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  RealObject *this_02;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  uVar9 = 0;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040ecf30(*(undefined8 *)(lVar4 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_60 = param_1 * local_60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(2,4);
  Sexy::Insets::Insets
            (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
             aIStack_90);
  uVar10 = local_80;
  lVar4 = FUN_040ecf40(local_80,local_78);
  if (lVar4 != 0) {
    do {
      FUN_040ecf4c(uVar10,uVar9);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aIStack_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
      puVar5 = (undefined8 *)FUN_040ecf4c(local_80,uVar9);
      this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
      puVar5 = (undefined8 *)FUN_040ecf4c(local_80,uVar9);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a0);
      if (cVar1 == '\0') {
LAB_040ee348:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
      }
      else {
        this_02 = *(RealObject **)(this + 0x10);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
        cVar1 = RealObject::IsOnOpposingTeam(this_02,(RealObject *)pRVar6);
        if ((cVar1 == '\0') ||
           ((this_00 != (GridItem *)0x0 &&
            (bVar2 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_00), bVar2))))
        goto LAB_040ee348;
        if (this_01 != (Zombie *)0x0) {
          cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01);
          if ((((cVar1 != '\0') ||
               (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_01), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_01), cVar1 != '\0')) goto LAB_040ee348;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aIStack_90,(RtWeakPtrBase *)aRStack_98);
          cVar1 = PlantBromelblade::isZombieArmorType((PlantBromelblade *)this,aIStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
          if (cVar1 != '\0') {
            lVar4 = FUN_040ed9b8(*(undefined8 *)(this + 0x10));
            local_60 = local_60 * *(float *)(lVar4 + 0x2b8);
          }
        }
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        (**(code **)(*plVar8 + 0x110))(plVar8,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
      }
      uVar10 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_040ecf40(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  *param_2 = local_60;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAgave::OnAnimCommand(std::string const&, std::string const&) */

void PlantAgave::OnAnimCommand(string *param_1,string *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  RtObject *this;
  AgaveSwordQi *this_00;
  RtName *__n;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_34;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  int local_18 [4];
  long local_8;
  
  cVar3 = '\x01';
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"use_action");
  if (bVar2) {
    cVar3 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar3 == '\0') {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 200);
      if ((uVar1 == 0xc) || ((0xb < uVar1 && (uVar1 - 0xe < 2)))) {
        local_34 = 0.0;
        dealDamage((PlantAgave *)param_1,*(float *)(param_1 + 0x34),&local_34);
        fVar9 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
        fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
        cVar3 = '\x01';
        if (fVar9 < fVar10) {
          __n = (RtName *)local_18;
          std::string::string(asStack_30,"AgaveSwordQiNormal");
          nop();
          bVar2 = *(int *)(*(long *)(param_1 + 0x10) + 200) == 0xf;
          if (bVar2) {
            std::string::append(asStack_30,"AgaveSwordQiAdvanced",(size_t)__n);
          }
          uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
          fVar9 = 20.0;
          Sexy::ToWString(asStack_30);
          Sexy::RtName::RtName((RtName *)local_18,awStack_20);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar6,0xc,(RtName *)local_18);
          Sexy::RtName::~RtName((RtName *)local_18);
          FUN_05476c50(awStack_20);
          BoardEntity::CalcGridPosition();
          iVar4 = BoardTransforms::GridToBoardSpaceX(local_18[0] + 3);
          iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          uVar11 = *(undefined4 *)(lVar7 + 4);
          lVar8 = *(long *)(gLawnApp + 0x9f0);
          if (*(char *)(lVar8 + 0x119) != '\0') {
            fVar9 = *(float *)(lVar7 + 8) + 20.0;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_28);
          this = (RtObject *)
                 Board::AddProjectile
                           ((Board *)(float)(iVar4 - iVar5 / 2),uVar11,fVar9,lVar8,
                            (RtName *)local_18,*(undefined8 *)(param_1 + 0x10),0);
          this_00 = Sexy::RtObject::Cast<AgaveSwordQi>(this);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          AgaveSwordQi::InitSwordQi(this_00,(uint)bVar2,5);
          fVar9 = (float)FUN_040ecee4(*(undefined4 *)(this_00 + 0x170),
                                      *(undefined4 *)(this_00 + 0x17c),
                                      *(undefined4 *)(this_00 + 0x180),
                                      *(undefined4 *)(this_00 + 0x184));
          if (fVar9 != 0.0) {
            local_34 = local_34 / fVar9;
          }
          FUN_040ecedc(local_34,this_00 + 0xd8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          std::string::~string(asStack_30);
        }
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0xa8))(param_1,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

