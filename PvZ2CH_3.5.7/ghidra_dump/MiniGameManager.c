// Class: MiniGameManager


/* MiniGameManager::setChanceCost(std::vector<int, std::allocator<int> > const&) */

void __thiscall MiniGameManager::setChanceCost(MiniGameManager *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),param_1);
  return;
}


/* MiniGameManager::subtractLeftBuyChance(int) */

void __thiscall MiniGameManager::subtractLeftBuyChance(MiniGameManager *this,int param_1)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) - param_1;
  return;
}


/* MiniGameManager::subtractLeftChellengeChance(int) */

void __thiscall MiniGameManager::subtractLeftChellengeChance(MiniGameManager *this,int param_1)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - param_1;
  return;
}


/* MiniGameManager::getMiniGameCurCost() */

undefined4 __thiscall MiniGameManager::getMiniGameCurCost(MiniGameManager *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x34);
  iVar2 = *(int *)(this + 0xc);
  uVar6 = *(undefined8 *)(this + 0x18);
  uVar4 = FUN_0392064c(uVar6,*(undefined8 *)(this + 0x20));
  uVar3 = 0;
  if ((ulong)(long)(iVar1 - iVar2) < uVar4) {
    puVar5 = (undefined4 *)FUN_03920658(uVar6,(long)(iVar1 - iVar2));
    uVar3 = *puVar5;
  }
  return uVar3;
}


/* MiniGameManager::RequestBuyMiniGameChallenge(int, int) */

void __thiscall
MiniGameManager::RequestBuyMiniGameChallenge(MiniGameManager *this,int param_1,int param_2)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::RequestUseGem(this_00,param_1,param_2,true);
  return;
}


/* MiniGameManager::MiniGameManager() */

void __thiscall MiniGameManager::MiniGameManager(MiniGameManager *this)

{
  Sexy::LazySingleton<MiniGameManager>::LazySingleton((LazySingleton<MiniGameManager> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__MiniGameManager_066c7930;
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* MiniGameManager::~MiniGameManager() */

void __thiscall MiniGameManager::~MiniGameManager(MiniGameManager *this)

{
  *(undefined ***)this = &PTR__MiniGameManager_066c7930;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  Sexy::LazySingleton<MiniGameManager>::~LazySingleton((LazySingleton<MiniGameManager> *)this);
  return;
}


/* MiniGameManager::~MiniGameManager() */

void __thiscall MiniGameManager::~MiniGameManager(MiniGameManager *this)

{
  ~MiniGameManager(this);
  AK::FreeHook(this);
  return;
}


/* MiniGameManager::getChanceCost() const */

vector<int,std::allocator<int>> * MiniGameManager::getChanceCost(void)

{
  long in_x0;
  vector<int,std::allocator<int>> *in_x8;
  
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(in_x0 + 0x18));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameManager::loadData() */

void __thiscall MiniGameManager::loadData(MiniGameManager *this)

{
  char cVar1;
  int iVar2;
  MiniGameConfig aMStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  vector avStack_a8 [24];
  int local_90;
  int local_8c;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    MiniGameConfig::MiniGameConfig(aMStack_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aMStack_d8);
    if (cVar1 != '\0') {
      *(int *)(this + 0x34) = local_8c;
      *(int *)(this + 0xc) = local_8c - local_90;
      *(undefined4 *)(this + 0x10) = local_cc;
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)(this + 0x18),avStack_a8);
      *(undefined4 *)(this + 8) = local_d0;
    }
    MiniGameConfig::~MiniGameConfig(aMStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

