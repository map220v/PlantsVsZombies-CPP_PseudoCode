// Class: CurlingIceLane


/* CurlingIceLane::CalcRenderOrder() const */

void __thiscall CurlingIceLane::CalcRenderOrder(CurlingIceLane *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to CurlingIceLane::CalcRenderOrder() const */

void __thiscall CurlingIceLane::CalcRenderOrder(CurlingIceLane *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* CurlingIceLane::~CurlingIceLane() */

void __thiscall CurlingIceLane::~CurlingIceLane(CurlingIceLane *this)

{
  *(undefined ***)this = &PTR_GetClass_06813da0;
  *(undefined ***)(this + 0x10) = &PTR__CurlingIceLane_06814058;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to CurlingIceLane::~CurlingIceLane() */

void __thiscall CurlingIceLane::~CurlingIceLane(CurlingIceLane *this)

{
  ~CurlingIceLane(this + -0x10);
  return;
}


/* CurlingIceLane::~CurlingIceLane() */

void __thiscall CurlingIceLane::~CurlingIceLane(CurlingIceLane *this)

{
  ~CurlingIceLane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CurlingIceLane::~CurlingIceLane() */

void __thiscall CurlingIceLane::~CurlingIceLane(CurlingIceLane *this)

{
  ~CurlingIceLane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingIceLane::StaticClassInit() */

void CurlingIceLane::StaticClassInit(void)

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
    std::string::string(asStack_10,"CurlingIceLane");
    (*pcVar2)(plVar1,asStack_10,FUN_04238fc0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingIceLane::StaticGetClass() */

long * CurlingIceLane::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingIceLane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingIceLane::GetClass() const */

long * CurlingIceLane::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"CurlingIceLane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingIceLane::CurlingIceLane() */

void __thiscall CurlingIceLane::CurlingIceLane(CurlingIceLane *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (CurlingIceLane)0x0;
  *(undefined ***)this = &PTR_GetClass_06813da0;
  *(undefined ***)(this + 0x10) = &PTR__CurlingIceLane_06814058;
  *(undefined4 *)(this + 0x1a8) = 0x40000000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* CurlingIceLane::StaticNew() */

CurlingIceLane * CurlingIceLane::StaticNew(void)

{
  CurlingIceLane *this;
  
  this = ::operator_new(0x1b0);
  CurlingIceLane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingIceLane::ResetTimer(bool, float) */

void __thiscall CurlingIceLane::ResetTimer(CurlingIceLane *this,bool param_1,float param_2)

{
  PopAnimRig *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x1a5] != (CurlingIceLane)0x0)) {
    this[0x1a5] = (CurlingIceLane)0x1;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"ice_head_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    this[0x1a5] = (CurlingIceLane)0x0;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"ice_middle_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar2 + param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingIceLane::onAnimationDone(std::string const&) */

void __thiscall CurlingIceLane::onAnimationDone(CurlingIceLane *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"ice_head_on");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"ice_middle_on"), bVar1)) {
    if (this[0x1a5] == (CurlingIceLane)0x0) {
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"ice_middle_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
    else {
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"ice_head_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar3 + *(float *)(this + 0x1a8);
  }
  else {
    bVar1 = std::operator==(param_1,"ice_head_off");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"ice_middle_off"), bVar1)) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingIceLane::StartEffect(float) */

void __thiscall CurlingIceLane::StartEffect(CurlingIceLane *this,float param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  *(float *)(this + 0x1a8) = param_1;
  if (this[0x1a5] == (CurlingIceLane)0x0) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"ice_middle_on");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
  }
  else {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"ice_head_on");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
  }
  PopAnimRig::PlayAndStop
            (pPVar1,asStack_58,0,
             (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingIceLane::onUpdate() */

void __thiscall CurlingIceLane::onUpdate(CurlingIceLane *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  PopAnimRig *pPVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  Insets aIStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  iVar2 = FUN_04234a9c(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04234aa0(*(undefined4 *)(this + 0x134));
  Sexy::Insets::Insets(aIStack_78,iVar2,iVar3,1,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2,aIStack_78
            );
  uVar9 = local_68;
  lVar4 = FUN_04234b58(local_68,local_60);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04234b64(uVar9,uVar8);
      cVar1 = RealObject::IsOnOpposingTeam(*puVar5,1);
      if (cVar1 != '\0') {
        FUN_04234b64(local_68,uVar8);
        nop();
        Zombie::ApplyCondition((Zombie *)0x3f800000,0);
      }
      uVar9 = local_68;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_04234b58(local_68,local_60);
    } while (uVar8 < uVar6);
  }
  fVar12 = *(float *)(this + 0x1ac);
  fVar10 = (float)PVZ_T();
  if (fVar12 < fVar10) {
    uVar11 = PVZ_EOT();
    *(undefined4 *)(this + 0x1ac) = uVar11;
    if (this[0x1a5] == (CurlingIceLane)0x0) {
      GridItemAnimation::GetAnimRig();
      pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      std::string::string((string *)aIStack_78,"ice_middle_off");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string(asStack_80,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_88,asStack_80);
    }
    else {
      GridItemAnimation::GetAnimRig();
      pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      std::string::string((string *)aIStack_78,"ice_head_off");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
      std::string::string(asStack_80,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_88,asStack_80);
    }
    PopAnimRig::PlayAndStop
              (pPVar7,aIStack_78,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    std::string::~string((string *)aIStack_78);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

