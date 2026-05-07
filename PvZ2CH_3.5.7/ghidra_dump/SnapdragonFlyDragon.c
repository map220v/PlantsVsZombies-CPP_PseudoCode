// Class: SnapdragonFlyDragon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnapdragonFlyDragon::StaticClassInit() */

void SnapdragonFlyDragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnapdragonFlyDragon");
    (*pcVar2)(plVar1,asStack_10,FUN_04062074,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnapdragonFlyDragon::StaticGetClass() */

long * SnapdragonFlyDragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnapdragonFlyDragon::GetClass() const */

long * SnapdragonFlyDragon::GetClass(void)

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
  (*pcVar3)(plVar1,"SnapdragonFlyDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnapdragonFlyDragon::SnapdragonFlyDragon() */

void __thiscall SnapdragonFlyDragon::SnapdragonFlyDragon(SnapdragonFlyDragon *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067c3ed0;
  *(undefined ***)(this + 0x10) = &PTR__SnapdragonFlyDragon_067c40b8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* SnapdragonFlyDragon::StaticNew() */

SnapdragonFlyDragon * SnapdragonFlyDragon::StaticNew(void)

{
  SnapdragonFlyDragon *this;
  
  this = ::operator_new(0xb8);
  SnapdragonFlyDragon(this);
  return this;
}


/* SnapdragonFlyDragon::~SnapdragonFlyDragon() */

void __thiscall SnapdragonFlyDragon::~SnapdragonFlyDragon(SnapdragonFlyDragon *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_067c3ed0;
  *(undefined ***)(this + 0x10) = &PTR__SnapdragonFlyDragon_067c40b8;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to SnapdragonFlyDragon::~SnapdragonFlyDragon() */

void __thiscall SnapdragonFlyDragon::~SnapdragonFlyDragon(SnapdragonFlyDragon *this)

{
  ~SnapdragonFlyDragon(this + -0x10);
  return;
}


/* SnapdragonFlyDragon::~SnapdragonFlyDragon() */

void __thiscall SnapdragonFlyDragon::~SnapdragonFlyDragon(SnapdragonFlyDragon *this)

{
  ~SnapdragonFlyDragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SnapdragonFlyDragon::~SnapdragonFlyDragon() */

void __thiscall SnapdragonFlyDragon::~SnapdragonFlyDragon(SnapdragonFlyDragon *this)

{
  ~SnapdragonFlyDragon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnapdragonFlyDragon::initializeRenderEffect(float) */

void __thiscall SnapdragonFlyDragon::initializeRenderEffect(SnapdragonFlyDragon *this,float param_1)

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
  std::string::string(asStack_18,"POPANIM_EFFECTS_SNAPDRAGON_FIRE_RE");
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
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)asStack_18);
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
/* SnapdragonFlyDragon::createIce(Sexy::SexyVector3 const&) */

void __thiscall SnapdragonFlyDragon::createIce(SnapdragonFlyDragon *this,SexyVector3 *param_1)

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
  GridItemFlowerPot *pGVar10;
  RtObject *this_02;
  int local_b0;
  int local_ac;
  RtWeakPtr aRStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_68,"POPANIM_EFFECTS_SNAPDRAGON_FIRE_RE");
  GetPAMByName(asStack_68);
  std::string::~string(asStack_68);
  nop();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_a8);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string(asStack_68,"animation02");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_68,0);
  std::string::~string(asStack_68);
  nop();
  local_88 = *(undefined4 *)(param_1 + 8);
  fStack_8c = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fStack_8c = fStack_8c - 20.0;
  local_90 = (float)*(undefined8 *)param_1;
  BoardTransforms::BoardSpaceToGrid(*(float *)param_1,*(float *)(param_1 + 4),&local_b0,&local_ac);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = iVar3 * local_b0;
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  _local_90 = CONCAT44(fStack_8c,(float)(iVar3 + iVar4 / 2 + 0xcd));
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_90,-1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar5,local_b0,local_ac);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_02 = (RtObject *)*puVar8;
    this_01 = Sexy::RtObject::Cast<Zombie>(this_02);
    pGVar9 = Sexy::RtObject::Cast<GridItem>(this_02);
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    local_60 = *(undefined4 *)(this + 0xac);
    if (pGVar9 == (GridItem *)0x0) {
      if (((this_01 != (Zombie *)0x0) && (cVar2 = Zombie::IsOnGround(this_01), cVar2 != '\0')) &&
         (cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0')) {
        (**(code **)(*(long *)this_01 + 0x110))(this_01,asStack_68);
      }
    }
    else {
      pGVar7 = Sexy::RtObject::Cast<GridItemLilyPad>(this_02);
      if ((pGVar7 == (GridItemLilyPad *)0x0) &&
         (pGVar10 = Sexy::RtObject::Cast<GridItemFlowerPot>(this_02),
         pGVar10 == (GridItemFlowerPot *)0x0)) {
        (**(code **)(*(long *)pGVar9 + 0x110))(pGVar9,asStack_68);
      }
    }
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnapdragonFlyDragon::UpdateMotion() */

void __thiscall SnapdragonFlyDragon::UpdateMotion(SnapdragonFlyDragon *this)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
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
  fVar3 = *(float *)(this + 0xa8) + (float)local_18;
  local_18 = CONCAT44(local_18._4_4_,fVar3);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_10 = Board::calculateRoofOffsetZ(fVar3);
  }
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
/* SnapdragonFlyDragon::onUpdate() */

void __thiscall SnapdragonFlyDragon::onUpdate(SnapdragonFlyDragon *this)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
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
  fVar3 = *(float *)(this + 0xa8) + (float)uStack_18;
  uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    uStack_10 = Board::calculateRoofOffsetZ(fVar3);
  }
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

