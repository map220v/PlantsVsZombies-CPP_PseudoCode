// Class: ZombieIceAgeTroglobite


/* ZombieIceAgeTroglobite::updateState_Walk() */

void __thiscall ZombieIceAgeTroglobite::updateState_Walk(ZombieIceAgeTroglobite *this)

{
  ZombieIceAgeTroglobite ZVar1;
  
  ZVar1 = (ZombieIceAgeTroglobite)BoardEntity::IsOnScreen((BoardEntity *)this);
  this[0x860] = ZVar1;
  ZombieWithPushingAction::updateState_Walk((ZombieWithPushingAction *)this);
  return;
}


/* ZombieIceAgeTroglobite::TakeDamage(DamageInfo const&) */

void __thiscall ZombieIceAgeTroglobite::TakeDamage(ZombieIceAgeTroglobite *this,DamageInfo *param_1)

{
  char cVar1;
  
  if ((this[0x860] == (ZombieIceAgeTroglobite)0x0) &&
     (cVar1 = Zombie::HasCondition(this,0x91), cVar1 == '\0')) {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}


/* ZombieIceAgeTroglobite::TakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombieIceAgeTroglobite::TakeFatalDamage(ZombieIceAgeTroglobite *this,DamageInfo *param_1)

{
  char cVar1;
  
  if ((this[0x860] == (ZombieIceAgeTroglobite)0x0) &&
     (cVar1 = Zombie::HasCondition(this,0x91), cVar1 == '\0')) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,param_1);
  return;
}


/* ZombieIceAgeTroglobite::CanBeFlickedOff() const */

undefined8 __thiscall ZombieIceAgeTroglobite::CanBeFlickedOff(ZombieIceAgeTroglobite *this)

{
  undefined8 uVar1;
  
  if (this[0x860] == (ZombieIceAgeTroglobite)0x0) {
    return 0;
  }
  uVar1 = Zombie::CanBeFlickedOff((Zombie *)this);
  return uVar1;
}


/* ZombieIceAgeTroglobite::CalcRenderOrder() const */

ulong __thiscall ZombieIceAgeTroglobite::CalcRenderOrder(ZombieIceAgeTroglobite *this)

{
  ulong uVar1;
  
  if (-1 < (int)*(uint *)(this + 0x844)) {
    return (ulong)*(uint *)(this + 0x844);
  }
  uVar1 = Zombie::CalcRenderOrder((Zombie *)this);
  return uVar1;
}


/* non-virtual thunk to ZombieIceAgeTroglobite::CalcRenderOrder() const */

void __thiscall ZombieIceAgeTroglobite::CalcRenderOrder(ZombieIceAgeTroglobite *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobite::StaticClassInit() */

void ZombieIceAgeTroglobite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeTroglobite");
    (*pcVar2)(plVar1,asStack_10,FUN_04769238,0x868,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeTroglobite::StaticGetClass() */

long * ZombieIceAgeTroglobite::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeTroglobite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeTroglobite::GetClass() const */

long * ZombieIceAgeTroglobite::GetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeTroglobite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeTroglobite::CanBeFlicked() const */

undefined8 __thiscall ZombieIceAgeTroglobite::CanBeFlicked(ZombieIceAgeTroglobite *this)

{
  undefined8 uVar1;
  
  if (this[0x860] == (ZombieIceAgeTroglobite)0x0) {
    return 0;
  }
  uVar1 = Zombie::CanBeFlicked((Zombie *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobite::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieIceAgeTroglobite::CanBeTargetedByPlant
          (ZombieIceAgeTroglobite *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (this[0x860] != (ZombieIceAgeTroglobite)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar1 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieIceAgeTroglobite::onZombieInitialize() */

void __thiscall ZombieIceAgeTroglobite::onZombieInitialize(ZombieIceAgeTroglobite *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  ZombieIceAgeTroglobiteProps *pZVar1;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieIceAgeTroglobiteProps_const>(this_01);
  if (pZVar1 != (ZombieIceAgeTroglobiteProps *)0x0) {
    ZombieWithPushingAction::setPushingProperties
              ((ZombieWithPushingAction *)this,*(int *)(pZVar1 + 0x228));
    return;
  }
  return;
}


/* ZombieIceAgeTroglobite::ZombieIceAgeTroglobite() */

void __thiscall ZombieIceAgeTroglobite::ZombieIceAgeTroglobite(ZombieIceAgeTroglobite *this)

{
  ZombieWithPushingAction::ZombieWithPushingAction((ZombieWithPushingAction *)this);
  *(undefined4 *)(this + 0x844) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068d1a40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeTroglobite_068d24b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x848));
  this[0x860] = (ZombieIceAgeTroglobite)0x0;
  return;
}


/* ZombieIceAgeTroglobite::StaticNew() */

ZombieIceAgeTroglobite * ZombieIceAgeTroglobite::StaticNew(void)

{
  ZombieIceAgeTroglobite *this;
  
  this = ::operator_new(0x868);
  ZombieIceAgeTroglobite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite() */

void __thiscall ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite(ZombieIceAgeTroglobite *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  float *pfVar2;
  Zombie *pZVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x848);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068d1a40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeTroglobite_068d24b8;
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
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_02);
      if (750.0 <= *pfVar2) {
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        Zombie::EndCondition(pZVar3,0x27);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  ZombieWithPushingAction::~ZombieWithPushingAction((ZombieWithPushingAction *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite() */

void __thiscall ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite(ZombieIceAgeTroglobite *this)

{
  ~ZombieIceAgeTroglobite(this + -0x10);
  return;
}


/* ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite() */

void __thiscall ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite(ZombieIceAgeTroglobite *this)

{
  ~ZombieIceAgeTroglobite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite() */

void __thiscall ZombieIceAgeTroglobite::~ZombieIceAgeTroglobite(ZombieIceAgeTroglobite *this)

{
  ~ZombieIceAgeTroglobite(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeTroglobite::spawnGridItemThatZombiePushes(int) */

void __thiscall
ZombieIceAgeTroglobite::spawnGridItemThatZombiePushes(ZombieIceAgeTroglobite *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  string *psVar4;
  SexyVector3 *pSVar5;
  ZombieIceAgeTroglobiteProps *pZVar6;
  PlantWarsNetworkMgr *this_00;
  TRefNamedSymbolCollection<Reflection::REnum> *this_01;
  ZombieType *this_02;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_03;
  long lVar7;
  long *extraout_x0;
  code *pcVar8;
  long *plVar9;
  Zombie *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [12];
  int local_5c;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)local_30,"iceage_imp");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::string::~string((string *)local_30);
  nop();
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = FUN_04767f38(*(undefined4 *)(this + 0x50));
  plVar9 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar9 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_68);
  pSVar5 = (SexyVector3 *)(*pcVar8)(plVar9,aRStack_40,0xfffffffb,(string *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(local_5c);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)iVar1,(float)iVar2,0.0);
  BoardEntity::PlaceOnBoard(pSVar5);
  pZVar6 = Zombie::GetProps<ZombieIceAgeTroglobiteProps>((Zombie *)this);
  FUN_05475d88(asStack_58,pZVar6 + 0x230);
  this_00 = (PlantWarsNetworkMgr *)Reflection::CRefSymbolDb::GetManualReflection();
  this_01 = (TRefNamedSymbolCollection<Reflection::REnum> *)
            PlantWarsNetworkMgr::GetEndPlayData(this_00);
  std::string::string(asStack_48,"ZombieConditions");
  this_02 = (ZombieType *)
            Reflection::TRefNamedSymbolCollection<Reflection::REnum>::GetNamed
                      (this_01,asStack_48,true);
  this_03 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)ZombieType::GetAudioGroups(this_02);
  lVar7 = Reflection::TRefNamedSymbolCollection<Reflection::RAncestor>::GetNamed(this_03,asStack_58)
  ;
  std::string::~string(asStack_48);
  nop();
  if (lVar7 == 0) {
    uVar3 = 0x27;
  }
  else {
    uVar3 = FUN_04767ea4(*(undefined4 *)(lVar7 + 0x68));
  }
  pZVar10._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar10._0_4_,0,pSVar5,uVar3,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_48,(RtWeakPtrBase *)aRStack_50);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x848),(RtWeakPtr *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  FUN_05475d88(asStack_48,asStack_58);
  lVar7 = Zombie::GetAttachedBoardEntity((Zombie *)pSVar5,asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x10));
  nop();
  std::string::~string(asStack_48);
  if (extraout_x0 == (long *)0x0) {
    iVar1 = Zombie::CalcRenderOrder((Zombie *)this);
  }
  else {
    iVar1 = (**(code **)(*extraout_x0 + 0x170))(extraout_x0);
    iVar1 = iVar1 + 1;
  }
  *(int *)(this + 0x844) = iVar1;
  std::string::~string(asStack_58);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

