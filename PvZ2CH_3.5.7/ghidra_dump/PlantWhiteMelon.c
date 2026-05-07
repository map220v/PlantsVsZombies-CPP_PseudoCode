// Class: PlantWhiteMelon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::StaticClassInit() */

void PlantWhiteMelon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWhiteMelon");
    (*pcVar2)(plVar1,asStack_10,FUN_04231aec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWhiteMelon::StaticGetClass() */

long * PlantWhiteMelon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWhiteMelon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWhiteMelon::GetClass() const */

long * PlantWhiteMelon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWhiteMelon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWhiteMelon::PlantWhiteMelon() */

void __thiscall PlantWhiteMelon::PlantWhiteMelon(PlantWhiteMelon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x30) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_06811910;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0x3f000000;
  *(undefined4 *)(this + 0x2c) = 0x43200000;
  return;
}


/* PlantWhiteMelon::StaticNew() */

PlantWhiteMelon * PlantWhiteMelon::StaticNew(void)

{
  PlantWhiteMelon *this;
  
  this = ::operator_new(0x38);
  PlantWhiteMelon(this);
  return this;
}


/* PlantWhiteMelon::~PlantWhiteMelon() */

void __thiscall PlantWhiteMelon::~PlantWhiteMelon(PlantWhiteMelon *this)

{
  *(undefined ***)this = &PTR_GetClass_06811910;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWhiteMelon::~PlantWhiteMelon() */

void __thiscall PlantWhiteMelon::~PlantWhiteMelon(PlantWhiteMelon *this)

{
  ~PlantWhiteMelon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TriggerLv2Attack() */

void __thiscall PlantWhiteMelon::TriggerLv2Attack(PlantWhiteMelon *this)

{
  bool bVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04231448(*(undefined8 *)(this + 0x10));
  if (1 < iVar2) {
    fVar3 = (float)RandRangeFloat(0.0,1.0);
    FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    bVar1 = fVar3 < *(float *)(extraout_x0 + 0x2b8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TriggerLv4Attack() */

void __thiscall PlantWhiteMelon::TriggerLv4Attack(PlantWhiteMelon *this)

{
  bool bVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04231448(*(undefined8 *)(this + 0x10));
  if (3 < iVar2) {
    fVar3 = (float)RandRangeFloat(0.0,1.0);
    FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    bVar1 = fVar3 < *(float *)(extraout_x0 + 700);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TriggerSuperAttack() */

void __thiscall PlantWhiteMelon::TriggerSuperAttack(PlantWhiteMelon *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_04231450(*(undefined8 *)(this + 0x10));
  bVar1 = false;
  if (cVar2 != '\0') {
    fVar3 = (float)RandRangeFloat(0.0,1.0);
    FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    bVar1 = fVar3 < *(float *)(extraout_x0 + 0x2d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::UpdateAttackTick() */

void __thiscall PlantWhiteMelon::UpdateAttackTick(PlantWhiteMelon *this)

{
  long extraout_x0;
  float fVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  *(float *)(this + 0x28) = fVar1 + *(float *)(extraout_x0 + 0x2c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWhiteMelon::TriggerAttack() */

bool __thiscall PlantWhiteMelon::TriggerAttack(PlantWhiteMelon *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x28);
  fVar1 = (float)PVZ_T();
  return fVar2 <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::Initialize() */

void __thiscall PlantWhiteMelon::Initialize(PlantWhiteMelon *this)

{
  long lVar1;
  long extraout_x0;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 == 0)) {
    FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    *(undefined4 *)(extraout_x0 + 0x2b8) = 0x3f800000;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    FUN_04231424(aRStack_10,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    *(undefined4 *)(extraout_x0_00 + 700) = 0x3f800000;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::FindAttackTargetZombie(PlantTargetParams&) */

void PlantWhiteMelon::FindAttackTargetZombie(PlantTargetParams *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  float *pfVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined4 local_34;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  Insets aIStack_28 [16];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  local_34 = 0;
  Plant::GetProps();
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  lVar8 = FUN_04231478(*(undefined8 *)(pRVar7 + 0x70),0);
  pfVar9 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  fVar11 = pfVar9[1];
  iVar1 = *(int *)(lVar8 + 0x5c);
  fVar12 = *pfVar9;
  iVar2 = *(int *)(lVar8 + 0x58);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = *(int *)(lVar8 + 0x58);
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (aIStack_28,(int)fVar12 + iVar2,(int)fVar11 + iVar1,iVar5 - iVar3,
             iVar6 - *(int *)(lVar8 + 0x5c));
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110);
  pcVar10 = *(code **)(*(long *)param_1 + 0xe8);
  Sexy::Insets::Insets((Insets *)aRStack_18,aIStack_28);
  (*pcVar10)(param_1,uVar4,0,&local_34);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::UpdateActions() */

void __thiscall PlantWhiteMelon::UpdateActions(PlantWhiteMelon *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantAnimRig_WhiteMelon *pPVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  RtWeakPtr *this_00;
  code *pcVar8;
  UnchartedModePlantNumData aUStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  lVar7 = *(long *)(this + 0x10);
  iVar3 = *(int *)(lVar7 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 4) {
    this_00 = (RtWeakPtr *)aUStack_70;
    PlantFramework::FindTargetZombie(this_00,this,0);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      UpdateAttackTick(this);
      plVar5 = (long *)FUN_042328c0(*(undefined8 *)(this + 0x10));
      pcVar8 = *(code **)(*plVar5 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,(string *)aRStack_58);
      (*pcVar8)(plVar5,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else {
    if (iVar3 == 10) {
      cVar1 = TriggerAttack(this);
      if (cVar1 != '\0') {
        UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_70,1,1);
        FindAttackTargetZombie((PlantTargetParams *)this);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
        if (bVar2) {
          lVar7 = *(long *)(this + 0x10);
          *(undefined4 *)(lVar7 + 200) = 0xb;
          pPVar4 = (PlantAnimRig_WhiteMelon *)FUN_042328c0(lVar7);
          cVar1 = TriggerSuperAttack(this);
          if (cVar1 == '\0') {
            ToolPacketData::GetProps();
            Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
            std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,aRStack_60,aRStack_58);
            PlantAnimRig_WhiteMelon::PlayAttackHit(pPVar4,aRStack_50);
          }
          else {
            ToolPacketData::GetProps();
            Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
            std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      (aRStack_50,aRStack_60,aRStack_58);
            PlantAnimRig_WhiteMelon::PlaySuperAttackHit(pPVar4,aRStack_50);
          }
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string((string *)aRStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
        else {
          PlantFramework::FindTargetZombie(aRStack_58,this,0);
          cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
          if (cVar1 != '\0') {
            lVar7 = *(long *)(this + 0x10);
            *(undefined4 *)(lVar7 + 200) = 4;
            plVar5 = (long *)FUN_042328c0(lVar7);
            (**(code **)(*plVar5 + 0x118))();
          }
        }
      }
      goto LAB_04232924;
    }
    if (iVar3 != 1) goto LAB_04232924;
    iVar3 = FUN_04231448(lVar7);
    if (iVar3 < 4) {
      *(undefined4 *)(lVar7 + 200) = 4;
      plVar5 = (long *)FUN_042328c0(lVar7);
      (**(code **)(*plVar5 + 0x118))();
      goto LAB_04232924;
    }
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 != '\0') goto LAB_04232924;
    this_00 = aRStack_58;
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar6 = 2;
    if (cVar1 == '\0') {
      uVar6 = 1;
    }
    PlantFramework::FindTargetZombie(this_00,this,uVar6);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (((bVar2) &&
        (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 != '\0')) &&
       (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
      (**(code **)(*(long *)this + 0x220))(this);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
LAB_04232924:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::ApplyPlantfood() */

void __thiscall PlantWhiteMelon::ApplyPlantfood(PlantWhiteMelon *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 5;
  plVar1 = (long *)FUN_042328c0(lVar2);
  pcVar3 = *(code **)(*plVar1 + 600);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantWhiteMelon::onAnimStoppedCallback(PlantWhiteMelon *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  PlantAnimRig_WhiteMelon *pPVar5;
  long lVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::onAnimStoppedCallback, %s",uVar3);
  bVar1 = std::operator==(param_1,"attack_ready");
  if (bVar1) {
    pPVar5 = (PlantAnimRig_WhiteMelon *)FUN_042328c0(*(undefined8 *)(this + 0x10));
    PlantAnimRig_WhiteMelon::PlayAttackStorage(pPVar5);
    goto LAB_04232e30;
  }
  bVar1 = std::operator==(param_1,"attack_hit");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"attack_hit_super"), !bVar1)) {
    bVar1 = std::operator==(param_1,"plantfood1");
    if (bVar1) {
      pPVar5 = (PlantAnimRig_WhiteMelon *)FUN_042328c0(*(undefined8 *)(this + 0x10));
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 == '\0') {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        PlantAnimRig_WhiteMelon::PlayAttackHit(pPVar5,aRStack_50);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        PlantAnimRig_WhiteMelon::PlayAvatarAttackHit(pPVar5,aRStack_50);
      }
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      PlantAnimRig::SetState((PlantAnimRig *)pPVar5,0xf);
      goto LAB_04232e30;
    }
    bVar1 = std::operator==(param_1,"plantfood2");
    if (!bVar1) goto LAB_04232e30;
  }
  lVar6 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar6 + 200) = 4;
  plVar4 = (long *)FUN_042328c0(lVar6);
  (**(code **)(*plVar4 + 0x118))();
LAB_04232e30:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TakePlantFoodAttack_Hit2(PlantWeapon) */

void PlantWhiteMelon::TakePlantFoodAttack_Hit2(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this;
  ZombieTosserSubSystem *pZVar6;
  Point *extraout_x1;
  RealObject *this_00;
  float fVar7;
  ZombieTosserSubSystem *pZVar9;
  undefined4 uVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  BoardTransforms aBStack_98 [8];
  int local_90;
  int local_8c;
  float local_88 [4];
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_78,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,aIStack_78);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
    if (bVar1) {
      nop();
      cVar2 = Zombie::CanBeLaunchedByPlants(this);
      if ((cVar2 != '\0') &&
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(param_1 + 0x10),(RealObject *)this),
         cVar2 != '\0')) {
        BoardEntity::CalcGridPosition();
        BoardTransforms::GridToBoardSpaceUnbounded(aBStack_98,extraout_x1);
        EATextSquish::Vec3::Vec3((Vec3 *)local_88,(float)local_90,(float)local_8c,0.0);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar7 = (float)RandRangeFloat((float)iVar3 * 0.5,(float)iVar4);
        local_88[0] = fVar7 + local_88[0];
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
        pZVar9._0_4_ = *(ZombieTosserSubSystem **)(param_1 + 0x2c);
        uVar8 = *(undefined4 *)(param_1 + 0x34);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  (pZVar9._0_4_,uVar8,pZVar6,this,(Vec3 *)local_88,aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  this_00 = *(RealObject **)(param_1 + 0x10);
  std::string::string((string *)local_88,"Play_Plant_Bloomerange_Impact");
  RealObject::PlayPositionalSound(this_00,(string *)local_88,0.0);
  std::string::~string((string *)local_88);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TakePlantFoodAttack_HitSuper(PlantWeapon) */

void PlantWhiteMelon::TakePlantFoodAttack_HitSuper(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this;
  ZombieTosserSubSystem *pZVar4;
  undefined8 uVar5;
  RealObject *this_00;
  ZombieTosserSubSystem *pZVar6;
  undefined8 local_88;
  undefined8 local_80;
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_78,*(int *)(*(long *)(param_1 + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,aIStack_78);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar3);
    if (bVar1) {
      nop();
      cVar2 = Zombie::CanBeLaunchedByPlants(this);
      if ((cVar2 != '\0') &&
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(param_1 + 0x10),(RealObject *)this),
         cVar2 != '\0')) {
        pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
                    /* WARNING: Load size is inaccurate */
        pZVar6._0_4_ = *(ZombieTosserSubSystem **)(param_1 + 0x2c);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie(pZVar6._0_4_,0x3f000000,pZVar4,this,uVar5,aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  this_00 = *(RealObject **)(param_1 + 0x10);
  std::string::string((string *)&local_80,"Play_Plant_Bloomerange_Impact");
  RealObject::PlayPositionalSound(this_00,(string *)&local_80,0.0);
  std::string::~string((string *)&local_80);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TakePlantFoodAttack_Hit1(PlantWeapon) */

void PlantWhiteMelon::TakePlantFoodAttack_Hit1(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this;
  ZombieTosserSubSystem *pZVar4;
  undefined8 uVar5;
  RealObject *this_00;
  ZombieTosserSubSystem *pZVar7;
  undefined4 uVar6;
  undefined8 local_88;
  undefined8 local_80;
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_78,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
             *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,aIStack_78);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar3);
    if (bVar1) {
      nop();
      cVar2 = Zombie::CanBeLaunchedByPlants(this);
      if ((cVar2 != '\0') &&
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(param_1 + 0x10),(RealObject *)this),
         cVar2 != '\0')) {
        pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
                    /* WARNING: Load size is inaccurate */
        pZVar7._0_4_ = *(ZombieTosserSubSystem **)(param_1 + 0x2c);
        uVar6 = *(undefined4 *)(param_1 + 0x34);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie(pZVar7._0_4_,uVar6,pZVar4,this,uVar5,aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  this_00 = *(RealObject **)(param_1 + 0x10);
  std::string::string((string *)&local_80,"Play_Plant_Bloomerange_Impact");
  RealObject::PlayPositionalSound(this_00,(string *)&local_80,0.0);
  std::string::~string((string *)&local_80);
  nop();
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,
             *(Plant **)(param_1 + 0x10));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TossZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantWhiteMelon::TossZombie(PlantWhiteMelon *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  Zombie *pZVar5;
  float *pfVar6;
  ProfileMgr *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  long lVar8;
  BoardTransforms *this_01;
  long extraout_x0;
  ZombieTosserSubSystem *pZVar9;
  ResourceInfo *pRVar10;
  long extraout_x0_00;
  long extraout_x0_01;
  long extraout_x0_02;
  Point *extraout_x1;
  Point *extraout_x1_00;
  Point *pPVar11;
  Point *extraout_x1_01;
  uint uVar12;
  float fVar13;
  ZombieTosserSubSystem *pZVar17;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  int local_d8 [2];
  int local_d0;
  int local_cc;
  float local_c8 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 != '\0') goto LAB_042336d0;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  cVar1 = (**(code **)(*plVar4 + 0x328))();
  if (cVar1 != '\0') goto LAB_042336d0;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 != '\0') goto LAB_042336d0;
  pZVar5 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  cVar1 = Zombie::IsFlickedOff(pZVar5);
  if (cVar1 != '\0') goto LAB_042336d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Zombie::GetCurrentTitleStatus();
  if (local_58 == '\0') {
    pZVar5 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = Zombie::IsBoss(pZVar5);
    if (cVar1 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar1 = (**(code **)(*plVar4 + 0x4d8))();
      if (cVar1 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        cVar1 = (**(code **)(*plVar4 + 0x508))();
        if (cVar1 == '\0') {
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          cVar1 = Zombie::HasFogImmune(pZVar5);
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            cVar1 = Zombie::IsBerserk(pZVar5);
            TitleStatus::~TitleStatus(aTStack_70);
            if (cVar1 != '\0') goto LAB_042336d0;
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              **)(this + 0x10));
            fVar16 = *pfVar6;
            fVar15 = pfVar6[1];
            this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            ProfileMgr::GetCurrentProfile(this_00);
            p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var7);
            fVar13 = *pfVar6;
            p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            lVar8 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var7);
            this_01 = (BoardTransforms *)
                      EATextSquish::Vec3::Vec3((Vec3 *)local_c8,fVar13,*(float *)(lVar8 + 4),0.0);
            BoardTransforms::BoardSpaceToGrid(this_01,fVar16,fVar15);
            iVar2 = FUN_04231448(*(undefined8 *)(this + 0x10));
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            iVar3 = Zombie::GetSizeType(pZVar5);
            uVar12 = (uint)(2 < iVar2);
            if (iVar3 == 1) {
              FUN_04231424(aTStack_70,*(undefined8 *)(this + 0x10));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
              nop();
              iVar2 = *(int *)(extraout_x0_01 + 0x2c8);
LAB_042338a4:
              local_d8[0] = local_d8[0] + uVar12 + iVar2;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
              pPVar11 = extraout_x1_00;
            }
            else if (iVar3 == 0) {
              FUN_04231424(aTStack_70,*(undefined8 *)(this + 0x10));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
              nop();
              local_d8[0] = local_d8[0] + uVar12 + *(int *)(extraout_x0_00 + 0x2c4);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
              pPVar11 = extraout_x1_01;
            }
            else {
              pPVar11 = extraout_x1;
              if (iVar3 == 2) {
                if (uVar12 == 0) {
                  FUN_04231424(aTStack_70,*(undefined8 *)(this + 0x10));
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
                  nop();
                  iVar2 = *(int *)(extraout_x0_02 + 0x2cc);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
                  if (iVar2 == 0) {
                    pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                       (*(Board **)(gLawnApp + 0x9f0));
                    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
                    /* WARNING: Load size is inaccurate */
                    pZVar17._0_4_ = *(ZombieTosserSubSystem **)(this + 0x2c);
                    uVar14 = *(undefined4 *)(this + 0x30);
                    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8)
                    ;
                    ZombieTosserSubSystem::LaunchZombie
                              (pZVar17._0_4_,uVar14,pZVar9,pRVar10,(Vec3 *)local_c8,aRStack_b8,0);
                    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    ::~RtReflectionDelegate
                              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                                *)aRStack_b8);
                    goto LAB_042336d0;
                  }
                }
                FUN_04231424(aTStack_70,*(undefined8 *)(this + 0x10));
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_70);
                nop();
                iVar2 = *(int *)(extraout_x0 + 0x2cc);
                goto LAB_042338a4;
              }
            }
            BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_d8,pPVar11);
            EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,(float)local_d0,(float)local_cc,0.0);
            Sexy::SexyVector3::operator=((SexyVector3 *)local_c8,(SexyVector3 *)aTStack_70);
            local_c8[0] = (float)NEON_fminnm(local_c8[0],0x44480000);
            iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            fVar13 = (float)RandRangeFloat(-((float)iVar2 * 0.5),(float)iVar3 * 0.5);
            local_c8[0] = fVar13 + local_c8[0];
            pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
                    /* WARNING: Load size is inaccurate */
            pZVar17._0_4_ = *(ZombieTosserSubSystem **)(this + 0x2c);
            uVar14 = *(undefined4 *)(this + 0x30);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
            ZombieTosserSubSystem::LaunchZombie
                      (pZVar17._0_4_,uVar14,pZVar9,pRVar10,(Vec3 *)local_c8,aRStack_b8,0);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_b8);
            goto LAB_042336d0;
          }
        }
      }
    }
  }
  TitleStatus::~TitleStatus(aTStack_70);
LAB_042336d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TakeAttack(PlantWeapon) */

void __thiscall PlantWhiteMelon::TakeAttack(PlantWhiteMelon *this,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  BoardEntity *pBVar7;
  RealObject *this_00;
  Plant *this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  DamageInfo *pDVar13;
  code *pcVar12;
  UnchartedModePlantNumData aUStack_98 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  UnchartedModePlantNumData aUStack_88 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_98,1,1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_90);
  if (param_2 == 0) {
    FindAttackTargetZombie((PlantTargetParams *)this);
  }
  else {
    PlantFramework::FindTargetZombie(aRStack_68,this,param_2,aUStack_98);
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_90,(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = FUN_04231478(*(undefined8 *)(lVar4 + 0x70),param_2);
  this_01 = *(Plant **)(this + 0x10);
  iVar3 = *(int *)(lVar4 + 0x2c);
  fVar8 = (float)FUN_04231408(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar9 = (float)FUN_04231418(*(undefined4 *)(this_01 + 0x3bc));
  fVar10 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar11 = (float)FUN_0423141c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_90);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
    pcVar12 = *(code **)(*plVar5 + 0x110);
    pDVar13._0_4_ = (DamageInfo *)(float)(int)(fVar8 * fVar9 * (float)iVar3 * fVar10 * fVar11);
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar6 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar6 = (**(code **)(*(long *)this + 0x198))(this,param_2);
    }
    pBVar7 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar7);
    lVar4 = *(long *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,iVar3,*(int *)(lVar4 + 0x110));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar13._0_4_,local_70,local_6c,aRStack_68,uVar6,lVar4,aPStack_78,0);
    (*pcVar12)(plVar5,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)a_Stack_90);
    TossZombie(this,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    cVar2 = TriggerLv2Attack(this);
    if (cVar2 != '\0') {
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_88,2,1);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_80);
      if (param_2 == 0) {
        FindAttackTargetZombie((PlantTargetParams *)this);
      }
      else {
        PlantFramework::FindTargetZombie(aRStack_68,this,param_2,aUStack_88);
      }
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_80);
      if ((bVar1) &&
         (cVar2 = Sexy::RtWeakPtrBase::operator!=
                            ((RtWeakPtrBase *)a_Stack_90,(RtWeakPtrBase *)a_Stack_80), cVar2 != '\0'
         )) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
        pcVar12 = *(code **)(*plVar5 + 0x110);
        if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
          uVar6 = PlantFramework::GetDamageFlags(this,param_2);
        }
        else {
          uVar6 = (**(code **)(*(long *)this + 0x198))(this,param_2);
        }
        pBVar7 = (BoardEntity *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
        iVar3 = BoardEntity::CalcColumnPosition(pBVar7);
        lVar4 = *(long *)(this + 0x10);
        Sexy::Point::Point(aPStack_78,iVar3,*(int *)(lVar4 + 0x110));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo(pDVar13._0_4_,local_70,local_6c,aRStack_68,uVar6,lVar4,aPStack_78,0);
        (*pcVar12)(plVar5,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)a_Stack_80);
        TossZombie(this,aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
    }
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aRStack_68,"Play_Bonk");
    RealObject::PlayPositionalSound(this_00,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWhiteMelon::TakePlantFoodFinalAttack(PlantWeapon) */

void __thiscall PlantWhiteMelon::TakePlantFoodFinalAttack(PlantWhiteMelon *this,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  long lVar5;
  undefined8 uVar6;
  Zombie *this_01;
  code *pcVar7;
  Plant *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 0");
  Sexy::Insets::Insets
            (aIStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,aIStack_90);
  if (param_2 == 1) {
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      nop();
      if (((this_01 != (Zombie *)0x0) &&
          (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0')) {
        cVar2 = Zombie::IsInvisible(this_01);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*(long *)this_01 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_98);
          cVar2 = (*pcVar7)(this_01,aRStack_68,0);
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          }
          else {
            cVar2 = RealObject::IsOnOpposingTeam
                              (*(RealObject **)(this + 0x10),(RealObject *)this_01);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
            if (cVar2 != '\0') {
              Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 1");
              Plant::GetProps();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              lVar5 = FUN_04231478(*(undefined8 *)(lVar5 + 0x70),1);
              pPVar8 = *(Plant **)(this + 0x10);
              fVar9 = (float)FUN_04231408(*(undefined4 *)(pPVar8 + 0xf4),
                                          *(undefined4 *)(pPVar8 + 0x100),
                                          *(undefined4 *)(pPVar8 + 0x104),
                                          *(undefined4 *)(pPVar8 + 0x3b8));
              fVar10 = (float)FUN_04231418(*(undefined4 *)(pPVar8 + 0x3bc));
              iVar3 = *(int *)(lVar5 + 0x2c);
              fVar11 = (float)Plant::GetExtraDPSmodifier(pPVar8);
              fVar12 = (float)FUN_0423141c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 2");
              pcVar7 = *(code **)(*(long *)this_01 + 0x110);
              if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
                uVar6 = PlantFramework::GetDamageFlags();
              }
              else {
                uVar6 = (**(code **)(*(long *)this + 0x198))(this,1);
              }
              iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
              lVar5 = *(long *)(this + 0x10);
              Sexy::Point::Point(aPStack_a0,iVar4,*(int *)(lVar5 + 0x110));
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(float)(int)(fVar9 * fVar10 * (float)iVar3 * fVar11 * fVar12)
                         ,local_98,local_94,aRStack_68,uVar6,lVar5,aPStack_a0,0);
              (*pcVar7)(this_01,aRStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
              Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 3");
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_98)
              ;
              TossZombie(this,aRStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
              Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 4");
              (**(code **)(*(long *)this_01 + 0x298))(0x40000000,this_01);
              Sexy::OutputDebugStrF((wchar_t *)"PlantWhiteMelon::TakePlantFoodFinalAttack, 5");
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
    }
  }
  else if (param_2 == 2) {
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      nop();
      cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
      if ((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) {
        cVar2 = Zombie::IsInvisible(this_00);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*(long *)this_00 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_98);
          cVar2 = (*pcVar7)(this_00,aRStack_68,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          if (cVar2 != '\0') {
            cVar2 = (**(code **)(*(long *)this_00 + 0x3f0))(this_00);
            if (cVar2 == '\0') {
              Plant::GetProps();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              lVar5 = FUN_04231478(*(undefined8 *)(lVar5 + 0x70),2);
              pPVar8 = *(Plant **)(this + 0x10);
              fVar9 = (float)FUN_04231408(*(undefined4 *)(pPVar8 + 0xf4),
                                          *(undefined4 *)(pPVar8 + 0x100),
                                          *(undefined4 *)(pPVar8 + 0x104),
                                          *(undefined4 *)(pPVar8 + 0x3b8));
              fVar10 = (float)FUN_04231418(*(undefined4 *)(pPVar8 + 0x3bc));
              iVar3 = *(int *)(lVar5 + 0x2c);
              fVar11 = (float)Plant::GetExtraDPSmodifier(pPVar8);
              fVar12 = (float)FUN_0423141c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              pcVar7 = *(code **)(*(long *)this_00 + 0x110);
              if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
                uVar6 = PlantFramework::GetDamageFlags();
              }
              else {
                uVar6 = (**(code **)(*(long *)this + 0x198))(this,2);
              }
              iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
              lVar5 = *(long *)(this + 0x10);
              Sexy::Point::Point(aPStack_a0,iVar4,*(int *)(lVar5 + 0x110));
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(float)(int)(fVar9 * fVar10 * (float)iVar3 * fVar11 * fVar12)
                         ,local_98,local_94,aRStack_68,uVar6,lVar5,aPStack_a0,0);
              (*pcVar7)(this_00,aRStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_98)
              ;
              TossZombie(this,aRStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
              (**(code **)(*(long *)this_00 + 0x298))(0x40000000,this_00);
            }
            else {
              iVar3 = Zombie::GetFacing(this_00);
              if (iVar3 == 1) {
                iVar3 = PlantFramework::Rand((PlantFramework *)this,600);
                fVar9 = -500.0;
              }
              else {
                iVar3 = PlantFramework::Rand((PlantFramework *)this,600);
                fVar9 = 1000.0;
              }
              EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar9,(float)iVar3,0.0);
              Zombie::FlickOff(this_00,(SexyVector3 *)aRStack_68);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWhiteMelon::OnAnimCommand(std::string const&, std::string const&) */

bool PlantWhiteMelon::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"charge_attack");
  if (bVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xb) {
      TakeAttack((PlantWhiteMelon *)param_1,0);
    }
    else if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      TakePlantFoodFinalAttack((PlantWhiteMelon *)param_1,1);
    }
  }
  else {
    bVar1 = std::operator==(param_2,"plantfood1_hit_1");
    if (bVar1) {
      TakePlantFoodAttack_Hit1(param_1,1);
      return true;
    }
    bVar1 = std::operator==(param_2,"plantfood1_hit_2");
    if (bVar1) {
      TakePlantFoodAttack_Hit2(param_1,1);
      bVar1 = true;
    }
    else {
      bVar1 = std::operator==(param_2,"avatar_plantfood_hit");
      if (bVar1) {
        TakePlantFoodFinalAttack((PlantWhiteMelon *)param_1,2);
        bVar1 = true;
      }
      else {
        bVar1 = std::operator==(param_2,"turn_back");
        if (bVar1) {
          TakePlantFoodAttack_HitSuper(param_1,1);
        }
      }
    }
  }
  return bVar1;
}

