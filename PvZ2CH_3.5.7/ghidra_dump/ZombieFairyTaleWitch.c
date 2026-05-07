// Class: ZombieFairyTaleWitch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::onEnterState_Casting(ZombieState) */

void ZombieFairyTaleWitch::onEnterState_Casting(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_FairyTaleWitch::StartCasting((ZombieAnimRig_FairyTaleWitch *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleWitch::onAnimationDone(std::string const&) */

void ZombieFairyTaleWitch::onAnimationDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::getTransformType() */

void __thiscall ZombieFairyTaleWitch::getTransformType(ZombieFairyTaleWitch *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"frog");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieFairyTaleWitch::canTransform(Plant*) */

bool __thiscall ZombieFairyTaleWitch::canTransform(ZombieFairyTaleWitch *this,Plant *param_1)

{
  bool bVar1;
  
  if (param_1 != (Plant *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantWitchFrog>((RtObject *)param_1);
    if (bVar1) {
      return false;
    }
  }
  return *(int *)(param_1 + 200) != 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::createTransformEffect(Sexy::SexyVector3 const&) */

void ZombieFairyTaleWitch::createTransformEffect(SexyVector3 *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  SexyVector3 *in_x1;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator+(in_x1,(SexyVector3 *)&DAT_06ba2af8);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"fumeshroom_appear");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(in_x1 + 4));
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_04ed5748(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleWitch::ZombieFairyTaleWitch() */

void __thiscall ZombieFairyTaleWitch::ZombieFairyTaleWitch(ZombieFairyTaleWitch *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_069fb000;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleWitch_069fba30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x800));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  return;
}


/* ZombieFairyTaleWitch::StaticNew() */

ZombieFairyTaleWitch * ZombieFairyTaleWitch::StaticNew(void)

{
  ZombieFairyTaleWitch *this;
  
  this = ::operator_new(0x830);
  ZombieFairyTaleWitch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::isValidSpellTarget(Plant*) */

void __thiscall ZombieFairyTaleWitch::isValidSpellTarget(ZombieFairyTaleWitch *this,Plant *param_1)

{
  char cVar1;
  char cVar2;
  ZombieFairyTaleWitchProps *pZVar3;
  float *pfVar4;
  float *pfVar5;
  TRect<int> *this_00;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) && (*(int *)(param_1 + 200) != 3)) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
        (cVar1 = Plant::CanBeTargeted(param_1), cVar1 != '\0')) &&
       (cVar2 = RealObject::IsOnTeam(this,1), cVar2 == '\0')) {
      pZVar3 = Zombie::GetProps<ZombieFairyTaleWitchProps>((Zombie *)this);
      cVar2 = PlantRestrictionSet::IsExcluded((Plant *)(pZVar3 + 0x238));
      if (cVar2 == '\0') {
        (**(code **)(*(long *)this + 0x3a0))(aTStack_18,this);
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        if (*pfVar4 <= *pfVar5) goto LAB_04ed66c4;
        this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
        cVar2 = Sexy::TRect<int>::Intersects(this_00,aTStack_18);
        if (cVar2 != '\0') goto LAB_04ed66c4;
      }
    }
  }
  cVar1 = '\0';
LAB_04ed66c4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::recoverTransformedPlants() */

void __thiscall ZombieFairyTaleWitch::recoverTransformedPlants(ZombieFairyTaleWitch *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  PlantWitchFrog *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      nop();
      PlantWitchFrog::LostControll(this_02);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleWitch::~ZombieFairyTaleWitch() */

void __thiscall ZombieFairyTaleWitch::~ZombieFairyTaleWitch(ZombieFairyTaleWitch *this)

{
  *(undefined ***)this = &PTR_GetClass_069fb000;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleWitch_069fba30;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x818));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x800)
            );
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleWitch::~ZombieFairyTaleWitch() */

void __thiscall ZombieFairyTaleWitch::~ZombieFairyTaleWitch(ZombieFairyTaleWitch *this)

{
  ~ZombieFairyTaleWitch(this + -0x10);
  return;
}


/* ZombieFairyTaleWitch::~ZombieFairyTaleWitch() */

void __thiscall ZombieFairyTaleWitch::~ZombieFairyTaleWitch(ZombieFairyTaleWitch *this)

{
  ~ZombieFairyTaleWitch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleWitch::~ZombieFairyTaleWitch() */

void __thiscall ZombieFairyTaleWitch::~ZombieFairyTaleWitch(ZombieFairyTaleWitch *this)

{
  ~ZombieFairyTaleWitch(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::OnPlantDestroyed(Plant*) */

void __thiscall ZombieFairyTaleWitch::OnPlantDestroyed(ZombieFairyTaleWitch *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_04ed6598(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00,
               local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::transform(Plant*) */

void __thiscall ZombieFairyTaleWitch::transform(ZombieFairyTaleWitch *this,Plant *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string *psVar3;
  PlantWitchFrog *extraout_x0;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x440))();
  }
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"frog");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
  Board::AddPlant((Board *)0x0,uVar4,uVar1,uVar2,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantWitchFrog::Appear(extraout_x0,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x800)
             ,(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleWitch::tryTransform(Plant*) */

char __thiscall ZombieFairyTaleWitch::tryTransform(ZombieFairyTaleWitch *this,Plant *param_1)

{
  char cVar1;
  
  cVar1 = canTransform(this,param_1);
  if (cVar1 != '\0') {
    transform(this,param_1);
  }
  return cVar1;
}


/* ZombieFairyTaleWitch::onSpellImpact(BoardEntity*) */

void __thiscall ZombieFairyTaleWitch::onSpellImpact(ZombieFairyTaleWitch *this,BoardEntity *param_1)

{
  char cVar1;
  Plant *pPVar2;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pPVar2 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), pPVar2 != (Plant *)0x0)) &&
     (cVar1 = isValidSpellTarget(this,pPVar2), cVar1 != '\0')) {
    tryTransform(this,pPVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::tryCastSpell() */

void __thiscall ZombieFairyTaleWitch::tryCastSpell(ZombieFairyTaleWitch *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x818);
  local_8 = ___stack_chk_guard;
  local_1c = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04ed6cec(uVar2,uVar3,&local_1c);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)this_00,&local_1c);
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieFairyTaleWitch::updateState_Eat() */

void __thiscall ZombieFairyTaleWitch::updateState_Eat(ZombieFairyTaleWitch *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *pPVar2;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  else {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    if ((pPVar2 == (Plant *)0x0) || (cVar1 = tryCastSpell(this), cVar1 == '\0')) {
      (**(code **)(*(long *)this + 0x958))(this,this_00);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::getValidSpellTarget() */

void __thiscall ZombieFairyTaleWitch::getValidSpellTarget(ZombieFairyTaleWitch *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  Plant *pPVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  Plant *local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) ||
     (pPVar3 = Sexy::RtObject::Cast<Plant>(this_00), pPVar3 == (Plant *)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    EntityFinder::GetEntities(avStack_38,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      local_40 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
      cVar2 = isValidSpellTarget(this,local_40);
      if (cVar2 != '\0') {
        std::vector<Plant*,std::allocator<Plant*>>::push_back
                  ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_40);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    this_00 = (RtObject *)0x0;
    lVar5 = FUN_04ed5758(local_20,local_18);
    if (lVar5 != 0) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                         *)&local_40,(rbtree_node *)this);
      std::
      sort<__gnu_cxx::__normal_iterator<Plant**,std::vector<Plant*,std::allocator<Plant*>>>,FairyTaleWitchTargetSorter>
                (uVar6,uVar7,local_40);
      puVar4 = (undefined8 *)FUN_04ed5810(local_20);
      this_00 = (RtObject *)*puVar4;
    }
    std::vector<Plant*,std::allocator<Plant*>>::~vector
              ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ZombieFairyTaleWitch::updateState_Walk() */

void __thiscall ZombieFairyTaleWitch::updateState_Walk(ZombieFairyTaleWitch *this)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  Plant *pPVar3;
  
  cVar1 = Creature::IsOnBoard();
  if ((((cVar1 == '\0') || (lVar2 = getValidSpellTarget(this), lVar2 == 0)) ||
      (cVar1 = tryCastSpell(this), cVar1 == '\0')) &&
     ((this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0
      && ((pPVar3 = Sexy::RtObject::Cast<Plant>(this_00), pPVar3 == (Plant *)0x0 ||
          (cVar1 = tryCastSpell(this), cVar1 == '\0')))))) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieFairyTaleWitch::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  BoardEntity *pBVar4;
  PopAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  ZombieFairyTaleWitchProps *pZVar7;
  Projectile *this_00;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  float afStack_20 [2];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if ((bVar1) &&
     (pBVar4 = (BoardEntity *)getValidSpellTarget((ZombieFairyTaleWitch *)param_1),
     pBVar4 != (BoardEntity *)0x0)) {
    Sexy::Insets::Insets(aIStack_18);
    this = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    std::string::string((string *)&local_28,"witch_staff_ball");
    PopAnimRig::CalcSymbolRect(this,(string *)&local_28,(TRect *)aIStack_18);
    std::string::~string((string *)&local_28);
    nop();
    fVar12 = *(float *)(param_1 + 0x1c);
    fVar10 = (float)FUN_04ed5814(*(undefined4 *)(param_1 + 0x18),fVar12,
                                 *(undefined4 *)(param_1 + 0x20));
    Sexy::TRect<int>::GetCenter();
    iVar2 = FUN_04ed5a98(local_28);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar11 = *(float *)(lVar6 + 0xc4);
    Sexy::TRect<int>::GetCenter();
    iVar3 = FUN_04ed5a98(local_24);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_38,(float)(int)((fVar10 - fVar11) + (float)iVar2),
               (float)(int)((fVar12 - *(float *)(lVar6 + 200)) + (float)iVar3),100.0);
    uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
    pZVar7 = Zombie::GetProps<ZombieFairyTaleWitchProps>((Zombie *)param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)(pZVar7 + 0x230));
    this_00 = (Projectile *)
              Board::AddProjectile
                        ((Board *)local_38,local_38._4_4_,local_30,uVar9,(string *)&local_28,param_1
                         ,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    Projectile::SetShadow(this_00,false);
    iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(pBVar4 + 0x114));
    iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(pBVar4 + 0x110));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)(iVar2 + -0x14),(float)(iVar3 + 0x28),0.0);
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
    pfVar8 = eastl::max_alt<float>((float *)(lVar6 + 8),afStack_20);
    Projectile::LaunchAt(this_00,(SexyVector3 *)&local_28,*pfVar8,0.5);
    pZVar7 = Zombie::GetProps<ZombieFairyTaleWitchProps>((Zombie *)param_1);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar7 + 0x220),0.0);
    onSpellImpact((ZombieFairyTaleWitch *)param_1,pBVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleWitch::StaticClassInit() */

void ZombieFairyTaleWitch::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieFairyTaleWitch");
      (*pcVar4)(plVar1,asStack_150,FUN_04ed8d50,0x830,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FAIRYTALEWITCH_Casting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ed8af4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFairyTaleWitch::StaticGetClass() */

long * ZombieFairyTaleWitch::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleWitch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleWitch::GetClass() const */

long * ZombieFairyTaleWitch::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleWitch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleWitch::onTakeFatalDamage(DamageInfo const&) */

void ZombieFairyTaleWitch::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  recoverTransformedPlants((ZombieFairyTaleWitch *)param_1);
  return;
}


/* ZombieFairyTaleWitch::onMowedDown() */

void ZombieFairyTaleWitch::onMowedDown(void)

{
  ZombieFairyTaleWitch *in_x0;
  
  nop();
  recoverTransformedPlants(in_x0);
  return;
}


/* ZombieFairyTaleWitch::onDestroy() */

void __thiscall ZombieFairyTaleWitch::onDestroy(ZombieFairyTaleWitch *this)

{
  Zombie::onDestroy((Zombie *)this);
  recoverTransformedPlants(this);
  return;
}


/* ZombieFairyTaleWitch::registerForEvents() */

void __thiscall ZombieFairyTaleWitch::registerForEvents(ZombieFairyTaleWitch *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieFairyTaleWitch,void(ZombieFairyTaleWitch::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_40);
  return;
}

