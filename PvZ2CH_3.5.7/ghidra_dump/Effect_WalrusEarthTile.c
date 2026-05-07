// Class: Effect_WalrusEarthTile


/* Effect_WalrusEarthTile::onDraw(Sexy::Graphics*) */

void Effect_WalrusEarthTile::onDraw(Graphics *param_1)

{
  PopAnimRig *this;
  Graphics *in_x1;
  
  this = (PopAnimRig *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0))
  ;
  PopAnimRig::Draw(this,in_x1);
  return;
}


/* Effect_WalrusEarthTile::~Effect_WalrusEarthTile() */

void __thiscall Effect_WalrusEarthTile::~Effect_WalrusEarthTile(Effect_WalrusEarthTile *this)

{
  *(undefined ***)this = &PTR_GetClass_068d79b0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_WalrusEarthTile::~Effect_WalrusEarthTile() */

void __thiscall Effect_WalrusEarthTile::~Effect_WalrusEarthTile(Effect_WalrusEarthTile *this)

{
  ~Effect_WalrusEarthTile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusEarthTile::StaticClassInit() */

void Effect_WalrusEarthTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_WalrusEarthTile");
    (*pcVar2)(plVar1,asStack_10,FUN_04776ae4,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_WalrusEarthTile::StaticGetClass() */

long * Effect_WalrusEarthTile::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_WalrusEarthTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_WalrusEarthTile::GetClass() const */

long * Effect_WalrusEarthTile::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_WalrusEarthTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusEarthTile::MissSelf() */

void __thiscall Effect_WalrusEarthTile::MissSelf(Effect_WalrusEarthTile *this)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x114] == (Effect_WalrusEarthTile)0x0) {
    this[0x114] = (Effect_WalrusEarthTile)0x1;
    if (this[0x115] == (Effect_WalrusEarthTile)0x0) {
      __s = "idle2_3";
    }
    else {
      __s = "idle1_3";
    }
    std::string::string(asStack_10,__s);
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_WalrusEarthTile::OnRowMissWalrus(int) */

void __thiscall Effect_WalrusEarthTile::OnRowMissWalrus(Effect_WalrusEarthTile *this,int param_1)

{
  if (*(int *)(this + 0x110) != param_1) {
    return;
  }
  MissSelf(this);
  return;
}


/* Effect_WalrusEarthTile::OnColMissWalrus(int) */

void __thiscall Effect_WalrusEarthTile::OnColMissWalrus(Effect_WalrusEarthTile *this,int param_1)

{
  if (*(int *)(this + 0x10c) != param_1) {
    return;
  }
  MissSelf(this);
  return;
}


/* Effect_WalrusEarthTile::Effect_WalrusEarthTile() */

void __thiscall Effect_WalrusEarthTile::Effect_WalrusEarthTile(Effect_WalrusEarthTile *this)

{
  float fVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_068d79b0;
  Sexy::Point::Point((Point *)(this + 0x10c));
  this[0x114] = (Effect_WalrusEarthTile)0x0;
  this[0x115] = (Effect_WalrusEarthTile)0x0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x118) = fVar1 + 30.0;
  return;
}


/* Effect_WalrusEarthTile::StaticNew() */

Effect_WalrusEarthTile * Effect_WalrusEarthTile::StaticNew(void)

{
  Effect_WalrusEarthTile *this;
  
  this = ::operator_new(0x120);
  Effect_WalrusEarthTile(this);
  return this;
}


/* Effect_WalrusEarthTile::registerForEvents() */

void __thiscall Effect_WalrusEarthTile::registerForEvents(Effect_WalrusEarthTile *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGatherPlantingRestrictions);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<Effect_WalrusEarthTile,void(Effect_WalrusEarthTile::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRowMissWalrus);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<Effect_WalrusEarthTile,void(Effect_WalrusEarthTile::*)(int)>>
            ((MessageRouter *)puVar1,Message::RowMissWalrus,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnColMissWalrus);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<Effect_WalrusEarthTile,void(Effect_WalrusEarthTile::*)(int)>>
            ((MessageRouter *)puVar1,Message::ColMissWalrus,&local_90);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusEarthTile::SetInitDate(Sexy::Point&, float, bool) */

void __thiscall
Effect_WalrusEarthTile::SetInitDate
          (Effect_WalrusEarthTile *this,Point *param_1,float param_2,bool param_3)

{
  BoardTransforms *this_00;
  char cVar1;
  undefined4 uVar2;
  ResourceInfo *pRVar3;
  char *__s;
  string *psVar4;
  RtMixedPtrBase aRStack_40 [8];
  int local_38;
  int local_34;
  Vec3 aVStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  this[0x115] = (Effect_WalrusEarthTile)param_3;
  *(float *)(this + 0x118) = param_2;
  local_8 = ___stack_chk_guard;
  psVar4 = *(string **)(gLawnApp + 0x848);
  std::string::string((string *)local_20,"POPANIM_EFFECTS_WALRUS_EARTH_TILE");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar4,SUB81((string *)local_20,0));
  std::string::~string((string *)local_20);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 != '\0') {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_20);
    if (param_3) {
      std::string::string((string *)aVStack_30,"idle1_1");
      AnimationSequence::AddSingleAnimation((string *)local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      __s = "idle1_2";
    }
    else {
      std::string::string((string *)aVStack_30,"idle2_1");
      AnimationSequence::AddSingleAnimation((string *)local_20,aVStack_30,0);
      std::string::~string((string *)aVStack_30);
      nop();
      __s = "idle2_2";
    }
    std::string::string((string *)aVStack_30,__s);
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation((string *)local_20,aVStack_30,0);
    std::string::~string((string *)aVStack_30);
    nop();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)local_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)local_20);
  }
  Sexy::Point::Point((Point *)local_20,*(int *)param_1,*(int *)(param_1 + 4));
  this_00 = (BoardTransforms *)(this + 0x10c);
  *(undefined8 *)this_00 = local_20[0];
  BoardTransforms::GridToBoardSpaceRect(this_00,(Point *)this_00);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_38,(TPoint *)aVStack_30);
  EATextSquish::Vec3::Vec3(aVStack_30,(float)local_38,(float)local_34,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_30,-1);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  uVar2 = Board::MakeGroundRenderOrder(*(int *)(param_1 + 4),1);
  FUN_04776760(this + 0x1c,uVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusEarthTile::OnGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
Effect_WalrusEarthTile::OnGatherPlantingRestrictions
          (Effect_WalrusEarthTile *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)(this + 0x10c));
  if ((cVar1 != '\0') && (this[0x115] == (Effect_WalrusEarthTile)0x0)) {
    local_c = 0x33;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_WalrusEarthTile::onUpdate() */

void __thiscall Effect_WalrusEarthTile::onUpdate(Effect_WalrusEarthTile *this)

{
  float fVar1;
  float fVar2;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar2 = *(float *)(this + 0x118);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar2) {
    return;
  }
  MissSelf(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusEarthTile::onAnimStopped(std::string const&) */

void __thiscall Effect_WalrusEarthTile::onAnimStopped(Effect_WalrusEarthTile *this,string *param_1)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onAnimStopped((string *)this);
  bVar1 = std::operator==(param_1,"idle2_3");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)Board::GetWalrusFoot(*(Board **)(gLawnApp + 0x9f0));
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar2,uVar3,this + 0x10c);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,local_10);
    }
  }
  else {
    bVar1 = std::operator==(param_1,"idle1_3");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

