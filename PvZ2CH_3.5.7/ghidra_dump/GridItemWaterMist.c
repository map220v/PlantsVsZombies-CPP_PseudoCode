// Class: GridItemWaterMist


/* GridItemWaterMist::SetType(int) */

void __thiscall GridItemWaterMist::SetType(GridItemWaterMist *this,int param_1)

{
  *(int *)(this + 0x1ac) = param_1;
  return;
}


/* GridItemWaterMist::SetAvatar(bool) */

void __thiscall GridItemWaterMist::SetAvatar(GridItemWaterMist *this,bool param_1)

{
  this[0x1b0] = (GridItemWaterMist)param_1;
  return;
}


/* GridItemWaterMist::SetExtraAttackRate(float) */

void __thiscall GridItemWaterMist::SetExtraAttackRate(GridItemWaterMist *this,float param_1)

{
  *(float *)(this + 0x1c4) = param_1;
  return;
}


/* GridItemWaterMist::OnZombieEnter(Zombie*) */

void __thiscall GridItemWaterMist::OnZombieEnter(GridItemWaterMist *this,Zombie *param_1)

{
  if (*(int *)(this + 0x1ac) != 3) {
    (**(code **)(*(long *)this + 0x2b0))(this,param_1);
    return;
  }
  (**(code **)(*(long *)this + 0x2a8))();
  (**(code **)(*(long *)this + 0x2b0))(this,param_1);
  return;
}


/* GridItemWaterMist::CalcRenderOrder() const */

void __thiscall GridItemWaterMist::CalcRenderOrder(GridItemWaterMist *this)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(this + 0x1b8),*(undefined4 *)(this + 0x1b4));
  return;
}


/* non-virtual thunk to GridItemWaterMist::CalcRenderOrder() const */

void __thiscall GridItemWaterMist::CalcRenderOrder(GridItemWaterMist *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::StaticClassInit() */

void GridItemWaterMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWaterMist");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc4c4c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMist::StaticGetClass() */

long * GridItemWaterMist::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterMist::GetClass() const */

long * GridItemWaterMist::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterMist::RecoverPlant(Plant*) */

void __thiscall GridItemWaterMist::RecoverPlant(GridItemWaterMist *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::EndCondition(param_1,0xf);
    Plant::EndLossLife(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::CreateEffect(std::string, int, int, RenderLayer) */

void GridItemWaterMist::CreateEffect
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               SharkMinion *param_2,undefined8 param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  int local_30;
  int local_2c;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  fVar6 = 16.0;
  local_8 = ___stack_chk_guard;
  uVar3 = SharkMinion::getRow(param_2);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
  uVar3 = Board::MakeRenderOrder(param_6,uVar3,uVar4);
  Sexy::Point::Point((Point *)&local_18,param_4,param_5);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar6 = (float)Board::calculateRoofOffsetZ((float)local_30);
    fVar6 = (float)(int)(fVar6 + 16.0);
  }
  FUN_05475d88(asStack_20,param_3);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)local_2c,fVar6);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar3,0,1);
  std::string::~string(asStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    uVar5 = FUN_0547429c(param_3);
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemWaterMist::CreateEffect pam = %s gridX=%d gridY=%d",uVar5,
               (ulong)*(uint *)(param_2 + 0x1b4),(ulong)*(uint *)(param_2 + 0x1b8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_28);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* GridItemWaterMist::OnEndEffectCompleted(StandaloneEffect*) */

void __thiscall
GridItemWaterMist::OnEndEffectCompleted(GridItemWaterMist *this,StandaloneEffect *param_1)

{
  StandaloneEffect *extraout_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  nop();
  if (param_1 != extraout_x0) {
    return;
  }
  *(undefined4 *)(this + 0x1a8) = 4;
  Sexy::OutputDebugStrF((wchar_t *)"_state = WaterMist_Destroy");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::onDestroy() */

void __thiscall GridItemWaterMist::onDestroy(GridItemWaterMist *this)

{
  WaterMistTileSubSystem *pWVar1;
  code *pcVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1c8] == (GridItemWaterMist)0x0) {
    pWVar1 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pcVar2 = *(code **)(*(long *)pWVar1 + 0xa0);
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x1b4));
    (*pcVar2)(pWVar1,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMist::GridItemWaterMist() */

void __thiscall GridItemWaterMist::GridItemWaterMist(GridItemWaterMist *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0699a8d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWaterMist_0699ab98;
  Sexy::Point::Point((Point *)(this + 0x1b4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieEnter);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemWaterMist,void(GridItemWaterMist::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieEnter,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemWaterMist,void(GridItemWaterMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  return;
}


/* GridItemWaterMist::StaticNew() */

GridItemWaterMist * GridItemWaterMist::StaticNew(void)

{
  GridItemWaterMist *this;
  
  this = ::operator_new(0x1f8);
  GridItemWaterMist(this);
  return this;
}


/* GridItemWaterMist::~GridItemWaterMist() */

void __thiscall GridItemWaterMist::~GridItemWaterMist(GridItemWaterMist *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__GridItemWaterMist_0699ab98;
  *(undefined ***)this = &PTR_GetClass_0699a8d0;
  puVar1 = gMessageRouter;
  this_00 = (RtWeakPtr *)(this + 0x1d0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieEnter);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Unsubscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemWaterMist,void(GridItemWaterMist::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieEnter,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemWaterMist,void(GridItemWaterMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar3 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = (RtWeakPtr *)(this + 0x1d8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar2) {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
    if (cVar3 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWaterMist::~GridItemWaterMist() */

void __thiscall GridItemWaterMist::~GridItemWaterMist(GridItemWaterMist *this)

{
  ~GridItemWaterMist(this + -0x10);
  return;
}


/* GridItemWaterMist::~GridItemWaterMist() */

void __thiscall GridItemWaterMist::~GridItemWaterMist(GridItemWaterMist *this)

{
  ~GridItemWaterMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWaterMist::~GridItemWaterMist() */

void __thiscall GridItemWaterMist::~GridItemWaterMist(GridItemWaterMist *this)

{
  ~GridItemWaterMist(this + -0x10);
  return;
}


/* GridItemWaterMist::BufferPlantAttack(Plant*) */

void __thiscall GridItemWaterMist::BufferPlantAttack(GridItemWaterMist *this,Plant *param_1)

{
  GridItemWaterMistProps *pGVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar2 = (float)FUN_04cbfc34(*(undefined4 *)(pGVar1 + 0xd0),pGVar1 + 0xd4,0);
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar3 = (float)FUN_04cbfd4c(*(undefined4 *)(pGVar1 + 0xd8),pGVar1 + 0xdc);
    Plant::SetAttackUpValue(param_1,true,fVar2,fVar3 + *(float *)(this + 0x1c4));
    return;
  }
  return;
}


/* GridItemWaterMist::BufferPlantHealth(Plant*) */

void __thiscall GridItemWaterMist::BufferPlantHealth(GridItemWaterMist *this,Plant *param_1)

{
  GridItemWaterMistProps *pGVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar2 = (float)FUN_04cbfc48(*(undefined4 *)(pGVar1 + 0xe0),pGVar1 + 0xe4,this[0x1b0]);
    Plant::GetMaxHitpoints(param_1);
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar3 = (float)FUN_04cbfc34(*(undefined4 *)(pGVar1 + 0xd0),pGVar1 + 0xd4,this[0x1b0]);
    Plant::StartCureLife(param_1,fVar3,fVar2);
    return;
  }
  return;
}


/* GridItemWaterMist::BufferPlantSpeed(Plant*) */

void __thiscall GridItemWaterMist::BufferPlantSpeed(GridItemWaterMist *this,Plant *param_1)

{
  GridItemWaterMistProps *pGVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar2 = (float)FUN_04cbfc34(*(undefined4 *)(pGVar1 + 0xd0),pGVar1 + 0xd4,this[0x1b0]);
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    fVar3 = (float)FUN_04cbfc5c(*(undefined4 *)(pGVar1 + 0xe8));
    Plant::ChangeSpeedModifier(param_1,(fVar3 + 1.0) * *(float *)(param_1 + 0xe0),fVar2);
    return;
  }
  return;
}


/* GridItemWaterMist::BufferPlant(Plant*) */

void __thiscall GridItemWaterMist::BufferPlant(GridItemWaterMist *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    BufferPlantAttack(this,param_1);
    BufferPlantHealth(this,param_1);
    if (*(int *)(this + 0x1ac) == 1) {
      BufferPlantSpeed(this,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::OnCreatePlant(Plant*) */

void __thiscall GridItemWaterMist::OnCreatePlant(GridItemWaterMist *this,Plant *param_1)

{
  char cVar1;
  BoardTransforms *this_00;
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this + 0x1b4),aTStack_10);
  if (cVar1 != '\0') {
    BufferPlant(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMist::NerfZombie(Zombie*) */

void __thiscall GridItemWaterMist::NerfZombie(GridItemWaterMist *this,Zombie *param_1)

{
  GridItemWaterMistProps *pGVar1;
  Zombie *pZVar2;
  
  if (param_1 != (Zombie *)0x0) {
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    pZVar2._0_4_ = (Zombie *)FUN_04cbfc60(*(undefined4 *)(pGVar1 + 0xec));
    Zombie::ApplyCondition(pZVar2._0_4_,0,param_1,1,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayEffect(std::string, std::string, int, int, bool, std::string) */

void GridItemWaterMist::PlayEffect
               (RtWeakPtr<Sexy::SoundResource> *param_1,SharkMinion *param_2,undefined8 param_3,
               undefined8 param_4,int param_5,int param_6,char param_7,string *param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Effect_PopAnim *this;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_78;
  int local_74;
  RtWeakPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x1a8) == 4) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
    goto LAB_04cc332c;
  }
  uVar3 = SharkMinion::getRow(param_2);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
  uVar3 = Board::MakeRenderOrder(0x64960,uVar3,uVar4);
  Sexy::Point::Point((Point *)&local_60,param_5,param_6);
  BoardTransforms::GridToBoardSpace((Point *)&local_60);
  FUN_05475d88(asStack_68,param_3);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)local_78,(float)local_74,0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_70,local_60,local_5c,local_58,asStack_68,uVar3,0,1);
  std::string::~string(asStack_68);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_70), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    if (param_7 == '\0') {
      Effect_PopAnim::PlaySingleAnimation(this,param_4,0);
      bVar1 = std::operator!=(param_8,"");
      if (bVar1) goto LAB_04cc3418;
    }
    else {
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(this,param_4,0);
      bVar1 = std::operator!=(param_8,"");
      if (bVar1) {
LAB_04cc3418:
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                   (Point *)&local_60,param_8);
        StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        Sexy::RtId::~RtId((RtId *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68)
        ;
      }
    }
    uVar5 = FUN_0547429c(param_3);
    uVar6 = FUN_0547429c(param_4);
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemWaterMist::PlayEffect pam = %s, anim = %s gridX=%d gridY=%d",
               uVar5,uVar6,(ulong)*(uint *)(param_2 + 0x1b4),(ulong)*(uint *)(param_2 + 0x1b8));
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"GridItemWaterMist::PlayEffect not valid effect in water mist")
    ;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
LAB_04cc332c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayUpEffect() */

void __thiscall GridItemWaterMist::PlayUpEffect(GridItemWaterMist *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *__s;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1ac) == 1) {
    __s = "hit3";
  }
  else {
    __s = "hit2";
  }
  std::string::string(asStack_30,__s);
  nop();
  FUN_05475d88(asStack_28,&DAT_06b95d88);
  FUN_05475d88(asStack_20,asStack_30);
  uVar1 = *(undefined4 *)(this + 0x1b4);
  uVar2 = *(undefined4 *)(this + 0x1b8);
  std::string::string(asStack_18,"");
  PlayEffect(aRStack_10,this,asStack_28,asStack_20,uVar1,uVar2,0,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayFreezeEffect() */

void __thiscall GridItemWaterMist::PlayFreezeEffect(GridItemWaterMist *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"plantfood2_hit_stage2");
  nop();
  FUN_05475d88(asStack_28,&DAT_06b95d88);
  FUN_05475d88(asStack_20,asStack_30);
  uVar1 = *(undefined4 *)(this + 0x1b4);
  uVar2 = *(undefined4 *)(this + 0x1b8);
  std::string::string(asStack_18,"");
  PlayEffect(aRStack_10,this,asStack_28,asStack_20,uVar1,uVar2,0,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayExplodeEffect() */

void __thiscall GridItemWaterMist::PlayExplodeEffect(GridItemWaterMist *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"POPANIM_EFFECTS_ALOES_EXPLODE");
  nop();
  std::string::string(asStack_30,"idle");
  nop();
  FUN_05475d88(asStack_28,asStack_38);
  FUN_05475d88(asStack_20,asStack_30);
  uVar1 = *(undefined4 *)(this + 0x1b4);
  uVar2 = *(undefined4 *)(this + 0x1b8);
  std::string::string(asStack_18,"");
  PlayEffect(aRStack_10,this,asStack_28,asStack_20,uVar1,uVar2,0,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayEffect(Sexy::RtWeakPtr<GameObject>, std::string, bool, std::string) */

void __thiscall
GridItemWaterMist::PlayEffect
          (GridItemWaterMist *this,RtWeakPtr *param_2,undefined8 param_3,char param_4,
          string *param_5)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  Effect_PopAnim *this_00;
  undefined8 uVar4;
  RtMixedPtr aRStack_60 [8];
  RtId aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  if (*(int *)(this + 0x1a8) != 4) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (bVar1) {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        nop();
        cVar3 = FUN_04cbfbd4(this_00[0x88]);
        if (cVar3 == '\0') {
          StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
        }
        Effect_PopAnim::SetCentered(this_00,true);
        if (param_4 == '\0') {
          Effect_PopAnim::PlaySingleAnimation(this_00,param_3,0);
        }
        else {
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(this_00,param_3,0);
        }
        bVar1 = std::operator!=(param_5,"");
        if (bVar1) {
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
          RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                     aRStack_58,param_5);
          StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          Sexy::RtId::~RtId(aRStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        }
        uVar4 = FUN_0547429c(param_3);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"GridItemWaterMist::PlayEffect anim = %s gridX=%d gridY=%d",uVar4,
                   (ulong)*(uint *)(this + 0x1b4),(ulong)*(uint *)(this + 0x1b8));
        goto LAB_04cc389c;
      }
    }
    cVar2 = '\0';
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemWaterMist::PlayEffect 2 not valid effect in water mist");
  }
LAB_04cc389c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayStartEffect() */

void __thiscall GridItemWaterMist::PlayStartEffect(GridItemWaterMist *this)

{
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"hit1_fog_on");
  nop();
  std::string::string(asStack_28,"hit1_water_on");
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d0));
  FUN_05475d88(asStack_18,asStack_30);
  std::string::string(asStack_10,"OnStartEffectCompleted");
  PlayEffect(this,aRStack_20,asStack_18,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d8));
  FUN_05475d88(asStack_18,asStack_28);
  std::string::string(asStack_10,"");
  PlayEffect(this,aRStack_20,asStack_18,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  *(undefined4 *)(this + 0x1a8) = 1;
  Sexy::OutputDebugStrF((wchar_t *)"_state = WaterMist_Start");
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayLoopEffect() */

void __thiscall GridItemWaterMist::PlayLoopEffect(GridItemWaterMist *this)

{
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"hit1_fog");
  nop();
  std::string::string(asStack_28,"hit1_water");
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d0));
  FUN_05475d88(asStack_18,asStack_30);
  std::string::string(asStack_10,"");
  PlayEffect(this,aRStack_20,asStack_18,1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d8));
  FUN_05475d88(asStack_18,asStack_28);
  std::string::string(asStack_10,"");
  PlayEffect(this,aRStack_20,asStack_18,1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  *(undefined4 *)(this + 0x1a8) = 2;
  Sexy::OutputDebugStrF((wchar_t *)"_state = WaterMist_Loop");
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMist::TurnToLoop() */

void __thiscall GridItemWaterMist::TurnToLoop(GridItemWaterMist *this)

{
  undefined4 uVar1;
  
  if ((1 < *(uint *)(this + 0x1a8)) && (*(uint *)(this + 0x1a8) != 4)) {
    PlayLoopEffect(this);
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x1bc) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::PlayEndEffect() */

void __thiscall GridItemWaterMist::PlayEndEffect(GridItemWaterMist *this)

{
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"hit1_fog_off");
  nop();
  std::string::string(asStack_28,"hit1_water_off");
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d0));
  FUN_05475d88(asStack_18,asStack_30);
  std::string::string(asStack_10,"OnEndEffectCompleted");
  PlayEffect(this,aRStack_20,asStack_18,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x1d8));
  FUN_05475d88(asStack_18,asStack_28);
  std::string::string(asStack_10,"");
  PlayEffect(this,aRStack_20,asStack_18,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  *(undefined4 *)(this + 0x1a8) = 3;
  Sexy::OutputDebugStrF((wchar_t *)"_state = WaterMist_End");
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::DoWaterMistEffect(Sexy::Point) */

void __thiscall GridItemWaterMist::DoWaterMistEffect(GridItemWaterMist *this,TPoint *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  PoisonMistTileSubSystem *pPVar4;
  long lVar5;
  Plant *extraout_x0;
  Zombie *extraout_x0_00;
  code *pcVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = Board::GetGameSubSystem<PoisonMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar5 = FUN_04cc4200(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (lVar5 != 0) {
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::CleanPoison,*(int *)param_2,
               *(int *)(param_2 + 4),true);
  }
  lVar5 = FUN_04cc42e4(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (lVar5 != 0) {
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::CleanPoison,*(int *)param_2,
               *(int *)(param_2 + 4),true);
  }
  lVar5 = FUN_04cc43c8(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (lVar5 != 0) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GridItemFireCracker,false);
  }
  lVar5 = FUN_04cc44ac(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (lVar5 != 0) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GridItemSummerFireworks,false);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
             *(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  lVar5 = FUN_04cbfc80(local_20,local_18);
  if (lVar5 != 0) {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      pcVar6 = *(code **)(*(long *)pPVar4 + 0xa8);
      Sexy::Point::Point((Point *)&local_28,param_2);
      cVar2 = (*pcVar6)(pPVar4,(Point *)&local_28);
      if (cVar2 != '\0') {
        RecoverPlant(this,extraout_x0);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"GridItemWaterMist::DoWaterMistEffect RecoverPlant x=%d y=%d",
                   (ulong)*(uint *)param_2,(ulong)*(uint *)(param_2 + 4));
      }
      BufferPlant(this,extraout_x0);
      PlayUpEffect(this);
      Sexy::OutputDebugStrF
                ((wchar_t *)"GridItemWaterMist::DoWaterMistEffect BufferPlant x=%d y=%d",
                 (ulong)*(uint *)param_2,(ulong)*(uint *)(param_2 + 4));
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  pcVar6 = *(code **)(*(long *)pPVar4 + 0xa8);
  Sexy::Point::Point((Point *)&local_28,param_2);
  cVar2 = (*pcVar6)(pPVar4,(Point *)&local_28);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 0x1ac);
  }
  else {
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::CleanPoison,*(int *)param_2,
               *(int *)(param_2 + 4),true);
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemWaterMist::DoWaterMistEffect PostMessage::CleanPoison x=%d y=%d",
               (ulong)*(uint *)param_2,(ulong)*(uint *)(param_2 + 4));
    iVar1 = *(int *)(this + 0x1ac);
  }
  if (iVar1 == 3) {
    PlayFreezeEffect(this);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               *(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
    lVar5 = FUN_04cbfc80(local_20,local_18);
    if (lVar5 != 0) {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar3) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        nop();
        OnZombieEnter(this,extraout_x0_00);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      Sexy::OutputDebugStrF((wchar_t *)"GridItemWaterMist::DoWaterMistEffect Nerf Zombie");
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::OnStartEffectCompleted(StandaloneEffect*) */

void __thiscall
GridItemWaterMist::OnStartEffectCompleted(GridItemWaterMist *this,StandaloneEffect *param_1)

{
  StandaloneEffect *extraout_x0;
  GridItemWaterMistProps *pGVar1;
  undefined4 uVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  nop();
  if ((param_1 == extraout_x0) && (*(int *)(this + 0x1a8) != 4)) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1bc) = uVar2;
    pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
    uVar2 = FUN_04cbfc34(*(undefined4 *)(pGVar1 + 0xd0),pGVar1 + 0xd4,this[0x1b0]);
    *(undefined4 *)(this + 0x1c0) = uVar2;
    PlayLoopEffect(this);
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x1b4));
    DoWaterMistEffect(this,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::onGridItemInitialize() */

void __thiscall GridItemWaterMist::onGridItemInitialize(GridItemWaterMist *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  BoardTransforms *this_02;
  StandaloneEffect *this_03;
  StandaloneEffect *this_04;
  GridItemWaterMistProps *pGVar1;
  StandaloneEffect *this_05;
  StandaloneEffect *this_06;
  WaterMistTileSubSystem *pWVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1ac) = 0;
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  this[0x1b0] = (GridItemWaterMist)0x0;
  *(undefined4 *)(this + 0x1c4) = 0;
  this_02 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_02,*(float *)this_02,*(float *)(this_02 + 4));
  *(undefined8 *)(this + 0x1b4) = local_20;
  this[0x1c8] = (GridItemWaterMist)0x0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x1bc) = uVar4;
  *(undefined4 *)(this + 0x1c0) = 0x40a00000;
  FUN_05475d88(asStack_18,&DAT_06b95d88);
  CreateEffect(aRStack_10,this,asStack_18,*(undefined4 *)(this + 0x1b4),
               *(undefined4 *)(this + 0x1b8),0x64960);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  StandaloneEffect::SetKeepAlive(this_03,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  StandaloneEffect::SetVisibility(this_04,false);
  pGVar1 = GridItem::GetProps<GridItemWaterMistProps>();
  FUN_05475d88(asStack_18,pGVar1 + 0x98);
  CreateEffect(aRStack_10,this,asStack_18,*(undefined4 *)(this + 0x1b4),
               *(undefined4 *)(this + 0x1b8),0x62250);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  nop();
  StandaloneEffect::SetKeepAlive(this_05,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  nop();
  StandaloneEffect::SetVisibility(this_06,false);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1f0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pWVar2 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar3 = *(code **)(*(long *)pWVar2 + 0x90);
  Sexy::Point::Point((Point *)aRStack_10,(TPoint *)&local_20);
  (*pcVar3)(pWVar2,aRStack_10);
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMist::onUpdate() */

void __thiscall GridItemWaterMist::onUpdate(GridItemWaterMist *this)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(this + 0x1a8);
  if (iVar1 == 2) {
    cVar2 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1c0),*(float *)(this + 0x1bc));
    if (cVar2 != '\0') {
      PlayEndEffect(this);
    }
  }
  else {
    if (iVar1 == 4) {
      (**(code **)(*(long *)this + 0x230))();
      GridItemAnimation::onUpdate((GridItemAnimation *)this);
      return;
    }
    if (iVar1 == 0) {
      PlayStartEffect(this);
      GridItemAnimation::onUpdate((GridItemAnimation *)this);
      return;
    }
  }
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMist::KillGridItem() */

void __thiscall GridItemWaterMist::KillGridItem(GridItemWaterMist *this)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  WaterMistTileSubSystem *pWVar4;
  long lVar5;
  Plant *this_00;
  long *plVar6;
  code *pcVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  pRVar1 = (RtWeakPtr *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  pWVar4 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar7 = *(code **)(*(long *)pWVar4 + 0xa0);
  Sexy::Point::Point((Point *)&local_20,(TPoint *)(this + 0x1b4));
  (*pcVar7)(pWVar4,(Point *)&local_20);
  this[0x1c8] = (GridItemWaterMist)0x1;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1);
    if (cVar3 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar6 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x1d8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar1);
    if (cVar3 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar6 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((Point *)&local_20,1,*(undefined4 *)(this + 0x1b4),*(undefined4 *)(this + 0x1b8));
  lVar5 = FUN_04cbfc80(local_20,local_18);
  if (lVar5 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      if (this_00 != (Plant *)0x0) {
        Plant::EndCureLife(this_00);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  GridItem::KillGridItem((GridItem *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

