// Class: GridItemCardGameZombieMirrorQueen


/* GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen() */

void __thiscall
GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen
          (GridItemCardGameZombieMirrorQueen *this)

{
  *(undefined ***)this = &PTR_GetClass_069d91f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieMirrorQueen_069d95a0;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen() */

void __thiscall
GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen
          (GridItemCardGameZombieMirrorQueen *this)

{
  ~GridItemCardGameZombieMirrorQueen(this + -0x10);
  return;
}


/* GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen() */

void __thiscall
GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen
          (GridItemCardGameZombieMirrorQueen *this)

{
  ~GridItemCardGameZombieMirrorQueen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen() */

void __thiscall
GridItemCardGameZombieMirrorQueen::~GridItemCardGameZombieMirrorQueen
          (GridItemCardGameZombieMirrorQueen *this)

{
  ~GridItemCardGameZombieMirrorQueen(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::StaticClassInit() */

void GridItemCardGameZombieMirrorQueen::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieMirrorQueen");
    (*pcVar2)(plVar1,asStack_10,FUN_04e255d8,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueen::StaticGetClass() */

long * GridItemCardGameZombieMirrorQueen::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieMirrorQueen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieMirrorQueen::GetClass() const */

long * GridItemCardGameZombieMirrorQueen::GetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieMirrorQueen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieMirrorQueen::GridItemCardGameZombieMirrorQueen() */

void __thiscall
GridItemCardGameZombieMirrorQueen::GridItemCardGameZombieMirrorQueen
          (GridItemCardGameZombieMirrorQueen *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined4 *)(this + 0x208) = 1;
  *(undefined ***)this = &PTR_GetClass_069d91f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieMirrorQueen_069d95a0;
  return;
}


/* GridItemCardGameZombieMirrorQueen::StaticNew() */

GridItemCardGameZombieMirrorQueen * GridItemCardGameZombieMirrorQueen::StaticNew(void)

{
  GridItemCardGameZombieMirrorQueen *this;
  
  this = ::operator_new(0x210);
  GridItemCardGameZombieMirrorQueen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::ThrowAppleTarget(BoardEntity*) */

void __thiscall
GridItemCardGameZombieMirrorQueen::ThrowAppleTarget
          (GridItemCardGameZombieMirrorQueen *this,BoardEntity *param_1)

{
  char cVar1;
  GridItemCardGameZombieMirrorQueenProps *pGVar2;
  undefined8 *puVar3;
  Projectile *this_00;
  SexyVector3 *pSVar4;
  undefined8 uVar5;
  Board *pBVar7;
  undefined4 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pGVar2 + 0x188));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar7._0_4_ = *puVar3;
    uVar6 = *(undefined4 *)((long)puVar3 + 4);
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    this_00 = (Projectile *)Board::AddProjectile(pBVar7._0_4_,uVar6,0,uVar5,aRStack_10,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((this_00 != (Projectile *)0x0) && (param_1 != (BoardEntity *)0x0)) {
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      Projectile::LaunchAt(this_00,pSVar4,150.0,1.5);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueen::AddThrowCount(std::string const&) */

void __thiscall
GridItemCardGameZombieMirrorQueen::AddThrowCount
          (GridItemCardGameZombieMirrorQueen *this,string *param_1)

{
  bool bVar1;
  GridItemCardGameZombieMirrorQueenProps *pGVar2;
  
  bVar1 = std::operator==(param_1,"card_game_zombie_mirror_queen_mirror");
  if (bVar1) {
    pGVar2 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
    *(int *)(this + 0x208) = *(int *)(this + 0x208) + *(int *)(pGVar2 + 0x160);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::PlayAttackAnim() */

void __thiscall
GridItemCardGameZombieMirrorQueen::PlayAttackAnim(GridItemCardGameZombieMirrorQueen *this)

{
  GridItemCardGameZombieMirrorQueenProps *pGVar1;
  long lVar2;
  long *plVar3;
  PopAnimRig *pPVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pcVar5 = "1";
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
  std::operator+((string *)(pGVar1 + 0x138),"1");
  lVar6 = *(long *)(this + 0x1f8);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(this + 0x1e0);
    lVar2 = FUN_04e2526c(uVar7,*(undefined8 *)(this + 0x1e8));
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_04e25294(uVar7);
      if (lVar6 != *plVar3) {
        pcVar5 = "2";
      }
      std::operator+((string *)(pGVar1 + 0x138),pcVar5);
      FUN_05474278(asStack_78,asStack_58);
      std::string::~string(asStack_58);
    }
  }
  GridItemAnimation::GetAnimRig();
  pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar4,asStack_78,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  std::string::~string(asStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::GenerateMirror() */

void GridItemCardGameZombieMirrorQueen::GenerateMirror(void)

{
  bool bVar1;
  GridItemCardGameZombieMirrorQueenProps *pGVar2;
  int *piVar3;
  Board *this;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            (avStack_20,(vector *)(pGVar2 + 0x168));
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_28,"card_game_zombie_mirror_queen_mirror");
    Board::AddGridItem(this,asStack_28,*piVar3,piVar3[1],1);
    std::string::~string(asStack_28);
    nop();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueen::onGridItemInitialize() */

void __thiscall
GridItemCardGameZombieMirrorQueen::onGridItemInitialize(GridItemCardGameZombieMirrorQueen *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemCardGameZombie::onGridItemInitialize((GridItemCardGameZombie *)this);
  GenerateMirror();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddThrowCount);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<GridItemCardGameZombieMirrorQueen,void(GridItemCardGameZombieMirrorQueen::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::SummonFairytaleGargantuar() */

void __thiscall
GridItemCardGameZombieMirrorQueen::SummonFairytaleGargantuar
          (GridItemCardGameZombieMirrorQueen *this)

{
  int iVar1;
  GridItemCardGameZombieMirrorQueenProps *pGVar2;
  string *psVar3;
  ZombieType *this_00;
  int iVar4;
  Board *pBVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieMirrorQueen::SummonFairytaleGargantuar");
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
  iVar1 = *(int *)(pGVar2 + 0x180);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"card_game_enemy_fairy_tale_gargantuar");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddZombie(pBVar5,asStack_10,0xfffffffb,*(undefined4 *)(this + 0x50),0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    } while (iVar4 != iVar1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieMirrorQueen::GenerateZombieActions(GridItemCardGameZombieMirrorQueen *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieMirrorQueenProps *pGVar3;
  GridItemCardGameZombieAction *pGVar4;
  GridItemCardGameZombieActionData *pGVar5;
  Delegate0 *pDVar6;
  ulong uVar7;
  code *pcVar8;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieMirrorQueen::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieMirrorQueenProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonFairytaleGargantuar);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieMirrorQueen,void(GridItemCardGameZombieMirrorQueen::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ThrowApple);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieMirrorQueen,void(GridItemCardGameZombieMirrorQueen::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e25248(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e25278(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e2525c(local_70,uVar7);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar6);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar4,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar7 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::FindTargets() */

void __thiscall
GridItemCardGameZombieMirrorQueen::FindTargets(GridItemCardGameZombieMirrorQueen *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  GridItem *this_00;
  undefined8 uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtObject *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItem *local_60 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar6 = operator|(1,2);
  uVar3 = operator|(uVar6,4);
  EntityFinder::GetEntities(avStack_50,uVar3);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    local_78 = (RtObject *)*plVar7;
    if ((local_78 != (RtObject *)0x0) && (cVar1 = RealObject::IsOnTeam(local_78,1), cVar1 != '\0'))
    {
      this_00 = Sexy::RtObject::Cast<GridItem>(local_78);
      if (this_00 == (GridItem *)0x0) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                   (BoardEntity **)&local_78);
      }
      else {
        local_60[0] = (GridItem *)
                      Sexy::RtObject::Cast<GridItemCardGameGravestoneZombieTimeSpawner>
                                ((RtObject *)this_00);
        if (local_60[0] == (GridItem *)0x0) {
          local_60[0] = this_00;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                     (BoardEntity **)local_60);
        }
        else {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                     (BoardEntity **)local_60);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_38);
  BoardEntity::CalcGridPosition();
  EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
            ((BoardEntitySorter_Closest *)local_60,(__normal_iterator *)&local_68);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
            (uVar6,uVar8,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
            ((BoardEntitySorter_Closest *)local_60,(__normal_iterator *)&local_68);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
            (uVar6,uVar8,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60);
  iVar4 = FUN_04e25280(local_38,local_30);
  iVar5 = FUN_04e25280(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::reserve
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,(long)(iVar5 + iVar4));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60,(__normal_iterator *)&local_68);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)&local_38);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ();
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_60,(__normal_iterator *)&local_68);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)&local_20);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueen::ThrowApple() */

void __thiscall
GridItemCardGameZombieMirrorQueen::ThrowApple(GridItemCardGameZombieMirrorQueen *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets(this);
  uVar4 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar3 = FUN_04e25280(local_20,local_18);
    if ((uVar3 <= uVar4) || (*(int *)(this + 0x208) <= (int)uVar4)) break;
    puVar2 = (undefined8 *)FUN_04e2528c(uVar1,uVar4);
    ThrowAppleTarget(this,(BoardEntity *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueen::onPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void GridItemCardGameZombieMirrorQueen::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    bVar1 = std::operator==(param_3,"skill1");
    if (bVar1) {
      SummonFairytaleGargantuar((GridItemCardGameZombieMirrorQueen *)param_1);
      return;
    }
    bVar1 = std::operator==(param_3,"skill2");
    if (bVar1) {
      ThrowApple((GridItemCardGameZombieMirrorQueen *)param_1);
      return;
    }
  }
  GridItemCardGameZombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

