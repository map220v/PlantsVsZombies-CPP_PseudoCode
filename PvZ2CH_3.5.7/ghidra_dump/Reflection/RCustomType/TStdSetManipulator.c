// Class: Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie>>


/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie> >::GetCount(void const*)
   const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie>>::GetCount
          (TStdSetManipulator<Sexy::RtWeakPtr<Zombie>> *this,void *param_1)

{
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie> >::TStdSetManipulator() */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie>>::TStdSetManipulator
          (TStdSetManipulator<Sexy::RtWeakPtr<Zombie>> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_0673f730;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie> >::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<Zombie>>::InstanceRtonSync
          (TStdSetManipulator<Sexy::RtWeakPtr<Zombie>> *this,void *param_1,RtSerialRtonSync *param_2
          ,RtSerialRtonKey *param_3,RType *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  RtSerialRtonWriter *this_00;
  undefined8 uVar4;
  RtSerialRtonReader *this_01;
  code *pcVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03be2724(param_2[0x10]);
  cVar2 = (char)uVar3;
  if ((uVar3 & 0xff) == 0) {
    this_01 = (RtSerialRtonReader *)FUN_03be2730(*(undefined8 *)param_2);
    local_20 = CONCAT44(local_20._4_4_,uVar3) & 0xffffffff000000ff;
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(this_01,param_3,(uint *)&local_20);
    if (cVar2 != '\0') {
      if ((uint)local_20 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
          pcVar5 = *(code **)(*(long *)param_4 + 0x68);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
          (*pcVar5)(param_4,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                            &local_18,param_2,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          std::
          set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
          ::insert(param_1,(RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        } while (uVar3 < (uint)local_20);
      }
      Sexy::RtSerialRtonReader::EndArray(this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03be2734(*(undefined8 *)(param_2 + 8));
    uVar4 = std::
            set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
            ::size(param_1);
    Sexy::RtSerialRtonWriter::BeginArray(this_00,param_3,uVar4,0xfd);
    local_20 = std::
               set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar1) {
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar5 = *(code **)(*(long *)param_4 + 0x68);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
      (*pcVar5)(param_4,uVar4,param_2,aRStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndArray(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* Reflection::RCustomType::TStdSetManipulator<std::string >::TStdSetManipulator() */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<std::string>::TStdSetManipulator
          (TStdSetManipulator<std::string> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06797760;
  return;
}


/* Reflection::RCustomType::TStdSetManipulator<std::string >::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<std::string>::GetCount
          (TStdSetManipulator<std::string> *this,void *param_1)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdSetManipulator<std::string >::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<std::string>::InstanceRtonSync
          (TStdSetManipulator<std::string> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  RtSerialRtonWriter *this_00;
  undefined8 uVar4;
  RtSerialRtonReader *this_01;
  code *pcVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03f2422c(param_2[0x10]);
  cVar2 = (char)uVar3;
  if ((uVar3 & 0xff) == 0) {
    this_01 = (RtSerialRtonReader *)FUN_03f24238(*(undefined8 *)param_2);
    local_20 = CONCAT44(local_20._4_4_,uVar3) & 0xffffffff000000ff;
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(this_01,param_3,(uint *)&local_20);
    if (cVar2 != '\0') {
      if ((uint)local_20 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          Set8BytesTo0((string *)&local_18);
          pcVar5 = *(code **)(*(long *)param_4 + 0x68);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
          (*pcVar5)(param_4,(string *)&local_18,param_2,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    (param_1,(string *)&local_18);
          std::string::~string((string *)&local_18);
        } while (uVar3 < (uint)local_20);
      }
      Sexy::RtSerialRtonReader::EndArray(this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_03f2423c(*(undefined8 *)(param_2 + 8));
    uVar4 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::size(param_1);
    Sexy::RtSerialRtonWriter::BeginArray(this_00,param_3,uVar4,0xfd);
    local_20 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                         (param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar1) {
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar5 = *(code **)(*(long *)param_4 + 0x68);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
      (*pcVar5)(param_4,uVar4,param_2,aRStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndArray(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity> >::TStdSetManipulator()
    */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>>::TStdSetManipulator
          (TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_067d2630;
  return;
}


/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity> >::GetCount(void const*)
   const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>>::GetCount
          (TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>> *this,void *param_1)

{
  std::
  set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
  ::size(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>
   >::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&,
   Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>>::InstanceRtonSync
          (TStdSetManipulator<Sexy::RtWeakPtr<BoardEntity>> *this,void *param_1,
          RtSerialRtonSync *param_2,RtSerialRtonKey *param_3,RType *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  RtSerialRtonWriter *this_00;
  undefined8 uVar4;
  RtSerialRtonReader *this_01;
  code *pcVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_040a7058(param_2[0x10]);
  cVar2 = (char)uVar3;
  if ((uVar3 & 0xff) == 0) {
    this_01 = (RtSerialRtonReader *)FUN_040a7064(*(undefined8 *)param_2);
    local_20 = CONCAT44(local_20._4_4_,uVar3) & 0xffffffff000000ff;
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(this_01,param_3,(uint *)&local_20);
    if (cVar2 != '\0') {
      if ((uint)local_20 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
          pcVar5 = *(code **)(*(long *)param_4 + 0x68);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
          (*pcVar5)(param_4,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                            &local_18,param_2,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          std::
          set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
          ::insert(param_1,(RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        } while (uVar3 < (uint)local_20);
      }
      Sexy::RtSerialRtonReader::EndArray(this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_040a7068(*(undefined8 *)(param_2 + 8));
    uVar4 = std::
            set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
            ::size(param_1);
    Sexy::RtSerialRtonWriter::BeginArray(this_00,param_3,uVar4,0xfd);
    local_20 = std::
               set<Sexy::RtWeakPtr<BoardEntity>,std::less<Sexy::RtWeakPtr<BoardEntity>>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
               ::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar1) {
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar5 = *(code **)(*(long *)param_4 + 0x68);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
      (*pcVar5)(param_4,uVar4,param_2,aRStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndArray(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* Reflection::RCustomType::TStdSetManipulator<int>::GetCount(void const*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<int>::GetCount
          (TStdSetManipulator<int> *this,void *param_1)

{
  std::set<int,std::less<int>,std::allocator<int>>::size(param_1);
  return;
}


/* Reflection::RCustomType::TStdSetManipulator<int>::TStdSetManipulator() */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<int>::TStdSetManipulator(TStdSetManipulator<int> *this)

{
  IStdManipulator::IStdManipulator((IStdManipulator *)this);
  *(undefined ***)this = &PTR_nop_06a1d7b0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RCustomType::TStdSetManipulator<int>::InstanceRtonSync(void*,
   Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&, Reflection::RType*) const */

void __thiscall
Reflection::RCustomType::TStdSetManipulator<int>::InstanceRtonSync
          (TStdSetManipulator<int> *this,void *param_1,RtSerialRtonSync *param_2,
          RtSerialRtonKey *param_3,RType *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  RtSerialRtonWriter *this_00;
  undefined8 uVar4;
  RtSerialRtonReader *this_01;
  code *pcVar5;
  undefined8 local_20;
  undefined8 local_18;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_04f4a5fc(param_2[0x10]);
  cVar2 = (char)uVar3;
  if ((uVar3 & 0xff) == 0) {
    this_01 = (RtSerialRtonReader *)FUN_04f4a608(*(undefined8 *)param_2);
    local_20 = CONCAT44(local_20._4_4_,uVar3) & 0xffffffff000000ff;
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(this_01,param_3,(uint *)&local_20);
    if (cVar2 != '\0') {
      if ((uint)local_20 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          pcVar5 = *(code **)(*(long *)param_4 + 0x68);
          Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
          (*pcVar5)(param_4,&local_18,param_2,aRStack_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
          std::set<int,std::less<int>,std::allocator<int>>::insert(param_1,(int *)&local_18);
        } while (uVar3 < (uint)local_20);
      }
      Sexy::RtSerialRtonReader::EndArray(this_01);
    }
  }
  else {
    this_00 = (RtSerialRtonWriter *)FUN_04f4a60c(*(undefined8 *)(param_2 + 8));
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::size(param_1);
    Sexy::RtSerialRtonWriter::BeginArray(this_00,param_3,uVar4,0xfd);
    local_20 = std::set<int,std::less<int>,std::allocator<int>>::begin(param_1);
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end(param_1);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18),
          bVar1) {
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      pcVar5 = *(code **)(*(long *)param_4 + 0x68);
      Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
      (*pcVar5)(param_4,uVar4,param_2,aRStack_10);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_20);
    }
    Sexy::RtSerialRtonWriter::EndArray(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

