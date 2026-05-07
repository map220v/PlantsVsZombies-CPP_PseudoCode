// Class: GuideEndDoor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::StaticClassInit() */

void GuideEndDoor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuideEndDoor");
    (*pcVar2)(plVar1,asStack_10,FUN_049a78a0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideEndDoor::StaticGetClass() */

long * GuideEndDoor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuideEndDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuideEndDoor::GetClass() const */

long * GuideEndDoor::GetClass(void)

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
  (*pcVar3)(plVar1,"GuideEndDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::PlayIdle() */

void __thiscall GuideEndDoor::PlayIdle(GuideEndDoor *this)

{
  string asStack_10 [8];
  long local_8;
  
  this[0x11c] = (GuideEndDoor)0x0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"idle_1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideEndDoor::SetMaxHP(float) */

void __thiscall GuideEndDoor::SetMaxHP(GuideEndDoor *this,float param_1)

{
  *(float *)(this + 0x118) = param_1;
  *(float *)(this + 0x114) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::GetZombiesEatDPS() */

void __thiscall GuideEndDoor::GetZombiesEatDPS(GuideEndDoor *this)

{
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x120));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      this_01 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_01);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      iVar4 = (int)((float)iVar4 + *(float *)(lVar3 + 0x24));
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::DoDestory() */

void __thiscall GuideEndDoor::DoDestory(GuideEndDoor *this)

{
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_00;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x120));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::DoFadeInZombie(Zombie*) */

void __thiscall GuideEndDoor::DoFadeInZombie(GuideEndDoor *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ActionSubSystem *pAVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsControlled(param_1,false);
  Zombie::SetIgnoreFindTarget(param_1,false);
  Zombie::SetIgnoresAllDamage(param_1,false);
  Zombie::SetIgnoresCollisions(param_1,false);
  FUN_049a5a5c(param_1 + 0xa0,0);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,0);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x10c));
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x110));
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1,(float)iVar2,*(float *)(lVar3 + 8));
  (**(code **)(*(long *)param_1 + 0x78))(param_1,aVStack_60);
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate(aRStack_50);
  ActionSubSystem::AddActionEntityFade((ActionSubSystem *)0x40000000,pAVar4,aRStack_68,0,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideEndDoor::GuideEndDoor() */

void __thiscall GuideEndDoor::GuideEndDoor(GuideEndDoor *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06923ba0;
  Sexy::Point::Point((Point *)(this + 0x10c));
  this[0x11c] = (GuideEndDoor)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  return;
}


/* GuideEndDoor::StaticNew() */

GuideEndDoor * GuideEndDoor::StaticNew(void)

{
  GuideEndDoor *this;
  
  this = ::operator_new(0x138);
  GuideEndDoor(this);
  return this;
}


/* GuideEndDoor::registerForEvents() */

void __thiscall GuideEndDoor::registerForEvents(GuideEndDoor *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<GuideEndDoor,void(GuideEndDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::ReleaseBlockZombie() */

void __thiscall GuideEndDoor::ReleaseBlockZombie(GuideEndDoor *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_01;
  ResourceInfo *pRVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_01);
      DoFadeInZombie(this,(Zombie *)pRVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideEndDoor::~GuideEndDoor() */

void __thiscall GuideEndDoor::~GuideEndDoor(GuideEndDoor *this)

{
  *(undefined ***)this = &PTR_GetClass_06923ba0;
  ReleaseBlockZombie(this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x120));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* GuideEndDoor::~GuideEndDoor() */

void __thiscall GuideEndDoor::~GuideEndDoor(GuideEndDoor *this)

{
  ~GuideEndDoor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::PlayBlock() */

void __thiscall GuideEndDoor::PlayBlock(GuideEndDoor *this)

{
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  this[0x11c] = (GuideEndDoor)0x1;
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_28,"d");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"e");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aPStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::CollectBlockZombie(Zombie*) */

void GuideEndDoor::CollectBlockZombie(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x120),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideEndDoor::DoFadeIn(RealObject*) */

void __thiscall GuideEndDoor::DoFadeIn(GuideEndDoor *this,RealObject *param_1)

{
  char cVar1;
  Zombie *this_00;
  
  if (((param_1 != (RealObject *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (cVar1 = FUN_049a5a64(this_00[0xa0]), cVar1 != '\0')) {
    Zombie::SetIsControlled(this_00,true);
    Zombie::SetIgnoreFindTarget(this_00,true);
    Zombie::SetIgnoresAllDamage(this_00,true);
    Zombie::SetIgnoresCollisions(this_00,true);
    (**(code **)(*(long *)this_00 + 0x80))(this_00,1);
    if (this[0x11c] != (GuideEndDoor)0x0) {
      CollectBlockZombie((Zombie *)this);
      return;
    }
    DoFadeInZombie(this,this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideEndDoor::OnGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GuideEndDoor::OnGatherPlantingRestrictions
          (GuideEndDoor *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  TPoint<int> *this_00;
  long lVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TPoint<int> *)GuideStartDoor::GetSelfPosition((GuideStartDoor *)this);
  cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)param_1);
  if ((cVar1 != '\0') &&
     (lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_2 + 0x28)),
     *(char *)(lVar2 + 0x24d) == '\0')) {
    local_c = 0x4a;
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


/* GuideEndDoor::onUpdate() */

void __thiscall GuideEndDoor::onUpdate(GuideEndDoor *this)

{
  float fVar1;
  float fVar2;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar1 = (float)GetZombiesEatDPS(this);
  fVar2 = (float)PVZ_Dt();
  fVar1 = *(float *)(this + 0x114) - fVar1 * fVar2;
  *(float *)(this + 0x114) = fVar1;
  if ((fVar1 <= 0.0) && (this[0x11c] != (GuideEndDoor)0x0)) {
    *(undefined4 *)(this + 0x114) = *(undefined4 *)(this + 0x118);
    ReleaseBlockZombie(this);
    PlayIdle(this);
    return;
  }
  return;
}

