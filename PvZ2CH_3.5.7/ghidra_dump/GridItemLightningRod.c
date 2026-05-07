// Class: GridItemLightningRod


/* GridItemLightningRod::~GridItemLightningRod() */

void __thiscall GridItemLightningRod::~GridItemLightningRod(GridItemLightningRod *this)

{
  *(undefined ***)this = &PTR_GetClass_066b38b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLightningRod_066b3b68;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemLightningRod::~GridItemLightningRod() */

void __thiscall GridItemLightningRod::~GridItemLightningRod(GridItemLightningRod *this)

{
  ~GridItemLightningRod(this + -0x10);
  return;
}


/* GridItemLightningRod::~GridItemLightningRod() */

void __thiscall GridItemLightningRod::~GridItemLightningRod(GridItemLightningRod *this)

{
  ~GridItemLightningRod(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemLightningRod::~GridItemLightningRod() */

void __thiscall GridItemLightningRod::~GridItemLightningRod(GridItemLightningRod *this)

{
  ~GridItemLightningRod(this + -0x10);
  return;
}


/* GridItemLightningRod::CalcRenderOrder() const */

void __thiscall GridItemLightningRod::CalcRenderOrder(GridItemLightningRod *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x635d8,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemLightningRod::CalcRenderOrder() const */

void __thiscall GridItemLightningRod::CalcRenderOrder(GridItemLightningRod *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLightningRod::StaticClassInit() */

void GridItemLightningRod::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLightningRod");
    (*pcVar2)(plVar1,asStack_10,FUN_038ad05c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLightningRod::StaticGetClass() */

long * GridItemLightningRod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLightningRod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLightningRod::GetClass() const */

long * GridItemLightningRod::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLightningRod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLightningRod::GridItemLightningRod() */

void __thiscall GridItemLightningRod::GridItemLightningRod(GridItemLightningRod *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_066b38b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLightningRod_066b3b68;
  return;
}


/* GridItemLightningRod::StaticNew() */

GridItemLightningRod * GridItemLightningRod::StaticNew(void)

{
  GridItemLightningRod *this;
  
  this = ::operator_new(0x1b0);
  GridItemLightningRod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLightningRod::setState(GridItemLightningRodState) */

void __thiscall GridItemLightningRod::setState(GridItemLightningRod *this,undefined4 param_2)

{
  char *pcVar1;
  PopAnimRig *pPVar2;
  PopAnimRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a8) = param_2;
  switch(param_2) {
  case 0:
    (**(code **)(*(long *)this + 0x80))(this,1);
    break;
  case 1:
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"z02");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    (**(code **)(*(long *)this + 0x80))(this,0);
    break;
  case 2:
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"z02_2");
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    break;
  case 3:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Plant_wiregelsemium_effect_z02");
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pcVar1 = "z02_4";
    goto LAB_038afc08;
  case 4:
    GridItemAnimation::GetAnimRig();
    local_98 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pcVar1 = "z02_3";
LAB_038afc08:
    std::string::string(asStack_68,pcVar1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_98,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemLightningRod::onGridItemInitialize() */

void __thiscall GridItemLightningRod::onGridItemInitialize(GridItemLightningRod *this)

{
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,0);
  return;
}


/* GridItemLightningRod::onAnimStopped(std::string const&) */

void __thiscall GridItemLightningRod::onAnimStopped(GridItemLightningRod *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"z02");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"z02_3");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
    bVar1 = std::operator==(param_1,"z02_4");
    if (!bVar1) {
      return;
    }
  }
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLightningRod::damageEntity(float) */

void __thiscall GridItemLightningRod::damageEntity(GridItemLightningRod *this,float param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  float *pfVar9;
  GridItem *pGVar10;
  undefined8 *puVar11;
  Zombie *pZVar12;
  RtObject *this_00;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b8;
  undefined8 local_b0;
  string asStack_a8 [8];
  RtWeakPtr aRStack_a0 [16];
  string asStack_90 [16];
  RtWeakPtr aRStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,3);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  DamageInfo::DamageInfo(aDStack_68);
  operator|=(auStack_58,0x80);
  local_60 = param_1;
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Plant_wiregelsemium_effect_animation1");
  pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_90,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
  GetPAMByName(asStack_90);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  std::string::~string(asStack_90);
  nop();
  pfVar9 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_80,*pfVar9 - 105.0,pfVar9[1] - 124.0,pfVar9[2]);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar7,(SexyVector3 *)aRStack_80,-1);
  FUN_038a8d6c(pEVar7 + 0x1c);
  std::string::string((string *)aRStack_80,"animation1");
  Effect_PopAnim::PlaySingleAnimation(pEVar7,aRStack_80,0);
  std::string::~string((string *)aRStack_80);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
  Sexy::Insets::Insets((Insets *)asStack_90,iVar4 + -1,iVar3 + -1,3,3);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(aRStack_80,uVar5,asStack_90);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_80);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
      DamageInfo::~DamageInfo(aDStack_68);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
    this_00 = (RtObject *)*puVar11;
    if (this_00 != (RtObject *)0x0) {
      pZVar12 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar12 != (Zombie *)0x0) {
        uVar5 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(pZVar12,uVar5);
        if ((cVar2 != '\0') && (cVar2 = RealObject::IsOnTeam(pZVar12,1), cVar2 != '\0'))
        goto LAB_038b12f0;
      }
      pGVar10 = Sexy::RtObject::Cast<GridItem>(this_00);
      if ((pGVar10 == (GridItem *)0x0) || (cVar2 = RealObject::IsOnTeam(pGVar10,2), cVar2 != '\0'))
      {
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar13 = *pfVar9;
        fVar15 = pfVar9[2];
        fVar14 = pfVar9[1];
        pEVar7 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_a8,"POPANIM_EFFECTS_WIREGELSEMIUM_PROJECTILE");
        GetPAMByName(asStack_a8);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_a0);
        Effect_PopAnim::CreatePopAnimRig(pEVar7,(PopAnim *)pRVar8,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0)
        ;
        std::string::~string(asStack_a8);
        nop();
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_a0,(float)(int)(fVar13 - 95.0),(float)(int)(fVar14 - 120.0),
                   (float)(int)fVar15);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar7,(SexyVector3 *)aRStack_a0,-1);
        FUN_038a8d6c(pEVar7 + 0x1c);
        std::string::string((string *)aRStack_a0,"idle4");
        Effect_PopAnim::PlaySingleAnimation(pEVar7,aRStack_a0,0);
        std::string::~string((string *)aRStack_a0);
        nop();
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
    }
LAB_038b12f0:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
  } while( true );
}

