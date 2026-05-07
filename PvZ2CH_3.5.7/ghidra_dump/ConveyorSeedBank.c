// Class: ConveyorSeedBank


/* ConveyorSeedBank::onRemoveSeed(ConveyorRemoveSeedInstruction const&) */

void ConveyorSeedBank::onRemoveSeed(ConveyorRemoveSeedInstruction *param_1)

{
  return;
}


/* ConveyorSeedBank::updateState_Initializing() */

void __thiscall ConveyorSeedBank::updateState_Initializing(ConveyorSeedBank *this)

{
  (**(code **)(*(long *)this + 0x1d8))(this,0);
  (**(code **)(*(long *)this + 0xe8))(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::StaticClassInit() */

void ConveyorSeedBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConveyorSeedBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03c78024,0x288,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConveyorSeedBank::StaticGetClass() */

long * ConveyorSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"ConveyorSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConveyorSeedBank::GetClass() const */

long * ConveyorSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"ConveyorSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConveyorSeedBank::SetSeedPickTimer(float) */

void __thiscall ConveyorSeedBank::SetSeedPickTimer(ConveyorSeedBank *this,float param_1)

{
  *(float *)(this + 0x224) = param_1;
  return;
}


/* ConveyorSeedBank::PauseBelt(bool) */

void __thiscall ConveyorSeedBank::PauseBelt(ConveyorSeedBank *this,bool param_1)

{
  this[0x26c] = (ConveyorSeedBank)param_1;
  return;
}


/* ConveyorSeedBank::onLevelRewardDropped() */

void __thiscall ConveyorSeedBank::onLevelRewardDropped(ConveyorSeedBank *this)

{
  PauseBelt(this,true);
  return;
}


/* ConveyorSeedBank::HasPlant(std::string const&) */

char __thiscall ConveyorSeedBank::HasPlant(ConveyorSeedBank *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x228);
  lVar2 = FUN_03c74ec4(uVar5,*(undefined8 *)(this + 0x230));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    psVar3 = (string *)FUN_03c74ef4(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::InitializePacketTimers() */

void __thiscall ConveyorSeedBank::InitializePacketTimers(ConveyorSeedBank *this)

{
  char cVar1;
  FishingEnergyBar *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedBankNew::SetPacketsOnDisplay((SeedBankNew *)this,false);
  for (iVar2 = 0; cVar1 = FUN_03c74e98(this[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
    this_00 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    FishingEnergyBar::onGameUnpaused(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::removeSeedFromBelt(Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
ConveyorSeedBank::removeSeedFromBelt(ConveyorSeedBank *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  UIWidget *this_00;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_03c74e98(this[0x199]);
  iVar2 = (int)cVar3;
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar9);
      cVar3 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar3 != '\0') {
        if (iVar2 + -1 == iVar9) {
          UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar9);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          pcVar13 = *(code **)(*plVar4 + 0x198);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
          (*pcVar13)(plVar4,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        else {
          this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          UIWidget::DetachFromParent(this_00);
        }
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        (**(code **)(*plVar4 + 0x48))();
        (**(code **)(*(long *)this + 0x1c0))(this,iVar2 + -1,1);
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
    cVar3 = FUN_03c74e98(this[0x199]);
    if (iVar9 < cVar3) {
      uVar11 = *(undefined8 *)(this + 0x208);
      lVar12 = (long)iVar9;
      puVar5 = (undefined4 *)FUN_03c74ebc(uVar11,lVar12);
      uVar10 = *(undefined8 *)(this + 0x1f0);
      puVar6 = (undefined4 *)FUN_03c74ebc(uVar10,lVar12);
      lVar8 = lVar12 + 1;
      do {
        puVar7 = (undefined4 *)FUN_03c74ebc(uVar11,lVar8);
        lVar1 = lVar8 + 1;
        *puVar5 = *puVar7;
        puVar5 = (undefined4 *)FUN_03c74ebc(uVar10,lVar8);
        *puVar6 = *puVar5;
        lVar8 = lVar1;
        puVar6 = puVar5;
        puVar5 = puVar7;
      } while (lVar1 != lVar12 + 2 + (ulong)(uint)((cVar3 + -1) - iVar9));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::GetCountOfTypeOnConveyorBelt(ConveyorPlantEntry const&) */

void __thiscall
ConveyorSeedBank::GetCountOfTypeOnConveyorBelt(ConveyorSeedBank *this,ConveyorPlantEntry *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  PVPManager *this_00;
  string *psVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03c74e98(this[0x199]);
  iVar1 = (int)cVar2;
  if (iVar1 < 1) {
    iVar7 = 0;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
LAB_03c7608c:
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar6);
      this_00 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      psVar4 = (string *)PVPManager::GetPVPMapDataList(this_00);
      cVar2 = std::operator==(psVar4,(string *)param_1);
      if (cVar2 != '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        iVar3 = FUN_03c74e94(*(undefined4 *)(lVar5 + 0x1d0));
        if (iVar3 == *(int *)(param_1 + 0x20)) {
          iVar6 = iVar6 + 1;
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          iVar3 = FUN_03c74e90(*(undefined4 *)(lVar5 + 0x1cc));
          if (iVar3 == *(int *)(param_1 + 0x1c)) {
            iVar7 = iVar7 + 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (iVar1 == iVar6) break;
          goto LAB_03c7608c;
        }
      }
      iVar6 = iVar6 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar1 != iVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* ConveyorSeedBank::resetConveyorSpeed() */

void __thiscall ConveyorSeedBank::resetConveyorSpeed(ConveyorSeedBank *this)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long extraout_x0;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  nop();
  uVar8 = *(undefined8 *)(extraout_x0 + 0xf0);
  lVar4 = FUN_03c74f30(uVar8,*(undefined8 *)(extraout_x0 + 0xf8));
  if (lVar4 != 0) {
    iVar10 = 0x41c80000;
    iVar7 = -1;
    cVar3 = FUN_03c74e98(this[0x199]);
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      piVar5 = (int *)FUN_03c74f3c(uVar8,lVar6);
      iVar2 = *piVar5;
      if ((iVar7 < iVar2) && (iVar2 <= cVar3)) {
        iVar10 = piVar5[1];
        iVar7 = iVar2;
      }
      lVar6 = lVar1;
    } while (lVar1 != lVar4);
    uVar9 = FUN_03c75528(iVar10);
    *(undefined4 *)(this + 0x220) = uVar9;
  }
  return;
}


/* ConveyorSeedBank::onEnterState_Ready(WidgetState) */

void ConveyorSeedBank::onEnterState_Ready(ConveyorSeedBank *param_1)

{
  long extraout_x0;
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(param_1 + 0x224) == fVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a0));
    nop();
    if (*(char *)(extraout_x0 + 0xd0) == '\0') {
      *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
      resetConveyorSpeed(param_1);
      return;
    }
  }
  resetConveyorSpeed(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::onSeedPacketPlanted(SeedPacket*) */

void ConveyorSeedBank::onSeedPacketPlanted(SeedPacket *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  removeSeedFromBelt((ConveyorSeedBank *)param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::onPowerupDeactivated(BasePowerup*) */

void __thiscall ConveyorSeedBank::onPowerupDeactivated(ConveyorSeedBank *this,BasePowerup *param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  RtObject *this_00;
  SeedPacket_Powerup *this_01;
  string *psVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = BasePowerup::GetType(param_1);
  FUN_05475d88(asStack_20,lVar5 + 8);
  cVar3 = FUN_03c74e98(this[0x199]);
  iVar2 = (int)cVar3;
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar11);
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if (bVar4) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar11);
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        this_01 = Sexy::RtObject::Cast<SeedPacket_Powerup>(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (this_01 != (SeedPacket_Powerup *)0x0) {
          psVar6 = (string *)PVPManager::GetPVPMapDataList((PVPManager *)this_01);
          cVar3 = std::operator==(psVar6,asStack_20);
          if ((cVar3 != '\0') && (cVar3 = FUN_03c74e9c(this_01[0x200]), cVar3 != '\0')) {
            if (iVar11 == iVar2 + -1) {
              pcVar10 = *(code **)(*(long *)this_01 + 0x198);
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                         aRStack_10);
              (*pcVar10)(this_01,aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            }
            else {
              UIWidget::DetachFromParent((UIWidget *)this_01);
            }
            (**(code **)(*(long *)this_01 + 0x48))(this_01);
            (**(code **)(*(long *)this + 0x1c0))(this,iVar2 + -1,1);
            break;
          }
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      iVar11 = iVar11 + 1;
    } while (iVar2 != iVar11);
    cVar3 = FUN_03c74e98(this[0x199]);
    if (iVar11 < cVar3) {
      uVar14 = *(undefined8 *)(this + 0x208);
      lVar12 = (long)iVar11;
      puVar7 = (undefined4 *)FUN_03c74ebc(uVar14,lVar12);
      uVar13 = *(undefined8 *)(this + 0x1f0);
      puVar8 = (undefined4 *)FUN_03c74ebc(uVar13,lVar12);
      lVar5 = lVar12 + 1;
      do {
        puVar9 = (undefined4 *)FUN_03c74ebc(uVar14,lVar5);
        lVar1 = lVar5 + 1;
        *puVar7 = *puVar9;
        puVar7 = (undefined4 *)FUN_03c74ebc(uVar13,lVar5);
        *puVar8 = *puVar7;
        lVar5 = lVar1;
        puVar8 = puVar7;
        puVar7 = puVar9;
      } while (lVar1 != lVar12 + 2 + (ulong)(uint)((cVar3 + -1) - iVar11));
    }
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::registerForEvents() */

void __thiscall ConveyorSeedBank::registerForEvents(ConveyorSeedBank *this)

{
  undefined *puVar1;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  local_e0 = local_b8;
  local_f0 = local_c8;
  uStack_e8 = uStack_c0;
  MessageRouter::
  Subscribe<int,WaveDefinition_const*,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(int,WaveDefinition_const*)>>
            ((MessageRouter *)puVar1,Message::NewWaveStarting);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::SeedPacketPlanted,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x208);
  local_120 = local_88;
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupDeactivated,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x200);
  Sexy::Delegate0::Delegate0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelRewardDropped,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<ConveyorSeedBank,void(ConveyorSeedBank::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddSeed);
  local_150 = local_80;
  uStack_148 = uStack_78;
  local_140 = local_70;
  MessageRouter::
  Subscribe<ConveyorAddSeedInstruction_const&,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(ConveyorAddSeedInstruction_const&)>>
            ((MessageRouter *)puVar1,Message::ConveyorAddSeed,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRemoveSeed);
  local_170 = local_68;
  uStack_168 = uStack_60;
  local_160 = local_58;
  MessageRouter::
  Subscribe<ConveyorRemoveSeedInstruction_const&,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(ConveyorRemoveSeedInstruction_const&)>>
            ((MessageRouter *)puVar1,Message::ConveyorRemoveSeed,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBowlingRefill);
  local_190 = local_50;
  uStack_188 = uStack_48;
  local_180 = local_40;
  MessageRouter::
  Subscribe<std::vector<std::string,std::allocator<std::string>>const&,float,Sexy::CBMemberTranslatorX<ConveyorSeedBank,void(ConveyorSeedBank::*)(std::vector<std::string,std::allocator<std::string>>const&,float)>>
            ((MessageRouter *)puVar1,Message::NotifyBowlingRefill,&local_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::addSeedToBelt(Sexy::RtWeakPtr<PlantType const>, bool) */

void __thiscall
ConveyorSeedBank::addSeedToBelt
          (RtWeakPtr<Sexy::SoundResource> *param_1,ConveyorSeedBank *this,RtWeakPtrBase *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  SalesProgressBar *this_00;
  float *pfVar5;
  undefined8 uVar6;
  long *plVar7;
  SeedPacket *this_01;
  UIWidget *this_02;
  float *pfVar8;
  long lVar9;
  code *pcVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03c74e98(this[0x199]);
  iVar1 = (int)cVar2;
  if (iVar1 < *(int *)(this + 0x1ec)) {
    lVar9 = (long)cVar2;
    (**(code **)(*(long *)this + 0x1c0))(this,iVar1 + 1,1);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    fVar11 = *(float *)(this + 0x240);
    pfVar5 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar9);
    iVar4 = FUN_03c74e8c(*(undefined4 *)(this + 0x3c));
    uVar6 = *(undefined8 *)(this + 0x1f0);
    *pfVar5 = (float)iVar4 - (((float)iVar3 - fVar11) - (float)(int)((float)iVar3 - fVar11));
    pfVar5 = (float *)FUN_03c74ebc(uVar6,lVar9);
    *pfVar5 = (float)*(int *)(this + 0x244);
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar1);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pcVar10 = *(code **)(*plVar7 + 0x198);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
    (*pcVar10)(plVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::SetAlwaysPlantable(this_01,true);
    this_02 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    UIWidget::SetParentWidget(this_02,(UIWidget *)this);
    uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pfVar5 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x1f0),lVar9);
    pfVar8 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar9);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,*pfVar5,*pfVar8);
    UIWidget::SetPositionOffset(local_10,local_c,uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::addToolToBelt(std::string const&, bool) */

void __thiscall ConveyorSeedBank::addToolToBelt(ConveyorSeedBank *this,string *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  float *pfVar4;
  undefined8 uVar5;
  long *extraout_x0;
  SeedPacket *this_01;
  UIWidget *this_02;
  float *pfVar6;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long lVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c74e98(this[0x199],___stack_chk_guard,param_2);
  lVar7 = (long)cVar1;
  if ((int)cVar1 < *(int *)(this + 0x1ec)) {
    Sexy::RtName::RtName((RtName *)&local_18,L"UISeedBankToolPacket");
    UIWidget::CreateWidget((RtName *)&local_18,1);
    Sexy::RtName::~RtName((RtName *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    SeedBankNew::addPacket((SeedBankNew *)this,(RtName *)&local_18,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    fVar8 = *(float *)(this + 0x240);
    pfVar4 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar7);
    iVar3 = FUN_03c74e8c(*(undefined4 *)(this + 0x3c));
    uVar5 = *(undefined8 *)(this + 0x1f0);
    *pfVar4 = (float)iVar3 - (((float)iVar2 - fVar8) - (float)(int)((float)iVar2 - fVar8));
    pfVar4 = (float *)FUN_03c74ebc(uVar5,lVar7);
    *pfVar4 = (float)*(int *)(this + 0x244);
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)cVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    nop();
    (**(code **)(*extraout_x0 + 0x230))();
    this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    SeedPacket::SetAlwaysPlantable(this_01,true);
    this_02 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    UIWidget::SetParentWidget(this_02,(UIWidget *)this);
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pfVar4 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x1f0),lVar7);
    pfVar6 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar7);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,*pfVar4,*pfVar6);
    UIWidget::SetPositionOffset(local_18,local_14,uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::addPowerupToBelt(std::string const&, bool) */

void __thiscall
ConveyorSeedBank::addPowerupToBelt(ConveyorSeedBank *this,string *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  float *pfVar4;
  undefined8 uVar5;
  SeedPacket_Powerup *this_01;
  SeedPacket *this_02;
  UIWidget *this_03;
  float *pfVar6;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long lVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c74e98(this[0x199],___stack_chk_guard,param_2);
  lVar7 = (long)cVar1;
  if ((int)cVar1 < *(int *)(this + 0x1ec)) {
    Sexy::RtName::RtName((RtName *)&local_18,L"UISeedBankPowerupPacket");
    UIWidget::CreateWidget((RtName *)&local_18,1);
    Sexy::RtName::~RtName((RtName *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
    SeedBankNew::addPacket((SeedBankNew *)this,(RtName *)&local_18,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    fVar8 = *(float *)(this + 0x240);
    pfVar4 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar7);
    iVar3 = FUN_03c74e8c(*(undefined4 *)(this + 0x3c));
    uVar5 = *(undefined8 *)(this + 0x1f0);
    *pfVar4 = (float)iVar3 - (((float)iVar2 - fVar8) - (float)(int)((float)iVar2 - fVar8));
    pfVar4 = (float *)FUN_03c74ebc(uVar5,lVar7);
    *pfVar4 = (float)*(int *)(this + 0x244);
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)cVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    nop();
    SeedPacket_Powerup::SetPowerupType(this_01,param_1);
    this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    SeedPacket::SetAlwaysPlantable(this_02,true);
    this_03 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    UIWidget::SetParentWidget(this_03,(UIWidget *)this);
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pfVar4 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x1f0),lVar7);
    pfVar6 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar7);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,*pfVar4,*pfVar6);
    UIWidget::SetPositionOffset(local_18,local_14,uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::resetSeedPickTimer() */

void __thiscall ConveyorSeedBank::resetSeedPickTimer(ConveyorSeedBank *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  long lVar4;
  int *piVar5;
  PennyPerkQuickDelivery *this_00;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  nop();
  uVar8 = *(undefined8 *)(extraout_x0 + 0x108);
  lVar4 = FUN_03c74f1c(uVar8,*(undefined8 *)(extraout_x0 + 0x110));
  if (lVar4 != 0) {
    lVar7 = 0;
    fVar10 = 10.0;
    iVar3 = -1;
    cVar2 = FUN_03c74e98(this[0x199]);
    do {
      piVar5 = (int *)FUN_03c74f28(uVar8,lVar7);
      iVar1 = *piVar5;
      if ((iVar3 < iVar1) && (iVar1 <= cVar2)) {
        fVar10 = (float)piVar5[1];
        iVar3 = iVar1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar4);
    this_00 = BoardHelpers::GetPerkByClass<PennyPerkQuickDelivery>();
    if (this_00 != (PennyPerkQuickDelivery *)0x0) {
      fVar9 = (float)PennyPerkQuickDelivery::GetTimeReductionMultiplier(this_00);
      fVar10 = fVar9 * fVar10;
    }
    local_10 = 0.0;
    iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType();
    local_c = (float)BoardHelpers::ApplyMiniGamePerkBuffValue(0.0,iVar3,3,(PlantType *)0x0);
    local_c = 1.0 - local_c;
    pfVar6 = eastl::max_alt<float>(&local_10,&local_c);
    fVar11 = *pfVar6;
    fVar9 = (float)PVZ_T();
    *(float *)(this + 0x224) = fVar9 + fVar10 * fVar11;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConveyorSeedBank::ConveyorSeedBank() */

void __thiscall ConveyorSeedBank::ConveyorSeedBank(ConveyorSeedBank *this)

{
  undefined4 uVar1;
  
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined ***)this = &PTR_GetClass_06759ee0;
  *(undefined ***)(this + 0x10) = &PTR__ConveyorSeedBank_0675a100;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x270));
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x19c) = 1;
  uVar1 = FUN_03c7554c();
  *(undefined4 *)(this + 0x220) = uVar1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x224) = uVar1;
  std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::clear
            ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)(this + 0x228));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x270));
  this[0x26c] = (ConveyorSeedBank)0x0;
  *(undefined4 *)(this + 0x240) = 0;
  uVar1 = FUN_03c75538(10);
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x244) = uVar1;
  *(undefined4 *)(this + 0x248) = 0;
  return;
}


/* ConveyorSeedBank::StaticNew() */

ConveyorSeedBank * ConveyorSeedBank::StaticNew(void)

{
  ConveyorSeedBank *this;
  
  this = ::operator_new(0x288);
  ConveyorSeedBank(this);
  return this;
}


/* ConveyorSeedBank::~ConveyorSeedBank() */

void __thiscall ConveyorSeedBank::~ConveyorSeedBank(ConveyorSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06759ee0;
  *(undefined ***)(this + 0x10) = &PTR__ConveyorSeedBank_0675a100;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x270));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x250));
  std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::~vector
            ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)(this + 0x228));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x208));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x1f0));
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to ConveyorSeedBank::~ConveyorSeedBank() */

void __thiscall ConveyorSeedBank::~ConveyorSeedBank(ConveyorSeedBank *this)

{
  ~ConveyorSeedBank(this + -0x10);
  return;
}


/* ConveyorSeedBank::~ConveyorSeedBank() */

void __thiscall ConveyorSeedBank::~ConveyorSeedBank(ConveyorSeedBank *this)

{
  ~ConveyorSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConveyorSeedBank::~ConveyorSeedBank() */

void __thiscall ConveyorSeedBank::~ConveyorSeedBank(ConveyorSeedBank *this)

{
  ~ConveyorSeedBank(this + -0x10);
  return;
}


/* ConveyorSeedBank::onGamePaused() */

void ConveyorSeedBank::onGamePaused(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_ConveyorBelt_LP");
  return;
}


/* ConveyorSeedBank::onGameUnpaused() */

void ConveyorSeedBank::onGameUnpaused(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_ConveyorBelt_LP");
  return;
}


/* ConveyorSeedBank::onNotifyBowlingRefill(std::vector<std::string, std::allocator<std::string > >
   const&, float) */

void __thiscall
ConveyorSeedBank::onNotifyBowlingRefill(ConveyorSeedBank *this,vector *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x248) = fVar1 + param_2;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x250),param_1);
  *(undefined4 *)(this + 0x268) = 5;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x224) = fVar1 + 0.2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::addItemToBelt(std::string const&, bool) */

void ConveyorSeedBank::addItemToBelt(string *param_1,bool param_2)

{
  int iVar1;
  char *__s1;
  string *psVar2;
  bool in_w2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  psVar2 = (string *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  __s1 = (char *)FUN_0547429c(psVar2);
  iVar1 = strncasecmp(__s1,"tool_",5);
  if (iVar1 == 0) {
    addToolToBelt((ConveyorSeedBank *)param_1,psVar2,in_w2);
  }
  else {
    iVar1 = strncasecmp(__s1,"powerup",7);
    if (iVar1 == 0) {
      addPowerupToBelt((ConveyorSeedBank *)param_1,psVar2,in_w2);
    }
    else {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      addSeedToBelt((ConveyorSeedBank *)param_1,aRStack_10,in_w2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::ForceSpawn(std::string const&) */

void __thiscall ConveyorSeedBank::ForceSpawn(ConveyorSeedBank *this,string *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  addItemToBelt((string *)this,SUB81(param_1,0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::RemoveSeedFromConveyorSeedPool(ConveyorPlantEntry const&) */

void __thiscall
ConveyorSeedBank::RemoveSeedFromConveyorSeedPool(ConveyorSeedBank *this,ConveyorPlantEntry *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  lVar2 = FUN_03c74ec4(uVar5,*(undefined8 *)(this + 0x230));
  if (lVar2 != 0) {
    do {
      psVar3 = (string *)FUN_03c74ef4(uVar5,lVar4);
      cVar1 = std::operator==(psVar3,(string *)param_1);
      if (((cVar1 != '\0') && (*(int *)(psVar3 + 0x20) == *(int *)(param_1 + 0x20))) &&
         (*(int *)(psVar3 + 0x1c) == *(int *)(param_1 + 0x1c))) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x228));
        local_18 = __gnu_cxx::
                   __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                   ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                                *)&local_20,lVar4);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::erase
                  ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)(this + 0x228),
                   local_10);
        break;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::initialize(unsigned char) */

void ConveyorSeedBank::initialize(uchar param_1)

{
  long lVar1;
  int iVar2;
  UIWidget *this;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (UIWidget *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1ec) = 9;
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x1f0),9);
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x208),(long)*(int *)(this + 0x1ec));
  iVar2 = *(int *)(this + 0x1ec);
  if (0 < iVar2) {
    uVar7 = *(undefined8 *)(this + 0x1f0);
    uVar6 = *(undefined8 *)(this + 0x208);
    lVar5 = 0;
    do {
      puVar3 = (undefined4 *)FUN_03c74ebc(uVar7,lVar5);
      lVar1 = lVar5 + 1;
      *puVar3 = 0;
      puVar3 = (undefined4 *)FUN_03c74ebc(uVar6,lVar5);
      *puVar3 = 0;
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  (**(code **)(*(long *)this + 0x1c0))(this,0,1);
  puVar4 = (undefined8 *)UIWidget::GetPositionOffset(this);
  local_20 = *puVar4;
  iVar2 = FUN_03c74e88(*(undefined4 *)(this + 0x38));
  local_20 = CONCAT44(local_20._4_4_,(float)local_20 - (float)iVar2);
  std::string::string(asStack_18,"Play_UI_Game_Conveyor_Arrive");
  std::string::string(asStack_10,"");
  SlidingWidget::SetupSlideInfo
            ((SlidingWidget *)0x3f000000,this,&local_20,asStack_18,asStack_10,3,2);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConveyorSeedBank::AddSeedToConveyorSeedPool(ConveyorPlantEntry const&) */

void __thiscall
ConveyorSeedBank::AddSeedToConveyorSeedPool(ConveyorSeedBank *this,ConveyorPlantEntry *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  string *psVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(this + 0x228);
  lVar7 = FUN_03c74ec4(uVar10,*(undefined8 *)(this + 0x230));
  lVar9 = 0;
  do {
    lVar1 = lVar9 + 1;
    if (lVar9 == lVar7) {
      std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::push_back
                ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)(this + 0x228),
                 param_1);
      return;
    }
    psVar8 = (string *)FUN_03c74ef4(uVar10,lVar9);
    cVar6 = std::operator==(psVar8,(string *)param_1);
    lVar9 = lVar1;
  } while (((cVar6 == '\0') || (*(int *)(psVar8 + 0x20) != *(int *)(param_1 + 0x20))) ||
          (*(int *)(psVar8 + 0x1c) != *(int *)(param_1 + 0x1c)));
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(psVar8 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(psVar8 + 8) = uVar3;
  *(undefined4 *)(psVar8 + 0xc) = uVar5;
  *(undefined4 *)(psVar8 + 0x10) = uVar2;
  *(undefined4 *)(psVar8 + 0x18) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::onNewWave(int, WaveDefinition const*) */

void __thiscall
ConveyorSeedBank::onNewWave(ConveyorSeedBank *this,int param_1,WaveDefinition *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 local_38;
  ConveyorPlantEntry aCStack_30 [8];
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (WaveDefinition *)0x0) {
    local_40 = FUN_03c763d8(*(undefined8 *)(param_2 + 0x80),param_1);
    local_38 = FUN_03c76428(*(undefined8 *)(param_2 + 0x88));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      ConveyorPlantEntry::ConveyorPlantEntry(aCStack_30);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(puVar2 + 6));
      thunk_FUN_05475e00(aCStack_30,lVar3 + 8);
      local_28 = *puVar2;
      local_1c = puVar2[1];
      local_14 = puVar2[3];
      local_10 = puVar2[4];
      AddSeedToConveyorSeedPool(this,aCStack_30);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_30);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
    }
    local_40 = FUN_03c763d8(*(undefined8 *)(param_2 + 0x98));
    local_38 = FUN_03c76428(*(undefined8 *)(param_2 + 0xa0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      ConveyorPlantEntry::ConveyorPlantEntry(aCStack_30);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x18));
      thunk_FUN_05475e00(aCStack_30,lVar4 + 8);
      local_14 = *(undefined4 *)(lVar3 + 0xc);
      local_10 = *(undefined4 *)(lVar3 + 0x10);
      RemoveSeedFromConveyorSeedPool(this,aCStack_30);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_30);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::onAddSeed(ConveyorAddSeedInstruction const&) */

void __thiscall
ConveyorSeedBank::onAddSeed(ConveyorSeedBank *this,ConveyorAddSeedInstruction *param_1)

{
  char cVar1;
  long lVar2;
  ConveyorPlantEntry aCStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ConveyorPlantEntry::ConveyorPlantEntry(aCStack_30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 == '\0') {
    thunk_FUN_05475e00(aCStack_30,param_1 + 8);
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    thunk_FUN_05475e00(aCStack_30,lVar2 + 8);
  }
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x24);
  local_1c = *(undefined4 *)(param_1 + 0x14);
  local_24 = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(param_1 + 0x2c);
  local_10 = *(undefined4 *)(param_1 + 0x30);
  AddSeedToConveyorSeedPool(this,aCStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::pickAndAddSeedFromSeedPool() */

void __thiscall ConveyorSeedBank::pickAndAddSeedFromSeedPool(ConveyorSeedBank *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  long lVar2;
  vector<int,std::allocator<int>> *this_00;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  SeedPacket *pSVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ConveyorPlantEntry *pCVar14;
  int iVar15;
  ulong uVar16;
  float fVar17;
  string asStack_80 [8];
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  int local_44;
  int local_40;
  ConveyorPlantEntry aCStack_38 [28];
  int local_1c;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (*(int *)(this + 0x268) < 1) {
    fVar17 = (float)PVZ_T();
    if ((*(float *)(this + 0x248) <= fVar17) ||
       (cVar4 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)(this + 0x250)),
       cVar4 != '\0')) {
      local_78[0] = -1;
      uVar16 = 0;
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aCStack_38);
      uVar8 = *(undefined8 *)(this + 0x228);
      iVar7 = 0;
      lVar11 = FUN_03c74ec4(uVar8,*(undefined8 *)(this + 0x230));
      if (lVar11 != 0) {
        do {
          pCVar14 = (ConveyorPlantEntry *)FUN_03c74ef4(uVar8,uVar16);
          iVar15 = *(int *)(pCVar14 + 8);
          if ((0 < *(int *)(pCVar14 + 0x14)) || (0 < *(int *)(pCVar14 + 0xc))) {
            iVar5 = GetCountOfTypeOnConveyorBelt(this,pCVar14);
            pCVar14 = (ConveyorPlantEntry *)FUN_03c74ef4(*(undefined8 *)(this + 0x228),uVar16);
            iVar6 = Board::GetPlantedPacketCountForConveyorBelt
                              (*(Board **)(gLawnApp + 0x9f0),pCVar14);
            uVar8 = *(undefined8 *)(this + 0x228);
            lVar11 = FUN_03c74ef4(uVar8,uVar16);
            if ((*(int *)(lVar11 + 0x14) <= iVar5 + iVar6) && (0 < *(int *)(lVar11 + 0x14))) {
              iVar15 = (int)((float)iVar15 * *(float *)(lVar11 + 0x18));
            }
            if (iVar5 + iVar6 < *(int *)(lVar11 + 0xc)) {
              iVar15 = (int)((float)iVar15 * *(float *)(lVar11 + 0x10));
            }
          }
          uVar9 = *(undefined8 *)(this + 0x270);
          iVar5 = 0;
          iVar6 = FUN_03c74ea4(uVar9,*(undefined8 *)(this + 0x278));
          lVar11 = 0;
          while ((int)lVar11 < iVar6) {
            lVar2 = lVar11 + 1;
            piVar12 = (int *)FUN_03c74f14(uVar9,lVar11);
            lVar11 = lVar2;
            if (iVar7 == *piVar12) {
              iVar5 = iVar5 + 1;
            }
          }
          iVar15 = (int)((float)iVar15 / ((float)iVar5 * 2.0 + 1.0));
          if (0 < iVar15) {
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aCStack_38,iVar7,iVar15);
            uVar8 = *(undefined8 *)(this + 0x228);
          }
          uVar16 = uVar16 + 1;
          iVar7 = (int)uVar16;
          uVar13 = FUN_03c74ec4(uVar8,*(undefined8 *)(this + 0x230));
        } while (uVar16 < uVar13);
      }
      lVar11 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)aCStack_38);
      if (lVar11 != 0) {
        this_00 = (vector<int,std::allocator<int>> *)(this + 0x270);
        local_78[0] = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aCStack_38);
        bVar3 = (bool)FUN_03c74ef4(*(undefined8 *)(this + 0x228));
        addItemToBelt((string *)this,bVar3);
        pSVar10 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        lVar11 = FUN_03c74ef4(*(undefined8 *)(this + 0x228),(long)local_78[0]);
        SeedPacket::SetPlantAvatarAndLevel(pSVar10,*(int *)(lVar11 + 0x1c),*(int *)(lVar11 + 0x20));
        std::vector<int,std::allocator<int>>::push_back(this_00,local_78);
        iVar7 = FUN_03c74ea4(*(undefined8 *)(this + 0x270),*(undefined8 *)(this + 0x278));
        if (5 < iVar7) {
          local_68 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_60,(__normal_iterator *)&local_68);
          std::vector<int,std::allocator<int>>::erase(this_00,local_60[0]);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      }
    }
    else {
      uVar16 = 0;
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aCStack_38);
      uVar13 = FUN_03c74f00(*(undefined8 *)(this + 0x250),*(undefined8 *)(this + 600));
      iVar7 = 0;
      if ((int)uVar13 != 0) {
        iVar7 = 100 / (int)uVar13;
      }
      while( true ) {
        bVar3 = uVar13 <= uVar16;
        iVar15 = (int)uVar16;
        uVar16 = uVar16 + 1;
        if (bVar3) break;
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aCStack_38,iVar15,iVar7);
        uVar13 = FUN_03c74f00(*(undefined8 *)(this + 0x250),*(undefined8 *)(this + 600));
      }
      lVar11 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)aCStack_38);
      if (lVar11 != 0) {
        iVar7 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aCStack_38);
        pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x228);
        uVar8 = FUN_03c74f0c(*(undefined8 *)(this + 0x250),(long)iVar7);
        FUN_05475d88(asStack_80,uVar8);
        addItemToBelt((string *)this,SUB81(asStack_80,0));
        ConveyorPlantEntry::ConveyorPlantEntry((ConveyorPlantEntry *)local_60);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar1);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar1);
        FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_68,asStack_80);
        local_70 = FUN_03c789a0(uVar8,uVar9,
                                (pair<std::string_const,Sexy::PILifeValueTable> *)&local_68);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_68);
        local_68 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar1);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68)
        ;
        if (bVar3) {
          pCVar14 = (ConveyorPlantEntry *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
          ConveyorPlantEntry::operator=((ConveyorPlantEntry *)local_60,pCVar14);
        }
        pSVar10 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
        SeedPacket::SetPlantAvatarAndLevel(pSVar10,local_44,local_40);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
        std::string::~string(asStack_80);
      }
    }
    ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aCStack_38);
  }
  else {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x228);
    std::string::string((string *)local_78,"tool_projectile_wallnut_primeval");
    nop();
    addItemToBelt((string *)this,SUB81((string *)local_78,0));
    ConveyorPlantEntry::ConveyorPlantEntry(aCStack_38);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)local_60,(string *)local_78);
    local_68 = FUN_03c78710(uVar8,uVar9,(pair<std::string_const,Sexy::PILifeValueTable> *)local_60);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_60);
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60);
    if (bVar3) {
      pCVar14 = (ConveyorPlantEntry *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      ConveyorPlantEntry::operator=(aCStack_38,pCVar14);
    }
    pSVar10 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    SeedPacket::SetPlantAvatarAndLevel(pSVar10,local_1c,local_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    std::string::~string((string *)local_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::PickAndAddSeedFromSeedPool() */

void __thiscall ConveyorSeedBank::PickAndAddSeedFromSeedPool(ConveyorSeedBank *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  long lVar2;
  vector<int,std::allocator<int>> *this_00;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  SeedPacket *pSVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ConveyorPlantEntry *pCVar14;
  int iVar15;
  ulong uVar16;
  float fVar17;
  string asStack_80 [8];
  int aiStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  int iStack_44;
  int iStack_40;
  ConveyorPlantEntry aCStack_38 [28];
  int iStack_1c;
  int iStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (*(int *)(this + 0x268) < 1) {
    fVar17 = (float)PVZ_T();
    if ((*(float *)(this + 0x248) <= fVar17) ||
       (cVar4 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)(this + 0x250)),
       cVar4 != '\0')) {
      aiStack_78[0] = -1;
      uVar16 = 0;
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aCStack_38);
      uVar8 = *(undefined8 *)(this + 0x228);
      iVar7 = 0;
      lVar11 = FUN_03c74ec4(uVar8,*(undefined8 *)(this + 0x230));
      if (lVar11 != 0) {
        do {
          pCVar14 = (ConveyorPlantEntry *)FUN_03c74ef4(uVar8,uVar16);
          iVar15 = *(int *)(pCVar14 + 8);
          if ((0 < *(int *)(pCVar14 + 0x14)) || (0 < *(int *)(pCVar14 + 0xc))) {
            iVar5 = GetCountOfTypeOnConveyorBelt(this,pCVar14);
            pCVar14 = (ConveyorPlantEntry *)FUN_03c74ef4(*(undefined8 *)(this + 0x228),uVar16);
            iVar6 = Board::GetPlantedPacketCountForConveyorBelt
                              (*(Board **)(gLawnApp + 0x9f0),pCVar14);
            uVar8 = *(undefined8 *)(this + 0x228);
            lVar11 = FUN_03c74ef4(uVar8,uVar16);
            if ((*(int *)(lVar11 + 0x14) <= iVar5 + iVar6) && (0 < *(int *)(lVar11 + 0x14))) {
              iVar15 = (int)((float)iVar15 * *(float *)(lVar11 + 0x18));
            }
            if (iVar5 + iVar6 < *(int *)(lVar11 + 0xc)) {
              iVar15 = (int)((float)iVar15 * *(float *)(lVar11 + 0x10));
            }
          }
          uVar9 = *(undefined8 *)(this + 0x270);
          iVar5 = 0;
          iVar6 = FUN_03c74ea4(uVar9,*(undefined8 *)(this + 0x278));
          lVar11 = 0;
          while ((int)lVar11 < iVar6) {
            lVar2 = lVar11 + 1;
            piVar12 = (int *)FUN_03c74f14(uVar9,lVar11);
            lVar11 = lVar2;
            if (iVar7 == *piVar12) {
              iVar5 = iVar5 + 1;
            }
          }
          iVar15 = (int)((float)iVar15 / ((float)iVar5 * 2.0 + 1.0));
          if (0 < iVar15) {
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aCStack_38,iVar7,iVar15);
            uVar8 = *(undefined8 *)(this + 0x228);
          }
          uVar16 = uVar16 + 1;
          iVar7 = (int)uVar16;
          uVar13 = FUN_03c74ec4(uVar8,*(undefined8 *)(this + 0x230));
        } while (uVar16 < uVar13);
      }
      lVar11 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)aCStack_38);
      if (lVar11 != 0) {
        this_00 = (vector<int,std::allocator<int>> *)(this + 0x270);
        aiStack_78[0] = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aCStack_38);
        bVar3 = (bool)FUN_03c74ef4(*(undefined8 *)(this + 0x228));
        addItemToBelt((string *)this,bVar3);
        pSVar10 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_70);
        lVar11 = FUN_03c74ef4(*(undefined8 *)(this + 0x228),(long)aiStack_78[0]);
        SeedPacket::SetPlantAvatarAndLevel(pSVar10,*(int *)(lVar11 + 0x1c),*(int *)(lVar11 + 0x20));
        std::vector<int,std::allocator<int>>::push_back(this_00,aiStack_78);
        iVar7 = FUN_03c74ea4(*(undefined8 *)(this + 0x270),*(undefined8 *)(this + 0x278));
        if (5 < iVar7) {
          uStack_68 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this_00);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)auStack_60,(__normal_iterator *)&uStack_68);
          std::vector<int,std::allocator<int>>::erase(this_00,auStack_60[0]);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_70)
        ;
      }
    }
    else {
      uVar16 = 0;
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aCStack_38);
      uVar13 = FUN_03c74f00(*(undefined8 *)(this + 0x250),*(undefined8 *)(this + 600));
      iVar7 = 0;
      if ((int)uVar13 != 0) {
        iVar7 = 100 / (int)uVar13;
      }
      while( true ) {
        bVar3 = uVar13 <= uVar16;
        iVar15 = (int)uVar16;
        uVar16 = uVar16 + 1;
        if (bVar3) break;
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aCStack_38,iVar15,iVar7);
        uVar13 = FUN_03c74f00(*(undefined8 *)(this + 0x250),*(undefined8 *)(this + 600));
      }
      lVar11 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)aCStack_38);
      if (lVar11 != 0) {
        iVar7 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aCStack_38);
        pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x228);
        uVar8 = FUN_03c74f0c(*(undefined8 *)(this + 0x250),(long)iVar7);
        FUN_05475d88(asStack_80,uVar8);
        addItemToBelt((string *)this,SUB81(asStack_80,0));
        ConveyorPlantEntry::ConveyorPlantEntry((ConveyorPlantEntry *)auStack_60);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar1);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar1);
        FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&uStack_68,asStack_80);
        uStack_70 = FUN_03c789a0(uVar8,uVar9,
                                 (pair<std::string_const,Sexy::PILifeValueTable> *)&uStack_68);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&uStack_68);
        uStack_68 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar1);
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&uStack_70,(__normal_iterator *)&uStack_68);
        if (bVar3) {
          pCVar14 = (ConveyorPlantEntry *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_70);
          ConveyorPlantEntry::operator=((ConveyorPlantEntry *)auStack_60,pCVar14);
        }
        pSVar10 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aiStack_78);
        SeedPacket::SetPlantAvatarAndLevel(pSVar10,iStack_44,iStack_40);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)auStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aiStack_78)
        ;
        std::string::~string(asStack_80);
      }
    }
    ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aCStack_38);
  }
  else {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x228);
    std::string::string((string *)aiStack_78,"tool_projectile_wallnut_primeval");
    nop();
    addItemToBelt((string *)this,SUB81((string *)aiStack_78,0));
    ConveyorPlantEntry::ConveyorPlantEntry(aCStack_38);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)auStack_60,(string *)aiStack_78);
    uStack_68 = FUN_03c78710(uVar8,uVar9,
                             (pair<std::string_const,Sexy::PILifeValueTable> *)auStack_60);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)auStack_60);
    auStack_60[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end(pvVar1);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_68,(__normal_iterator *)auStack_60);
    if (bVar3) {
      pCVar14 = (ConveyorPlantEntry *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_68);
      ConveyorPlantEntry::operator=(aCStack_38,pCVar14);
    }
    pSVar10 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_70);
    SeedPacket::SetPlantAvatarAndLevel(pSVar10,iStack_1c,iStack_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_70);
    std::string::~string((string *)aiStack_78);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::updateState_Ready() */

void __thiscall ConveyorSeedBank::updateState_Ready(ConveyorSeedBank *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UIWidget *this_00;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  SalesProgressBar *this_01;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_18;
  float local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x26c] == (ConveyorSeedBank)0x0) {
    fVar11 = (float)PVZ_T();
    if (*(float *)(this + 0x224) <= fVar11) {
      cVar2 = FUN_03c74e98(this[0x199]);
      if ((int)cVar2 < *(int *)(this + 0x1ec)) {
        pickAndAddSeedFromSeedPool(this);
      }
      if ((*(int *)(this + 0x268) < 1) ||
         (iVar4 = *(int *)(this + 0x268) + -1, *(int *)(this + 0x268) = iVar4, iVar4 == 0)) {
        resetConveyorSpeed(this);
        resetSeedPickTimer(this);
      }
    }
    fVar13 = *(float *)(this + 0x220);
    fVar11 = (float)PVZ_Dt();
    fVar12 = *(float *)(this + 0x240) - fVar11 * fVar13;
    *(float *)(this + 0x240) = fVar12;
    if (fVar12 < 0.0) {
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
      *(float *)(this + 0x240) = *(float *)(this + 0x240) + (float)iVar4;
    }
    if (0.0 < *(float *)(this + 0x220)) {
      lVar10 = 0;
      while( true ) {
        iVar4 = (int)lVar10;
        cVar2 = FUN_03c74e98(this[0x199]);
        if (cVar2 <= iVar4) break;
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar4);
        this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar5 = UIWidget::GetPositionOffset(this_00);
        if (0.0 < *(float *)(lVar5 + 4)) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          iVar3 = FUN_03c74e8c(*(undefined4 *)(lVar5 + 0x3c));
          local_18 = (float)(iVar3 * iVar4 + 8);
          pfVar6 = (float *)FUN_03c74ebc(*(undefined8 *)(this + 0x208),lVar10);
          local_14 = *pfVar6 - fVar11 * fVar13;
          pfVar7 = eastl::max_alt<float>(&local_18,&local_14);
          fVar12 = *pfVar7;
          uVar8 = *(undefined8 *)(this + 0x1f0);
          *pfVar6 = fVar12;
          puVar9 = (undefined4 *)FUN_03c74ebc(uVar8,lVar10);
          uVar1 = *puVar9;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          UIWidget::SetPositionOffset(uVar1,fVar12);
        }
        lVar10 = lVar10 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
  }
  else {
    fVar11 = (float)PVZ_EOT();
    if (*(float *)(this + 0x224) < fVar11) {
      fVar11 = (float)PVZ_Dt();
      *(float *)(this + 0x224) = *(float *)(this + 0x224) + fVar11;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::Draw(Sexy::Graphics*) */

void __thiscall ConveyorSeedBank::Draw(ConveyorSeedBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SalesProgressBar *pSVar7;
  LotteryResultProgressBar *pLVar8;
  Image *pIVar9;
  float fVar10;
  float fVar11;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = FUN_03c75538(0x19c);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1ce8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1ce8);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  fVar11 = *(float *)(this + 0x240);
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = (iVar4 + (iVar2 - iVar1)) / iVar3;
  }
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1ce8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar5 = FUN_03c75538(0x28a);
  Sexy::Graphics::SetClipRect(param_1,0,0,iVar2 + iVar4,iVar5);
  if (-2 < iVar6) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
      pLVar8 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1cb0);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      fVar10 = (float)iVar4;
      iVar4 = iVar4 + iVar3;
      Sexy::Graphics::DrawImage
                (param_1,pIVar9,0,(int)(fVar10 + (fVar11 - (float)iVar1)),iVar5,iVar3);
    } while (iVar2 != iVar6 + 2);
  }
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1c08);
  Sexy::Graphics::DrawImage(param_1,pIVar9,0,0);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1ce8);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1c08);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ConveyorSeedBank::Draw(Sexy::Graphics*) */

void __thiscall ConveyorSeedBank::Draw(ConveyorSeedBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBank::SetSeedBankProperties(Sexy::RtWeakPtr<SeedBankProperties const>) */

void __thiscall
ConveyorSeedBank::SetSeedBankProperties(ConveyorSeedBank *this,RtWeakPtrBase *param_2)

{
  RtObject *this_00;
  ConveyorSeedBankProperties *pCVar1;
  ConveyorPlantEntry *pCVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SeedBankNew::SetSeedBankProperties((SeedBankNew *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pCVar1 = Sexy::RtObject::Cast<ConveyorSeedBankProperties>(this_00);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pCVar1 + 0xd8);
    uVar3 = FUN_03c74ec4(uVar5,*(undefined8 *)(pCVar1 + 0xe0));
    if (uVar3 <= uVar4) break;
    pCVar2 = (ConveyorPlantEntry *)FUN_03c74ef4(uVar5,uVar4);
    AddSeedToConveyorSeedPool(this,pCVar2);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConveyorSeedBank::onVisibleStateChange(bool) */

void __thiscall ConveyorSeedBank::onVisibleStateChange(ConveyorSeedBank *this,bool param_1)

{
  char *pcVar1;
  
  SlidingWidget::onVisibleStateChange((SlidingWidget *)this,param_1);
  if (!param_1) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Stop_ConveyorBelt_LP");
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_ConveyorBelt_LP");
  return;
}

