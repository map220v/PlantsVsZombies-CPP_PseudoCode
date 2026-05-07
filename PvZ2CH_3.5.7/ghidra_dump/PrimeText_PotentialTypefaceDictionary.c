// Class: PrimeText_PotentialTypefaceDictionary


/* PrimeText_PotentialTypefaceDictionary::SetDefaultTypeface(std::string const&) */

void PrimeText_PotentialTypefaceDictionary::SetDefaultTypeface(string *param_1)

{
  thunk_FUN_05475e00(&DAT_06afa0a8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(std::string const&) */

void PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 extraout_x0;
  undefined8 uVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  psVar3 = (string *)
           Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::
           GetInstancePtr();
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::GetTypeFromTypeName(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 == '\0') {
    psVar3 = (string *)
             Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::GetInstancePtr()
    ;
  }
  else {
    psVar3 = (string *)
             Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::GetInstancePtr()
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  ObjectTypeDirectory<PrimeText_PotentialTypeface>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_20);
  if (((cVar1 == '\0') && (cVar1 = FUN_0547419c(&DAT_06afa0a8), cVar1 == '\0')) &&
     (bVar2 = std::operator!=(param_1,(string *)&DAT_06afa0a8), bVar2)) {
    uVar4 = GetPotentialTypeface(param_1);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    nop();
    uVar4 = extraout_x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PrimeText_PotentialTypefaceDictionary::GetTypeface(std::string const&) */

void PrimeText_PotentialTypefaceDictionary::GetTypeface(string *param_1)

{
  PrimeText_PotentialTypeface *this;
  
  this = (PrimeText_PotentialTypeface *)GetPotentialTypeface(param_1);
  PrimeText_PotentialTypeface::Typeface(this);
  return;
}

