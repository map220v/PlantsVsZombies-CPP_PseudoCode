// Class: MagentoCategoryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoCategoryProps::StaticClassInit() */

void MagentoCategoryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagentoCategoryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e95120,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagentoCategoryProps::StaticGetClass() */

long * MagentoCategoryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagentoCategoryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagentoCategoryProps::GetClass() const */

long * MagentoCategoryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MagentoCategoryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagentoCategoryProps::GetLocalizedName() const */

void MagentoCategoryProps::GetLocalizedName(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = LawnApp::GetMagentoLanguage(gLawnApp);
  FUN_03e92140(*(undefined8 *)(in_x0 + 0x18),uVar1);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoCategoryProps::CalAllPriceSign() */

void __thiscall MagentoCategoryProps::CalAllPriceSign(MagentoCategoryProps *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RtObject *this_00;
  MagentoCategoryProps *pMVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  ulong uVar8;
  int extraout_w1;
  int iVar9;
  undefined8 in_x8;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [12];
  RtId aRStack_218 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_210 [8];
  Iterator aIStack_208 [32];
  MD5 aMStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"Call CheckAllPriceSign\n");
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_208,uVar4,0x1a);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_208);
  if (bVar1) {
    do {
      uVar11 = 0;
      Sexy::RtDbTable::Iterator::operator*(aIStack_208);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_210,(RtWeakPtrBase *)aRStack_218);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
      pMVar5 = Sexy::RtObject::Cast<MagentoCategoryProps>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
      Sexy::RtId::~RtId(aRStack_218);
      iVar9 = extraout_w1;
      if (pMVar5 != (MagentoCategoryProps *)0x0) {
        while( true ) {
          uVar4 = *(undefined8 *)(pMVar5 + 0x60);
          auVar12 = FUN_03e92148(uVar4,*(undefined8 *)(pMVar5 + 0x68));
          iVar9 = auVar12._8_4_;
          if (auVar12._0_8_ <= uVar11) break;
          pRVar6 = (RtWeakPtrBase *)FUN_03e92170(uVar4,uVar11);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_210,pRVar6);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_210);
          if (cVar2 != '\0') {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
            FUN_0546065c(auStack_168,*(undefined4 *)(lVar7 + 0x90));
            uVar10 = 0;
            while( true ) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
              uVar8 = FUN_03e92178(*(undefined8 *)(lVar7 + 0xb0),*(undefined8 *)(lVar7 + 0xb8));
              if (uVar8 <= uVar10) break;
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
              lVar7 = FUN_03e921a0(*(undefined8 *)(lVar7 + 0xb0),uVar10);
              FUN_05460f98(*(undefined4 *)(lVar7 + 8),auStack_168);
              uVar10 = uVar10 + 1;
            }
          }
          uVar11 = uVar11 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_210);
        }
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_208,iVar9);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_208);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_208);
  FUN_05462824(aIStack_208,auStack_178);
  uVar4 = FUN_0547429c(aIStack_208);
  Sexy::OutputDebugStrF((wchar_t *)"*Magento sign = (%s)\n",uVar4);
  std::string::~string((string *)aIStack_208);
  FUN_05462824(aIStack_208,auStack_178);
  MD5::MD5(aMStack_1e8,(string *)aIStack_208);
  MD5::toString();
  std::string::~string((string *)aIStack_208);
  FUN_054617bc(auStack_178);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoCategoryProps::RestAllPriceSign() */

void MagentoCategoryProps::RestAllPriceSign(void)

{
  string asStack_10 [8];
  MagentoCategoryProps *local_8;
  
  local_8 = ___stack_chk_guard;
  CalAllPriceSign(___stack_chk_guard);
  FUN_05474278(&MagentoAllPricesSign,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoCategoryProps::CheckAllPriceSign() */

void MagentoCategoryProps::CheckAllPriceSign(void)

{
  undefined4 uVar1;
  string asStack_10 [8];
  MagentoCategoryProps *local_8;
  
  local_8 = ___stack_chk_guard;
  CalAllPriceSign(___stack_chk_guard);
  uVar1 = std::operator==((string *)&MagentoAllPricesSign,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* MagentoCategoryProps::~MagentoCategoryProps() */

void __thiscall MagentoCategoryProps::~MagentoCategoryProps(MagentoCategoryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067904a0;
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)(this + 0x60));
  std::
  vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoCategoryProps>,std::allocator<Sexy::RtWeakPtr<MagentoCategoryProps>>>
             *)(this + 0x48));
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* MagentoCategoryProps::~MagentoCategoryProps() */

void __thiscall MagentoCategoryProps::~MagentoCategoryProps(MagentoCategoryProps *this)

{
  ~MagentoCategoryProps(this);
  AK::FreeHook(this);
  return;
}


/* MagentoCategoryProps::MagentoCategoryProps() */

void __thiscall MagentoCategoryProps::MagentoCategoryProps(MagentoCategoryProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_067904a0;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),7);
  return;
}


/* MagentoCategoryProps::StaticNew() */

MagentoCategoryProps * MagentoCategoryProps::StaticNew(void)

{
  MagentoCategoryProps *this;
  
  this = ::operator_new(0x78);
  MagentoCategoryProps(this);
  return this;
}

