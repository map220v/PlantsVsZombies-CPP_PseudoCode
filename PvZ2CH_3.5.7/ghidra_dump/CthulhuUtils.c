// Class: CthulhuUtils


/* CthulhuUtils::CopyPropertySheetPtr(Sexy::RtWeakPtr<CthulhuPropertySheet>,
   Sexy::RtWeakPtr<CthulhuPropertySheet>, bool) */

void CthulhuUtils::CopyPropertySheetPtr
               (RtWeakPtr<PowerPropertySheet> *param_1,RtWeakPtr *param_2,char param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (param_3 != '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(param_1,param_2);
    return;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  fVar3 = *(float *)(lVar1 + 0x30);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  if (fVar3 <= *(float *)(lVar1 + 0x30)) {
    return;
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuUtils::GetPropertySheetPtr(std::string) */

void __thiscall
CthulhuUtils::GetPropertySheetPtr
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          CthulhuUtils *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this_00;
  CthulhuPropertySheet *pCVar4;
  int iVar5;
  int extraout_w1;
  int extraout_w1_00;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0xa4);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_04d6f82c:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pCVar4 = Sexy::RtObject::Cast<CthulhuPropertySheet>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar5 = extraout_w1;
    if ((pCVar4 != (CthulhuPropertySheet *)0x0) &&
       (cVar2 = std::operator==((string *)(pCVar4 + 0x10),(string *)this), iVar5 = extraout_w1_00,
       cVar2 != '\0')) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)param_1,(RtId *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      goto LAB_04d6f82c;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  } while( true );
}

