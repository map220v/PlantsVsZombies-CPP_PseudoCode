// Class: MeleePlantTargeter


/* MeleePlantTargeter::getPlantsFramework(Plant*) */

void __thiscall MeleePlantTargeter::getPlantsFramework(MeleePlantTargeter *this,Plant *param_1)

{
  nop();
  return;
}


/* MeleePlantTargeter::getPlantAttackRect(Plant*, MeleePlantTargeter::TargetDirection, PlantWeapon)
    */

int * MeleePlantTargeter::getPlantAttackRect
                (int *param_1_00,MeleePlantTargeter *param_1,Plant *param_3,int param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)getPlantsFramework(param_1,param_3);
  (**(code **)(*plVar2 + 0x2b8))(param_1_00,plVar2,param_5);
  if (param_5 == 0) {
    iVar1 = param_1_00[2];
    param_1_00[2] = (int)((float)iVar1 * 0.5);
    if (param_4 == 2) {
      *param_1_00 = *param_1_00 + (int)((float)iVar1 * 0.5);
      return param_1_00;
    }
  }
  return param_1_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeleePlantTargeter::getZombieTarget(Plant*, MeleePlantTargeter::TargetDirection, PlantWeapon) */

void __thiscall
MeleePlantTargeter::getZombieTarget
          (MeleePlantTargeter *this,Plant *param_1,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  UnchartedModePlantNumData aUStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_38,1,0);
  getPlantAttackRect(aIStack_28,this,param_1,param_3,param_4);
  plVar2 = (long *)getPlantsFramework(this,param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  pcVar4 = *(code **)(*plVar2 + 0xe8);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  (*pcVar4)(aRStack_30,plVar2,uVar1,param_4,0,aUStack_38,aIStack_18);
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* MeleePlantTargeter::hasZombieLeft(Plant*, PlantWeapon) */

bool __thiscall
MeleePlantTargeter::hasZombieLeft(MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = getZombieTarget(this,param_1,1,param_3);
  return lVar1 != 0;
}


/* MeleePlantTargeter::hasZombieRight(Plant*, PlantWeapon) */

bool __thiscall
MeleePlantTargeter::hasZombieRight(MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = getZombieTarget(this,param_1,2,param_3);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeleePlantTargeter::getGridItemTarget(Plant*, MeleePlantTargeter::TargetDirection, PlantWeapon)
    */

void MeleePlantTargeter::getGridItemTarget(void)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPlantAttackRect(auStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_38,4,auStack_48,0xffffffff,0xffffffff);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  PlantUtils::GetBestDamageableGridItemFromEntities((PlantUtils *)aRStack_50,avStack_20);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* MeleePlantTargeter::hasGridItemRight(Plant*, PlantWeapon) */

bool __thiscall
MeleePlantTargeter::hasGridItemRight(MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = getGridItemTarget(this,param_1,2,param_3);
  return lVar1 != 0;
}


/* MeleePlantTargeter::hasGridItemLeft(Plant*, PlantWeapon) */

bool __thiscall
MeleePlantTargeter::hasGridItemLeft(MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = getGridItemTarget(this,param_1,1,param_3);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeleePlantTargeter::GetBestTargetDirection(Plant*, PlantWeapon,
   MeleePlantTargeter::TargetDirection) */

void __thiscall
MeleePlantTargeter::GetBestTargetDirection
          (MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = 0;
  if (cVar1 == '\0') goto LAB_0398444c;
  if (param_4 == 1) {
LAB_03984478:
    cVar1 = hasZombieRight(this,param_1,param_3);
    if ((cVar1 != '\0') || (cVar1 = hasGridItemRight(this,param_1,param_3), cVar1 != '\0')) {
      uVar2 = 2;
      goto LAB_0398444c;
    }
    if (param_4 != 1) goto LAB_03984430;
LAB_039844b8:
    uVar2 = 0;
  }
  else {
    cVar1 = hasZombieLeft(this,param_1,param_3);
    if (cVar1 == '\0') {
      if (param_4 != 2) goto LAB_03984478;
LAB_03984430:
      cVar1 = hasGridItemLeft(this,param_1,param_3);
      if (cVar1 == '\0') goto LAB_039844b8;
    }
    uVar2 = 1;
  }
LAB_0398444c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeleePlantTargeter::GetBestTarget(Plant*, PlantWeapon, MeleePlantTargeter::TargetDirection) */

void __thiscall
MeleePlantTargeter::GetBestTarget
          (MeleePlantTargeter *this,undefined8 param_1,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = getZombieTarget(this,param_1,param_4,param_3);
    if (lVar2 == 0) {
      lVar2 = getGridItemTarget(this,param_1,param_4,param_3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeleePlantTargeter::GetAdjacentTargets(Plant*, PlantWeapon) */

void MeleePlantTargeter::GetAdjacentTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,
               MeleePlantTargeter *param_1,Plant *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  TRect aTStack_c0 [16];
  EntitySearch_InGridRows aEStack_b0 [16];
  EntitySearch_InGridSquares aEStack_a0 [16];
  CBMemberTranslatorX aCStack_90 [24];
  RtMixedPtrBase aRStack_78 [32];
  ReceivedDataCallback aRStack_58 [32];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (param_3 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    if (cVar1 != '\0') {
      plVar3 = (long *)getPlantsFramework(param_1,param_3);
      (**(code **)(*plVar3 + 0x2b8))(aTStack_c0,plVar3,param_4);
      Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet
                ((Event1wRet<3,bool,BoardEntity*> *)aRStack_78);
      EntitySearch_InGridRows::EntitySearch_InGridRows
                (aEStack_b0,*(int *)(param_3 + 0x110) + -1,*(int *)(param_3 + 0x110) + 1);
      EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_a0,aTStack_c0);
      FUN_03983dcc(afStack_38,param_3);
      EntitySearch_Lambda::EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58,afStack_38);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)aEStack_b0,EntitySearch_InGridRows::Accept);
      Sexy::Delegate1wRet<bool,BoardEntity*>::
      Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
                ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
      Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=
                ((Event1wRet<3,bool,BoardEntity*> *)aRStack_78,(Delegate1wRet *)afStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)aEStack_a0,EntitySearch_TouchingRectangle::Accept);
      Sexy::Delegate1wRet<bool,BoardEntity*>::
      Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
                ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
      Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=
                ((Event1wRet<3,bool,BoardEntity*> *)aRStack_78,(Delegate1wRet *)afStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (aRStack_58,EntitySearch_Lambda::Accept);
      Sexy::Delegate1wRet<bool,BoardEntity*>::
      Delegate1wRet<EntitySearch_Lambda,bool(EntitySearch_Lambda::*)(BoardEntity*)>
                ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
      Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=
                ((Event1wRet<3,bool,BoardEntity*> *)aRStack_78,(Delegate1wRet *)afStack_38);
      uVar2 = operator|(2,4);
      EntityFinder::GetEntities(param_1_00,uVar2,aRStack_78);
      EntitySearch_Lambda::~EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58);
      Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet
                ((Event1wRet<3,bool,BoardEntity*> *)aRStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

