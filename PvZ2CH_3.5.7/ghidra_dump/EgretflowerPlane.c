// Class: EgretflowerPlane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlane::StaticClassInit() */

void EgretflowerPlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerPlane");
    (*pcVar2)(plVar1,asStack_10,FUN_04266104,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerPlane::StaticGetClass() */

long * EgretflowerPlane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerPlane::GetClass() const */

long * EgretflowerPlane::GetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerPlane::setData(bool, float) */

void __thiscall EgretflowerPlane::setData(EgretflowerPlane *this,bool param_1,float param_2)

{
  *(float *)(this + 0xa8) = param_2;
  this[0xa1] = (EgretflowerPlane)param_1;
  return;
}


/* EgretflowerPlane::EgretflowerPlane() */

void __thiscall EgretflowerPlane::EgretflowerPlane(EgretflowerPlane *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0681df70;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerPlane_0681e158;
  Sexy::Point::Point((Point *)(this + 0xac));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  *(undefined4 *)(this + 0xac) = 10;
  return;
}


/* EgretflowerPlane::StaticNew() */

EgretflowerPlane * EgretflowerPlane::StaticNew(void)

{
  EgretflowerPlane *this;
  
  this = ::operator_new(0xc0);
  EgretflowerPlane(this);
  return this;
}


/* EgretflowerPlane::~EgretflowerPlane() */

void __thiscall EgretflowerPlane::~EgretflowerPlane(EgretflowerPlane *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb8);
  *(undefined ***)this = &PTR_GetClass_0681df70;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerPlane_0681e158;
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


/* non-virtual thunk to EgretflowerPlane::~EgretflowerPlane() */

void __thiscall EgretflowerPlane::~EgretflowerPlane(EgretflowerPlane *this)

{
  ~EgretflowerPlane(this + -0x10);
  return;
}


/* EgretflowerPlane::~EgretflowerPlane() */

void __thiscall EgretflowerPlane::~EgretflowerPlane(EgretflowerPlane *this)

{
  ~EgretflowerPlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EgretflowerPlane::~EgretflowerPlane() */

void __thiscall EgretflowerPlane::~EgretflowerPlane(EgretflowerPlane *this)

{
  ~EgretflowerPlane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlane::initialize(Sexy::Point const&) */

void __thiscall EgretflowerPlane::initialize(EgretflowerPlane *this,Point *param_1)

{
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar1;
  float fVar2;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0xac) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_EGRETFLOWER_PLANTFOOD_SHADOW");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar1,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string(asStack_18,"idle1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,80.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)asStack_18,2);
  }
  fVar2 = (float)Sexy::Rand(1.0);
  *(float *)(this + 0xa4) = fVar2 * 0.4 + 20.8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlane::onArrive() */

void __thiscall EgretflowerPlane::onArrive(EgretflowerPlane *this)

{
  undefined8 uVar1;
  RtObject *this_00;
  EgretflowerPlantFoodBomb *this_01;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  string asStack_38 [8];
  wstring awStack_30 [24];
  RtName aRStack_18 [16];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xac),___stack_chk_guard);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_48,(TPoint *)aRStack_18);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_38,"EgretflowerPlantFoodBomb");
  Sexy::ToWString(asStack_38);
  Sexy::RtName::RtName(aRStack_18,awStack_30);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_40,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_30);
  std::string::~string(asStack_38);
  nop();
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_40);
  this_00 = (RtObject *)
            Board::AddProjectile
                      ((Board *)(float)(local_48 + -0x96),(float)local_44,0x43820000,uVar1,
                       aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  this_01 = Sexy::RtObject::Cast<EgretflowerPlantFoodBomb>(this_00);
  if (this_01 != (EgretflowerPlantFoodBomb *)0x0) {
    StrawburstProjectile::SetJamFlag((StrawburstProjectile *)this_01,(bool)this[0xa1]);
    EgretflowerPlantFoodBomb::SetDamageRate(this_01,*(float *)(this + 0xa8));
    EgretflowerPlantFoodBomb::SetGridPosition(this_01,*(int *)(this + 0xac),*(int *)(this + 0xb0));
  }
  FUN_04261bb4(this_00 + 0x24);
  (**(code **)(*(long *)this + 0x48))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlane::onUpdate() */

void __thiscall EgretflowerPlane::onUpdate(EgretflowerPlane *this)

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
  local_18 = CONCAT44(local_18._4_4_,*(float *)(this + 0xa4) + (float)local_18);
  if (*(int *)(this + 0xac) <= iVar1) {
    onArrive(this);
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

