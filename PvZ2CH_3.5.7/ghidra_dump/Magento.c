// Class: Magento


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetStore(std::string const&) */

void __thiscall Magento::GetStore(Magento *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this_00;
  MagentoCategoryProps *pMVar4;
  int extraout_w1;
  int extraout_w1_00;
  int iVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x1a);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
LAB_03e931e0:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pMVar4 = Sexy::RtObject::Cast<MagentoCategoryProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar5 = extraout_w1;
    if (pMVar4 != (MagentoCategoryProps *)0x0) {
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      cVar1 = std::operator==((string *)aRStack_30,(string *)this);
      std::string::~string((string *)aRStack_30);
      iVar5 = extraout_w1_00;
      if (cVar1 != '\0') {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        goto LAB_03e931e0;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetStoreCategory(std::string const&, std::string const&) */

void __thiscall Magento::GetStoreCategory(Magento *this,string *param_1,string *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  ulong uVar5;
  RtWeakPtr *pRVar6;
  string *extraout_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar7;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c();
  uVar3 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"MagentoCategoryPropsPtr  :%s           %s",uVar2,uVar3);
  GetStore(this,extraout_x1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  uVar5 = 0;
  if (cVar1 != '\0') {
    do {
      uVar7 = uVar5;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar5 = FUN_03e921ec(*(undefined8 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50));
      if (uVar5 <= uVar7) goto LAB_03e93334;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92214(*(undefined8 *)(lVar4 + 0x48),uVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      cVar1 = std::operator==(asStack_10,param_1);
      std::string::~string(asStack_10);
      uVar5 = uVar7 + 1;
    } while (cVar1 == '\0');
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pRVar6 = (RtWeakPtr *)FUN_03e92214(*(undefined8 *)(lVar4 + 0x48),uVar7);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar6);
  }
LAB_03e93334:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetProductPtr(std::string const&) */

void __thiscall Magento::GetProductPtr(Magento *this,string *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  RtWeakPtr *pRVar5;
  string *psVar6;
  string *psVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar8;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = asStack_30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  psVar6 = asStack_20;
  std::string::string(asStack_10,"Gems");
  GetStoreCategory((Magento *)asStack_18,asStack_10,psVar6);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  uVar3 = 0;
  do {
    uVar8 = uVar3;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 == '\0') {
LAB_03e93454:
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
      goto joined_r0x03e93564;
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar8) goto LAB_03e93454;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
    uVar3 = uVar8 + 1;
  } while (cVar1 == '\0');
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
joined_r0x03e93564:
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"iOS PvZ2 Gem Store");
    psVar6 = psVar7;
    std::string::string(asStack_18,"GemsAddition");
    GetStoreCategory((Magento *)asStack_20,asStack_18,psVar6);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar1 == '\0') goto LAB_03e93464;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
      if (uVar3 <= uVar8) goto LAB_03e93464;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
      uVar3 = uVar8 + 1;
    } while (cVar1 == '\0');
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  else {
LAB_03e93464:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"iOS PvZ2 Gem Store");
    psVar6 = psVar7;
    std::string::string(asStack_18,"Bundles");
    GetStoreCategory((Magento *)asStack_20,asStack_18,psVar6);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar1 == '\0') goto LAB_03e93474;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
      if (uVar3 <= uVar8) goto LAB_03e93474;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
      uVar3 = uVar8 + 1;
    } while (cVar1 == '\0');
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  else {
LAB_03e93474:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"iOS PvZ2 Gem Store");
    psVar6 = psVar7;
    std::string::string(asStack_18,"Event Bundles");
    GetStoreCategory((Magento *)asStack_20,asStack_18,psVar6);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar1 == '\0') goto LAB_03e93484;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
      if (uVar3 <= uVar8) goto LAB_03e93484;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
      uVar3 = uVar8 + 1;
    } while (cVar1 == '\0');
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  else {
LAB_03e93484:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"iOS PvZ2 Gem Store");
    psVar6 = psVar7;
    std::string::string(asStack_18,"GemsFor360");
    GetStoreCategory((Magento *)asStack_20,asStack_18,psVar6);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar1 == '\0') goto LAB_03e93494;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
      if (uVar3 <= uVar8) goto LAB_03e93494;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
      uVar3 = uVar8 + 1;
    } while (cVar1 == '\0');
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  else {
LAB_03e93494:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
  }
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"iOS PvZ2 Avatar Ticket Store");
    std::string::string(asStack_18,"AvatarTicket");
    GetStoreCategory((Magento *)asStack_20,asStack_18,psVar7);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_28,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    uVar3 = 0;
    do {
      uVar8 = uVar3;
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar1 == '\0') goto LAB_03e934a4;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
      if (uVar3 <= uVar8) goto LAB_03e934a4;
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
      uVar3 = uVar8 + 1;
    } while (cVar1 == '\0');
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
  }
LAB_03e934a4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::FindStoreProduct(std::string const&, std::string const&, std::string const&, std::string
   const&) */

void __thiscall
Magento::FindStoreProduct
          (Magento *this,string *param_1,string *param_2,string *param_3,string *param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  RtWeakPtr *pRVar5;
  string *psVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar7;
  RtMixedPtrBase aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  psVar6 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  GetStoreCategory(this,param_1,psVar6);
  do {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar1 == '\0') {
LAB_03e93af4:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar7) goto LAB_03e93af4;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar7);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    cVar1 = std::operator==((string *)(lVar2 + 0x78),param_2);
    if (cVar1 != '\0') {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar7);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      cVar1 = std::operator==((string *)(lVar2 + 0x80),param_3);
      if (cVar1 != '\0') {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar7);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
        goto LAB_03e93af4;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetGesturePtr(std::string const&) */

void __thiscall Magento::GetGesturePtr(Magento *this,string *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *pRVar4;
  string *psVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar6;
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  psVar5 = asStack_28;
  std::string::string(asStack_18,"iOS PvZ2 Gesture Store");
  std::string::string(asStack_10,"Gestures");
  GetStoreCategory((Magento *)asStack_18,asStack_10,psVar5);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') goto LAB_03e93c94;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar6) goto LAB_03e93c94;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar6);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==((string *)(lVar2 + 0x10),(string *)this);
    uVar3 = uVar6 + 1;
  } while (cVar1 == '\0');
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pRVar4 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar6);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar4);
LAB_03e93c94:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetBundleProductPtrByPrice(float) */

void __thiscall Magento::GetBundleProductPtrByPrice(Magento *this,float param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *pRVar4;
  string *psVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar6;
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  psVar5 = asStack_28;
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  std::string::string(asStack_10,"Bundles");
  GetStoreCategory((Magento *)asStack_18,asStack_10,psVar5);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  uVar3 = 0;
  do {
    uVar6 = uVar3;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') goto LAB_03e93e0c;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar6) goto LAB_03e93e0c;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar6);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar2 = FUN_03e921a0(*(undefined8 *)(lVar2 + 0xb0),0);
    uVar3 = uVar6 + 1;
  } while (*(float *)(lVar2 + 8) != param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pRVar4 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar6);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar4);
LAB_03e93e0c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::EventGetBundleProductPtrByPrice(float) */

void __thiscall Magento::EventGetBundleProductPtrByPrice(Magento *this,float param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *pRVar5;
  string *psVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar7;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  psVar6 = asStack_28;
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  std::string::string(asStack_10,"Event Bundles");
  GetStoreCategory((Magento *)asStack_18,asStack_10,psVar6);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  uVar4 = 0;
  if (bVar1) {
    do {
      uVar7 = uVar4;
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar2 == '\0') goto LAB_03e93f98;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar4 = FUN_03e92148(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
      if (uVar4 <= uVar7) goto LAB_03e93f98;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar3 + 0x60),uVar7);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar3 = FUN_03e921a0(*(undefined8 *)(lVar3 + 0xb0),0);
      uVar4 = uVar7 + 1;
    } while (*(float *)(lVar3 + 8) != param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pRVar5 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar3 + 0x60),uVar7);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar5);
  }
LAB_03e93f98:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::FindPlantGiftByLevel(int) */

void __thiscall Magento::FindPlantGiftByLevel(Magento *this,int param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  string *extraout_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar5;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::string::string(asStack_10,"PlantGift Store");
  GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  uVar5 = 0;
  do {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 == '\0') {
LAB_03e940e0:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar5) goto LAB_03e940e0;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pRVar4 = (RtWeakPtrBase *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (*(int *)(lVar2 + 0xf0) == (int)this) {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      goto LAB_03e940e0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetPlantLevelUp() */

void __thiscall Magento::GetPlantLevelUp(Magento *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  MagentoCategoryProps *pMVar3;
  int extraout_w1;
  int extraout_w1_00;
  int iVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x1a);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03e94274:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pMVar3 = Sexy::RtObject::Cast<MagentoCategoryProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar4 = extraout_w1;
    if (pMVar3 != (MagentoCategoryProps *)0x0) {
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==((string *)aRStack_30,"Plant Level Up");
      std::string::~string((string *)aRStack_30);
      iVar4 = extraout_w1_00;
      if (bVar1) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        goto LAB_03e94274;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetPlantLevelUpPlant(std::string const&) */

void __thiscall Magento::GetPlantLevelUpPlant(Magento *this,string *param_1)

{
  char cVar1;
  Magento *this_00;
  long lVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtWeakPtr *pRVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  this_00 = (Magento *)
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node(in_x8);
  GetPlantLevelUp(this_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar3 = 0;
  do {
    uVar5 = uVar3;
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
    if (cVar1 == '\0') goto LAB_03e94350;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
    uVar3 = FUN_03e92148(*(undefined8 *)(lVar2 + 0x60),*(undefined8 *)(lVar2 + 0x68));
    if (uVar3 <= uVar5) goto LAB_03e94350;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar5);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    cVar1 = std::operator==((string *)(lVar2 + 0x80),(string *)this);
    uVar3 = uVar5 + 1;
  } while (cVar1 == '\0');
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  pRVar4 = (RtWeakPtr *)FUN_03e92170(*(undefined8 *)(lVar2 + 0x60),uVar5);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar4);
LAB_03e94350:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetPlantPieceProductsData(bool) */

void __thiscall Magento::GetPlantPieceProductsData(Magento *this,bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  MagentoCategoryProps *pMVar3;
  int extraout_w1;
  int iVar4;
  int extraout_w1_00;
  int extraout_w1_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtId aRStack_38 [8];
  string asStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x1a);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03e9453c:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    pMVar3 = Sexy::RtObject::Cast<MagentoCategoryProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar4 = extraout_w1_00;
    if (((ulong)this & 0xff) == 0) {
      if (pMVar3 != (MagentoCategoryProps *)0x0) {
        Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
        bVar1 = std::operator==(asStack_30,"Plant Pieces");
        std::string::~string(asStack_30);
        iVar4 = extraout_w1_01;
        if (bVar1) {
LAB_03e9451c:
          Sexy::RtDbTable::Iterator::operator*(aIStack_28);
          Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                    ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)asStack_30);
          Sexy::RtId::~RtId((RtId *)asStack_30);
          goto LAB_03e9453c;
        }
      }
    }
    else if (pMVar3 != (MagentoCategoryProps *)0x0) {
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar1 = std::operator==(asStack_30,"Avatars");
      std::string::~string(asStack_30);
      iVar4 = extraout_w1;
      if (bVar1) goto LAB_03e9451c;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::InitMagentoDataSign() */

void Magento::InitMagentoDataSign(void)

{
  string asStack_10 [8];
  MagentoCategoryProps *pMStack_8;
  
  pMStack_8 = ___stack_chk_guard;
  MagentoCategoryProps::CalAllPriceSign(___stack_chk_guard);
  FUN_05474278(&MagentoCategoryProps::MagentoAllPricesSign,asStack_10);
  std::string::~string(asStack_10);
  if (pMStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::IsMagentoDataSafe() */

void Magento::IsMagentoDataSafe(void)

{
  undefined4 uVar1;
  string asStack_10 [8];
  MagentoCategoryProps *pMStack_8;
  
  pMStack_8 = ___stack_chk_guard;
  MagentoCategoryProps::CalAllPriceSign(___stack_chk_guard);
  uVar1 = std::operator==((string *)&MagentoCategoryProps::MagentoAllPricesSign,asStack_10);
  std::string::~string(asStack_10);
  if (pMStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Magento::GetProduct(std::string const&) */

void __thiscall Magento::GetProduct(Magento *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  MagentoProductProps *pMVar4;
  int iVar5;
  int extraout_w1;
  int extraout_w1_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x1a);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03e965fc:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pMVar4 = Sexy::RtObject::Cast<MagentoProductProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar5 = extraout_w1;
    if ((pMVar4 != (MagentoProductProps *)0x0) &&
       (cVar2 = std::operator==((string *)(pMVar4 + 0x10),(string *)this), iVar5 = extraout_w1_00,
       cVar2 != '\0')) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      goto LAB_03e965fc;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}

