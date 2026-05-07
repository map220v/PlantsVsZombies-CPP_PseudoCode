// Class: RiftEventDefinition


/* RiftEventDefinition::GetRiftSubEventDefinitionFromIndex(int) const */

undefined8 __thiscall
RiftEventDefinition::GetRiftSubEventDefinitionFromIndex(RiftEventDefinition *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (-1 < param_1) {
    uVar2 = *(undefined8 *)(this + 0x18);
    uVar1 = FUN_036adecc(uVar2,*(undefined8 *)(this + 0x20));
    if ((ulong)(long)param_1 < uVar1) {
      uVar2 = FUN_036adec0(uVar2);
      return uVar2;
    }
  }
  return 0;
}


/* RiftEventDefinition::GetCurrentRiftSubEvent() const */

void __thiscall RiftEventDefinition::GetCurrentRiftSubEvent(RiftEventDefinition *this)

{
  GetRiftSubEventDefinitionFromIndex(this,0);
  return;
}


/* RiftEventDefinition::RiftEventDefinition() */

void __thiscall RiftEventDefinition::RiftEventDefinition(RiftEventDefinition *this)

{
  size_t in_x2;
  
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0(this + 0x60);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x30),"DefaultConfig",in_x2);
  return;
}


/* RiftEventDefinition::GetLevelUnlockSequence() const */

undefined * __thiscall RiftEventDefinition::GetLevelUnlockSequence(RiftEventDefinition *this)

{
  long lVar1;
  
  lVar1 = RiftLevelUnlocksProperties::GetProperties((string *)(this + 0x40));
  if (lVar1 != 0) {
    return (undefined *)(lVar1 + 0x18);
  }
  return &DAT_06aaccf0;
}


/* RiftEventDefinition::GetNodeUnlockedEntries() const */

void __thiscall RiftEventDefinition::GetNodeUnlockedEntries(RiftEventDefinition *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)GetLevelUnlockSequence(this);
  FUN_036adefc(*puVar1,puVar1[1]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftEventDefinition::FindActiveRiftSubEventDefinition(long, long&, long&) const */

void __thiscall
RiftEventDefinition::FindActiveRiftSubEventDefinition
          (RiftEventDefinition *this,long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  RiftSchedule *pRVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [24];
  reverse_iterator<__gnu_cxx::__normal_iterator<RiftSubEventDefinition_const*,std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>>>
  arStack_18 [8];
  reverse_iterator arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  *param_3 = 0;
  std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>::rbegin();
  do {
    std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>::rend();
    bVar1 = std::operator!=(arStack_18,arStack_10);
    if (!bVar1) {
      iVar2 = -1;
LAB_036b0074:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    plVar4 = (long *)std::
                     reverse_iterator<__gnu_cxx::__normal_iterator<RiftSubEventDefinition_const*,std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>>>
                     ::operator*(arStack_18);
    if (plVar4 != (long *)0x0) {
      pRVar5 = (RiftSchedule *)RiftSchedule::GetSchedule();
      lVar6 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(pRVar5,*plVar4,param_1);
      pRVar5 = (RiftSchedule *)RiftSchedule::GetSchedule();
      lVar7 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(pRVar5,plVar4[1],param_1);
      if ((param_1 < lVar7) && (lVar6 <= param_1)) {
        std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>::rbegin();
        iVar2 = std::operator-((reverse_iterator *)arStack_18,arStack_10);
        uVar9 = *(undefined8 *)(this + 0x20);
        *param_2 = lVar6;
        uVar8 = *(undefined8 *)(this + 0x18);
        *param_3 = lVar7;
        iVar3 = FUN_036adecc(uVar8,uVar9);
        iVar2 = (iVar3 + -1) - iVar2;
        goto LAB_036b0074;
      }
    }
    FUN_036af1b8(auStack_30,arStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftEventDefinition::GetCurrentRiftSubEvent(long) const */

void __thiscall RiftEventDefinition::GetCurrentRiftSubEvent(RiftEventDefinition *this,long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = ___stack_chk_guard;
  iVar1 = FindActiveRiftSubEventDefinition(this,param_1,local_18,local_18 + 1);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GetRiftSubEventDefinitionFromIndex(this,iVar1);
  }
  if (local_18[2] == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftEventDefinition::ToString() const */

void RiftEventDefinition::ToString(void)

{
  RiftEventDefinition *in_x0;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  time_t local_20;
  time_t local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  local_20 = *(time_t *)in_x0;
  local_18 = *(time_t *)(in_x0 + 8);
  pcVar1 = ctime(&local_20);
  Sexy::StrFormat("Start: %s\n",asStack_10,pcVar1);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  pcVar1 = ctime(&local_18);
  Sexy::StrFormat("End: %s\n",asStack_10,pcVar1);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  lVar2 = GetCurrentRiftSubEvent(in_x0,lVar2);
  if (lVar2 != 0) {
    uVar3 = FUN_0547429c(lVar2 + 0x10);
    Sexy::StrFormat("Current Sub-Event: %s\n",asStack_10,uVar3);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  uVar3 = FUN_0547429c(in_x0 + 0x30);
  Sexy::StrFormat("Key: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = FUN_0547429c(in_x0 + 0x38);
  Sexy::StrFormat("World: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = FUN_0547429c(in_x0 + 0x60);
  Sexy::StrFormat("Title: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = FUN_0547429c(in_x0 + 0x10);
  Sexy::StrFormat("Perks: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = FUN_0547429c(in_x0 + 0x50);
  Sexy::StrFormat("Zomboss Level: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  uVar3 = FUN_0547429c(in_x0 + 0x58);
  Sexy::StrFormat("Zomboss Rewards: %s\n",asStack_10,uVar3);
  thunk_FUN_054757c0();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftEventDefinition::FindRiftSubEventDefinition(long) const */

void __thiscall
RiftEventDefinition::FindRiftSubEventDefinition(RiftEventDefinition *this,long param_1)

{
  bool bVar1;
  long *plVar2;
  RiftSchedule *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_036af278(*(undefined8 *)(this + 0x18));
  do {
    local_10 = FUN_036af1f4(*(undefined8 *)(this + 0x20));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 0xffffffff;
LAB_036b0434:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (plVar2 != (long *)0x0) {
      this_00 = (RiftSchedule *)RiftSchedule::GetSchedule();
      lVar3 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta(this_00,*plVar2,param_1);
      if (lVar3 == param_1) {
        local_10 = FUN_036af278(*(undefined8 *)(this + 0x18));
        uVar4 = __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
        goto LAB_036b0434;
      }
    }
    FUN_036af2fc((exception_ptr *)&local_18);
  } while( true );
}


/* RiftEventDefinition::GetRiftSubEventDefinition(long) const */

undefined8 __thiscall
RiftEventDefinition::GetRiftSubEventDefinition(RiftEventDefinition *this,long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FindRiftSubEventDefinition(this,param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_036adec0(*(undefined8 *)(this + 0x18));
    return uVar2;
  }
  return 0;
}


/* RiftEventDefinition::IsLevelNodeUnlocked(int) const */

bool __thiscall RiftEventDefinition::IsLevelNodeUnlocked(RiftEventDefinition *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short *psVar4;
  RiftSchedule *pRVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  puVar2 = (undefined8 *)GetLevelUnlockSequence(this);
  uVar8 = *puVar2;
  uVar3 = FUN_036adefc(uVar8,puVar2[1]);
  if (((ulong)(long)param_1 < uVar3) && (-1 < param_1)) {
    psVar4 = (short *)FUN_036adf24(uVar8);
    pRVar5 = (RiftSchedule *)RiftSchedule::GetSchedule();
    lVar6 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta
                      (pRVar5,(long)*psVar4,*(long *)this);
    pRVar5 = (RiftSchedule *)RiftSchedule::GetSchedule();
    lVar7 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta
                      (pRVar5,(long)psVar4[1],*(long *)this);
    if (lVar6 <= lVar1) {
      return lVar1 < lVar7 || psVar4[1] < 1;
    }
  }
  return false;
}


/* RiftEventDefinition::GetNodeUnlockedAbsoluteTime(int) const */

float __thiscall
RiftEventDefinition::GetNodeUnlockedAbsoluteTime(RiftEventDefinition *this,int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  short *psVar3;
  RiftSchedule *this_00;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)GetLevelUnlockSequence(this);
  uVar5 = *puVar1;
  uVar2 = FUN_036adefc(uVar5,puVar1[1]);
  if (((ulong)(long)param_1 < uVar2) && (-1 < param_1)) {
    psVar3 = (short *)FUN_036adf24(uVar5);
    if (*psVar3 != -1) {
      this_00 = (RiftSchedule *)RiftSchedule::GetSchedule();
      lVar4 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta
                        (this_00,(long)*psVar3,*(long *)this);
      return (float)lVar4;
    }
    return (float)*(ulong *)this;
  }
  return 0.0;
}


/* RiftEventDefinition::GetNextNodeUnlockTime(float) const */

float __thiscall RiftEventDefinition::GetNextNodeUnlockTime(RiftEventDefinition *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 0;
  fVar4 = (float)PVZ_EOT();
  fVar6 = fVar4;
  while (iVar1 = GetNodeUnlockedEntries(this), iVar3 = iVar2, iVar2 < iVar1) {
    while( true ) {
      iVar2 = iVar3 + 1;
      fVar5 = (float)GetNodeUnlockedAbsoluteTime(this,iVar3);
      if (fVar5 <= param_1) break;
      fVar6 = (float)NEON_fminnm(fVar6,fVar5);
      iVar1 = GetNodeUnlockedEntries(this);
      iVar3 = iVar2;
      if (iVar1 <= iVar2) goto LAB_036b0698;
    }
  }
LAB_036b0698:
  if ((0.0 < fVar6) && (fVar6 < fVar4)) {
    return fVar6;
  }
  return 0.0;
}


/* RiftEventDefinition::GetLastNodeUnlockTime(float) const */

float __thiscall RiftEventDefinition::GetLastNodeUnlockTime(RiftEventDefinition *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  iVar2 = 0;
  while (iVar1 = GetNodeUnlockedEntries(this), iVar3 = iVar2, iVar2 < iVar1) {
    while( true ) {
      iVar2 = iVar3 + 1;
      fVar4 = (float)GetNodeUnlockedAbsoluteTime(this,iVar3);
      if (param_1 <= fVar4) break;
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      iVar1 = GetNodeUnlockedEntries(this);
      iVar3 = iVar2;
      if (iVar1 <= iVar2) goto LAB_036b0740;
    }
  }
LAB_036b0740:
  if ((0.0 < fVar5) && (fVar4 = (float)PVZ_EOT(), fVar5 < fVar4)) {
    return fVar5;
  }
  return 0.0;
}


/* RiftEventDefinition::GetNodeUnlockedTime(int) const */

float __thiscall RiftEventDefinition::GetNodeUnlockedTime(RiftEventDefinition *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short *psVar4;
  RiftSchedule *this_00;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  puVar2 = (undefined8 *)GetLevelUnlockSequence(this);
  uVar6 = *puVar2;
  uVar3 = FUN_036adefc(uVar6,puVar2[1]);
  if (((ulong)(long)param_1 < uVar3) && (-1 < param_1)) {
    psVar4 = (short *)FUN_036adf24(uVar6);
    this_00 = (RiftSchedule *)RiftSchedule::GetSchedule();
    lVar5 = RiftSchedule::CalculateEpochTimeFromCurrentEventDelta
                      (this_00,(long)*psVar4,*(long *)this);
    if ((lVar1 < lVar5) && (0 < *psVar4)) {
      return (float)(lVar5 - lVar1);
    }
  }
  return 0.0;
}


/* RiftEventDefinition::~RiftEventDefinition() */

void __thiscall RiftEventDefinition::~RiftEventDefinition(RiftEventDefinition *this)

{
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>>::~vector
            ((vector<RiftSubEventDefinition,std::allocator<RiftSubEventDefinition>> *)(this + 0x18))
  ;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftEventDefinition::GetMostRecentNodeUnlockedList(float) const */

void RiftEventDefinition::GetMostRecentNodeUnlockedList(float param_1)

{
  int iVar1;
  RiftEventDefinition *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  float fVar2;
  float fVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  fVar2 = (float)GetLastNodeUnlockTime(in_x0,param_1);
  local_c = 0;
  if (0.0 < fVar2) {
    while (iVar1 = GetNodeUnlockedEntries(in_x0), local_c < iVar1) {
      fVar3 = (float)GetNodeUnlockedAbsoluteTime(in_x0,local_c);
      if (fVar3 == fVar2) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_c);
      }
      local_c = local_c + 1;
    }
  }
  else {
    while (iVar1 = GetNodeUnlockedEntries(in_x0), local_c < iVar1) {
      fVar2 = (float)GetNodeUnlockedAbsoluteTime(in_x0,local_c);
      if (fVar2 == 0.0) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_c);
      }
      local_c = local_c + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftEventDefinition::RiftEventDefinition(RiftEventDefinition&&) */

void __thiscall
RiftEventDefinition::RiftEventDefinition(RiftEventDefinition *this,RiftEventDefinition *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  FUN_05474148(this + 0x48,param_1 + 0x48);
  FUN_05474148(this + 0x50,param_1 + 0x50);
  FUN_05474148(this + 0x58,param_1 + 0x58);
  FUN_05474148(this + 0x60,param_1 + 0x60);
  return;
}

