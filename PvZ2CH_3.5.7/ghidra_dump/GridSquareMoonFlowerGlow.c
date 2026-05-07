// Class: GridSquareMoonFlowerGlow


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::StaticClassInit() */

void GridSquareMoonFlowerGlow::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareMoonFlowerGlow");
    (*pcVar2)(plVar1,asStack_10,FUN_03e84528,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareMoonFlowerGlow::StaticGetClass() */

long * GridSquareMoonFlowerGlow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareMoonFlowerGlow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareMoonFlowerGlow::GetClass() const */

long * GridSquareMoonFlowerGlow::GetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareMoonFlowerGlow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareMoonFlowerGlow::getPamName() */

char * GridSquareMoonFlowerGlow::getPamName(void)

{
  return "POPANIM_EFFECTS_MOONFLOWER_EFFECT";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::GridSquareMoonFlowerGlow() */

void __thiscall GridSquareMoonFlowerGlow::GridSquareMoonFlowerGlow(GridSquareMoonFlowerGlow *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678ec00;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareMoonFlowerGlow_0678ede8;
  Sexy::Point::Point((Point *)(this + 0xa4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareMoonFlowerGlow::StaticNew() */

GridSquareMoonFlowerGlow * GridSquareMoonFlowerGlow::StaticNew(void)

{
  GridSquareMoonFlowerGlow *this;
  
  this = ::operator_new(0xb8);
  GridSquareMoonFlowerGlow(this);
  return this;
}


/* GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow() */

void __thiscall GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow(GridSquareMoonFlowerGlow *this)

{
  *(undefined ***)this = &PTR_GetClass_0678ec00;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareMoonFlowerGlow_0678ede8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow() */

void __thiscall GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow(GridSquareMoonFlowerGlow *this)

{
  ~GridSquareMoonFlowerGlow(this + -0x10);
  return;
}


/* GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow() */

void __thiscall GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow(GridSquareMoonFlowerGlow *this)

{
  ~GridSquareMoonFlowerGlow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow() */

void __thiscall GridSquareMoonFlowerGlow::~GridSquareMoonFlowerGlow(GridSquareMoonFlowerGlow *this)

{
  ~GridSquareMoonFlowerGlow(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::createExitEffect(Sexy::SexyVector3) */

void GridSquareMoonFlowerGlow::createExitEffect
               (float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  MoonFlowerGlowAnimEffect *this;
  char *__s;
  PopAnim *pPVar2;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  this = Board::AddEffect<MoonFlowerGlowAnimEffect>(*(Board **)(gLawnApp + 0x9f0));
  __s = (char *)getPamName();
  std::string::string(asStack_18,__s);
  GetPAMByName(asStack_18);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string((string *)aRStack_10,"end");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_28 = Board::calculateRoofOffsetZ(local_30);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_30,-1);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  uVar1 = Board::MakeRenderOrder(0x61c74,*(undefined4 *)(param_4 + 0xa8),0);
  FUN_03e83d98(this + 0x1c,uVar1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridSquareMoonFlowerGlow::DoExit() */

void __thiscall GridSquareMoonFlowerGlow::DoExit(GridSquareMoonFlowerGlow *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
    ;
    cVar2 = FUN_03e83da0(*(undefined1 *)(lVar3 + 0x109));
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      createExitEffect(*puVar4,puVar4[1],puVar4[2],this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::addStartingAnimationSequence(Effect_PopAnim*) */

void __thiscall
GridSquareMoonFlowerGlow::addStartingAnimationSequence
          (GridSquareMoonFlowerGlow *this,Effect_PopAnim *param_1)

{
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_28,"spawn");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animation_loop");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(param_1,(AnimationSequence *)aPStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::createSpawnAndLoopEffect(Sexy::SexyVector3) */

void GridSquareMoonFlowerGlow::createSpawnAndLoopEffect
               (RtWeakPtr<Sexy::SoundResource> *param_1,float param_2,undefined4 param_3,
               undefined4 param_4,GridSquareMoonFlowerGlow *param_5)

{
  undefined4 uVar1;
  MoonFlowerGlowAnimEffect *this;
  char *__s;
  PopAnim *pPVar2;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  this = Board::AddEffect<MoonFlowerGlowAnimEffect>(*(Board **)(gLawnApp + 0x9f0));
  __s = (char *)getPamName();
  std::string::string(asStack_18,__s);
  GetPAMByName(asStack_18);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  addStartingAnimationSequence(param_5,(Effect_PopAnim *)this);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_28 = Board::calculateRoofOffsetZ(local_30);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_30,-1);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  uVar1 = Board::MakeRenderOrder(0x61c74,*(undefined4 *)(param_5 + 0xa8),0);
  FUN_03e83d98(this + 0x1c,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareMoonFlowerGlow::StartEffect(Sexy::Point) */

void __thiscall
GridSquareMoonFlowerGlow::StartEffect(GridSquareMoonFlowerGlow *this,undefined8 *param_2)

{
  int local_38;
  int local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Point *local_8;
  
  *(undefined8 *)(this + 0xa4) = *param_2;
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xa4),___stack_chk_guard);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)local_38,(float)local_34,0.0);
  createSpawnAndLoopEffect(aRStack_30,local_28,local_24,local_20,this);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

