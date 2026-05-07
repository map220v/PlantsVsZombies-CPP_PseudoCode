// Class: HotUIColor_Dictionary


/* HotUIColor_Dictionary::SetDefaultColor(std::string const&) */

void HotUIColor_Dictionary::SetDefaultColor(string *param_1)

{
  thunk_FUN_05475e00(&DAT_06aa9468,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIColor_Dictionary::GetColor(std::string const&) */

void HotUIColor_Dictionary::GetColor(string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  long lVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::GetInstancePtr();
  ObjectTypeDirectory<HotUIColorAlias>::GetTypeFromTypeName(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::GetInstancePtr();
  }
  else {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  ObjectTypeDirectory<HotUIColor>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_20);
  if (((cVar1 == '\0') && (cVar1 = FUN_0547419c(&DAT_06aa9468), cVar1 == '\0')) &&
     (bVar2 = std::operator!=(param_1,(string *)&DAT_06aa9468), bVar2)) {
    lVar4 = GetColor((string *)&DAT_06aa9468);
  }
  else {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    lVar4 = lVar4 + 0x10;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}

