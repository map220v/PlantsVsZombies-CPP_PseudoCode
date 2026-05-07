// Class: ArtifactDragonSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::StaticClassInit() */

void ArtifactDragonSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactDragonSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03737958,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragonSubsystem::StaticGetClass() */

long * ArtifactDragonSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactDragonSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDragonSubsystem::GetClass() const */

long * ArtifactDragonSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactDragonSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::registerForEvents() */

void __thiscall ArtifactDragonSubsystem::registerForEvents(ArtifactDragonSubsystem *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArtifactClearBoard);
  Sexy::Delegate0::Delegate0<ArtifactDragonSubsystem,void(ArtifactDragonSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ArtifactClearBoard,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragonSubsystem::ArtifactDragonSubsystem() */

void __thiscall ArtifactDragonSubsystem::ArtifactDragonSubsystem(ArtifactDragonSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06693cd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* ArtifactDragonSubsystem::StaticNew() */

ArtifactDragonSubsystem * ArtifactDragonSubsystem::StaticNew(void)

{
  ArtifactDragonSubsystem *this;
  
  this = ::operator_new(0x38);
  ArtifactDragonSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::GetHead(TestDragonType) */

void __thiscall ArtifactDragonSubsystem::GetHead(ArtifactDragonSubsystem *this,undefined4 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_03759308(uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ArtifactDragonSubsystem::DragonExit() */

void __thiscall ArtifactDragonSubsystem::DragonExit(ArtifactDragonSubsystem *this)

{
  TestDragon *this_00;
  
  this_00 = (TestDragon *)GetHead(this,0);
  if (this_00 != (TestDragon *)0x0) {
    TestDragon::Exit(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::WidenDragon(bool) */

void __thiscall ArtifactDragonSubsystem::WidenDragon(ArtifactDragonSubsystem *this,bool param_1)

{
  Projectile *this_00;
  long lVar1;
  float fVar2;
  TRect<float> aTStack_28 [16];
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(float *)(this + 0x30) != 0.0) {
      *(float *)(this + 0x30) = *(float *)(this + 0x34) + *(float *)(this + 0x30);
      goto LAB_03759460;
    }
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar2 + *(float *)(this + 0x34);
    MessageRouter::Post((_func_void *)gMessageRouter);
    this_00 = (Projectile *)GetHead(this,0);
    if (this_00 == (Projectile *)0x0) goto LAB_03759460;
    lVar1 = Projectile::GetProps(this_00);
    Sexy::TRect<float>::TRect(aTStack_28,(TRect *)(lVar1 + 0x120));
    Sexy::TRect<float>::Scale(aTStack_28,1.5,1.5);
  }
  else {
    *(undefined4 *)(this + 0x30) = 0;
    this_00 = (Projectile *)GetHead(this,0);
    if (this_00 == (Projectile *)0x0) goto LAB_03759460;
    lVar1 = Projectile::GetProps(this_00);
    Sexy::TRect<float>::TRect(aTStack_28,(TRect *)(lVar1 + 0x120));
  }
  do {
    Sexy::TRect<float>::TRect(aTStack_18,(TRect *)aTStack_28);
    Projectile::SetCollisionRect(this_00,aTStack_18);
    TestDragon::CheckWidenAnim((TestDragon *)this_00,param_1);
    this_00 = *(Projectile **)(this_00 + 0x1b0);
  } while (this_00 != (Projectile *)0x0);
LAB_03759460:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragonSubsystem::updateWidenDragon() */

void __thiscall ArtifactDragonSubsystem::updateWidenDragon(ArtifactDragonSubsystem *this)

{
  ArtifactDragonSubsystem *this_00;
  float fVar1;
  
  if ((*(float *)(this + 0x30) != 0.0) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0x30) <= fVar1)
     ) {
    this_00 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    WidenDragon(this_00,false);
    return;
  }
  return;
}


/* ArtifactDragonSubsystem::EnableDragonDamage(TestDragonType, bool) */

void __thiscall
ArtifactDragonSubsystem::EnableDragonDamage
          (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  for (lVar1 = GetHead(); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x1b0)) {
    FUN_03723cb0(lVar1 + 0x23c,param_3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::updateDragonDamage() */

void __thiscall ArtifactDragonSubsystem::updateDragonDamage(ArtifactDragonSubsystem *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    fVar3 = (float)PVZ_T();
    if (*(float *)(lVar2 + 0x18) <= fVar3) {
      EnableDragonDamage(this,*(undefined4 *)(lVar2 + 0x10),1);
      fVar3 = (float)PVZ_T();
      *(float *)(lVar2 + 0x18) = fVar3 + *(float *)(lVar2 + 0x14);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragonSubsystem::Update() */

void __thiscall ArtifactDragonSubsystem::Update(ArtifactDragonSubsystem *this)

{
  updateDragonDamage(this);
  updateWidenDragon(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::getTestDragonProjectileType(TestDragonNodeType, TestDragonType) */

void ArtifactDragonSubsystem::getTestDragonProjectileType
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  char *__s;
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    if (param_4 == 0) {
      __s = "TestDragonHead";
    }
    else {
      __s = "TestDragonHeadSmall";
    }
  }
  else if (param_3 == 2) {
    if (param_4 == 0) {
      __s = "TestDragonTail";
    }
    else {
      __s = "TestDragonTailSmall";
    }
  }
  else if (param_4 == 0) {
    __s = "TestDragonSeg";
  }
  else {
    __s = "TestDragonSegSmall";
  }
  std::string::string(asStack_28,__s);
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(param_1,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::createDragon(Sexy::SexyVector3 const&, TestDragonNodeType,
   TestDragonType) */

void __thiscall
ArtifactDragonSubsystem::createDragon
          (ArtifactDragonSubsystem *this,undefined8 *param_1,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  Board *pBVar5;
  undefined4 uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pBVar5._0_4_ = *param_1;
  uVar3 = *(undefined4 *)((long)param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 1);
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  getTestDragonProjectileType(aRStack_10,this,param_3,param_4);
  lVar1 = Board::AddProjectile(pBVar5._0_4_,uVar3,uVar4,uVar2,aRStack_10,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_03723aac(lVar1 + 0x24,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* ArtifactDragonSubsystem::~ArtifactDragonSubsystem() */

void __thiscall ArtifactDragonSubsystem::~ArtifactDragonSubsystem(ArtifactDragonSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06693cd0;
  std::vector<DragonInfo,std::allocator<DragonInfo>>::~vector
            ((vector<DragonInfo,std::allocator<DragonInfo>> *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactDragonSubsystem::~ArtifactDragonSubsystem() */

void __thiscall ArtifactDragonSubsystem::~ArtifactDragonSubsystem(ArtifactDragonSubsystem *this)

{
  ~ArtifactDragonSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::RemoveDragon(TestDragonType) */

void __thiscall
ArtifactDragonSubsystem::RemoveDragon(ArtifactDragonSubsystem *this,undefined4 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (plVar2 = (long *)GetHead(); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0x36]) {
    (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_03759998(uVar3,uVar4,param_2);
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
    std::vector<DragonInfo,std::allocator<DragonInfo>>::erase
              ((vector<DragonInfo,std::allocator<DragonInfo>> *)this_00,local_18,local_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactDragonSubsystem::onArtifactClearBoard() */

void __thiscall ArtifactDragonSubsystem::onArtifactClearBoard(ArtifactDragonSubsystem *this)

{
  RemoveDragon(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragonSubsystem::DragonTest(int, Sexy::SexyVector3 const&, TestDragonType, float, float)
    */

void ArtifactDragonSubsystem::DragonTest
               (DragonInfo *param_1,float param_2,float param_3,ArtifactDragonSubsystem *param_4,
               int param_5,float *param_6,int param_7)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar1;
  SexyVector3 *pSVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  int iVar4;
  int iVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar6;
  float fVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_28;
  float local_24;
  float local_20;
  long local_8;
  
  local_e0 = *(undefined8 *)param_6;
  local_d8 = param_6[2];
  local_8 = ___stack_chk_guard;
  if (param_5 < 1) {
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0;
    p_Var8 = p_Var3;
LAB_0378f8cc:
    DragonInfo::DragonInfo(param_1._0_4_,(DragonInfo *)&local_28,p_Var8,p_Var3,param_7);
    std::vector<DragonInfo,std::allocator<DragonInfo>>::push_back
              ((vector<DragonInfo,std::allocator<DragonInfo>> *)(param_4 + 0x18),
               (DragonInfo *)&local_28);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
  iVar4 = 0;
  iVar5 = 0;
  fVar7 = param_2;
LAB_0378f59c:
  local_28 = GetOffset(iVar5,param_7);
  local_24 = fVar7;
  local_20 = param_3;
  EATextSquish::Vec3::operator+=((Vec3 *)&local_e0,(Vec3 *)&local_28);
  createDragon(param_4,(Vec3 *)&local_e0,iVar5,param_7);
  nop();
  FUN_03723c9c(this + 0x1d8,iVar5);
  FUN_03723c90(this + 0x20c,param_7);
  FUN_03723ae4(this + 0x50,iVar4 + 900000);
  FUN_03723cb8(this + 0x240,iVar4);
  FUN_03723b18(param_2,this + 0xd8);
  if (iVar5 == 0) {
    if (param_7 == 1) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_28);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_50,*param_6 + 40.0,param_6[1] - 130.0,param_6[2]);
      fVar7 = (float)PVZ_EOT();
      PathInfo::PathInfo((PathInfo *)&local_40,(SexyVector3 *)&local_50,0.3,fVar7);
      std::vector<PathInfo,std::allocator<PathInfo>>::push_back
                ((vector<PathInfo,std::allocator<PathInfo>> *)&local_28,(PathInfo *)&local_40);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_40,local_50 - 100.0,local_4c,local_48);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
      PathInfo::PathInfo((PathInfo *)&local_40,(SexyVector3 *)&local_50,0.0,1.4);
      std::vector<PathInfo,std::allocator<PathInfo>>::push_back
                ((vector<PathInfo,std::allocator<PathInfo>> *)&local_28,(PathInfo *)&local_40);
      TestDragon::SetPath((TestDragon *)this,(vector *)&local_28);
      std::vector<PathInfo,std::allocator<PathInfo>>::~vector
                ((vector<PathInfo,std::allocator<PathInfo>> *)&local_28);
LAB_0378f894:
      fVar7 = 0.0;
      param_3 = 0.0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,160.0,0.0,0.0);
      Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_28);
    }
  }
  else if (param_7 == 1) goto LAB_0378f894;
  p_Var3 = this;
  if (iVar4 == 0) {
    iVar4 = 1;
    p_Var8 = this;
    if (param_5 != 1) goto LAB_0378f7d4;
  }
  else {
    *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      **)(this + 0x1a8) = this_00;
    *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      **)(this_00 + 0x1b0) = this;
    if (p_Var8 != this) {
      puVar1 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_d0 = *puVar1;
      local_c8 = *(undefined4 *)(puVar1 + 1);
      puVar1 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this);
      local_c0 = *puVar1;
      local_b8 = *(undefined4 *)(puVar1 + 1);
      local_b0 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_d0,(SexyVector3 *)&local_c0);
      local_ac = fVar7;
      local_a8 = param_3;
      puVar1 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
      local_a0 = *puVar1;
      local_98 = *(undefined4 *)(puVar1 + 1);
      local_90 = DAT_06aaf688;
      local_88 = DAT_06aaf690;
      pSVar2 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)this);
      local_80 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_a0,pSVar2);
      local_7c = fVar7;
      local_78 = param_3;
      fVar6 = (float)PVZ_Dt();
      local_70 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_80,fVar6);
      local_6c = fVar7;
      local_68 = param_3;
      fVar6 = (float)PVZ_Dt();
      local_60 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_90,fVar6);
      local_5c = fVar7;
      local_58 = param_3;
      fVar6 = (float)PVZ_Dt();
      local_50 = (float)Sexy::SexyVector3::operator*((SexyVector3 *)&local_60,fVar6);
      local_4c = fVar7;
      local_48 = param_3;
      local_40 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_50,0.5);
      local_3c = fVar7;
      local_38 = param_3;
      Sexy::SexyVector3::operator+((SexyVector3 *)&local_70,(SexyVector3 *)&local_40);
      local_28 = 0;
      local_24 = fVar7;
      local_20 = param_3;
      getValidUpdateCount((int *)&local_28,*(float *)pSVar2,(SexyVector3 *)&local_c0,
                          (SexyVector3 *)&local_d0,(SexyVector3 *)&local_a0,(SexyVector3 *)&local_90
                         );
      FUN_03723ca8(this + 0x1e8,local_28);
    }
    iVar4 = iVar4 + 1;
    if (iVar4 != param_5) goto code_r0x0378f7cc;
  }
  goto LAB_0378f8cc;
code_r0x0378f7cc:
  iVar5 = 0;
  this_00 = this;
  if (iVar4 != 0) {
LAB_0378f7d4:
    iVar5 = 2;
    this_00 = this;
    if (param_5 + -1 != iVar4) {
      iVar5 = 1;
    }
  }
  goto LAB_0378f59c;
}

