// Class: Sexy::LeaderboardEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardEntry::GetField(std::string const&) const */

void __thiscall Sexy::LeaderboardEntry::GetField(LeaderboardEntry *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_053b6924(*(undefined8 *)this);
  do {
    local_10 = FUN_053b6974(*(undefined8 *)(this + 8));
    bVar2 = __gnu_cxx::operator<((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      psVar3 = (string *)0x0;
LAB_053b6a50:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(psVar3);
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') {
      psVar3 = psVar3 + 8;
      goto LAB_053b6a50;
    }
    std::move_iterator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*>::operator++
              ((move_iterator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*> *)&local_18
              );
  } while( true );
}


/* Sexy::LeaderboardEntry::HasField(std::string const&) const */

bool __thiscall Sexy::LeaderboardEntry::HasField(LeaderboardEntry *this,string *param_1)

{
  long lVar1;
  
  lVar1 = GetField(this,param_1);
  return lVar1 != 0;
}


/* Sexy::LeaderboardEntry::GetIntValue(std::string const&) const */

int __thiscall Sexy::LeaderboardEntry::GetIntValue(LeaderboardEntry *this,string *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)GetField(this,param_1);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = piVar2[2];
  }
  return iVar1;
}


/* Sexy::LeaderboardEntry::GetInt64Value(std::string const&) const */

undefined8 __thiscall Sexy::LeaderboardEntry::GetInt64Value(LeaderboardEntry *this,string *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)GetField(this,param_1);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    return *(undefined8 *)(piVar1 + 2);
  }
  return 0xffffffffffffffff;
}


/* Sexy::LeaderboardEntry::GetFloatValue(std::string const&) const */

int __thiscall Sexy::LeaderboardEntry::GetFloatValue(LeaderboardEntry *this,string *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)GetField(this,param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = -0x40800000;
    if (*piVar1 == 2) {
      iVar2 = piVar1[2];
    }
    return iVar2;
  }
  return -0x40800000;
}


/* Sexy::LeaderboardEntry::GetDoubleValue(std::string const&) const */

undefined1  [16] __thiscall
Sexy::LeaderboardEntry::GetDoubleValue(LeaderboardEntry *this,string *param_1)

{
  int *piVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  piVar1 = (int *)GetField(this,param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = 0xbff0000000000000;
    if (*piVar1 == 3) {
      uVar2 = *(ulong *)(piVar1 + 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0xbff0000000000000);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardEntry::GetStringValue(std::string const&) const */

void Sexy::LeaderboardEntry::GetStringValue(string *param_1)

{
  long lVar1;
  int *piVar2;
  string *in_x1;
  
  lVar1 = ___stack_chk_guard;
  piVar2 = (int *)GetField((LeaderboardEntry *)param_1,in_x1);
  if ((piVar2 == (int *)0x0) || (*piVar2 != 4)) {
    FUN_05478178();
    nop();
  }
  else {
    FUN_05478178();
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::LeaderboardEntry::GetBinaryValue(std::string const&, Sexy::Buffer&) const */

undefined8 __thiscall
Sexy::LeaderboardEntry::GetBinaryValue(LeaderboardEntry *this,string *param_1,Buffer *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)GetField(this,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*piVar1 != 5) {
    return 0;
  }
  Buffer::WriteBytes(param_2,(uchar *)(piVar1 + 3),(ulong)(uint)piVar1[2]);
  return 1;
}


/* Sexy::LeaderboardEntry::~LeaderboardEntry() */

void __thiscall Sexy::LeaderboardEntry::~LeaderboardEntry(LeaderboardEntry *this)

{
  std::_Destroy<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*>
            (*(pair **)this,*(pair **)(this + 8));
  std::
  _Vector_base<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
  ::~_Vector_base((_Vector_base<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
                   *)this);
  return;
}


/* Sexy::LeaderboardEntry::TEMPNAMEPLACEHOLDERVALUE(Sexy::LeaderboardEntry&&) */

LeaderboardEntry * __thiscall
Sexy::LeaderboardEntry::operator=(LeaderboardEntry *this,LeaderboardEntry *param_1)

{
  std::
  vector<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
  ::operator=((vector<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
               *)this,(vector *)param_1);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x053b8354 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Sexy::LeaderboardEntry::LeaderboardEntry(Sexy::LeaderboardEntry const&) */

void __thiscall
Sexy::LeaderboardEntry::LeaderboardEntry(LeaderboardEntry *this,LeaderboardEntry *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  pair *ppVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_053b6310(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::
  _Vector_base<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
  ::_Vector_base((ulong)this,paVar2);
  FUN_053b6924(*(undefined8 *)param_1);
  uVar3 = FUN_053b6974(*(undefined8 *)(param_1 + 8));
  ppVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>const*,std::vector<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>>,std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(pair **)(this + 8) = ppVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::LeaderboardEntry::SetField(std::string const&, Sexy::LeaderboardEntry::FieldData const&) */

void __thiscall
Sexy::LeaderboardEntry::SetField(LeaderboardEntry *this,string *param_1,FieldData *param_2)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_b0;
  undefined8 local_a8;
  pair<std::string,Sexy::LeaderboardEntry::FieldData> apStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar2 = __gnu_cxx::operator<((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar2) {
      std::pair<std::string,Sexy::LeaderboardEntry::FieldData>::pair(apStack_a0,param_1,param_2);
      std::
      vector<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
      ::push_back((vector<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>,std::allocator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>>>
                   *)this,(pair *)apStack_a0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_a0);
LAB_053b90d0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') {
      memcpy(psVar3 + 8,param_2,0x90);
      goto LAB_053b90d0;
    }
    std::move_iterator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*>::operator++
              ((move_iterator<std::pair<std::string,Sexy::LeaderboardEntry::FieldData>*> *)&local_b0
              );
  } while( true );
}

