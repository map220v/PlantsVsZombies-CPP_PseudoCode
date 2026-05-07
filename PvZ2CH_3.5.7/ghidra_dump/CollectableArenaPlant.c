// Class: CollectableArenaPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaPlant::StaticClassInit() */

void CollectableArenaPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableArenaPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_04b25594,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableArenaPlant::StaticGetClass() */

long * CollectableArenaPlant::StaticGetClass(void)

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
  uVar2 = CollectableArenaZombie::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableArenaPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableArenaPlant::GetClass() const */

long * CollectableArenaPlant::GetClass(void)

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
  uVar2 = CollectableArenaZombie::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableArenaPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableArenaPlant::SetPlantSeedType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
CollectableArenaPlant::SetPlantSeedType(CollectableArenaPlant *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x208),param_2);
  return;
}


/* CollectableArenaPlant::CollectableArenaPlant() */

void __thiscall CollectableArenaPlant::CollectableArenaPlant(CollectableArenaPlant *this)

{
  CollectableArenaZombie::CollectableArenaZombie((CollectableArenaZombie *)this);
  *(undefined ***)this = &PTR_GetClass_06956130;
  *(undefined ***)(this + 0x10) = &PTR__CollectableArenaPlant_06956398;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x208));
  return;
}


/* CollectableArenaPlant::StaticNew() */

CollectableArenaPlant * CollectableArenaPlant::StaticNew(void)

{
  CollectableArenaPlant *this;
  
  this = ::operator_new(0x210);
  CollectableArenaPlant(this);
  return this;
}


/* CollectableArenaPlant::~CollectableArenaPlant() */

void __thiscall CollectableArenaPlant::~CollectableArenaPlant(CollectableArenaPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_06956130;
  *(undefined ***)(this + 0x10) = &PTR__CollectableArenaPlant_06956398;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  CollectableArenaZombie::~CollectableArenaZombie((CollectableArenaZombie *)this);
  return;
}


/* non-virtual thunk to CollectableArenaPlant::~CollectableArenaPlant() */

void __thiscall CollectableArenaPlant::~CollectableArenaPlant(CollectableArenaPlant *this)

{
  ~CollectableArenaPlant(this + -0x10);
  return;
}


/* CollectableArenaPlant::~CollectableArenaPlant() */

void __thiscall CollectableArenaPlant::~CollectableArenaPlant(CollectableArenaPlant *this)

{
  ~CollectableArenaPlant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableArenaPlant::~CollectableArenaPlant() */

void __thiscall CollectableArenaPlant::~CollectableArenaPlant(CollectableArenaPlant *this)

{
  ~CollectableArenaPlant(this + -0x10);
  return;
}


/* CollectableArenaPlant::drawToBuffer() */

void __thiscall CollectableArenaPlant::drawToBuffer(CollectableArenaPlant *this)

{
  SeedPacketUtils *this_00;
  long lVar1;
  PacketRenderData *pPVar2;
  DeviceImage *pDVar3;
  
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  pPVar2 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(lVar1 + 8),-1,-1,-1);
  if (*(long *)(this + 0x1f8) != 0) {
    return;
  }
  pDVar3 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar2,0,0);
  *(DeviceImage **)(this + 0x1f8) = pDVar3;
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar3,pPVar2,false,-1,false,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaPlant::StartMoving() */

void __thiscall CollectableArenaPlant::StartMoving(CollectableArenaPlant *this)

{
  int iVar1;
  string *psVar2;
  RtObject *this_00;
  SeedPacket_PVP *pSVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  psVar2 = (string *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  SeedBankNew::GetPacket(psVar2);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pSVar3 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  (**(code **)(*(long *)pSVar3 + 0xb0))((TPoint<int> *)&local_28,pSVar3);
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator-=((TPoint<int> *)&local_28,(TPoint *)aRStack_20);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
  iVar1 = FUN_04b250a8(local_28);
  local_18 = (float)(iVar1 + 0x40);
  iVar1 = FUN_04b250a8(local_24);
  local_14 = (float)iVar1;
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  Collectable::SetMotionInterpolate((Collectable *)0x3f800000,this,uVar4,(DVec3 *)&local_18,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaPlant::onFinishMotion() */

void __thiscall CollectableArenaPlant::onFinishMotion(CollectableArenaPlant *this)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  RtObject *this_00;
  SeedPacket_PVP *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  SeedBankNew::GetPacket(psVar3);
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar1 = FUN_04b250a4(*(undefined4 *)(this_01 + 0x200));
  SeedPacket_PVP::SetCurNum(this_01,iVar1 + 1);
  iVar1 = FUN_04b250bc(0xffffffdd);
  iVar2 = FUN_04b250bc(0xffffffd3);
  SeedPacket::PlayWordAffordEffect((SeedPacket *)this_01,iVar1,iVar2);
  Collectable::FinishCollect((Collectable *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

