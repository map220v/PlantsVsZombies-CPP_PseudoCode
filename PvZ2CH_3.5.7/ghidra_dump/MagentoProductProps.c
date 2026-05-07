// Class: MagentoProductProps


/* MagentoProductProps::GetLocalizedName() const */

void MagentoProductProps::GetLocalizedName(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = LawnApp::GetMagentoLanguage(gLawnApp);
  FUN_03e92140(*(undefined8 *)(in_x0 + 0x20),uVar1);
  FUN_05475d88();
  return;
}


/* MagentoProductProps::GetLocalizedDescription() const */

void MagentoProductProps::GetLocalizedDescription(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = LawnApp::GetMagentoLanguage(gLawnApp);
  FUN_03e92140(*(undefined8 *)(in_x0 + 0x38),uVar1);
  FUN_05475d88();
  return;
}


/* MagentoProductProps::GetLocalizedShortDescription() const */

void MagentoProductProps::GetLocalizedShortDescription(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = LawnApp::GetMagentoLanguage(gLawnApp);
  FUN_03e92140(*(undefined8 *)(in_x0 + 0x50),uVar1);
  FUN_05475d88();
  return;
}


/* MagentoProductProps::GetInternalName() const */

void MagentoProductProps::GetInternalName(void)

{
  long in_x0;
  
  FUN_03e92140(*(undefined8 *)(in_x0 + 0x20),0);
  FUN_05475d88();
  return;
}


/* MagentoProductProps::GetCurrentLevelPriceData(int, LevelUpPriceData&) */

undefined8 __thiscall
MagentoProductProps::GetCurrentLevelPriceData
          (MagentoProductProps *this,int param_1,LevelUpPriceData *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 200);
  lVar1 = FUN_03e921b0(uVar4,*(undefined8 *)(this + 0xd0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_03e921e0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != param_1);
  uVar4 = *(undefined8 *)(piVar2 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)piVar2;
  *(undefined8 *)(param_2 + 8) = uVar4;
  *(int *)(param_2 + 0x10) = piVar2[4];
  return 1;
}


/* MagentoProductProps::SetPriceTier(std::string const&) */

void __thiscall MagentoProductProps::SetPriceTier(MagentoProductProps *this,string *param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0xb0);
  lVar3 = FUN_03e92178(uVar6,*(undefined8 *)(this + 0xb8));
  lVar5 = 0;
  do {
    uVar1 = (undefined4)lVar5;
    if (lVar5 == lVar3) {
      return;
    }
    psVar4 = (string *)FUN_03e921a0(uVar6,lVar5);
    cVar2 = std::operator==(psVar4,param_1);
    lVar5 = lVar5 + 1;
  } while (cVar2 == '\0');
  *(undefined4 *)(this + 0x70) = uVar1;
  return;
}


/* MagentoProductProps::ContainsItem(std::string const&, std::string const&) */

undefined8 __thiscall
MagentoProductProps::ContainsItem(MagentoProductProps *this,string *param_1,string *param_2)

{
  char cVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = std::operator==(param_1,(string *)(this + 0x78));
  if ((cVar1 != '\0') && (cVar1 = std::operator==(param_2,(string *)(this + 0x80)), cVar1 != '\0'))
  {
    return 1;
  }
  uVar5 = 0;
  do {
    uVar6 = *(undefined8 *)(this + 0x98);
    uVar2 = FUN_03e92148(uVar6,*(undefined8 *)(this + 0xa0));
    if (uVar2 <= uVar5) {
      return 0;
    }
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(uVar6,uVar5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    cVar1 = std::operator==(param_1,(string *)(lVar4 + 0x78));
    if (cVar1 != '\0') {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(this + 0x98),uVar5);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      cVar1 = std::operator==(param_2,(string *)(lVar4 + 0x80));
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoProductProps::GetCombinedSkuTierName() const */

void MagentoProductProps::GetCombinedSkuTierName(void)

{
  int iVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  string *psVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(in_x0 + 0x70);
  local_8 = ___stack_chk_guard;
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(in_x0 + 0xb0);
    uVar2 = FUN_03e92178(uVar5,*(undefined8 *)(in_x0 + 0xb8));
    if ((ulong)(long)iVar1 < uVar2) {
      FUN_03e921a8(uVar5,(long)iVar1);
      lVar3 = FUN_05474178();
      if (lVar3 != 0) {
        std::operator+((string *)(in_x0 + 0x10),".");
        psVar4 = (string *)FUN_03e921a8(*(undefined8 *)(in_x0 + 0xb0),(long)*(int *)(in_x0 + 0x70));
        std::operator+(asStack_10,psVar4);
        std::string::~string(asStack_10);
        goto LAB_03e92be4;
      }
    }
  }
  FUN_05475d88();
LAB_03e92be4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagentoProductProps::GetPurchaseType() const */

undefined4 __thiscall MagentoProductProps::GetPurchaseType(MagentoProductProps *this)

{
  string *psVar1;
  bool bVar2;
  undefined4 uVar3;
  
  psVar1 = (string *)(this + 0x88);
  bVar2 = std::operator==(psVar1,"coin");
  uVar3 = 2;
  if (!bVar2) {
    bVar2 = std::operator==(psVar1,"gem");
    uVar3 = 0;
    if (!bVar2) {
      bVar2 = std::operator==(psVar1,"money");
      uVar3 = 1;
      if (!bVar2) {
        bVar2 = std::operator==(psVar1,"leaf");
        uVar3 = 3;
        if (!bVar2) {
          bVar2 = std::operator==(psVar1,"stone");
          uVar3 = 4;
          if (!bVar2) {
            bVar2 = std::operator==(psVar1,"ad");
            uVar3 = 5;
            if (!bVar2) {
              uVar3 = 1;
            }
          }
        }
      }
    }
  }
  return uVar3;
}


/* MagentoProductProps::GetPriceInUSD(bool) const */

undefined4 __thiscall MagentoProductProps::GetPriceInUSD(MagentoProductProps *this,bool param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_1) && (cVar1 = MagentoCategoryProps::CheckAllPriceSign(), cVar1 == '\0')) {
    LawnApp::ShowDataErrorDialog(gLawnApp);
    uVar3 = 0x4f000000;
  }
  else {
    lVar2 = FUN_03e921a8(*(undefined8 *)(this + 0xb0),(long)*(int *)(this + 0x70));
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoProductProps::GetLocalizedPriceString(bool*) const */

void MagentoProductProps::GetLocalizedPriceString(bool *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *in_x1;
  string *extraout_x1;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  string asStack_30 [8];
  Sexy aSStack_28 [24];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetPurchaseType((MagentoProductProps *)param_1);
  if (iVar2 == 1) {
    Sexy::IPurchaseDriver::Product::Product((Product *)aSStack_28);
    if (in_x1 == (undefined1 *)0x0) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var3);
      plVar6 = *(long **)(lVar4 + 0x40);
      pcVar7 = *(code **)(*plVar6 + 0x30);
      GetCombinedSkuTierName();
      cVar1 = (*pcVar7)(plVar6,asStack_30,(Product *)aSStack_28);
      std::string::~string(asStack_30);
      if (cVar1 != '\0') {
        iVar2 = FUN_054767dc(auStack_10,&DAT_05719cd8);
        if (iVar2 != -1) {
          uVar5 = FUN_05478134(auStack_10,(long)iVar2,1,&DAT_056f11a8);
          thunk_FUN_05477b9c(auStack_10,uVar5);
        }
        goto LAB_03e94a74;
      }
    }
    else {
      *in_x1 = 0;
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var3);
      plVar6 = *(long **)(lVar4 + 0x40);
      pcVar7 = *(code **)(*plVar6 + 0x30);
      GetCombinedSkuTierName();
      cVar1 = (*pcVar7)(plVar6,asStack_30,(Product *)aSStack_28);
      std::string::~string(asStack_30);
      if (cVar1 != '\0') {
        iVar2 = FUN_054767dc(auStack_10,&DAT_05719cd8,0);
        if (iVar2 != -1) {
          uVar5 = FUN_05478134(auStack_10,(long)iVar2,1,&DAT_056f11a8);
          thunk_FUN_05477b9c(auStack_10,uVar5);
          *in_x1 = 1;
        }
LAB_03e94a74:
        iVar2 = FUN_054767dc(auStack_10,&DAT_05719ce0,0);
        if (iVar2 != -1) {
          uVar5 = FUN_05478134(auStack_10,(long)iVar2,3,&DAT_056f11a8);
          thunk_FUN_05477b9c(auStack_10,uVar5);
        }
        FUN_05477b24();
        Sexy::IPurchaseDriver::Product::~Product((Product *)aSStack_28);
        goto LAB_03e9497c;
      }
      *in_x1 = 1;
    }
    Sexy::IPurchaseDriver::Product::~Product((Product *)aSStack_28);
  }
  fVar8 = (float)GetPriceInUSD((MagentoProductProps *)param_1,false);
  Sexy::StrFormat("%d",aSStack_28,(ulong)(uint)(int)fVar8);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
  std::string::~string((string *)aSStack_28);
LAB_03e9497c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MagentoProductProps::GetPriceByTypeName(std::string, bool) const */

undefined4 __thiscall
MagentoProductProps::GetPriceByTypeName(MagentoProductProps *this,string *param_2,char param_3)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((param_3 == '\0') || (cVar1 = MagentoCategoryProps::CheckAllPriceSign(), cVar1 != '\0')) {
    uVar5 = *(undefined8 *)(this + 0xb0);
    lVar2 = FUN_03e92178(uVar5,*(undefined8 *)(this + 0xb8));
    lVar4 = 0;
    while (lVar4 != lVar2) {
      psVar3 = (string *)FUN_03e921a8(uVar5,lVar4);
      cVar1 = std::operator==(psVar3,param_2);
      lVar4 = lVar4 + 1;
      if (cVar1 != '\0') {
        return *(undefined4 *)(psVar3 + 8);
      }
    }
    uVar6 = 0xbf800000;
  }
  else {
    LawnApp::ShowDataErrorDialog(gLawnApp);
    uVar6 = 0x4f000000;
  }
  return uVar6;
}


/* MagentoProductProps::~MagentoProductProps() */

void __thiscall MagentoProductProps::~MagentoProductProps(MagentoProductProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06790410;
  std::string::~string((string *)(this + 0xe8));
  std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::~vector
            ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)(this + 200));
  std::vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>::
  ~vector((vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>> *)
          (this + 0xb0));
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)(this + 0x98));
  std::string::~string((string *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x68));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* MagentoProductProps::~MagentoProductProps() */

void __thiscall MagentoProductProps::~MagentoProductProps(MagentoProductProps *this)

{
  ~MagentoProductProps(this);
  AK::FreeHook(this);
  return;
}


/* MagentoProductProps::MagentoProductProps() */

void __thiscall MagentoProductProps::MagentoProductProps(MagentoProductProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06790410;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  Set8BytesTo0(this + 0x68);
  Set8BytesTo0(this + 0x78);
  Set8BytesTo0(this + 0x80);
  Set8BytesTo0(this + 0x88);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  Set8BytesTo0((string *)(this + 0xe8));
  *(undefined4 *)(this + 0x90) = 0;
  this[0xe0] = (MagentoProductProps)0x1;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0xe1] = (MagentoProductProps)0x0;
  std::string::append((string *)(this + 0xe8),"",1);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),7);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),7);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50),7);
  return;
}


/* MagentoProductProps::StaticNew() */

MagentoProductProps * MagentoProductProps::StaticNew(void)

{
  MagentoProductProps *this;
  
  this = ::operator_new(0xf0);
  MagentoProductProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoProductProps::StaticClassInit() */

void MagentoProductProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"gem",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"money",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"coin",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"leaf",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"stone",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ad",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PurchaseType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"TierPrice");
    (*pcVar3)(plVar2,avStack_20,FUN_03e922c8,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelUpPriceData");
    (*pcVar3)(plVar2,avStack_20,FUN_03e92d94,0x14,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"MagentoProductProps");
    (*pcVar3)(plVar2,avStack_20,FUN_03e95c40,0xf0,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagentoProductProps::StaticGetClass() */

long * MagentoProductProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"MagentoProductProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagentoProductProps::GetClass() const */

long * MagentoProductProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"MagentoProductProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagentoProductProps::TEMPNAMEPLACEHOLDERVALUE(MagentoProductProps const&) */

MagentoProductProps * __thiscall
MagentoProductProps::operator=(MagentoProductProps *this,MagentoProductProps *param_1)

{
  undefined4 uVar1;
  MagentoProductProps MVar2;
  
  PropertySheetBase::operator=((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  thunk_FUN_05475e00(this + 0x68,param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = uVar1;
  thunk_FUN_05475e00(this + 0x78,param_1 + 0x78);
  thunk_FUN_05475e00(this + 0x80,param_1 + 0x80);
  thunk_FUN_05475e00(this + 0x88,param_1 + 0x88);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::operator=((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
               *)(this + 0x98),(vector *)(param_1 + 0x98));
  std::vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>>::
  operator=((vector<MagentoProductProps::TierPrice,std::allocator<MagentoProductProps::TierPrice>> *
            )(this + 0xb0),(vector *)(param_1 + 0xb0));
  std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::operator=
            ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)(this + 200),
             (vector *)(param_1 + 200));
  MVar2 = param_1[0xe0];
  this[0xe1] = param_1[0xe1];
  this[0xe0] = MVar2;
  thunk_FUN_05475e00(this + 0xe8,param_1 + 0xe8);
  return this;
}

