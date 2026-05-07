// Class: GuitarGridAudio


/* GuitarGridAudio::~GuitarGridAudio() */

void __thiscall GuitarGridAudio::~GuitarGridAudio(GuitarGridAudio *this)

{
  *(undefined ***)this = &PTR_GetClass_0669b760;
  *(undefined ***)(this + 0x10) = &PTR__GuitarGridAudio_0669ba18;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GuitarGridAudio::~GuitarGridAudio() */

void __thiscall GuitarGridAudio::~GuitarGridAudio(GuitarGridAudio *this)

{
  ~GuitarGridAudio(this + -0x10);
  return;
}


/* GuitarGridAudio::~GuitarGridAudio() */

void __thiscall GuitarGridAudio::~GuitarGridAudio(GuitarGridAudio *this)

{
  ~GuitarGridAudio(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GuitarGridAudio::~GuitarGridAudio() */

void __thiscall GuitarGridAudio::~GuitarGridAudio(GuitarGridAudio *this)

{
  ~GuitarGridAudio(this + -0x10);
  return;
}


/* GuitarGridAudio::GuitarGridAudio() */

void __thiscall GuitarGridAudio::GuitarGridAudio(GuitarGridAudio *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0669b760;
  *(undefined ***)(this + 0x10) = &PTR__GuitarGridAudio_0669ba18;
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}


/* GuitarGridAudio::StaticNew() */

GuitarGridAudio * GuitarGridAudio::StaticNew(void)

{
  GuitarGridAudio *this;
  
  this = ::operator_new(0x1b8);
  GuitarGridAudio(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::StaticClassInit() */

void GuitarGridAudio::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuitarGridAudio");
    (*pcVar2)(plVar1,asStack_10,FUN_037e2f58,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuitarGridAudio::StaticGetClass() */

long * GuitarGridAudio::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuitarGridAudio",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuitarGridAudio::GetClass() const */

long * GuitarGridAudio::GetClass(void)

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
  (*pcVar3)(plVar1,"GuitarGridAudio",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::onAnimStoppedCallback(std::string const&) */

void __thiscall GuitarGridAudio::onAnimStoppedCallback(GuitarGridAudio *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("lv3_birth",param_1);
  if ((bVar1) || (bVar1 = std::operator==("lv3_attack",param_1), bVar1)) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"lv3_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::SetSuccessCount(int) */

void __thiscall GuitarGridAudio::SetSuccessCount(GuitarGridAudio *this,int param_1)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1ac) = param_1;
  *(undefined4 *)(this + 0x1b0) = 0;
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  GridItemAnimation::GetAnimRig();
  this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string(asStack_10,"lv3_birth");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  *(float *)(this + 0x1a8) = fVar1 + fVar2 + 1.0;
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::attackZombies() */

void __thiscall GuitarGridAudio::attackZombies(GuitarGridAudio *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  int in_w4;
  DamageInfo *pDVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_037e1358(*(undefined4 *)(this + 0x130));
  iVar5 = FUN_037e135c(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 - 1),iVar5 + -1,3,3,in_w4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  uVar1 = _FUN_037e4254;
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar3) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
                    /* WARNING: Load size is inaccurate */
    pDVar8._0_4_ = *(DamageInfo **)(this + 0x1b4);
    Sexy::Point::Point(aPStack_a0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
    DamageInfo::DamageInfo(pDVar8._0_4_,local_98,local_94,aDStack_68,aPStack_a0,0);
    if ((pZVar7 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnOpposingTeam(pZVar7,1), cVar2 != '\0')
       ) {
      (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aDStack_68);
      (**(code **)(*(long *)pZVar7 + 0x298))(uVar1,pZVar7);
    }
    DamageInfo::~DamageInfo(aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::onUpdate() */

void __thiscall GuitarGridAudio::onUpdate(GuitarGridAudio *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  int iVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  iVar2 = *(int *)(this + 0x1ac);
  if (iVar2 == 0) {
    (**(code **)(*(long *)this + 0x48))(this);
    iVar2 = *(int *)(this + 0x1ac);
    iVar4 = *(int *)(this + 0x1b0);
    if (iVar4 < iVar2) goto LAB_037e491c;
LAB_037e48c4:
    if (iVar2 != iVar4) goto LAB_037e48cc;
  }
  else {
    iVar4 = *(int *)(this + 0x1b0);
    if (iVar2 <= iVar4) goto LAB_037e48c4;
LAB_037e491c:
    fVar5 = (float)PVZ_T();
    if (*(float *)(this + 0x1a8) < fVar5) {
      GridItemAnimation::GetAnimRig();
      pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::string::string(asStack_58,"lv3_idle");
      cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      if (cVar1 != '\0') {
        fVar5 = (float)PVZ_T();
        *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
        *(float *)(this + 0x1a8) = fVar5 + 1.0;
        attackZombies(this);
        GridItemAnimation::GetAnimRig();
        pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        std::string::string(asStack_68,"lv3_attack");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId((RtId *)aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      }
    }
    if (*(int *)(this + 0x1ac) != *(int *)(this + 0x1b0)) goto LAB_037e48cc;
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_037e48cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuitarGridAudio::onGridItemInitialize() */

void __thiscall GuitarGridAudio::onGridItemInitialize(GuitarGridAudio *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_68,"lv3_birth");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

