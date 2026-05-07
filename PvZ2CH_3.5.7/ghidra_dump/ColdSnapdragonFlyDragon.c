// Class: ColdSnapdragonFlyDragon


/* ColdSnapdragonFlyDragon::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall
ColdSnapdragonFlyDragon::SetPosition(ColdSnapdragonFlyDragon *this,SexyVector3 *param_1)

{
  undefined4 uVar1;
  
  BoardEntity::SetPosition((BoardEntity *)this,param_1);
  uVar1 = BoardTransforms::BoardSpaceToGridX(*(float *)param_1);
  *(undefined4 *)(this + 0xa4) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColdSnapdragonFlyDragon::StaticClassInit() */

void ColdSnapdragonFlyDragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ColdSnapdragonFlyDragon");
    (*pcVar2)(plVar1,asStack_10,FUN_042305a8,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ColdSnapdragonFlyDragon::StaticGetClass() */

long * ColdSnapdragonFlyDragon::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ColdSnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ColdSnapdragonFlyDragon::GetClass() const */

long * ColdSnapdragonFlyDragon::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ColdSnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ColdSnapdragonFlyDragon::ColdSnapdragonFlyDragon() */

void __thiscall ColdSnapdragonFlyDragon::ColdSnapdragonFlyDragon(ColdSnapdragonFlyDragon *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068113a0;
  *(undefined ***)(this + 0x10) = &PTR__ColdSnapdragonFlyDragon_06811588;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  return;
}


/* ColdSnapdragonFlyDragon::StaticNew() */

ColdSnapdragonFlyDragon * ColdSnapdragonFlyDragon::StaticNew(void)

{
  ColdSnapdragonFlyDragon *this;
  
  this = ::operator_new(0xc0);
  ColdSnapdragonFlyDragon(this);
  return this;
}


/* ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon() */

void __thiscall ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon(ColdSnapdragonFlyDragon *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb8);
  *(undefined ***)this = &PTR_GetClass_068113a0;
  *(undefined ***)(this + 0x10) = &PTR__ColdSnapdragonFlyDragon_06811588;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon() */

void __thiscall ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon(ColdSnapdragonFlyDragon *this)

{
  ~ColdSnapdragonFlyDragon(this + -0x10);
  return;
}


/* ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon() */

void __thiscall ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon(ColdSnapdragonFlyDragon *this)

{
  ~ColdSnapdragonFlyDragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon() */

void __thiscall ColdSnapdragonFlyDragon::~ColdSnapdragonFlyDragon(ColdSnapdragonFlyDragon *this)

{
  ~ColdSnapdragonFlyDragon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColdSnapdragonFlyDragon::initializeRenderEffect(float) */

void __thiscall
ColdSnapdragonFlyDragon::initializeRenderEffect(ColdSnapdragonFlyDragon *this,float param_1)

{
  char cVar1;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  *(float *)(this + 0xac) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_COLD_SNAPDRAGON_ICE_RE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string(asStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-76.0,0.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)asStack_18,2);
  }
  cVar1 = IsHighFPSMode();
  uVar3 = 0x41200000;
  if (cVar1 == '\0') {
    uVar3 = 0x41a00000;
  }
  *(undefined4 *)(this + 0xa8) = uVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColdSnapdragonFlyDragon::createIce(Sexy::SexyVector3 const&) */

void __thiscall
ColdSnapdragonFlyDragon::createIce(ColdSnapdragonFlyDragon *this,SexyVector3 *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  GridItemLilyPad *pGVar7;
  undefined8 *puVar8;
  Zombie *this_01;
  GridItem *pGVar9;
  RtObject *this_02;
  int local_d0;
  int local_cc;
  RtWeakPtr aRStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  RtWeakPtr<Sexy::SoundResource> aRStack_b0 [8];
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  PVPZoneData aPStack_80 [24];
  string asStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_68,"POPANIM_EFFECTS_COLD_SNAPDRAGON_ICE_RE");
  GetPAMByName(asStack_68);
  std::string::~string(asStack_68);
  nop();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_c8);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string(asStack_68,"animation02");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_68,0);
  std::string::~string(asStack_68);
  nop();
  local_a0 = *(undefined4 *)(param_1 + 8);
  fStack_a4 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fStack_a4 = fStack_a4 - 20.0;
  local_a8 = (float)*(undefined8 *)param_1;
  BoardTransforms::BoardSpaceToGrid(*(float *)param_1,*(float *)(param_1 + 4),&local_d0,&local_cc);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = iVar3 * local_d0;
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  _local_a8 = CONCAT44(fStack_a4,(float)(iVar3 + iVar4 / 2 + 0xcd));
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_a8,-1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_98,uVar5,local_d0,local_cc);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_98);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_98);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
    this_02 = (RtObject *)*puVar8;
    this_01 = Sexy::RtObject::Cast<Zombie>(this_02);
    pGVar9 = Sexy::RtObject::Cast<GridItem>(this_02);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    local_60 = *(undefined4 *)(this + 0xac);
    if (pGVar9 == (GridItem *)0x0) {
      if (((this_01 != (Zombie *)0x0) && (cVar2 = Zombie::IsOnGround(this_01), cVar2 != '\0')) &&
         (cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0')) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)(this + 0xb0));
        ZombieConditionsStruct::ZombieConditionsStruct
                  ((ZombieConditionsStruct *)0x40400000,aPStack_80,1,aRStack_b0);
        Zombie::ApplyCondition(this_01,(ZombieConditionsStruct *)aPStack_80);
        PVPZoneData::~PVPZoneData(aPStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
        (**(code **)(*(long *)this_01 + 0x110))(this_01,asStack_68);
      }
    }
    else {
      pGVar7 = Sexy::RtObject::Cast<GridItemLilyPad>(this_02);
      if (pGVar7 == (GridItemLilyPad *)0x0) {
        (**(code **)(*(long *)pGVar9 + 0x110))(pGVar9,asStack_68);
      }
    }
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColdSnapdragonFlyDragon::UpdateMotion() */

void __thiscall ColdSnapdragonFlyDragon::UpdateMotion(ColdSnapdragonFlyDragon *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  iVar1 = BoardTransforms::BoardSpaceToGridX((float)local_18);
  local_18 = CONCAT44(local_18._4_4_,*(float *)(this + 0xa8) + (float)local_18);
  if ((-1 < iVar1) && (*(int *)(this + 0xa4) != iVar1)) {
    *(int *)(this + 0xa4) = iVar1;
    createIce(this,(SexyVector3 *)&local_18);
  }
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&local_18);
  if (900.0 < (float)local_18) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ColdSnapdragonFlyDragon::onUpdate() */

void __thiscall ColdSnapdragonFlyDragon::onUpdate(ColdSnapdragonFlyDragon *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uStack_18 = *puVar2;
  uStack_10 = *(undefined4 *)(puVar2 + 1);
  iVar1 = BoardTransforms::BoardSpaceToGridX((float)uStack_18);
  uStack_18 = CONCAT44(uStack_18._4_4_,*(float *)(this + 0xa8) + (float)uStack_18);
  if ((-1 < iVar1) && (*(int *)(this + 0xa4) != iVar1)) {
    *(int *)(this + 0xa4) = iVar1;
    createIce(this,(SexyVector3 *)&uStack_18);
  }
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&uStack_18);
  if (900.0 < (float)uStack_18) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

