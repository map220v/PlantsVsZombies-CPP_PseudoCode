// Class: RechargeDailySignActivityManager


/* RechargeDailySignActivityManager::GetBannerImageName() */

undefined8 RechargeDailySignActivityManager::GetBannerImageName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* RechargeDailySignActivityManager::GetDayLength() */

void __thiscall
RechargeDailySignActivityManager::GetDayLength(RechargeDailySignActivityManager *this)

{
  FUN_0342986c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* RechargeDailySignActivityManager::GetDayData(int) */

void RechargeDailySignActivityManager::GetDayData(int param_1)

{
  vector *pvVar1;
  int in_w1;
  vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *in_x8;
  
  pvVar1 = (vector *)FUN_03429860(*(undefined8 *)((ulong)(uint)param_1 + 0x10),(long)in_w1);
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
            (in_x8,pvVar1);
  return;
}


/* RechargeDailySignActivityManager::GetSignData() */

RechargeDailySignData * RechargeDailySignActivityManager::GetSignData(void)

{
  long in_x0;
  RechargeDailySignData *in_x8;
  
  RechargeDailySignData::RechargeDailySignData(in_x8,(RechargeDailySignData *)(in_x0 + 8));
  return in_x8;
}


/* RechargeDailySignActivityManager::Init(ActiveItem) */

void __thiscall
RechargeDailySignActivityManager::Init(RechargeDailySignActivityManager *this,ActiveItem *param_2)

{
  char cVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  cVar1 = FUN_04c4dca8(*(undefined4 *)(param_2 + 8));
  if ((cVar1 != '\0') && (param_2[0x18] != (ActiveItem)0x0)) {
    uVar8 = 0;
    ActiveItem::GetDataSerialized(param_2,(RtObject *)(this + 8));
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_2 + 0x50);
    uVar10 = 0;
    Sexy::OutputDebugStrF((wchar_t *)"RechargeDailySignActivityManager::Init");
    Sexy::OutputDebugStrF((wchar_t *)"data._rechargeCurrency : %d",(ulong)*(uint *)(this + 0x28));
    Sexy::OutputDebugStrF((wchar_t *)"data._advanceSignDayNum : %d",(ulong)*(uint *)(this + 0x2c));
    Sexy::OutputDebugStrF((wchar_t *)"data._normalDaySignNum : %d",(ulong)*(uint *)(this + 0x30));
    uVar11 = *(undefined8 *)(this + 0x10);
    lVar2 = FUN_04c4dcc4(uVar11,*(undefined8 *)(this + 0x18));
    if (lVar2 != 0) {
      do {
        uVar6 = 0;
        while( true ) {
          uVar7 = uVar6 & 0xffffffff;
          puVar4 = (undefined8 *)FUN_04c4dcb8(uVar11,uVar8);
          uVar9 = *puVar4;
          uVar5 = FUN_04c4decc(uVar9,puVar4[1]);
          if (uVar5 <= uVar6) break;
          puVar3 = (uint *)FUN_04c4dcf4(uVar9,uVar6);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"data[%d].[%d].ObjectID : %d",uVar10,uVar7,(ulong)*puVar3);
          puVar4 = (undefined8 *)FUN_04c4dcb8(*(undefined8 *)(this + 0x10),uVar8);
          lVar2 = FUN_04c4dcf4(*puVar4,uVar6);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"data[%d].[%d].Quantity : %d",uVar10,uVar7,
                     (ulong)*(uint *)(lVar2 + 4));
          puVar4 = (undefined8 *)FUN_04c4dcb8(*(undefined8 *)(this + 0x10),uVar8);
          lVar2 = FUN_04c4dcf4(*puVar4,uVar6);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"data[%d].[%d].BtnStatus : %d",uVar10,uVar7,
                     (ulong)*(uint *)(lVar2 + 8));
          uVar11 = *(undefined8 *)(this + 0x10);
          uVar6 = uVar6 + 1;
        }
        uVar8 = uVar8 + 1;
        uVar10 = uVar8 & 0xffffffff;
        uVar6 = FUN_04c4dcc4(uVar11,*(undefined8 *)(this + 0x18));
      } while (uVar8 < uVar6);
    }
  }
  return;
}


/* RechargeDailySignActivityManager::~RechargeDailySignActivityManager() */

void __thiscall
RechargeDailySignActivityManager::~RechargeDailySignActivityManager
          (RechargeDailySignActivityManager *this)

{
  *(undefined ***)this = &PTR__RechargeDailySignActivityManager_0698a510;
  RechargeDailySignData::~RechargeDailySignData((RechargeDailySignData *)(this + 8));
  Sexy::LazySingleton<RechargeDailySignActivityManager>::~LazySingleton
            ((LazySingleton<RechargeDailySignActivityManager> *)this);
  return;
}


/* RechargeDailySignActivityManager::~RechargeDailySignActivityManager() */

void __thiscall
RechargeDailySignActivityManager::~RechargeDailySignActivityManager
          (RechargeDailySignActivityManager *this)

{
  ~RechargeDailySignActivityManager(this);
  AK::FreeHook(this);
  return;
}


/* RechargeDailySignActivityManager::RechargeDailySignActivityManager() */

void __thiscall
RechargeDailySignActivityManager::RechargeDailySignActivityManager
          (RechargeDailySignActivityManager *this)

{
  Sexy::LazySingleton<RechargeDailySignActivityManager>::LazySingleton
            ((LazySingleton<RechargeDailySignActivityManager> *)this);
  *(undefined ***)this = &PTR__RechargeDailySignActivityManager_0698a510;
  RechargeDailySignData::RechargeDailySignData((RechargeDailySignData *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignActivityManager::GetBtnStatus(int, RechargeDailySignBonusType) */

void __thiscall
RechargeDailySignActivityManager::GetBtnStatus
          (RechargeDailySignActivityManager *this,int param_1,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  vector *pvVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x30);
  iVar2 = *(int *)(this + 0x2c);
  pvVar5 = (vector *)FUN_04c4dcb8(*(undefined8 *)(this + 0x10));
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             local_20,pvVar5);
  lVar6 = FUN_04c4dcf4(local_20[0],(long)param_3);
  iVar3 = *(int *)(lVar6 + 8);
  lVar6 = FUN_04c4dcf4(local_20[0],0);
  iVar4 = *(int *)(lVar6 + 8);
  if (param_3 == 0) {
    uVar7 = 1;
    if (iVar1 < param_1 + 1) goto LAB_04c4f2b8;
joined_r0x04c4f328:
    uVar7 = 0;
    if ((iVar3 != 0) && (uVar7 = 2, iVar3 != 1)) {
      uVar7 = 0xffffffff;
    }
  }
  else {
    if (param_3 == 1) {
      uVar7 = 2;
      if (iVar2 < param_1 + 1) {
        if ((iVar4 != 0) && (uVar7 = 0xffffffff, iVar4 == 1)) {
          uVar7 = 1;
        }
        goto LAB_04c4f2b8;
      }
      if (iVar4 == 0) goto LAB_04c4f2b8;
      if (iVar4 == 1) goto joined_r0x04c4f328;
    }
    uVar7 = 0xffffffff;
  }
LAB_04c4f2b8:
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* RechargeDailySignActivityManager::CurrentCanGotItemIndex() */

ulong __thiscall
RechargeDailySignActivityManager::CurrentCanGotItemIndex(RechargeDailySignActivityManager *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = uVar4 & 0xffffffff;
    uVar3 = FUN_04c4dcc4(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if (uVar3 <= uVar4) {
      return 0;
    }
    iVar1 = GetBtnStatus(this,uVar4 & 0xffffffff);
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    iVar2 = GetBtnStatus(this,uVar3,1);
  } while ((iVar2 == 2) && (iVar1 == 2));
  return uVar5;
}

