// Class: CornucopiaMgr


/* CornucopiaMgr::RequestNetwork() */

void CornucopiaMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a6f,true,0);
  return;
}


/* CornucopiaMgr::CornucopiaMgr() */

void __thiscall CornucopiaMgr::CornucopiaMgr(CornucopiaMgr *this)

{
  Sexy::LazySingleton<CornucopiaMgr>::LazySingleton((LazySingleton<CornucopiaMgr> *)this);
  *(undefined ***)this = &PTR__CornucopiaMgr_069e30a0;
  CornucopiaData::CornucopiaData((CornucopiaData *)(this + 8));
  return;
}


/* CornucopiaMgr::~CornucopiaMgr() */

void __thiscall CornucopiaMgr::~CornucopiaMgr(CornucopiaMgr *this)

{
  *(undefined ***)this = &PTR__CornucopiaMgr_069e30a0;
  CornucopiaData::~CornucopiaData((CornucopiaData *)(this + 8));
  Sexy::LazySingleton<CornucopiaMgr>::~LazySingleton((LazySingleton<CornucopiaMgr> *)this);
  return;
}


/* CornucopiaMgr::~CornucopiaMgr() */

void __thiscall CornucopiaMgr::~CornucopiaMgr(CornucopiaMgr *this)

{
  ~CornucopiaMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaMgr::LoadData(CornucopiaData const&) */

void __thiscall CornucopiaMgr::LoadData(CornucopiaMgr *this,CornucopiaData *param_1)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  NameMapperBase *pNVar4;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  CornucopiaData::operator=((CornucopiaData *)(this + 8),param_1);
  cVar2 = FUN_0547419c(psVar1);
  if (cVar2 == '\0') {
    bVar3 = std::operator==(psVar1,"version1");
    if (bVar3) {
      pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      std::string::string(asStack_10,"mat_cornucopia_ticket");
      NameMapperBase::Mondify(pNVar4,asStack_10,0x5b0a);
      std::string::~string(asStack_10);
      nop();
      pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      std::string::string(asStack_10,"mat_cornucopia_emblem");
      iVar5 = 0x5b05;
    }
    else {
      bVar3 = std::operator==(psVar1,"version2");
      if (bVar3) {
        pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        std::string::string(asStack_10,"mat_cornucopia_ticket");
        NameMapperBase::Mondify(pNVar4,asStack_10,0x5af4);
        std::string::~string(asStack_10);
        nop();
        pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        std::string::string(asStack_10,"mat_cornucopia_emblem");
        iVar5 = 0x5af5;
      }
      else {
        bVar3 = std::operator==(psVar1,"version3");
        if (!bVar3) goto LAB_04e5fba8;
        pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        std::string::string(asStack_10,"mat_cornucopia_ticket");
        NameMapperBase::Mondify(pNVar4,asStack_10,0x5b3a);
        std::string::~string(asStack_10);
        nop();
        pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        std::string::string(asStack_10,"mat_cornucopia_emblem");
        iVar5 = 0x5b3b;
      }
    }
    NameMapperBase::Mondify(pNVar4,asStack_10,iVar5);
    std::string::~string(asStack_10);
    nop();
  }
LAB_04e5fba8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaMgr::TestData() */

void __thiscall CornucopiaMgr::TestData(CornucopiaMgr *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  vector<int,std::allocator<int>> *this_01;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_8;
  
  *(undefined4 *)(this + 0x90) = 100;
  *(undefined4 *)(this + 0x94) = 100;
  *(undefined4 *)(this + 0x98) = 100;
  *(undefined4 *)(this + 0xa0) = 2000;
  *(undefined4 *)(this + 0xa4) = 700;
  *(undefined4 *)(this + 0xa8) = 2;
  local_8 = ___stack_chk_guard;
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0xf8);
  CornucopiaShopItemData::CornucopiaShopItemData((CornucopiaShopItemData *)&local_30);
  local_30 = 0xfad;
  local_2c = 1000;
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x110);
  std::vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>>::push_back
            ((vector<CornucopiaShopItemData,std::allocator<CornucopiaShopItemData>> *)(this + 0xb0),
             (CornucopiaShopItemData *)&local_30);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_40);
  local_40 = 0xfad;
  local_3c = 1000;
  local_38 = 0;
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::push_back
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             (this + 0xd0),(CornucopiaBubbleHarvestData *)&local_40);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 200) = 0x4d2;
  *(undefined4 *)(this + 0xe8) = 1;
  std::string::string((string *)local_48,"0:0:0");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"0:0:0");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"0:0:0");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  std::string::string((string *)local_48,"0:0:0");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  local_48[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
  local_48[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
  local_48[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
  local_48[0] = 0;
  std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_48);
  local_48[0] = 0xbc0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x128),(int *)local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

