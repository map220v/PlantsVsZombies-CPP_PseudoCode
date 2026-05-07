// Class: CollectableWeapon


/* CollectableWeapon::onDestroy() */

void __thiscall CollectableWeapon::onDestroy(CollectableWeapon *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x200) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableWeapon::StaticClassInit() */

void CollectableWeapon::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableWeapon");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6c284,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableWeapon::StaticGetClass() */

long * CollectableWeapon::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableWeapon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableWeapon::GetClass() const */

long * CollectableWeapon::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableWeapon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableWeapon::GetSeedName() */

undefined8 CollectableWeapon::GetSeedName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* CollectableWeapon::CollectableWeapon() */

void __thiscall CollectableWeapon::CollectableWeapon(CollectableWeapon *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06758b00;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWeapon_06758d50;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0));
  Set8BytesTo0(this + 0x1f8);
  *(undefined8 *)(this + 0x200) = 0;
  return;
}


/* CollectableWeapon::StaticNew() */

CollectableWeapon * CollectableWeapon::StaticNew(void)

{
  CollectableWeapon *this;
  
  this = ::operator_new(0x208);
  CollectableWeapon(this);
  return this;
}


/* CollectableWeapon::~CollectableWeapon() */

void __thiscall CollectableWeapon::~CollectableWeapon(CollectableWeapon *this)

{
  *(undefined ***)this = &PTR_GetClass_06758b00;
  *(undefined ***)(this + 0x10) = &PTR__CollectableWeapon_06758d50;
  std::string::~string((string *)(this + 0x1f8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableWeapon::~CollectableWeapon() */

void __thiscall CollectableWeapon::~CollectableWeapon(CollectableWeapon *this)

{
  ~CollectableWeapon(this + -0x10);
  return;
}


/* CollectableWeapon::~CollectableWeapon() */

void __thiscall CollectableWeapon::~CollectableWeapon(CollectableWeapon *this)

{
  ~CollectableWeapon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableWeapon::~CollectableWeapon() */

void __thiscall CollectableWeapon::~CollectableWeapon(CollectableWeapon *this)

{
  ~CollectableWeapon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableWeapon::SetSeedType(std::string const&) */

void CollectableWeapon::SetSeedType(string *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x1f8);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1f0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableWeapon::drawToBuffer() */

void __thiscall CollectableWeapon::drawToBuffer(CollectableWeapon *this)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  SeedPacketUtils *this_01;
  long lVar3;
  DeviceImage *this_02;
  Graphics3D *this_03;
  ResourceInfo *pRVar4;
  ProfileMgr *this_04;
  PlayerInfo *this_05;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  Insets aIStack_e0 [16];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  lVar3 = SeedPacketUtils::GetPlantPacketRenderData(this_01,(string *)(lVar3 + 8),-1,-1,-1);
  if (*(long *)(this + 0x200) == 0) {
    this_00 = (RtWeakPtr *)(lVar3 + 0x170);
    this_02 = ::operator_new(0x160);
    Sexy::DeviceImage::DeviceImage(this_02,gLawnApp);
    *(DeviceImage **)(this + 0x200) = this_02;
    FUN_03c6bd08(this_02 + 0x18);
    plVar6 = *(long **)(this + 0x200);
    iVar2 = *(int *)(lVar3 + 0x28);
    iVar1 = *(int *)(lVar3 + 0x2c);
    plVar6[0xe] = 0;
    *(int *)(plVar6 + 7) = iVar2 + 5;
    pcVar7 = *(code **)(*plVar6 + 0x130);
    *(int *)((long)plVar6 + 0x3c) = iVar1 + 5;
    (*pcVar7)(plVar6,1,1);
    Sexy::Graphics::Graphics(aGStack_d0,*(Image **)(this + 0x200));
    this_03 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
    Sexy::Insets::Insets(aIStack_e0,0,0,0,0);
    Sexy::Graphics3D::ClearColorBuffer(this_03,(Color *)aIStack_e0);
    Sexy::Color::Color((Color *)aIStack_e0,1);
    Sexy::Graphics::SetColor(aGStack_d0,(Color *)aIStack_e0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0x30),*(int *)(lVar3 + 0x34),
               (TRect *)(lVar3 + 0x20));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0x18),*(int *)(lVar3 + 0x1c),
               (TRect *)(lVar3 + 8));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0xc0),*(int *)(lVar3 + 0xc4),
               (TRect *)(lVar3 + 0xb0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0xf0),*(int *)(lVar3 + 0xf4),
               (TRect *)(lVar3 + 0xe0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0xd8),*(int *)(lVar3 + 0xdc),
               (TRect *)(lVar3 + 200));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0x108),*(int *)(lVar3 + 0x10c),
               (TRect *)(lVar3 + 0xf8));
    this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_04);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
    iVar2 = PlayerInfo::GetPlantStarLevel(this_05,(string *)(lVar5 + 8),false);
    if (0 < iVar2) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImage
                (aGStack_d0,(Image *)pRVar4,*(int *)(lVar3 + 0x150),*(int *)(lVar3 + 0x154),
                 (TRect *)(lVar3 + 0x140));
    }
    Sexy::Graphics::~Graphics(aGStack_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableWeapon::onDraw(Sexy::Graphics*) */

void __thiscall CollectableWeapon::onDraw(CollectableWeapon *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_28 [8];
  undefined4 local_20;
  float local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawToBuffer(this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Collectable::getDesiredEffectColor();
  fVar8 = *(float *)(this + 0x1c);
  local_20 = FUN_03c6bd18(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  local_1c = fVar8;
  fVar5 = (float)FUN_03c6bd74();
  fVar5 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar5);
  lVar4 = *(long *)(this + 0x200);
  fVar6 = (float)FUN_03c6bc54(*(undefined4 *)(this + 0xb8));
  iVar1 = *(int *)(lVar4 + 0x38);
  iVar2 = *(int *)(lVar4 + 0x3c);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar3 = *(Image **)(this + 0x200);
  fVar7 = (float)FUN_03c6bc54(*(undefined4 *)(this + 0xb8));
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,(int)(fVar5 - fVar6 * (float)iVar1 * 0.5),
             (int)(fVar8 - fVar6 * (float)iVar2 * 0.5),(int)(fVar7 * (float)*(int *)(pIVar3 + 0x38))
             ,(int)(fVar7 * (float)*(int *)(pIVar3 + 0x3c)));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

