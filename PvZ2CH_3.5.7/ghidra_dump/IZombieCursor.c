// Class: IZombieCursor


/* IZombieCursor::StaticGetClass() */

long * IZombieCursor::StaticGetClass(void)

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
  uVar2 = ZombieCursor::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* IZombieCursor::GetClass() const */

long * IZombieCursor::GetClass(void)

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
  uVar2 = ZombieCursor::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieCursor::IZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
IZombieCursor::IZombieCursor(IZombieCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ZombieCursor::ZombieCursor((ZombieCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined ***)this = &PTR_GetClass_066211b0;
  this_00 = (PopAnimRig *)FUN_03419284(*(undefined8 *)(this + 0x28));
  PopAnimRig::SetMirrorX(this_00,true);
  DComponent::setEnabled((DComponent *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieCursor::~IZombieCursor() */

void __thiscall IZombieCursor::~IZombieCursor(IZombieCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_066211b0;
  ZombieCursor::~ZombieCursor((ZombieCursor *)this);
  return;
}


/* IZombieCursor::~IZombieCursor() */

void __thiscall IZombieCursor::~IZombieCursor(IZombieCursor *this)

{
  ~IZombieCursor(this);
  AK::FreeHook(this);
  return;
}


/* IZombieCursor::IZombieCursor() */

void __thiscall IZombieCursor::IZombieCursor(IZombieCursor *this)

{
  ZombieCursor::ZombieCursor((ZombieCursor *)this);
  *(undefined ***)this = &PTR_GetClass_066211b0;
  return;
}


/* IZombieCursor::StaticNew() */

IZombieCursor * IZombieCursor::StaticNew(void)

{
  IZombieCursor *this;
  
  this = ::operator_new(0x60);
  IZombieCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieCursor::OnUsed(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
IZombieCursor::OnUsed(undefined8 param_1,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  int iVar1;
  SexyVector3 *pSVar2;
  long *plVar3;
  code *pcVar4;
  float local_18;
  float local_14;
  long local_8;
  
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
  pSVar2 = (SexyVector3 *)(*pcVar4)(plVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  iVar1 = BoardTransforms::GridToBoardSpaceX(param_3);
  local_18 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_4);
  local_14 = (float)iVar1;
  RealObject::JoinTeam((RealObject *)pSVar2,1);
  Zombie::SetFacing((Zombie *)pSVar2,1);
  BoardEntity::PlaceOnBoard(pSVar2);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombiePlanted,(Zombie *)pSVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieCursor::OnUsedPacket(Sexy::RtWeakPtr<SeedPacket>, int, int, bool, int) */

void __thiscall
IZombieCursor::OnUsedPacket
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,int param_3,
          LineBreakCategory *param_4,undefined8 param_5,undefined4 param_6)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  wchar16 *pwVar5;
  SexyVector3 *pSVar6;
  RtObject *this;
  SeedPacket *pSVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  LineBreakCategory *pLVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  code *pcVar13;
  float local_40;
  float local_3c;
  undefined4 local_30 [10];
  long local_8;
  
  uVar11 = (undefined4)((ulong)param_5 >> 0x20);
  uVar10 = (undefined4)param_5;
  local_8 = ___stack_chk_guard;
  pLVar9 = param_4;
  lVar4 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_40;
  std::string::string((string *)local_30,"FreePlanting");
  bVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)local_30,(LineBreakCategory *)pRVar8,pLVar9,
                     (LineBreakCategory *)CONCAT44(uVar11,uVar10));
  if ((bVar1 < (lVar4 != 0)) && (iVar3 = FUN_03419294(*(undefined4 *)(lVar4 + 0x19c)), iVar3 == 0))
  {
    std::string::~string((string *)local_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    PowerupUI::GetPowerupDownImage();
    plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    iVar3 = (**(code **)(*plVar12 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    if ((iVar3 != 0) &&
       (cVar2 = Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar3,false,false), cVar2 == '\0')
       ) goto LAB_0341d158;
  }
  else {
    std::string::~string((string *)local_30);
    nop();
  }
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  plVar12 = *(long **)(gLawnApp + 0x9f0);
  pcVar13 = *(code **)(*plVar12 + 0x318);
  local_30[0] = param_6;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  PowerupUI::GetPowerupDownImage();
  pSVar6 = (SexyVector3 *)
           (*pcVar13)(plVar12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0,(string *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Zombie::SetHasPlantFood(SUB81(pSVar6,0));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_40,0.0,0.0,0.0);
  iVar3 = BoardTransforms::GridToBoardSpaceX(param_3);
  local_40 = (float)iVar3;
  iVar3 = BoardTransforms::GridToBoardSpaceY((int)param_4);
  local_3c = (float)iVar3;
  RealObject::JoinTeam((RealObject *)pSVar6,1);
  BoardEntity::PlaceOnBoard(pSVar6);
  Zombie::SetFacing((Zombie *)pSVar6,1);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pSVar7 = Sexy::RtObject::Cast<SeedPacket>(this);
  MessageRouter::Post<SeedPacket*,SeedPacket*>
            ((MessageRouter *)gMessageRouter,Message::SeedPacketPlanted,pSVar7);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombiePlanted,(Zombie *)pSVar6);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
LAB_0341d158:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

