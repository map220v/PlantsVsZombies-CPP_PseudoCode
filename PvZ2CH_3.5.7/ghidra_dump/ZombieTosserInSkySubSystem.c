// Class: ZombieTosserInSkySubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::StaticClassInit() */

void ZombieTosserInSkySubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTosserInSkySubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_046dd97c,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTosserInSkySubSystem::StaticGetClass() */

long * ZombieTosserInSkySubSystem::StaticGetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTosserInSkySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTosserInSkySubSystem::GetClass() const */

long * ZombieTosserInSkySubSystem::GetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTosserInSkySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTosserInSkySubSystem::SetZombieInSkyFunc(Sexy::Delegate1<Zombie*>) */

void __thiscall
ZombieTosserInSkySubSystem::SetZombieInSkyFunc(ZombieTosserInSkySubSystem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xb8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::ZombieTosserInSkySubSystem() */

void __thiscall
ZombieTosserInSkySubSystem::ZombieTosserInSkySubSystem(ZombieTosserInSkySubSystem *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieTosserSubSystem::ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b6d20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x88));
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0xb8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x118));
  Sexy::Delegate1<Zombie*>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x88),(Delegate2 *)aDStack_38);
  Sexy::Delegate1<Zombie*>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xb8),(Delegate2 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieTosserInSkySubSystem,void(ZombieTosserInSkySubSystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTosserInSkySubSystem::StaticNew() */

ZombieTosserInSkySubSystem * ZombieTosserInSkySubSystem::StaticNew(void)

{
  ZombieTosserInSkySubSystem *this;
  
  this = ::operator_new(0x148);
  ZombieTosserInSkySubSystem(this);
  return this;
}


/* ZombieTosserInSkySubSystem::~ZombieTosserInSkySubSystem() */

void __thiscall
ZombieTosserInSkySubSystem::~ZombieTosserInSkySubSystem(ZombieTosserInSkySubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6d20;
  std::
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  ::~map((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
          *)(this + 0x118));
  std::
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  ::~map((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
          *)(this + 0xe8));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x70))
  ;
  ZombieTosserSubSystem::~ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  return;
}


/* ZombieTosserInSkySubSystem::~ZombieTosserInSkySubSystem() */

void __thiscall
ZombieTosserInSkySubSystem::~ZombieTosserInSkySubSystem(ZombieTosserInSkySubSystem *this)

{
  ~ZombieTosserInSkySubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::LaunchZombieInSky(Zombie*, Plant*, Sexy::SexyVector3 const&, float,
   float, RtReflectionDelegate<Sexy::Delegate1<Zombie*> >, bool, float,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >) */

void __thiscall
ZombieTosserInSkySubSystem::LaunchZombieInSky
          (float param_4,float param_5,undefined4 param_3_00,ZombieTosserInSkySubSystem *this,
          Zombie *param_1,undefined8 param_6,SexyVector3 *param_3,RtReflectionDelegate *param_8,
          undefined1 param_9,RtReflectionDelegate *param_10)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_100 [8];
  TossedZombie aTStack_f8 [12];
  SexyVector3 aSStack_ec [8];
  undefined4 local_e4;
  float local_bc;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_b0 [73];
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_64;
  float local_60;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_58 [72];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TossedZombie::TossedZombie(aTStack_f8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_b8,(RtWeakPtrBase *)aRStack_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_100);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_10,(RtWeakPtrBase *)aRStack_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_100);
  Sexy::SexyVector3::operator=(aSStack_ec,param_3);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_b0,param_8);
  local_67 = Zombie::IsFlying(param_1);
  local_66 = param_9;
  local_e4 = RealObject::CalcGroundZHeight((RealObject *)param_1,param_3);
  local_bc = param_5;
  local_64 = param_3_00;
  local_60 = (float)PVZ_T();
  local_60 = local_60 + param_5 * 0.5;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_58,param_10);
  ZombieTosserSubSystem::internalLaunchZombie
            (param_4,param_5,(TossedZombie *)this,SUB81(aTStack_f8,0));
  TossedZombie::~TossedZombie(aTStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::TossZombieInSky(Zombie*, Plant*, Sexy::SexyVector3 const&, float,
   float, bool, float) */

void __thiscall
ZombieTosserInSkySubSystem::TossZombieInSky
          (ZombieTosserInSkySubSystem *this,Zombie *param_1,Plant *param_2,SexyVector3 *param_3,
          float param_4,float param_5,bool param_6,float param_7)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string(asStack_b8,"OnZombieLandEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_98,aRStack_c0,asStack_b8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"OnZombieInSky");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_a8,asStack_a0);
  LaunchZombieInSky((ZombieTosserInSkySubSystem *)CONCAT44(in_register_00005004,param_4),
                    CONCAT44(in_register_00005024,param_5),CONCAT44(in_register_00005044,param_7),
                    this,param_1,param_2,param_3,aRStack_98,param_6,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_b8);
  nop();
  Sexy::RtId::~RtId(aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::onPlantLost(Plant*) */

void ZombieTosserInSkySubSystem::onPlantLost(Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
             (param_1 + 0x70),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::OnZombieLandEnd(Zombie*) */

void __thiscall
ZombieTosserInSkySubSystem::OnZombieLandEnd(ZombieTosserInSkySubSystem *this,Zombie *param_1)

{
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  *this_00;
  bool bVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  Zombie *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             ::find(this_00,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
              std::
              map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
              ::operator[](this_00,local_28);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::OnZombieInSky(Zombie*) */

void __thiscall
ZombieTosserInSkySubSystem::OnZombieInSky(ZombieTosserInSkySubSystem *this,Zombie *param_1)

{
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  *this_00;
  bool bVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  Zombie *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             ::find(this_00,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
              std::
              map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
              ::operator[](this_00,local_28);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTosserInSkySubSystem::SetZombieLandEndFunc(Zombie*, Sexy::Delegate1<Zombie*>) */

void __thiscall
ZombieTosserInSkySubSystem::SetZombieLandEndFunc
          (ZombieTosserInSkySubSystem *this,Zombie *param_1,Delegate2 *param_3)

{
  Delegate2<Sexy::IPurchaseDriver*,bool> *this_00;
  Zombie *local_8;
  
  local_8 = param_1;
  this_00 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
            std::
            map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
            ::operator[]((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
                          *)(this + 0xe8),&local_8);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(this_00,param_3);
  return;
}


/* ZombieTosserInSkySubSystem::SetZombieInSkyFunc(Zombie*, Sexy::Delegate1<Zombie*>) */

void __thiscall
ZombieTosserInSkySubSystem::SetZombieInSkyFunc
          (ZombieTosserInSkySubSystem *this,Zombie *param_1,Delegate2 *param_3)

{
  Delegate2<Sexy::IPurchaseDriver*,bool> *this_00;
  Zombie *local_8;
  
  local_8 = param_1;
  this_00 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
            std::
            map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
            ::operator[]((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
                          *)(this + 0x118),&local_8);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(this_00,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTosserInSkySubSystem::Update() */

void ZombieTosserInSkySubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  SexyVector3 *this_00;
  SexyVector3 *this_01;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long in_x0;
  ulong uVar7;
  long lVar8;
  RtWeakPtrBase *pRVar9;
  ResourceInfo *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  long lVar10;
  Delegate1wRet<bool,SexyURL_const&> *pDVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double in_d1;
  undefined4 uVar23;
  double in_d2;
  float fVar24;
  float fVar25;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x40);
  local_8 = ___stack_chk_guard;
  uVar16 = 0;
  fVar19 = (float)PVZ_Dt();
  uVar18 = *(undefined8 *)(in_x0 + 0x10);
  uVar7 = FUN_046da93c(uVar18,*(undefined8 *)(in_x0 + 0x18));
  if (uVar7 != 0) {
    do {
      uVar17 = *(undefined8 *)(in_x0 + 0x40);
      lVar8 = FUN_046da948(uVar17,*(undefined8 *)(in_x0 + 0x48));
      lVar12 = 0;
      do {
        iVar6 = (int)lVar12;
        if (lVar12 == lVar8) goto LAB_046e3624;
        lVar13 = FUN_046da978(uVar17,lVar12);
        pRVar9 = (RtWeakPtrBase *)FUN_046da988(uVar18,uVar16);
        cVar3 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar13 + 0x40),pRVar9);
        lVar12 = lVar12 + 1;
      } while (cVar3 == '\0');
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                 ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                              *)&local_38,(long)iVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18);
      uVar18 = *(undefined8 *)(in_x0 + 0x10);
      uVar7 = FUN_046da93c(uVar18,*(undefined8 *)(in_x0 + 0x18));
LAB_046e3624:
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar7);
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(in_x0 + 0x58);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar18 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(pvVar1);
  uVar17 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(pvVar1);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::
  insert<__gnu_cxx::__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>,void>
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18,uVar18,uVar17);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::clear
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)pvVar1);
  uVar18 = *(undefined8 *)(in_x0 + 0x40);
  iVar6 = FUN_046da948(uVar18,*(undefined8 *)(in_x0 + 0x48));
  uVar2 = iVar6 - 1;
  if (-1 < (int)uVar2) {
    lVar12 = (long)(int)uVar2;
    lVar15 = lVar12 + -1;
    lVar13 = lVar15 - (ulong)uVar2;
    lVar8 = FUN_046da978(uVar18,lVar12);
    this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x40));
    if (this_02 == (ResourceInfo *)0x0) goto LAB_046e38c0;
LAB_046e36ec:
    uVar23 = SUB84(in_d2,0);
    uVar22 = SUB84(in_d1,0);
    fVar24 = *(float *)(lVar8 + 0x98);
    fVar25 = *(float *)(lVar8 + 0x94);
    fVar20 = (float)PVZ_T();
    if ((fVar20 < fVar24) || (fVar20 = (float)PVZ_T(), fVar25 + fVar24 < fVar20)) {
      this_00 = (SexyVector3 *)(lVar8 + 0x24);
      FUN_046df950(this_02);
      this_01 = (SexyVector3 *)(lVar8 + 0x18);
      local_48 = Sexy::SexyVector3::operator*(this_00,fVar19);
      local_44 = uVar22;
      local_40 = uVar23;
      uVar21 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_48);
      local_38 = CONCAT44(uVar22,uVar21);
      local_30 = uVar23;
      uVar21 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar8 + 0x30),fVar19 * fVar19 * 0.5);
      local_28 = CONCAT44(uVar22,uVar21);
      local_20 = uVar23;
      uVar21 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
      local_18 = CONCAT44(uVar22,uVar21);
      local_10 = uVar23;
      Sexy::SexyVector3::operator=(this_01,(SexyVector3 *)&local_18);
      uVar21 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar8 + 0x30),fVar19);
      local_28 = CONCAT44(uVar22,uVar21);
      local_20 = uVar23;
      uVar21 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&local_28);
      local_18 = CONCAT44(uVar22,uVar21);
      local_10 = uVar23;
      Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&local_18);
      (**(code **)(*(long *)this_02 + 0x78))(this_02,this_01);
    }
    else {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(in_x0 + 0x70);
      uVar18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
      uVar17 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
      local_28 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                           (uVar18,uVar17,(RtMixedPtrBase *)(lVar8 + 0xe8));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
      iVar6 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(lVar8 + 0xa0));
      if ((iVar6 != 0) &&
         (bVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar8 + 0xe8)), bVar4 < bVar5)) {
        pDVar11 = (Delegate1wRet<bool,SexyURL_const&> *)
                  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar8 + 0xa0));
        Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar11,(SexyURL *)this_02);
      }
    }
    fVar20 = (float)RealObject::CalcGroundZHeight
                              ((RealObject *)this_02,(SexyVector3 *)(lVar8 + 0x18));
    fVar24 = *(float *)(lVar8 + 0x38);
    this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_02);
    fVar25 = *(float *)(lVar8 + 0x3c);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
    uVar18 = FUN_0547429c(lVar10 + 8);
    in_d1 = (double)*(float *)(lVar8 + 0x1c);
    in_d2 = (double)*(float *)(lVar8 + 0x20);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "ZombieTosserInSkySubSystem::Update() zombieName=%s ts.m_pos=%f %f %f ts.m_vel=%f %f %f ts.acc=%f %f %f gourndZ=%f"
               ,(double)*(float *)(lVar8 + 0x18),in_d1,in_d2,(double)*(float *)(lVar8 + 0x24),
               (double)*(float *)(lVar8 + 0x28),(double)*(float *)(lVar8 + 0x2c),
               (double)*(float *)(lVar8 + 0x30),(double)*(float *)(lVar8 + 0x34),uVar18);
    if (*(float *)(lVar8 + 0x20) < fVar20) {
      if (*(float *)(lVar8 + 0x2c) < fVar24 * fVar25 * 0.5) {
        *(RealObject *)(this_02 + 0x7e9) = (RealObject)0x0;
        *(RealObject *)(this_02 + 0x7ea) = (RealObject)0x0;
        pcVar14 = *(code **)(*(long *)this_02 + 0x78);
        *(float *)(lVar8 + 0x14) = fVar20;
        (*pcVar14)(this_02,lVar8 + 0xc);
        if (*(char *)(lVar8 + 0x92) != '\0') {
          Zombie::EndCondition((Zombie *)this_02,2);
          Zombie::EndCondition((Zombie *)this_02,0x18);
        }
        Zombie::EndCondition((Zombie *)this_02,0xe);
        Zombie::SetIsFlying((Zombie *)this_02,*(bool *)(lVar8 + 0x91));
        Zombie::SetIsControlled((Zombie *)this_02,false);
        if (*(float *)(this_02 + 0x7f0) != 0.0) {
          in_d1 = 0.0;
          Zombie::ApplyCondition((Zombie *)0x40400000,this_02,2,1);
        }
        iVar6 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(lVar8 + 0x48))
        ;
        if (iVar6 != 0) {
          pDVar11 = (Delegate1wRet<bool,SexyURL_const&> *)
                    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                              ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar8 + 0x48));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar11,(SexyURL *)this_02);
        }
        MessageRouter::Post<Zombie*,Zombie*>
                  ((MessageRouter *)gMessageRouter,Message::ZombieTossEnd,(Zombie *)this_02);
        lVar10 = FUN_046da948(*(undefined8 *)(in_x0 + 0x40),*(undefined8 *)(in_x0 + 0x48));
        if (lVar10 != 0) {
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this);
          local_28 = __gnu_cxx::
                     __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                     ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                                  *)&local_38,lVar12);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_28);
          std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                    ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18);
        }
        if (fVar20 <= *(float *)(lVar8 + 0x20)) goto LAB_046e388c;
      }
      *(float *)(lVar8 + 0x20) = fVar20;
    }
LAB_046e388c:
    while (lVar12 = lVar15, lVar15 != lVar13) {
      while( true ) {
        lVar15 = lVar12 + -1;
        lVar8 = FUN_046da978(*(undefined8 *)(in_x0 + 0x40),lVar12);
        this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x40));
        if (this_02 != (ResourceInfo *)0x0) goto LAB_046e36ec;
LAB_046e38c0:
        lVar8 = FUN_046da948(*(undefined8 *)(in_x0 + 0x40),*(undefined8 *)(in_x0 + 0x48));
        if (lVar8 == 0) break;
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_28 = __gnu_cxx::
                   __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                   ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                                *)&local_38,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                  ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_18);
        lVar12 = lVar15;
        if (lVar15 == lVar13) goto LAB_046e3918;
      }
    }
  }
LAB_046e3918:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

