// Class: LevelMutatorTableHelper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorTableHelper::Find(Sexy::RtWeakPtr<LevelMutatorTableProps>&, int, int) */

void LevelMutatorTableHelper::Find(RtWeakPtr *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int local_48;
  int local_44 [3];
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 uStack_20;
  code *local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_44[0] = param_2;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1);
  if (cVar1 != '\0') {
    uVar7 = (ulong)local_44[0];
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    uVar4 = FUN_036a6328(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
    if (uVar7 < uVar4) {
      local_18 = findByLevelValues;
      std::bind<bool(*)(MutatorTable_const&,int,int),std::_Placeholder<1>const&,int&,int&>
                ((_func_bool_MutatorTable_ptr_int_int *)&local_18,(_Placeholder *)&DAT_0576d300,
                 local_44,&local_48);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar3 + 0x10));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar3 + 0x10));
      local_18 = local_28;
      uStack_10 = uStack_20;
      local_38 = std::
                 find_if<__gnu_cxx::__normal_iterator<MutatorTable*,std::vector<MutatorTable,std::allocator<MutatorTable>>>,std::_Bind<bool(*(std::_Placeholder<1>,int,int))(MutatorTable_const&,int,int)>>
                           (uVar5,uVar6,&local_18);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar3 + 0x10));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
      if (bVar2) {
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        goto LAB_036a726c;
      }
    }
  }
  uVar5 = 0;
LAB_036a726c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

