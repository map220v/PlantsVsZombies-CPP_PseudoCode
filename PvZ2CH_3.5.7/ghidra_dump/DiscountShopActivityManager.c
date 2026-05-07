// Class: DiscountShopActivityManager


/* DiscountShopActivityManager::GetBannerImageName() */

undefined8 DiscountShopActivityManager::GetBannerImageName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* DiscountShopActivityManager::GetShopContentData(int) */

undefined8 * DiscountShopActivityManager::GetShopContentData(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w1;
  undefined8 *in_x8;
  
  puVar3 = (undefined8 *)FUN_03429880(*(undefined8 *)((ulong)(uint)param_1 + 0x10),(long)in_w1);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  in_x8[2] = puVar3[2];
  *in_x8 = uVar1;
  in_x8[1] = uVar2;
  return in_x8;
}


/* DiscountShopActivityManager::GetDataLength() */

void __thiscall DiscountShopActivityManager::GetDataLength(DiscountShopActivityManager *this)

{
  FUN_0342988c(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* DiscountShopActivityManager::GetShopData() */

DiscountShopData * DiscountShopActivityManager::GetShopData(void)

{
  long in_x0;
  DiscountShopData *in_x8;
  
  DiscountShopData::DiscountShopData(in_x8,(DiscountShopData *)(in_x0 + 8));
  return in_x8;
}


/* DiscountShopActivityManager::Init(ActiveItem) */

void __thiscall
DiscountShopActivityManager::Init(DiscountShopActivityManager *this,ActiveItem *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  cVar1 = FUN_04c52f84(*(undefined4 *)(param_2 + 8));
  if ((cVar1 != '\0') && (param_2[0x18] != (ActiveItem)0x0)) {
    ActiveItem::GetDataSerialized(param_2,(RtObject *)(this + 8));
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 0x50);
    Sexy::OutputDebugStrF((wchar_t *)"DiscountShopActivityManager::Init");
    Sexy::OutputDebugStrF
              ((wchar_t *)"data._rechargeCurrencyToday : %d",(ulong)*(uint *)(this + 0x28));
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(this + 0x10);
      uVar5 = uVar6 & 0xffffffff;
      uVar4 = FUN_04c52fa0(uVar7,*(undefined8 *)(this + 0x18));
      if (uVar4 <= uVar6) break;
      puVar2 = (uint *)FUN_04c52f94(uVar7,uVar6);
      Sexy::OutputDebugStrF((wchar_t *)"data.item[%d].ObjectId : %d",uVar5,(ulong)*puVar2);
      lVar3 = FUN_04c52f94(*(undefined8 *)(this + 0x10),uVar6);
      Sexy::OutputDebugStrF
                ((wchar_t *)"data.item[%d].Quantity : %d",uVar5,(ulong)*(uint *)(lVar3 + 4));
      lVar3 = FUN_04c52f94(*(undefined8 *)(this + 0x10),uVar6);
      Sexy::OutputDebugStrF
                ((wchar_t *)"data.item[%d].CostGem : %d",uVar5,(ulong)*(uint *)(lVar3 + 8));
      lVar3 = FUN_04c52f94(*(undefined8 *)(this + 0x10),uVar6);
      Sexy::OutputDebugStrF
                ((wchar_t *)"data.item[%d].Discount : %d",uVar5,(ulong)*(uint *)(lVar3 + 0xc));
      lVar3 = FUN_04c52f94(*(undefined8 *)(this + 0x10),uVar6);
      Sexy::OutputDebugStrF
                ((wchar_t *)"data.item[%d].BtnStatus : %d",uVar5,(ulong)*(uint *)(lVar3 + 0x10));
      lVar3 = FUN_04c52f94(*(undefined8 *)(this + 0x10),uVar6);
      Sexy::OutputDebugStrF
                ((wchar_t *)"data.item[%d].CurrencyID : %d",uVar5,(ulong)*(uint *)(lVar3 + 0x14));
      uVar6 = uVar6 + 1;
    }
  }
  return;
}


/* DiscountShopActivityManager::~DiscountShopActivityManager() */

void __thiscall
DiscountShopActivityManager::~DiscountShopActivityManager(DiscountShopActivityManager *this)

{
  *(undefined ***)this = &PTR__DiscountShopActivityManager_0698ba90;
  DiscountShopData::~DiscountShopData((DiscountShopData *)(this + 8));
  Sexy::LazySingleton<DiscountShopActivityManager>::~LazySingleton
            ((LazySingleton<DiscountShopActivityManager> *)this);
  return;
}


/* DiscountShopActivityManager::~DiscountShopActivityManager() */

void __thiscall
DiscountShopActivityManager::~DiscountShopActivityManager(DiscountShopActivityManager *this)

{
  ~DiscountShopActivityManager(this);
  AK::FreeHook(this);
  return;
}


/* DiscountShopActivityManager::DiscountShopActivityManager() */

void __thiscall
DiscountShopActivityManager::DiscountShopActivityManager(DiscountShopActivityManager *this)

{
  Sexy::LazySingleton<DiscountShopActivityManager>::LazySingleton
            ((LazySingleton<DiscountShopActivityManager> *)this);
  *(undefined ***)this = &PTR__DiscountShopActivityManager_0698ba90;
  DiscountShopData::DiscountShopData((DiscountShopData *)(this + 8));
  return;
}

