// Class: Reflection::RCustomType::TStdMapManipulator<int>


/* Reflection::RCustomType::TStdMapManipulator<int>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<int>::GetCount
          (TStdMapManipulator<int> *this,void *param_1)

{
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,
   std::allocator<TravelLogTaskSaveInfo> > >::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::
TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>::
TStdMapManipulator(TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>
                   *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06612a10;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<int>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<int>::TStdMapManipulator(TStdMapManipulator<int> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06612a70;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<long>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<long>::TStdMapManipulator
          (TStdMapManipulator<long> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06612aa0;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::TStdMapManipulator()
    */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::TStdMapManipulator
          (TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06612ad0;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::GetCount(void
   const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::GetCount
          (TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo> *this,void *param_1)

{
  std::
  map<std::string,UnchartedWorldAnniversaryBonusInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,UnchartedWorldAnniversaryBonusInfo>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<long>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<long>::GetCount
          (TStdMapManipulator<long> *this,void *param_1)

{
  std::
  map<std::string,long,std::less<std::string>,std::allocator<std::pair<std::string_const,long>>>::
  size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,
   std::allocator<TravelLogTaskSaveInfo> > >::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::
TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>::
GetCount(TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>
         *this,void *param_1)

{
  std::
  map<std::string,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>>>
  ::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo>::InstanceRtonSync
          (TStdMapManipulator<UnchartedWorldAnniversaryBonusInfo> *this,void *param_1,
          RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_032f3bbc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_032f3bc8(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_032ff4fc();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_032f3ba8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,UnchartedWorldAnniversaryBonusInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,UnchartedWorldAnniversaryBonusInfo>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_032ff498(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_032f3bcc(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,UnchartedWorldAnniversaryBonusInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,UnchartedWorldAnniversaryBonusInfo>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<long>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<long>::InstanceRtonSync
          (TStdMapManipulator<long> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_032f3bbc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_032f3bc8(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_032ff4fc();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_032f3ba8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,long,std::less<std::string>,std::allocator<std::pair<std::string_const,long>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_032ff498(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_032f3bcc(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,long,std::less<std::string>,std::allocator<std::pair<std::string_const,long>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<int>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<int>::InstanceRtonSync
          (TStdMapManipulator<int> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_032f3bbc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_032f3bc8(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_032ff4fc();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_032f3ba8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_032ff498(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_032f3bcc(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,
   std::allocator<TravelLogTaskSaveInfo> > >::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*,
   Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::
TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>::
InstanceRtonSync(TStdMapManipulator<std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>
                 *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,
                RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_032f3bbc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_032f3bc8(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_032ff4fc();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_032f3ba8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_032ff498(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_032f3bcc(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<TravelLogTaskSaveInfo,std::allocator<TravelLogTaskSaveInfo>>>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::TStdMapManipulator
          (TStdMapManipulator<NewPVPTaskDataInfo> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06656b30;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::GetCount
          (TStdMapManipulator<NewPVPTaskDataInfo> *this,void *param_1)

{
  std::
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  ::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<NewPVPTaskDataInfo>::InstanceRtonSync
          (TStdMapManipulator<NewPVPTaskDataInfo> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03539518(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_03539524(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_0353ba08();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_03539508(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_0353b9a4(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03539528(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<float>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<float>::TStdMapManipulator
          (TStdMapManipulator<float> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0665b820;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<std::string >::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::string>::TStdMapManipulator
          (TStdMapManipulator<std::string> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0665b850;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<std::string >::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::string>::GetCount
          (TStdMapManipulator<std::string> *this,void *param_1)

{
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<float>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<float>::GetCount
          (TStdMapManipulator<float> *this,void *param_1)

{
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<std::string >::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::string>::InstanceRtonSync
          (TStdMapManipulator<std::string> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03568e18(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_03568e24(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_035692f8();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_03568e08(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_03569294(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03568e28(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<float>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<float>::InstanceRtonSync
          (TStdMapManipulator<float> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03568e18(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_03568e24(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_035692f8();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_03568e08(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_03569294(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03568e28(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::TStdMapManipulator
          (TStdMapManipulator<ModuleConfig> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0665e3f0;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::TStdMapManipulator
          (TStdMapManipulator<WaveEventConfig> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0665e420;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::GetCount
          (TStdMapManipulator<WaveEventConfig> *this,void *param_1)

{
  std::
  map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::GetCount
          (TStdMapManipulator<ModuleConfig> *this,void *param_1)

{
  std::
  map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
  ::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<WaveEventConfig>::InstanceRtonSync
          (TStdMapManipulator<WaveEventConfig> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_035ba3b8(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_035ba3c4(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_035bd71c();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_035ba3a8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_035bd6b8(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_035ba3c8(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ModuleConfig>::InstanceRtonSync
          (TStdMapManipulator<ModuleConfig> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_035ba3b8(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_035ba3c4(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_035bd71c();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_035ba3a8(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_035bd6b8(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_035ba3c8(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::TStdMapManipulator
          (TStdMapManipulator<BeghouledPlantType> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06737710;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::InstanceRtonSync
          (TStdMapManipulator<BeghouledPlantType> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03ba1cf0(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_03ba1cfc(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_03ba2554();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_03ba1ce0(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_03ba24f0(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03ba1d00(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<BeghouledPlantType>::GetCount
          (TStdMapManipulator<BeghouledPlantType> *this,void *param_1)

{
  std::
  map<std::string,BeghouledPlantType,std::less<std::string>,std::allocator<std::pair<std::string_const,BeghouledPlantType>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<std::vector<std::string, std::allocator<std::string >
   > >::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>>::
TStdMapManipulator(TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_067537b0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<std::vector<std::string, std::allocator<std::string >
   > >::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&,
   Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>>::
InstanceRtonSync(TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>> *this,
                void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c53414(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_03c53420(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_03c5371c();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_03c53400(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_03c536b8(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03c53424(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Reflection::RCustomType::TStdMapManipulator<std::vector<std::string, std::allocator<std::string >
   > >::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>>::
GetCount(TStdMapManipulator<std::vector<std::string,std::allocator<std::string>>> *this,
        void *param_1)

{
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::TStdMapManipulator() */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::TStdMapManipulator
          (TStdMapManipulator<ZombieConditions> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0690b730;
  return;
}


/* Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::GetCount
          (TStdMapManipulator<ZombieConditions> *this,void *param_1)

{
  std::
  map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
  ::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdMapManipulator<ZombieConditions>::InstanceRtonSync
          (TStdMapManipulator<ZombieConditions> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  RtSerialRtonWriter *this_00;
  TGABagData *pTVar4;
  RtSerialRtonKey *this_01;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  undefined8 local_18;
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0484dafc(param_2[0x10]);
  if (cVar1 == '\0') {
    this_01 = (RtSerialRtonKey *)FUN_0484db08(*(undefined8 *)param_2);
    cVar1 = Sexy::RtSerialRtonReader::BeginObject(this_01);
    if (cVar1 != '\0') {
      Sexy::RtSerialRtonReader::GetCurrentScope((RtSerialRtonReader *)this_01);
      auVar9 = FUN_0484dbdc();
      while( true ) {
        uVar7 = auVar9._8_8_ & 0xffffffff;
        cVar3 = FUN_0484daec(uVar7);
        if (cVar3 == '\0') break;
        pcVar8 = *(code **)(*(long *)param_4 + 0x68);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        std::string::string((string *)&local_18,pcVar5);
        uVar6 = std::
                map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
                ::operator[](param_1,(string *)&local_18);
        pcVar5 = (char *)Sexy::RtSerialRtonReader::GetKeyName(auVar9._0_4_);
        Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aTStack_10,pcVar5);
        (*pcVar8)(param_4,uVar6,param_2,(RtSerialRtonKey *)aTStack_10);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
        std::string::~string((string *)&local_18);
        nop();
        auVar9 = FUN_0484db78(auVar9._0_8_,uVar7);
      }
      Sexy::RtSerialRtonReader::EndObject((RtSerialRtonReader *)this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_0484db0c(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::BeginObject(this_00,param_3);
    local_20 = std::
               map<std::string,ZombieConditions,std::less<std::string>,std::allocator<std::pair<std::string_const,ZombieConditions>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar2) {
      pTVar4 = (TGABagData *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar8 = *(code **)(*(long *)param_4 + 0x68);
      TGABagData::TGABagData(aTStack_10,pTVar4);
      (*pcVar8)(param_4,pTVar4 + 8,param_2,aTStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndObject(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

