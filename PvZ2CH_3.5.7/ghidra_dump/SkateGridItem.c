// Class: SkateGridItem


/* SkateGridItem::CalcRenderOrder() const */

void __thiscall SkateGridItem::CalcRenderOrder(SkateGridItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8b,uVar1,uVar2);
  return;
}


/* non-virtual thunk to SkateGridItem::CalcRenderOrder() const */

void __thiscall SkateGridItem::CalcRenderOrder(SkateGridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateGridItem::onUpdate() */

void __thiscall SkateGridItem::onUpdate(SkateGridItem *this)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  string *this_00;
  AttachedEffect *this_01;
  StandaloneEffect *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar3 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),uVar2,2);
  this_00 = (string *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
  std::string::string(asStack_10,"water_effect");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"water_effect");
    this_01 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_02 = (StandaloneEffect *)AttachedEffect::GetEffect(this_01);
    StandaloneEffect::SetVisibility(this_02,lVar3 != 0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkateGridItem::~SkateGridItem() */

void __thiscall SkateGridItem::~SkateGridItem(SkateGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a990;
  *(undefined ***)(this + 0x10) = &PTR__SkateGridItem_0669ac70;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to SkateGridItem::~SkateGridItem() */

void __thiscall SkateGridItem::~SkateGridItem(SkateGridItem *this)

{
  ~SkateGridItem(this + -0x10);
  return;
}


/* SkateGridItem::~SkateGridItem() */

void __thiscall SkateGridItem::~SkateGridItem(SkateGridItem *this)

{
  ~SkateGridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkateGridItem::~SkateGridItem() */

void __thiscall SkateGridItem::~SkateGridItem(SkateGridItem *this)

{
  ~SkateGridItem(this + -0x10);
  return;
}


/* SkateGridItem::SkateGridItem() */

void __thiscall SkateGridItem::SkateGridItem(SkateGridItem *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0669a990;
  *(undefined ***)(this + 0x10) = &PTR__SkateGridItem_0669ac70;
  return;
}


/* SkateGridItem::StaticNew() */

SkateGridItem * SkateGridItem::StaticNew(void)

{
  SkateGridItem *this;
  
  this = ::operator_new(0x1c8);
  SkateGridItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateGridItem::StaticClassInit() */

void SkateGridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkateGridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_037dc6d4,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkateGridItem::StaticGetClass() */

long * SkateGridItem::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"SkateGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkateGridItem::GetClass() const */

long * SkateGridItem::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"SkateGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateGridItem::onGridItemInitialize() */

void __thiscall SkateGridItem::onGridItemInitialize(SkateGridItem *this)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  RtObject *this_00;
  PoolDaylightStage *pPVar6;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar7;
  StandaloneEffect *pSVar8;
  code *pcVar9;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Zomb_Beach_Surfer_Board_Slam_Impact");
  RealObject::JoinTeam((RealObject *)this,1);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar4 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar3,2);
  lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar5 == 0) {
    pPVar6 = (PoolDaylightStage *)0x0;
  }
  else {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar6 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
  }
  this_01 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
  std::string::string((string *)&local_18,"water_effect");
  this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_SKATEBOARD_RIPPLE");
  GetPAMByName(asStack_20);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)&local_18,"ripple");
  AttachedEffect::PlayAnimLooped(this_02,(string *)&local_18,2);
  std::string::~string((string *)&local_18);
  nop();
  pcVar9 = *(code **)(*(long *)this_02 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,-5.0,0.0);
  (*pcVar9)(this_02,this,(string *)&local_18,1);
  if ((pPVar6 != (PoolDaylightStage *)0x0) &&
     (iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar3 + 4)), iVar1 == 3)) {
    Sexy::Insets::Insets((Insets *)&local_18);
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_037dc00c(1000);
    local_c = FUN_037dc00c(0x1cc);
    pSVar8 = (StandaloneEffect *)AttachedEffect::GetEffect(this_02);
    StandaloneEffect::SetClipRect(pSVar8,(TRect *)&local_18);
  }
  pSVar8 = (StandaloneEffect *)AttachedEffect::GetEffect(this_02);
  StandaloneEffect::SetVisibility(pSVar8,lVar4 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

