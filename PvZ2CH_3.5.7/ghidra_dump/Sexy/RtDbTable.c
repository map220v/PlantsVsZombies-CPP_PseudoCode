// Class: Sexy::RtDbTable


/* Sexy::RtDbTable::GetSharedIteratorStorage() */

RtDbTable * __thiscall Sexy::RtDbTable::GetSharedIteratorStorage(RtDbTable *this)

{
  return this + 0xf8;
}


/* Sexy::RtDbTable::IntegrityCheck() */

void __thiscall Sexy::RtDbTable::IntegrityCheck(RtDbTable *this)

{
  RtDbTable *pRVar1;
  
  for (pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x20)); pRVar1 != this + 0x18;
      pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar1 + 8))) {
  }
  for (pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x58)); pRVar1 != this + 0x50;
      pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar1 + 8))) {
  }
  for (pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x90)); pRVar1 != this + 0x88;
      pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar1 + 8))) {
  }
  for (pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 200)); pRVar1 != this + 0xc0;
      pRVar1 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar1 + 8))) {
  }
  return;
}


/* Sexy::RtDbTable::GetSlotForId(Sexy::RtId const&, bool) const */

long Sexy::RtDbTable::GetSlotForId(RtId *param_1,bool param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  RtId *this;
  
  this = (RtId *)(ulong)param_2;
  iVar1 = RtId::GetTableIndex(this);
  if ((iVar1 == *(int *)param_1) &&
     (uVar2 = RtId::GetSlotIndex(this), uVar2 < *(uint *)(param_1 + 0x10))) {
    lVar3 = *(long *)(param_1 + 8) + (ulong)uVar2 * 0x30;
    if ((lVar3 != 0) && (iVar1 = RtId::GetRevision(this), iVar1 != *(int *)(lVar3 + 0x18))) {
      lVar3 = 0;
    }
    return lVar3;
  }
  return 0;
}


/* Sexy::RtDbTable::SetSlotObjectDeletionMode(Sexy::RtDbTable::Slot*,
   Sexy::RtDbTable::EObjectDeletionMode) const */

void __thiscall
Sexy::RtDbTable::SetSlotObjectDeletionMode(undefined8 param_1_00,long param_1,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c) & 0x9fffffff;
  if (param_3 != 1) {
    if (param_3 == 2) {
      *(uint *)(param_1 + 0x1c) = uVar1 | 0x20000000;
    }
    else {
      *(uint *)(param_1 + 0x1c) = uVar1;
    }
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 | 0x40000000;
  return;
}


/* Sexy::RtDbTable::HasCurrentPackage() const */

void __thiscall Sexy::RtDbTable::HasCurrentPackage(RtDbTable *this)

{
  FUN_051b5420(*(undefined4 *)(this + 0x150));
  return;
}


/* Sexy::RtDbTable::GetCurrentPackageName() const */

RtDbTable * __thiscall Sexy::RtDbTable::GetCurrentPackageName(RtDbTable *this)

{
  RtDbTable *pRVar1;
  char cVar2;
  
  cVar2 = FUN_051b542c(*(undefined4 *)(this + 0x150));
  pRVar1 = this + 0x150;
  if (cVar2 != '\0') {
    pRVar1 = this + 0x130;
  }
  return pRVar1;
}


/* Sexy::RtDbTable::RetainId(Sexy::RtId const&) */

undefined8 __thiscall Sexy::RtDbTable::RetainId(RtDbTable *this,RtId *param_1)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return 1;
  }
  return 0;
}


/* Sexy::RtDbTable::GetRefCountForId(Sexy::RtId const&) const */

uint __thiscall Sexy::RtDbTable::GetRefCountForId(RtDbTable *this,RtId *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x1c) & 0x3ffffff;
  }
  return uVar1;
}


/* Sexy::RtDbTable::ReplaceObjectForId(Sexy::RtId const&, Sexy::RtObject*) const */

bool __thiscall Sexy::RtDbTable::ReplaceObjectForId(RtDbTable *this,RtId *param_1,RtObject *param_2)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 != 0) {
    *(RtObject **)(lVar1 + 0x10) = param_2;
  }
  return lVar1 != 0;
}


/* Sexy::RtDbTable::SetObjectDeletionMode(Sexy::RtId const&, Sexy::RtDbTable::EObjectDeletionMode)
   const */

undefined8 __thiscall
Sexy::RtDbTable::SetObjectDeletionMode(RtDbTable *this,bool param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,param_2);
  if (lVar1 != 0) {
    SetSlotObjectDeletionMode(this,lVar1,param_3);
    return 1;
  }
  return 0;
}


/* Sexy::RtDbTable::GetObjectDeletionMode(Sexy::RtId const&) const */

uint __thiscall Sexy::RtDbTable::GetObjectDeletionMode(RtDbTable *this,RtId *param_1)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 == 0) {
    return 2;
  }
  if ((*(uint *)(lVar1 + 0x1c) >> 0x1d & 1) != 0) {
    return 2;
  }
  return *(uint *)(lVar1 + 0x1c) >> 0x1e & 1;
}


/* Sexy::RtDbTable::SetObjectIsStandalone(Sexy::RtId const&, bool) const */

undefined8 __thiscall
Sexy::RtDbTable::SetObjectIsStandalone(RtDbTable *this,RtId *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 == 0) {
    return 0;
  }
  if (!param_2) {
    *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) & 0xefffffff;
    return 1;
  }
  *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) | 0x10000000;
  return 1;
}


/* Sexy::RtDbTable::GetObjectIsStandalone(Sexy::RtId const&) const */

uint __thiscall Sexy::RtDbTable::GetObjectIsStandalone(RtDbTable *this,RtId *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x1c) >> 0x1c & 1;
  }
  return uVar1;
}


/* Sexy::RtDbTable::SetObjectIsWatched(Sexy::RtId const&, bool) const */

undefined8 __thiscall
Sexy::RtDbTable::SetObjectIsWatched(RtDbTable *this,RtId *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 == 0) {
    return 0;
  }
  if (!param_2) {
    *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) & 0xf7ffffff;
    return 1;
  }
  *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) | 0x8000000;
  return 1;
}


/* Sexy::RtDbTable::GetObjectIsWatched(Sexy::RtId const&) const */

uint __thiscall Sexy::RtDbTable::GetObjectIsWatched(RtDbTable *this,RtId *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x1c) >> 0x1b & 1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::GetUidForId(Sexy::RtId const&) const */

void __thiscall Sexy::RtDbTable::GetUidForId(RtDbTable *this,RtId *param_1)

{
  long lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 == 0) {
    ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x20);
    local_10 = *(undefined4 *)(lVar1 + 0x28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::WriteTableRtonKeys(Sexy::RtSerialRtonWriter&) const */

void __thiscall Sexy::RtDbTable::WriteTableRtonKeys(RtDbTable *this,RtSerialRtonWriter *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  wchar_t *pwVar4;
  long lVar5;
  byte bVar6;
  bool *pbVar7;
  bool abStack_28 [8];
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)this);
  iVar2 = FUN_051b546c(*(undefined4 *)this);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"table_index");
  RtSerialRtonWriter::WriteInt32(param_1,aRStack_10,iVar2);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"is_system_table");
  cVar1 = FUN_051b5474(*(undefined4 *)this);
  bVar6 = false;
  if (cVar1 != '\0') {
    bVar6 = *(byte *)(lVar3 + 0x21) ^ 1;
  }
  RtSerialRtonWriter::WriteBool(param_1,aRStack_10,(bool)bVar6);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  cVar1 = FUN_051b5420(*(undefined4 *)(lVar3 + 8));
  if (cVar1 != '\0') {
    pbVar7 = abStack_28;
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"table_name");
    lVar5 = RtName::GetString();
    FUN_05478178(aSStack_20,lVar5 + 4);
    WStringToString(aSStack_20,(wstring *)0x0,pbVar7);
    RtSerialRtonWriter::WriteString(param_1,aRStack_10,asStack_18,false);
    std::string::~string(asStack_18);
    FUN_05476c50(aSStack_20);
    nop();
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  }
  cVar1 = FUN_0547419c((string *)(lVar3 + 0x18));
  if (cVar1 == '\0') {
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"display_name");
    RtSerialRtonWriter::WriteString(param_1,aRStack_10,(string *)(lVar3 + 0x18),false);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  }
  if (*(char *)(lVar3 + 0x20) != '\0') {
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"is_fixed_content");
    RtSerialRtonWriter::WriteBool(param_1,aRStack_10,true);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  }
  RtSerialRtonKey::RtSerialRtonKey(aRStack_10,"current_package");
  GetCurrentPackageName(this);
  pwVar4 = (wchar_t *)RtName::GetString();
  RtSerialRtonWriter::WriteUTF8String(param_1,aRStack_10,pwVar4,false);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::DebugPrintTableInfo() */

void __thiscall Sexy::RtDbTable::DebugPrintTableInfo(RtDbTable *this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  string *psVar6;
  Sexy aSStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_051b5470(*(undefined4 *)(this + 0x80));
  lVar3 = Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)this);
  OutputDebugStrF((wchar_t *)"==============================================\n");
  uVar4 = RtName::GetString();
  psVar6 = asStack_10;
  FUN_05478178(aSStack_20,uVar4);
  nop();
  WStringToString(aSStack_20,(wstring *)0x0,(bool *)psVar6);
  uVar4 = FUN_0547429c(asStack_10);
  OutputDebugStrF((wchar_t *)"Table Name: \t%s\n",uVar4);
  std::string::~string(asStack_10);
  uVar4 = FUN_0547429c(lVar3 + 0x18);
  OutputDebugStrF((wchar_t *)"Display Name: \t%s\n",uVar4);
  cVar1 = HasCurrentPackage(this);
  if (cVar1 != '\0') {
    GetCurrentPackageName(this);
    uVar4 = RtName::GetString();
    psVar6 = asStack_10;
    FUN_05478178(aSStack_18,uVar4);
    nop();
    WStringToString(aSStack_18,(wstring *)0x0,(bool *)psVar6);
    uVar4 = FUN_0547429c(asStack_10);
    OutputDebugStrF((wchar_t *)"Package Name:\t%s\n",uVar4);
    std::string::~string(asStack_10);
    FUN_05476c50(aSStack_18);
  }
  uVar5 = FUN_051b546c(*(undefined4 *)this);
  OutputDebugStrF((wchar_t *)"Table Index:   %d\n",uVar5 & 0xffffffff);
  OutputDebugStrF((wchar_t *)"Entity Count: \t%d\n",uVar2 & 0xffffffff);
  OutputDebugStrF((wchar_t *)"Free Slots:\t%d\tUsed Slots:\t\t%d\tCondemned:\t%d\tRetired:\t%d\n",
                  (ulong)*(uint *)(this + 0x48),(ulong)*(uint *)(this + 0x80),
                  (ulong)*(uint *)(this + 0xb8),(ulong)*(uint *)(this + 0xf0));
  FUN_05476c50(aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::GrowSlotVector(unsigned int, std::string const&) */

void __thiscall Sexy::RtDbTable::GrowSlotVector(RtDbTable *this,uint param_1,string *param_2)

{
  void *pvVar1;
  RtRingItem<Sexy::RtDbTable::Slot> *pRVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  RtRingItem<Sexy::RtDbTable::Slot> *this_00;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  string *psVar9;
  size_t __n;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__src;
  long lVar13;
  RtDbTable **local_38;
  undefined8 local_30;
  RtDbTable *local_28;
  RtDbTable *local_20;
  RtDbTable *local_18;
  RtDbTable *local_10;
  long local_8;
  
  uVar11 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (((gSexyAppBase != 0) &&
      (*(ResourceManager **)(gSexyAppBase + 0x848) != (ResourceManager *)0x0)) &&
     (iVar5 = ResourceManager::GetDelayLoadedRSBSlotCount
                        (*(ResourceManager **)(gSexyAppBase + 0x848)), iVar5 != 0)) {
    psVar9 = (string *)ResourceManager::GetLastNonDelayLoadRSBManifestName();
    cVar4 = std::operator==(param_2,psVar9);
    if (cVar4 != '\0') {
      iVar5 = ResourceManager::GetDelayLoadedRSBSlotCount
                        (*(ResourceManager **)(gSexyAppBase + 0x848));
      uVar11 = (ulong)(param_1 + iVar5);
    }
  }
  uVar3 = *(uint *)(this + 0x10);
  __src = *(void **)(this + 8);
  this_00 = malloc(uVar11 * 0x30);
  iVar5 = (int)uVar11;
  *(int *)(this + 0x10) = iVar5;
  *(RtRingItem<Sexy::RtDbTable::Slot> **)(this + 8) = this_00;
  if (uVar3 == 0) {
    memset(this_00,0,uVar11 * 0x30);
    if (iVar5 != 0) {
LAB_051b6acc:
      uVar10 = uVar3;
      do {
        uVar10 = uVar10 + 1;
        FUN_051b54bc(this_00,this_00);
        FUN_051b54c4(this_00 + 8,this_00);
        RtRingItem<Sexy::RtDbTable::Slot>::RingLinkBefore(this_00,(Slot *)(this + 0x18));
        *(undefined4 *)(this_00 + 0x18) = 1;
        this_00 = this_00 + 0x30;
      } while (uVar10 < *(uint *)(this + 0x10));
      *(uint *)(this + 0x48) = (*(int *)(this + 0x48) - uVar3) + *(uint *)(this + 0x10);
      if (uVar3 != 0) goto LAB_051b6cd8;
    }
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar13 = (long)this_00 - (long)__src;
    __n = (ulong)uVar3 * 0x30;
    pvVar1 = (void *)((long)__src + __n);
    memcpy(this_00,__src,__n);
    pRVar2 = this_00 + ((ulong)(uVar3 - 1) + 1) * 0x30;
    memset(this_00 + __n,0,(ulong)(iVar5 - uVar3) * 0x30);
    do {
      pvVar6 = (void *)FUN_051b54b8(*(undefined8 *)this_00);
      if ((__src <= pvVar6) && (pvVar6 < pvVar1)) {
        FUN_051b54bc(this_00,(long)pvVar6 + lVar13);
      }
      pvVar6 = (void *)FUN_051b54ac(*(undefined8 *)(this_00 + 8));
      if ((__src <= pvVar6) && (pvVar6 < pvVar1)) {
        FUN_051b54c4(this_00 + 8,(long)pvVar6 + lVar13);
      }
      this_00 = this_00 + 0x30;
    } while (this_00 != pRVar2);
    local_38 = &local_28;
    local_20 = this + 0x50;
    local_18 = this + 0x88;
    local_10 = this + 0xc0;
    local_28 = this + 0x18;
    local_30 = 4;
    puVar7 = (undefined8 *)FUN_051b5498(local_38);
    puVar8 = (undefined8 *)
             std::initializer_list<Sexy::RtDbTable::Slot*>::end
                       ((initializer_list<Sexy::RtDbTable::Slot*> *)&local_38);
    for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      puVar12 = (undefined8 *)*puVar7;
      pvVar6 = (void *)FUN_051b54b8(*puVar12);
      if ((__src <= pvVar6) && (pvVar6 < pvVar1)) {
        FUN_051b54bc(puVar12,(long)pvVar6 + lVar13);
      }
      pvVar6 = (void *)FUN_051b54ac(puVar12[1]);
      if ((__src <= pvVar6) && (pvVar6 < pvVar1)) {
        FUN_051b54c4(puVar12 + 1,(long)pvVar6 + lVar13);
      }
    }
    this_00 = (RtRingItem<Sexy::RtDbTable::Slot> *)(*(long *)(this + 8) + __n);
    if (uVar3 < *(uint *)(this + 0x10)) goto LAB_051b6acc;
    *(uint *)(this + 0x48) = (*(uint *)(this + 0x10) + *(int *)(this + 0x48)) - uVar3;
LAB_051b6cd8:
    if (local_8 == ___stack_chk_guard) {
      free(__src);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtDbTable::ResizeTable(unsigned int, std::string const&) */

undefined8 __thiscall Sexy::RtDbTable::ResizeTable(RtDbTable *this,uint param_1,string *param_2)

{
  if (param_1 != 0) {
    GrowSlotVector(this,param_1 + *(int *)(this + 0x128),param_2);
    *(uint *)(this + 0x128) = *(int *)(this + 0x128) + param_1;
  }
  return 1;
}


/* Sexy::RtDbTable::FreeSlot(Sexy::RtDbTable::Slot*, bool) */

void __thiscall Sexy::RtDbTable::FreeSlot(RtDbTable *this,Slot *param_1,bool param_2)

{
  if (param_2) {
    RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
              ((RtRingItem<Sexy::RtNameTable::Entry> *)param_1,(Entry *)(this + 0x88));
    *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + 1;
    return;
  }
  if ((long)param_1 - *(long *)(this + 8) < 0x300000) {
    if (*(uint *)(param_1 + 0x18) < 0xfffffffe) {
      RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
                ((RtRingItem<Sexy::RtNameTable::Entry> *)param_1,(Entry *)(this + 0x18));
      *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
      return;
    }
  }
  else if (*(uint *)(param_1 + 0x18) < 0xffffff) {
    RtRingItem<Sexy::RtDbTable::Slot>::RingLinkBefore
              ((RtRingItem<Sexy::RtDbTable::Slot> *)param_1,(Slot *)(this + 0x18));
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
    return;
  }
  RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
            ((RtRingItem<Sexy::RtNameTable::Entry> *)param_1,(Entry *)(this + 0xc0));
  *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
  return;
}


/* Sexy::RtDbTable::RunDeferredDeletions() */

void __thiscall Sexy::RtDbTable::RunDeferredDeletions(RtDbTable *this)

{
  Slot *pSVar1;
  long *plVar2;
  
  while (pSVar1 = (Slot *)FUN_051b54ac(*(undefined8 *)(this + 0x90)),
        pSVar1 != (Slot *)(this + 0x88)) {
    plVar2 = *(long **)(pSVar1 + 0x10);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
      *(undefined8 *)(pSVar1 + 0x10) = 0;
    }
    FreeSlot(this,pSVar1,false);
  }
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::AllocSlot() */

void __thiscall Sexy::RtDbTable::AllocSlot(RtDbTable *this)

{
  uint uVar1;
  RtDbTable *this_00;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x20));
  if (this_00 == this + 0x18) {
    uVar1 = *(uint *)(this + 0x10);
    uVar2 = uVar1 >> 1;
    if (uVar2 < 0x100) {
      uVar2 = 0x100;
    }
    StrFormat("AllocSlot() count: %d",asStack_10,(ulong)uVar1);
    GrowSlotVector(this,uVar2 + uVar1,asStack_10);
    std::string::~string(asStack_10);
    this_00 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x20));
  }
  RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
            ((RtRingItem<Sexy::RtNameTable::Entry> *)this_00,(Entry *)(this + 0x50));
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + -1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Sexy::RtDbTable::GetObjectForId(Sexy::RtId const&) const */

long __thiscall Sexy::RtDbTable::GetObjectForId(RtDbTable *this,RtId *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x10);
    if ((lVar2 == 0) && ((*(uint *)(lVar1 + 0x1c) >> 0x1b & 1) != 0)) {
      Event1<Sexy::RtId_const&>::operator()((Event1<Sexy::RtId_const&> *)(this + 0x218),param_1);
      lVar2 = *(long *)(lVar1 + 0x10);
    }
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::MakeFileNameFromPackageNameOrFileName(std::string const&) */

void Sexy::RtDbTable::MakeFileNameFromPackageNameOrFileName(string *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *__s1;
  string *in_x1;
  string asStack_28 [8];
  string asStack_20 [8];
  string local_18 [8];
  string local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    GetFileDir(in_x1,true);
    GetFileName(in_x1,true);
    std::operator+(asStack_20,local_18);
    std::operator+(local_10,".rton");
    std::string::~string(local_10);
    std::string::~string(local_18);
    std::string::~string(asStack_20);
    uVar3 = FUN_05474e7c(asStack_28);
    uVar4 = FUN_05474eb0(asStack_28);
    local_18[0] = (string)0x5c;
    local_10[0] = (string)0x2f;
    std::replace<__gnu_cxx::__normal_iterator<char*,std::string>,char>
              (uVar3,uVar4,local_18,local_10);
    __s1 = (char *)FUN_0547429c(asStack_28);
    iVar2 = strncasecmp(__s1,"packages/",(long)DAT_06bbdae0);
    if (iVar2 != 0) {
      FUN_031f5e7c(local_10,"packages/",asStack_28);
      FUN_05474278(asStack_28,local_10);
      std::string::~string(local_10);
    }
    FUN_05474148();
    std::string::~string(asStack_28);
  }
  else {
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::MakePackageNameFromPackageNameOrFileName(std::string const&) */

void Sexy::RtDbTable::MakePackageNameFromPackageNameOrFileName(string *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *__s1;
  string *in_x1;
  size_t __n;
  size_t __n_00;
  string asStack_20 [8];
  string local_18 [8];
  string local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    GetFileDir(in_x1,true);
    GetFileName(in_x1,true);
    std::operator+(local_18,local_10);
    std::string::~string(local_10);
    std::string::~string(local_18);
    uVar3 = FUN_05474e7c(asStack_20);
    uVar4 = FUN_05474eb0(asStack_20);
    local_18[0] = (string)0x5c;
    local_10[0] = (string)0x2f;
    std::replace<__gnu_cxx::__normal_iterator<char*,std::string>,char>
              (uVar3,uVar4,local_18,local_10);
    __s1 = (char *)FUN_0547429c(asStack_20);
    __n_00 = (size_t)DAT_06bbdae0;
    __n = __n_00;
    iVar2 = strncasecmp(__s1,"packages/",__n_00);
    if (iVar2 == 0) {
      std::string::append(asStack_20,__s1 + __n_00,__n);
    }
    FUN_05474148();
    std::string::~string(asStack_20);
  }
  else {
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::ReleaseId(Sexy::RtId const&) */

void __thiscall Sexy::RtDbTable::ReleaseId(RtDbTable *this,RtId *param_1)

{
  map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
  *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;
  Slot *pSVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (Slot *)GetSlotForId((RtId *)this,SUB81(param_1,0));
  if (pSVar4 == (Slot *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(pSVar4 + 0x1c);
    uVar5 = 1;
    *(uint *)(pSVar4 + 0x1c) = iVar1 - 1U;
    if ((iVar1 - 1U & 0x3ffffff) == 0) {
      this_00 = (map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                 *)(this + 0x170);
      Event1<Sexy::RtId_const&>::operator()((Event1<Sexy::RtId_const&> *)(this + 0x1f8),param_1);
      uVar2 = *(uint *)(pSVar4 + 0x1c);
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + -1;
      *(undefined4 *)(pSVar4 + 0x1c) = 0;
      local_20 = std::
                 map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                 ::find(this_00,(Uid *)(pSVar4 + 0x20));
      local_18 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
      if (bVar3) {
        std::
        map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
        ::erase_abi_cxx11_(this_00,local_20);
      }
      ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
      *(undefined8 *)(pSVar4 + 0x20) = local_18;
      *(undefined4 *)(pSVar4 + 0x28) = local_10;
      *(int *)(pSVar4 + 0x18) = *(int *)(pSVar4 + 0x18) + 1;
      if (((uVar2 >> 0x1e & 1) == 0) && (*(long **)(pSVar4 + 0x10) != (long *)0x0)) {
        if ((uVar2 >> 0x1d & 1) == 0) {
          (**(code **)(**(long **)(pSVar4 + 0x10) + 0x28))();
          *(undefined8 *)(pSVar4 + 0x10) = 0;
        }
        else {
          *(undefined8 *)(pSVar4 + 0x10) = 0;
        }
      }
      FreeSlot(this,pSVar4,(bool)((byte)(uVar2 >> 0x1e) & 1));
      uVar5 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::GetIdForUid(Sexy::RtId::Uid const&) const */

void Sexy::RtDbTable::GetIdForUid(Uid *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Uid *in_x1;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *p_Var4;
  exception_ptr *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
             ::find((map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                     *)(param_1 + 0x170),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x170));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  p_Var4 = extraout_x1;
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    RtId::RtId((RtId *)&local_10,*(ulong *)(lVar3 + 0x10));
    lVar3 = GetSlotForId((RtId *)param_1,SUB81((RtId *)&local_10,0));
    if ((lVar3 != 0) && (cVar2 = RtId::Uid::operator==((Uid *)(lVar3 + 0x20),in_x1), cVar2 != '\0'))
    {
      FUN_051b5b78(*(undefined4 *)param_1,*(undefined8 *)(param_1 + 8),lVar3);
      RtId::~RtId((RtId *)&local_10);
      goto LAB_051b8bb4;
    }
    RtId::~RtId((RtId *)&local_10);
    p_Var4 = extraout_x1_00;
  }
  std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var4);
LAB_051b8bb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::GetIdForAlias(Sexy::RtName const&) const */

void Sexy::RtDbTable::GetIdForAlias(RtName *param_1)

{
  bool bVar1;
  RtName *in_x1;
  _func_void *extraout_x1;
  exception_ptr *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             ::find((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                     *)(param_1 + 0x1a0),in_x1);
  local_10 = FUN_051b8c34();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::__detail::_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
    operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *)
               &local_18);
    GetIdForUid((Uid *)param_1);
  }
  else {
    std::__exception_ptr::exception_ptr::exception_ptr(in_x8,extraout_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SerializeAllAliasesToRton(Sexy::RtSerialRtonWriter&, std::string const&) */

void __thiscall
Sexy::RtDbTable::SerializeAllAliasesToRton
          (RtDbTable *this,RtSerialRtonWriter *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  bool *pbVar3;
  bool abStack_30 [8];
  undefined8 local_28;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData((TGABagData *)&local_10,(TGABagData *)param_2);
  uVar2 = std::
          unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
          ::size((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                  *)(this + 0x1a0));
  RtSerialRtonWriter::BeginArray(param_1,(TGABagData *)&local_10,uVar2,0xfd);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  local_28 = std::
             unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             ::begin((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                      *)(this + 0x1a0));
  while( true ) {
    local_10 = FUN_051b8c94();
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,(char *)0x0);
    RtSerialRtonWriter::BeginObject(param_1,(RtSerialRtonKey *)&local_10);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"alias");
    std::__detail::_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
    operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *)
               &local_28);
    uVar2 = RtName::GetString();
    pbVar3 = abStack_30;
    FUN_05478178(aSStack_20,uVar2);
    WStringToString(aSStack_20,(wstring *)0x0,pbVar3);
    RtSerialRtonWriter::WriteString(param_1,(RtSerialRtonKey *)&local_10,asStack_18,true);
    std::string::~string(asStack_18);
    FUN_05476c50(aSStack_20);
    nop();
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"id");
    std::__detail::_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
    operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *)
               &local_28);
    GetIdForUid((Uid *)this);
    RtSerialRtonWriter::WriteRtId(param_1,(RtSerialRtonKey *)&local_10,(RtId *)asStack_18);
    RtId::~RtId((RtId *)asStack_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    RtSerialRtonWriter::EndObject(param_1);
    std::__detail::_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true>::
    operator++((_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true> *)&local_28
              );
  }
  RtSerialRtonWriter::EndArray(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SerializeRtIdAliasesToRton(Sexy::RtSerialRtonWriter&, Sexy::RtId const&,
   std::string const&) */

void __thiscall
Sexy::RtDbTable::SerializeRtIdAliasesToRton
          (RtDbTable *this,RtSerialRtonWriter *param_1,RtId *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  bool *pbVar6;
  int iVar7;
  bool abStack_30 [8];
  undefined8 local_28;
  Sexy aSStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = RtId::GetTableIndex(param_2);
  iVar4 = FUN_051b546c(*(undefined4 *)this);
  if (iVar3 == iVar4) {
    local_18 = std::
               unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
               ::begin((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                        *)(this + 0x1a0));
    while( true ) {
      local_10 = FUN_051b8c94();
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      std::__detail::_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
      operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *)
                 &local_18);
      GetIdForUid((Uid *)this);
      cVar2 = std::__exception_ptr::operator==((exception_ptr *)param_2,(exception_ptr *)&local_10);
      RtId::~RtId((RtId *)&local_10);
      if (cVar2 != '\0') {
        iVar7 = iVar7 + 1;
      }
      std::__detail::_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true>::
      operator++((_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true> *)
                 &local_18);
    }
    TGABagData::TGABagData((TGABagData *)&local_10,(TGABagData *)param_3);
    RtSerialRtonWriter::BeginArray(param_1,(RtId *)&local_10,iVar7,0xfd);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    if (iVar7 != 0) {
      local_28 = std::
                 unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                 ::begin((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                          *)(this + 0x1a0));
      while( true ) {
        local_10 = FUN_051b8c94();
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_10);
        if (!bVar1) break;
        std::__detail::_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
        ::operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *
                     )&local_28);
        GetIdForUid((Uid *)this);
        cVar2 = std::__exception_ptr::operator==
                          ((exception_ptr *)param_2,(exception_ptr *)&local_10);
        RtId::~RtId((RtId *)&local_10);
        if (cVar2 != '\0') {
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,(char *)0x0);
          RtSerialRtonWriter::BeginObject(param_1,(RtSerialRtonKey *)&local_10);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"alias");
          std::__detail::
          _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                    ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false> *
                     )&local_28);
          uVar5 = RtName::GetString();
          pbVar6 = abStack_30;
          FUN_05478178(aSStack_20,uVar5);
          WStringToString(aSStack_20,(wstring *)0x0,pbVar6);
          RtSerialRtonWriter::WriteString
                    (param_1,(RtSerialRtonKey *)&local_10,(string *)&local_18,true);
          std::string::~string((string *)&local_18);
          FUN_05476c50(aSStack_20);
          nop();
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_10,"id");
          RtSerialRtonWriter::WriteRtId(param_1,(RtSerialRtonKey *)&local_10,param_2);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
          RtSerialRtonWriter::EndObject(param_1);
        }
        std::__detail::_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true>::
        operator++((_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true> *)
                   &local_28);
      }
    }
    iVar7 = 1;
    RtSerialRtonWriter::EndArray(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::WriteRtonRtIdList(Sexy::RtSerialBuffer*) const */

void __thiscall Sexy::RtDbTable::WriteRtonRtIdList(RtDbTable *this,RtSerialBuffer *param_1)

{
  int iVar1;
  RtDbTable *pRVar2;
  int iVar3;
  RtId aRStack_b8 [8];
  RtSerialRtonKey aRStack_b0 [8];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  for (pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x58)); pRVar2 != this + 0x50;
      pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar2 + 8))) {
    iVar3 = iVar3 + 1;
  }
  RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,param_1);
  RtSerialRtonWriter::BeginDocumentObject(aRStack_a8);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"version");
  RtSerialRtonWriter::WriteInt32VarU(aRStack_a8,aRStack_b0,1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"table_index");
  iVar1 = FUN_051b546c(*(undefined4 *)this);
  RtSerialRtonWriter::WriteInt32(aRStack_a8,aRStack_b0,iVar1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,"ids");
  RtSerialRtonWriter::BeginArray(aRStack_a8,aRStack_b0,iVar3,0x83);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  for (pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x58)); pRVar2 != this + 0x50;
      pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar2 + 8))) {
    RtSerialRtonKey::RtSerialRtonKey(aRStack_b0,(char *)0x0);
    FUN_051b5b78(aRStack_b8,*(undefined4 *)this,*(undefined8 *)(this + 8),pRVar2);
    RtSerialRtonWriter::WriteRtId(aRStack_a8,aRStack_b0,aRStack_b8);
    RtId::~RtId(aRStack_b8);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_b0);
  }
  RtSerialRtonWriter::EndArray(aRStack_a8);
  RtSerialRtonWriter::EndDocumentObject(aRStack_a8);
  RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::Reset(bool) */

void __thiscall Sexy::RtDbTable::Reset(RtDbTable *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  RtDbTable *pRVar3;
  RtRingItem<Sexy::RtNameTable::Entry> *pRVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Event1<Sexy::RtDbTable_const&>::operator()((Event1<Sexy::RtDbTable_const&> *)(this + 0x238),this);
  if (param_1) {
    if (*(long *)(this + 8) != 0) {
      RunDeferredDeletions(this);
      for (pRVar4 = (RtRingItem<Sexy::RtNameTable::Entry> *)
                    FUN_051b54ac(*(undefined8 *)(this + 0x58));
          pRVar4 != (RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0x50);
          pRVar4 = (RtRingItem<Sexy::RtNameTable::Entry> *)FUN_051b54ac(*(undefined8 *)(pRVar4 + 8))
          ) {
        if (*(long **)(pRVar4 + 0x10) != (long *)0x0) {
          if ((*(uint *)(pRVar4 + 0x1c) >> 0x1d & 1) == 0) {
            (**(code **)(**(long **)(pRVar4 + 0x10) + 0x28))();
          }
          *(undefined8 *)(pRVar4 + 0x10) = 0;
          ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
          *(undefined8 *)(pRVar4 + 0x20) = local_18;
          *(undefined4 *)(pRVar4 + 0x28) = local_10;
        }
      }
      RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink
                ((RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0x18));
      RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink
                ((RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0x50));
      RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink
                ((RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0x88));
      RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink
                ((RtRingItem<Sexy::RtNameTable::Entry> *)(this + 0xc0));
      free(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
    *(undefined4 *)(this + 0xf0) = 0;
    std::
    map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
    ::clear((map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
             *)(this + 0x170));
    std::
    unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
    ::clear((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             *)(this + 0x1a0));
    uVar1 = *(uint *)(this + 0x128);
    if (uVar1 != 0) {
      std::string::string((string *)&local_18,"Reset()");
      GrowSlotVector(this,uVar1,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
    }
  }
  else {
    pRVar3 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x58));
    while (this + 0x50 != pRVar3) {
      FUN_051b5b78((RtId *)&local_18,*(undefined4 *)this,*(undefined8 *)(this + 8),pRVar3);
      while (iVar2 = GetRefCountForId(this,(RtId *)&local_18), iVar2 != 0) {
        ReleaseId(this,(RtId *)&local_18);
      }
      RtId::~RtId((RtId *)&local_18);
      pRVar3 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(this + 0x58));
    }
    std::
    unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
    ::clear((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             *)(this + 0x1a0));
  }
  Event1<Sexy::RtDbTable_const&>::operator()((Event1<Sexy::RtDbTable_const&> *)(this + 600),this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::AllocId(Sexy::RtObject*, Sexy::RtDbTable::EObjectDeletionMode, bool,
   Sexy::RtId::Uid*) */

void Sexy::RtDbTable::AllocId
               (exception_ptr *param_1_00,RtDbTable *param_1,undefined8 param_3,undefined8 param_4,
               char param_5,undefined8 *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = AllocSlot(param_1);
  uVar1 = *(int *)(lVar2 + 0x1c) + 1;
  if (param_5 == '\0') {
    *(uint *)(lVar2 + 0x1c) = uVar1 | 0x80000000;
  }
  else {
    *(uint *)(lVar2 + 0x1c) = uVar1 | 0x90000000;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  SetSlotObjectDeletionMode(param_1,lVar2,param_4);
  FUN_051b5b78(param_1_00,*(undefined4 *)param_1,*(undefined8 *)(param_1 + 8),lVar2);
  if (param_6 == (undefined8 *)0x0) {
    RtId::Uid::Uid((Uid *)&local_18,(RtId *)param_1_00);
    *(undefined8 *)(lVar2 + 0x20) = local_18;
    *(undefined4 *)(lVar2 + 0x28) = local_10;
  }
  else {
    *(undefined8 *)(lVar2 + 0x20) = *param_6;
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_6 + 1);
  }
  puVar3 = (undefined8 *)
           std::
           map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
           ::operator[]((map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                         *)(param_1 + 0x170),(Uid *)(lVar2 + 0x20));
  uVar4 = std::__exception_ptr::exception_ptr::_M_get(param_1_00);
  *puVar3 = uVar4;
  Event1<Sexy::RtId_const&>::operator()
            ((Event1<Sexy::RtId_const&> *)(param_1 + 0x1d8),(RtId *)param_1_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SetIdForAlias(Sexy::RtName const&, Sexy::RtId const&) */

void __thiscall Sexy::RtDbTable::SetIdForAlias(RtDbTable *this,RtName *param_1,RtId *param_2)

{
  unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
             ::find(this_00,param_1);
  local_10 = FUN_051b8c94();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::
    unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
    ::erase(this_00,local_18);
  }
  uVar4 = 1;
  lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  if (lVar2 != 0) {
    lVar2 = GetSlotForId((RtId *)this,SUB81(param_2,0));
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)
               std::
               unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
               ::operator[](this_00,param_1);
      *puVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar2 + 0x28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::Sort(Sexy::Delegate2wRet<int, Sexy::RtId const&, Sexy::RtId const&> const&) */

void __thiscall Sexy::RtDbTable::Sort(RtDbTable *this,Delegate2wRet *param_1)

{
  long lVar1;
  long *plVar2;
  void *__base;
  RtRingItem<Sexy::RtDbTable::Slot> *this_00;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10) != 0) {
    lVar5 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    std::vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>>::reserve
              ((vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>> *)local_20,
               (ulong)*(uint *)(this + 0x10));
    std::vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>>::resize
              ((vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>> *)local_20,
               (ulong)*(uint *)(this + 0x10));
    uVar4 = *(uint *)(this + 0x10);
    lVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = lVar3 + 1;
        plVar2 = (long *)FUN_051b54cc(local_20[0],lVar3);
        *plVar2 = *(long *)(this + 8) + lVar5;
        lVar5 = lVar5 + 0x30;
        lVar3 = lVar1;
      } while ((uint)lVar1 < uVar4);
    }
    Delegate1wRet<bool,SexyURL_const&>::operator=
              ((Delegate1wRet<bool,SexyURL_const&> *)SlotCompare::sSortCurDelegate,
               (Delegate1wRet *)param_1);
    SlotCompare::sSortCurTable = this;
    __base = (void *)FUN_051b54cc(local_20[0],0);
    qsort(__base,(ulong)*(uint *)(this + 0x10),8,SlotCompare::Func);
    SlotCompare::sSortCurTable = (RtDbTable *)0x0;
    plVar2 = (long *)FUN_051b54cc(local_20[0],0);
    if ((*(int *)(this + 0x10) != 0) &&
       (this_00 = (RtRingItem<Sexy::RtDbTable::Slot> *)*plVar2, *(int *)(this_00 + 0x1c) < 0)) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 1;
        RtRingItem<Sexy::RtDbTable::Slot>::RingLinkBefore(this_00,(Slot *)(this + 0x50));
        if (*(uint *)(this + 0x10) <= uVar4) break;
        this_00 = (RtRingItem<Sexy::RtDbTable::Slot> *)*plVar2;
      } while (*(int *)(this_00 + 0x1c) < 0);
    }
    std::vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>>::~vector
              ((vector<Sexy::RtDbTable::Slot*,std::allocator<Sexy::RtDbTable::Slot*>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::Iterate(Sexy::Delegate1wRet<bool, Sexy::RtId const&> const&,
   Sexy::Delegate1<Sexy::RtId const&> const&, Sexy::RtDbTable::IteratorStorage*) */

void __thiscall
Sexy::RtDbTable::Iterate
          (RtDbTable *this,Delegate1wRet *param_1,Delegate1 *param_2,IteratorStorage *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int extraout_w1;
  int extraout_w1_00;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == (IteratorStorage *)0x0) {
    param_3 = (IteratorStorage *)GetSharedIteratorStorage(this);
  }
  Iterator::Iterator(aIStack_28,this,param_3);
  while (bVar1 = Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Iterator::operator*(aIStack_28);
    cVar2 = Delegate1wRet<bool,SexyURL_const&>::operator()
                      ((Delegate1wRet<bool,SexyURL_const&> *)param_1,(SexyURL *)aRStack_30);
    RtId::~RtId(aRStack_30);
    iVar3 = extraout_w1;
    if (cVar2 != '\0') {
      Iterator::operator*(aIStack_28);
      Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)param_2,(SexyURL *)aRStack_30);
      RtId::~RtId(aRStack_30);
      iVar3 = extraout_w1_00;
    }
    Iterator::operator++(aIStack_28,iVar3);
  }
  Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::Iterate(Sexy::Delegate1<Sexy::RtId const&> const&,
   Sexy::RtDbTable::IteratorStorage*) */

void __thiscall
Sexy::RtDbTable::Iterate(RtDbTable *this,Delegate1 *param_1,IteratorStorage *param_2)

{
  bool bVar1;
  int extraout_w1;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (IteratorStorage *)0x0) {
    param_2 = (IteratorStorage *)GetSharedIteratorStorage(this);
  }
  Iterator::Iterator(aIStack_28,this,param_2);
  while (bVar1 = Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Iterator::operator*(aIStack_28);
    Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)param_1,(SexyURL *)aRStack_30);
    RtId::~RtId(aRStack_30);
    Iterator::operator++(aIStack_28,extraout_w1);
  }
  Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::RtDbTable(unsigned int, Sexy::RtDbTable::TableOptions const*) */

void __thiscall Sexy::RtDbTable::RtDbTable(RtDbTable *this,uint param_1,TableOptions *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  long lVar4;
  undefined4 *puVar5;
  string *extraout_x1;
  wstring awStack_90 [8];
  string asStack_88 [8];
  undefined4 local_80 [4];
  TableOptions aTStack_70 [40];
  char acStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  Slot::Slot((Slot *)(this + 0x18));
  Slot::Slot((Slot *)(this + 0x50));
  Slot::Slot((Slot *)(this + 0x88));
  Slot::Slot((Slot *)(this + 0xc0));
  IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0xf8));
  TableOptions::TableOptions((TableOptions *)(this + 0x128));
  RtName::RtName((RtName *)(this + 0x150));
  FUN_05476574(this + 0x160);
  this[0x168] = (RtDbTable)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x170));
  std::
  unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
  ::unordered_map((ulong)(this + 0x1a0),(hash *)0xa,(equal_to *)asStack_88,(allocator *)local_80);
  Event1<Sexy::RtId_const&>::Event1((Event1<Sexy::RtId_const&> *)(this + 0x1d8));
  Event1<Sexy::RtId_const&>::Event1((Event1<Sexy::RtId_const&> *)(this + 0x1f8));
  Event1<Sexy::RtId_const&>::Event1((Event1<Sexy::RtId_const&> *)(this + 0x218));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x238));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 600));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x278));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x298));
  TableOptions::TableOptions(aTStack_70);
  if (param_2 == (TableOptions *)0x0) {
    param_2 = aTStack_70;
  }
  TableOptions::operator=((TableOptions *)(this + 0x128),param_2);
  cVar1 = FUN_051b542c(*(undefined4 *)(this + 0x130));
  if (cVar1 != '\0') {
    sprintf(acStack_48,"%d",(ulong)*(uint *)this);
    std::string::string(asStack_88,acStack_48);
    StringToWString((Sexy *)asStack_88,extraout_x1);
    RtName::RtName((RtName *)local_80,awStack_90);
    FUN_051b53bc(this + 0x130,(RtName *)local_80);
    RtName::~RtName((RtName *)local_80);
    FUN_05476c50(awStack_90);
    std::string::~string(asStack_88);
    nop();
  }
  FUN_05478178(asStack_88,&DAT_0574e948,(RtName *)local_80);
  nop();
  uVar2 = RtName::GetString();
  FUN_05477888(asStack_88,uVar2);
  pwVar3 = (wchar_t *)FUN_054766ec(asStack_88);
  RtName::RtName((RtName *)local_80,pwVar3);
  FUN_051b53bc(this + 0x130,(RtName *)local_80);
  RtName::~RtName((RtName *)local_80);
  lVar4 = RtDb::GetDb();
  local_80[0] = FUN_051b53b8(*(undefined4 *)(this + 0x130));
  puVar5 = (undefined4 *)
           std::
           unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           ::operator[]((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                         *)(lVar4 + 0x38),(uint *)local_80);
  *puVar5 = *(undefined4 *)this;
  Reset(this,true);
  FUN_05476c50(asStack_88);
  TableOptions::~TableOptions(aTStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SetCurrentPackageName(Sexy::RtName const&) */

void __thiscall Sexy::RtDbTable::SetCurrentPackageName(RtDbTable *this,RtName *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  Sexy *pSVar8;
  bool *pbVar9;
  bool abStack_50 [8];
  Sexy aSStack_48 [8];
  Sexy aSStack_40 [8];
  string asStack_38 [8];
  undefined8 local_30;
  undefined4 local_28 [4];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtName::RtName((RtName *)local_28,param_1);
  uVar4 = local_28[0];
  cVar2 = FUN_051b5420(local_28[0]);
  if (cVar2 != '\0') {
    pbVar9 = abStack_50;
    uVar5 = RtName::GetString();
    FUN_05478178(aSStack_48,uVar5);
    WStringToString(aSStack_48,(wstring *)0x0,pbVar9);
    MakePackageNameFromPackageNameOrFileName((string *)this);
    StringToWString((Sexy *)asStack_38,extraout_x1_00);
    RtName::RtName((RtName *)local_18,(wstring *)&local_30);
    FUN_051b53bc((RtName *)local_28,(RtName *)local_18);
    RtName::~RtName((RtName *)local_18);
    FUN_05476c50((wstring *)&local_30);
    std::string::~string(asStack_38);
    std::string::~string((string *)aSStack_40);
    FUN_05476c50(aSStack_48);
    nop();
    uVar4 = local_28[0];
  }
  uVar1 = *(undefined4 *)(this + 0x150);
  cVar2 = FUN_051b5414(uVar1,uVar4);
  if (cVar2 == '\0') {
    cVar2 = FUN_051b5420(uVar1);
    if (cVar2 != '\0') {
      lVar6 = RtDb::GetDb();
      uVar4 = FUN_051b53b8(*(undefined4 *)(this + 0x150));
      local_18[0] = CONCAT44(local_18[0]._4_4_,uVar4);
      local_30 = std::
                 unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 ::find((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                         *)(lVar6 + 0x38),(uint *)local_18);
      RtDb::GetDb();
      local_18[0] = FUN_051b8104();
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
      if (bVar3) {
        lVar6 = RtDb::GetDb();
        std::
        unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase(lVar6 + 0x38,local_30);
      }
    }
    pSVar8 = aSStack_48;
    FUN_051b53bc(this + 0x150,(RtName *)local_28);
    uVar5 = RtName::GetString();
    FUN_05478178(aSStack_40,uVar5);
    WStringToString(aSStack_40,(wstring *)0x0,(bool *)pSVar8);
    MakeFileNameFromPackageNameOrFileName((string *)this);
    StringToWString((Sexy *)&local_30,extraout_x1);
    FUN_054766c8(this + 0x160,local_18);
    FUN_05476c50(local_18);
    std::string::~string((string *)&local_30);
    std::string::~string(asStack_38);
    FUN_05476c50(aSStack_40);
    nop();
    cVar2 = FUN_051b5420(*(undefined4 *)(this + 0x150));
    if (cVar2 != '\0') {
      lVar6 = RtDb::GetDb();
      uVar4 = FUN_051b53b8(*(undefined4 *)(this + 0x150));
      local_18[0] = CONCAT44(local_18[0]._4_4_,uVar4);
      puVar7 = (undefined4 *)
               std::
               unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
               ::operator[]((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                             *)(lVar6 + 0x38),(uint *)local_18);
      *puVar7 = *(undefined4 *)this;
    }
  }
  RtName::~RtName((RtName *)local_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::~RtDbTable() */

void __thiscall Sexy::RtDbTable::~RtDbTable(RtDbTable *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtDb *this_00;
  long lVar4;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  *(undefined4 *)(this + 0x128) = 0;
  local_8 = ___stack_chk_guard;
  Reset(this,true);
  cVar1 = FUN_051b5420(*(undefined4 *)(this + 0x130));
  if (cVar1 != '\0') {
    lVar4 = RtDb::GetDb();
    uVar3 = FUN_051b53b8(*(undefined4 *)(this + 0x130));
    local_18[0] = CONCAT44(local_18[0]._4_4_,uVar3);
    local_20 = std::
               unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
               ::find((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                       *)(lVar4 + 0x38),(uint *)local_18);
    RtDb::GetDb();
    local_18[0] = FUN_051b8104();
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)local_18);
    if (bVar2) {
      lVar4 = RtDb::GetDb();
      std::
      unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::erase(lVar4 + 0x38,local_20);
    }
  }
  RtName::RtName((RtName *)local_18);
  SetCurrentPackageName(this,(RtName *)local_18);
  RtName::~RtName((RtName *)local_18);
  this_00 = (RtDb *)RtDb::GetDb();
  RtDb::InternalRemoveTable(this_00,*(uint *)this);
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x298));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x278));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 600));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x238));
  Event1<Sexy::RtId_const&>::~Event1((Event1<Sexy::RtId_const&> *)(this + 0x218));
  Event1<Sexy::RtId_const&>::~Event1((Event1<Sexy::RtId_const&> *)(this + 0x1f8));
  Event1<Sexy::RtId_const&>::~Event1((Event1<Sexy::RtId_const&> *)(this + 0x1d8));
  std::
  unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
  ::~unordered_map((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                    *)(this + 0x1a0));
  std::
  map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
  ::~map((map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
          *)(this + 0x170));
  FUN_05476c50(this + 0x160);
  RtName::~RtName((RtName *)(this + 0x150));
  TableOptions::~TableOptions((TableOptions *)(this + 0x128));
  IteratorStorage::~IteratorStorage((IteratorStorage *)(this + 0xf8));
  Slot::~Slot((Slot *)(this + 0xc0));
  Slot::~Slot((Slot *)(this + 0x88));
  Slot::~Slot((Slot *)(this + 0x50));
  Slot::~Slot((Slot *)(this + 0x18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SerializeTableFirstPass(Sexy::RtSerialRtonSync*, std::vector<Sexy::RtObject*,
   std::allocator<Sexy::RtObject*> >&, std::string const&) */

void Sexy::RtDbTable::SerializeTableFirstPass
               (RtSerialRtonSync *param_1,vector *param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtSerialRtonReader *this;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  wchar_t wVar10;
  uint uVar11;
  undefined1 auVar12 [12];
  wchar_t local_60;
  uint local_5c;
  string asStack_58 [8];
  exception_ptr aeStack_50 [8];
  wstring awStack_48 [8];
  undefined8 local_40;
  undefined1 local_38 [12];
  RtSerialRtonKey aRStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_051b5484(param_2[0x10]);
  if (cVar1 == '\0') {
    this = (RtSerialRtonReader *)FUN_051b5490(*(undefined8 *)param_2);
    RtSerialRtonReader::BeginDocumentObject(this);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_18,"version");
    iVar3 = RtSerialRtonReader::ReadInt32(this,(RtSerialRtonKey *)&local_18,0);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
    if (iVar3 == 1) {
      wVar10 = L'\0';
      Reset((RtDbTable *)param_1,false);
      Event1<Sexy::RtDbTable_const&>::operator()
                ((Event1<Sexy::RtDbTable_const&> *)(param_1 + 0x278),(RtDbTable *)param_1);
      RtId::StaticSetImplicitTableIndex(*(uint *)param_1);
      local_60 = wVar10;
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_18,"objects");
      cVar1 = RtSerialRtonReader::BeginArray(this,(RtSerialRtonKey *)&local_18,(uint *)&local_60);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
      if (cVar1 != '\0') {
        std::vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>>::reserve
                  ((vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>> *)param_3,
                   (ulong)(uint)local_60);
        std::vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>>::resize
                  ((vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>> *)param_3,
                   (ulong)(uint)local_60);
        if (local_60 != L'\0') {
          do {
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_18,(char *)0x0);
            RtSerialRtonReader::BeginObject((RtSerialRtonKey *)this);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
            ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)local_38);
            RtSerialRtonKey::RtSerialRtonKey(aRStack_28,"uid");
            std::string::string((string *)&local_18,"");
            RtSerialRtonReader::ReadString((RtSerialRtonKey *)this,(string *)aRStack_28);
            std::string::~string((string *)&local_18);
            nop();
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
            cVar1 = FUN_0547419c(asStack_58);
            if (cVar1 == '\0') {
              auVar12 = RtId::Uid::StaticParse(asStack_58);
            }
            else {
              SortedKern::SortedKern((SortedKern *)&local_18,wVar10,L'\x01',-1);
              auVar12._8_4_ = local_10;
              auVar12._0_8_ = local_18;
            }
            local_38 = auVar12;
            lVar4 = AllocSlot((RtDbTable *)param_1);
            iVar3 = *(int *)(param_1 + 0x80);
            *(uint *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1U | 0x90000000;
            *(int *)(param_1 + 0x80) = iVar3 + 1;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            SetSlotObjectDeletionMode((RtDbTable *)param_1,lVar4,0);
            FUN_051b5b78(aeStack_50,*(undefined4 *)param_1,*(undefined8 *)(param_1 + 8),lVar4);
            *(undefined1 (*) [12])(lVar4 + 0x20) = local_38;
            puVar5 = (undefined8 *)
                     std::
                     map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                     ::operator[]((map<Sexy::RtId::Uid,unsigned_long,std::less<Sexy::RtId::Uid>,std::allocator<std::pair<Sexy::RtId::Uid_const,unsigned_long>>>
                                   *)(param_1 + 0x170),(Uid *)(lVar4 + 0x20));
            uVar6 = std::__exception_ptr::exception_ptr::_M_get(aeStack_50);
            *puVar5 = uVar6;
            Event1<Sexy::RtId_const&>::operator()
                      ((Event1<Sexy::RtId_const&> *)(param_1 + 0x1d8),(RtId *)aeStack_50);
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_18,"objclass");
            pcVar7 = (char *)RtSerialRtonReader::ReadStringDirect((RtSerialRtonKey *)this);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
            if (pcVar7 == (char *)0x0) {
LAB_051bd690:
              ReleaseId((RtDbTable *)param_1,(RtId *)aeStack_50);
            }
            else {
              lVar8 = RtClass::StaticGetClassNamed(pcVar7);
              if (lVar8 == 0) goto LAB_051bd690;
              lVar8 = FUN_051b5454(*(undefined8 *)(lVar8 + 0x18));
              *(long *)(lVar4 + 0x10) = lVar8;
              if (lVar8 == 0) goto LAB_051bd690;
              plVar9 = (long *)FUN_051b54d4(*(undefined8 *)param_3,wVar10);
              *plVar9 = lVar8;
              local_5c = 0;
              RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_18,"aliases");
              cVar1 = RtSerialRtonReader::BeginArray(this,(RtSerialRtonKey *)&local_18,&local_5c);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
              if (cVar1 != '\0') {
                uVar11 = 0;
                if (local_5c != 0) {
                  do {
                    RtSerialRtonKey::RtSerialRtonKey(aRStack_28,(char *)0x0);
                    FUN_05478178((RtSerialRtonKey *)&local_18,&DAT_056f11a8,
                                 (rbtree_iterator *)&local_40);
                    RtSerialRtonReader::ReadWString((RtSerialRtonKey *)this,(wstring *)aRStack_28);
                    FUN_05476c50((RtSerialRtonKey *)&local_18);
                    nop();
                    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_28);
                    cVar1 = FUN_054765e8(awStack_48);
                    if (cVar1 == '\0') {
                      RtName::RtName((RtName *)aRStack_28,awStack_48);
                      local_40 = std::
                                 unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                                 ::find((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                                         *)(param_1 + 0x1a0),(RtName *)aRStack_28);
                      local_18 = FUN_051b8c94();
                      bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,
                                                (rbtree_iterator *)&local_18);
                      if (!bVar2) {
                        RtName::RtName((RtName *)&local_18,awStack_48);
                        puVar5 = (undefined8 *)
                                 std::
                                 unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                                 ::operator[]((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                                               *)(param_1 + 0x1a0),(RtName *)&local_18);
                        *puVar5 = *(undefined8 *)(lVar4 + 0x20);
                        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar4 + 0x28);
                        RtName::~RtName((RtName *)&local_18);
                      }
                      RtName::~RtName((RtName *)aRStack_28);
                    }
                    uVar11 = uVar11 + 1;
                    FUN_05476c50(awStack_48);
                  } while (uVar11 < local_5c);
                }
                RtSerialRtonReader::EndArray(this);
              }
            }
            wVar10 = wVar10 + L'\x01';
            RtId::~RtId((RtId *)aeStack_50);
            std::string::~string(asStack_58);
            RtSerialRtonReader::EndObject(this);
          } while ((uint)wVar10 < (uint)local_60);
        }
        RtSerialRtonReader::EndArray(this);
      }
      cVar1 = '\x01';
      RtId::StaticSetImplicitTableIndex(0xffffffff);
      RtSerialRtonReader::EndDocumentObject(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SerializeTableSecondPass(Sexy::RtSerialRtonSync*, std::vector<Sexy::RtObject*,
   std::allocator<Sexy::RtObject*> >&) */

void __thiscall
Sexy::RtDbTable::SerializeTableSecondPass(RtDbTable *this,RtSerialRtonSync *param_1,vector *param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  RtSerialRtonReader *this_00;
  undefined8 *puVar8;
  RtSerialRtonWriter *this_01;
  RtDbTable *pRVar9;
  long lVar10;
  char *pcVar11;
  RtName *pRVar12;
  int *piVar13;
  undefined8 uVar14;
  wstring *pwVar15;
  uint uVar16;
  long *plVar17;
  code *pcVar18;
  undefined1 auStack_68 [8];
  RtId aRStack_60 [8];
  undefined8 local_58;
  uint local_50 [2];
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = FUN_051b5480(param_1[0x10]);
  if (cVar5 == '\0') {
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    this_01 = (RtSerialRtonWriter *)FUN_051b5494(*(undefined8 *)(param_1 + 8));
    RtSerialRtonWriter::BeginDocumentObject(this_01);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,"version");
    RtSerialRtonWriter::WriteInt32(this_01,(RtSerialRtonKey *)&local_38,1);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
    uVar2 = *(undefined4 *)(this + 0x80);
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,"objects");
    RtSerialRtonWriter::BeginArray(this_01,(RtSerialRtonKey *)&local_38,uVar2,0xfd);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
    pRVar9 = (RtDbTable *)FUN_051b54b8(*(undefined8 *)(this + 0x50));
    if (this + 0x50 != pRVar9) {
      do {
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,(char *)0x0);
        RtSerialRtonWriter::BeginObject(this_01,(RtSerialRtonKey *)&local_38);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
        FUN_051b5b78(aRStack_60,*(undefined4 *)this,*(undefined8 *)(this + 8),pRVar9);
        uVar16 = *(uint *)(pRVar9 + 0x24);
        uVar3 = *(uint *)(pRVar9 + 0x20);
        uVar4 = *(uint *)(pRVar9 + 0x28);
        RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,"uid");
        StrFormat("%d.%d.%08x",(string *)local_48,(ulong)uVar16,(ulong)uVar3,(ulong)uVar4);
        RtSerialRtonWriter::WriteString
                  (this_01,(RtSerialRtonKey *)&local_38,(string *)local_48,false);
        std::string::~string((string *)local_48);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
        if (*(undefined8 **)(pRVar9 + 0x10) != (undefined8 *)0x0) {
          if ((*(uint *)(pRVar9 + 0x1c) >> 0x1c & 1) == 0) {
            Set8BytesTo0((RtSerialRtonKey *)&local_38);
            RtId::ToString(aRStack_60,(string *)&local_38,false);
            uVar14 = FUN_0547429c((RtSerialRtonKey *)&local_38);
            OutputDebugStrF((wchar_t *)
                            "RtDbTable::Serialize: Attempted to write non-standalone object %s, skipping...\n"
                            ,uVar14);
            std::string::~string((string *)&local_38);
          }
          else {
            lVar10 = (**(code **)**(undefined8 **)(pRVar9 + 0x10))();
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,"objclass");
            pcVar11 = (char *)FUN_051b5450(*(undefined8 *)(lVar10 + 8));
            RtSerialRtonWriter::WriteString(this_01,(RtSerialRtonKey *)&local_38,pcVar11,true);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
            plVar17 = *(long **)(pRVar9 + 0x10);
            pcVar18 = *(code **)(*plVar17 + 0x30);
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_48,"objdata");
            RtSerializeContext::RtSerializeContext
                      ((RtSerializeContext *)&local_38,param_1,(string *)local_48,0);
            (*pcVar18)(plVar17,(RtSerialRtonKey *)&local_38);
            RtSerializeContext::~RtSerializeContext((RtSerializeContext *)&local_38);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
            local_58 = std::
                       unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                       ::begin((unordered_map<Sexy::RtName,Sexy::RtId::Uid,std::hash<Sexy::RtName>,std::equal_to<Sexy::RtName>,std::allocator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>>>
                                *)(this + 0x1a0));
            while( true ) {
              local_48[0] = FUN_051b8c94();
              bVar6 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_48);
              if (!bVar6) break;
              pRVar12 = (RtName *)
                        std::__detail::
                        _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        ::operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                      *)&local_58);
              cVar5 = RtId::Uid::operator!=((Uid *)(pRVar12 + 0x10),(Uid *)(pRVar9 + 0x20));
              if (cVar5 == '\0') {
                RtName::RtName((RtName *)local_48,pRVar12);
                piVar13 = (int *)RtName::GetString();
                if ((piVar13 == (int *)0x0) || (*piVar13 != 0x24)) {
                  FUN_05478178((wstring *)local_50,piVar13,auStack_68);
                  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38,
                             (wstring *)local_50);
                  FUN_05476c50((wstring *)local_50);
                  nop();
                  RtName::~RtName((RtName *)local_48);
                }
                else {
                  RtName::~RtName((RtName *)local_48);
                }
              }
              std::__detail::
              _Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true>::operator++
                        ((_Node_iterator<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,false,true> *
                         )&local_58);
            }
            cVar5 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                              ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38);
            if (cVar5 == '\0') {
              iVar7 = FUN_051b54dc(local_38,local_30);
              RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_48,"aliases");
              RtSerialRtonWriter::BeginArray(this_01,(string *)local_48,iVar7,0xfd);
              std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                        ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
              lVar10 = 0;
              if (0 < iVar7) {
                do {
                  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_48,(char *)0x0);
                  lVar1 = lVar10 + 1;
                  pwVar15 = (wstring *)FUN_051b54e8(local_38,lVar10);
                  RtSerialRtonWriter::WriteUTF8String
                            (this_01,(RtSerialRtonKey *)local_48,pwVar15,false);
                  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
                  lVar10 = lVar1;
                } while ((int)lVar1 < iVar7);
              }
              RtSerialRtonWriter::EndArray(this_01);
            }
            std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                      ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38);
          }
        }
        RtSerialRtonWriter::EndObject(this_01);
        RtId::~RtId(aRStack_60);
        pRVar9 = (RtDbTable *)FUN_051b54b8(*(undefined8 *)pRVar9);
      } while (this + 0x50 != pRVar9);
    }
    RtSerialRtonWriter::EndArray(this_01);
    RtSerialRtonWriter::EndDocumentObject(this_01);
    RtId::StaticSetImplicitTableIndex(0xffffffff);
  }
  else {
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    this_00 = (RtSerialRtonReader *)FUN_051b5490(*(undefined8 *)param_1);
    RtSerialRtonReader::BeginDocumentObject(this_00);
    local_50[0] = 0;
    RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,"objects");
    cVar5 = RtSerialRtonReader::BeginArray(this_00,(RtSerialRtonKey *)&local_38,local_50);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
    if (cVar5 != '\0') {
      uVar16 = 0;
      if (local_50[0] != 0) {
        do {
          RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_38,(char *)0x0);
          RtSerialRtonReader::BeginObject((RtSerialRtonKey *)this_00);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_38);
          puVar8 = (undefined8 *)FUN_051b54d4(*(undefined8 *)param_2,uVar16);
          plVar17 = (long *)*puVar8;
          if (plVar17 != (long *)0x0) {
            pcVar18 = *(code **)(*plVar17 + 0x30);
            RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)local_48,"objdata");
            RtSerializeContext::RtSerializeContext
                      ((RtSerializeContext *)&local_38,param_1,(RtSerialRtonKey *)local_48,0);
            (*pcVar18)(plVar17,(RtSerialRtonKey *)&local_38);
            RtSerializeContext::~RtSerializeContext((RtSerializeContext *)&local_38);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)local_48);
          }
          uVar16 = uVar16 + 1;
          RtSerialRtonReader::EndObject(this_00);
        } while (uVar16 < local_50[0]);
      }
      RtSerialRtonReader::EndArray(this_00);
    }
    RtId::StaticSetImplicitTableIndex(0xffffffff);
    RtSerialRtonReader::EndDocumentObject(this_00);
    Event1<Sexy::RtDbTable_const&>::operator()
              ((Event1<Sexy::RtDbTable_const&> *)(this + 0x298),this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SerializeTable(Sexy::RtSerialRtonSync*, std::string const&) */

void Sexy::RtDbTable::SerializeTable(RtSerialRtonSync *param_1,string *param_2)

{
  char cVar1;
  undefined1 uVar2;
  CRefSymbolDb *this;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RunDeferredDeletions((RtDbTable *)param_1);
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  Reflection::CRefSymbolDb::EnsureFullyLoaded(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::string::string(asStack_28,"");
  cVar1 = SerializeTableFirstPass(param_1,(vector *)param_2,(string *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = SerializeTableSecondPass
                      ((RtDbTable *)param_1,(RtSerialRtonSync *)param_2,(vector *)avStack_20);
  }
  std::vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>>::~vector
            ((vector<Sexy::RtObject*,std::allocator<Sexy::RtObject*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::LoadPackage(std::string const&, bool) */

void __thiscall Sexy::RtDbTable::LoadPackage(RtDbTable *this,string *param_1,bool param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uchar *puVar4;
  string *extraout_x1;
  bool bVar5;
  bool *pbVar6;
  Buffer aBStack_b0 [8];
  Sexy aSStack_a8 [24];
  wstring awStack_90 [40];
  Buffer aBStack_68 [48];
  RtName aRStack_38 [48];
  long local_8;
  
  pbVar6 = (bool *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  Buffer::Buffer(aBStack_68);
  cVar1 = FUN_0547419c(param_1);
  bVar5 = SUB81(aBStack_68,0);
  if (cVar1 == '\0') {
    MakeFileNameFromPackageNameOrFileName((string *)this);
    cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,aBStack_b0,bVar5);
    if (cVar1 == '\0') {
      std::string::~string((string *)aBStack_b0);
      uVar2 = 0;
      goto LAB_051bf918;
    }
    MakePackageNameFromPackageNameOrFileName((string *)this);
    StringToWString(aSStack_a8,extraout_x1);
    RtName::RtName(aRStack_38,awStack_90);
    FUN_05476c50(awStack_90);
    SetCurrentPackageName(this,aRStack_38);
    RtName::~RtName(aRStack_38);
    std::string::~string((string *)aSStack_a8);
    std::string::~string((string *)aBStack_b0);
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    Buffer::Buffer((Buffer *)aRStack_38);
    if (!param_2) goto LAB_051bf7d0;
LAB_051bf864:
    (**(code **)(**(long **)(gSexyAppBase + 0x68) + 0x20))
              (*(long **)(gSexyAppBase + 0x68),aBStack_68,(Buffer *)aRStack_38);
    puVar4 = (uchar *)Buffer::GetDataPtr((Buffer *)aRStack_38);
    uVar3 = Buffer::GetDataLen((Buffer *)aRStack_38);
  }
  else {
    WStringToString((Sexy *)(this + 0x160),(wstring *)0x0,pbVar6);
    MakeFileNameFromPackageNameOrFileName((string *)this);
    std::string::~string((string *)aRStack_38);
    cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)awStack_90,bVar5);
    if (cVar1 == '\0') {
      std::string::~string((string *)awStack_90);
      uVar2 = 0;
      goto LAB_051bf918;
    }
    std::string::~string((string *)awStack_90);
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    Buffer::Buffer((Buffer *)aRStack_38);
    if (param_2) goto LAB_051bf864;
LAB_051bf7d0:
    puVar4 = (uchar *)Buffer::GetDataPtr(aBStack_68);
    uVar3 = Buffer::GetDataLen(aBStack_68);
  }
  RtSerialRtonReader::RtSerialRtonReader((RtSerialRtonReader *)awStack_90,puVar4,uVar3);
  RtId::StaticSetImplicitTableIndex(0xffffffff);
  RtSerialRtonSync::RtSerialRtonSync
            ((RtSerialRtonSync *)aSStack_a8,(RtSerialRtonReader *)awStack_90);
  std::string::string((string *)aBStack_b0,"");
  uVar2 = SerializeTable((RtSerialRtonSync *)this,(string *)aSStack_a8);
  std::string::~string((string *)aBStack_b0);
  nop();
  WaveProgressMeter::setFillPercentage((WaveProgressMeter *)this,0);
  RtSerialRtonReader::~RtSerialRtonReader((RtSerialRtonReader *)awStack_90);
  Buffer::~Buffer((Buffer *)aRStack_38);
LAB_051bf918:
  Buffer::~Buffer(aBStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::RefreshPackage(std::string const&, bool) */

void __thiscall Sexy::RtDbTable::RefreshPackage(RtDbTable *this,string *param_1,bool param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uchar *puVar4;
  string *extraout_x1;
  bool bVar5;
  bool *pbVar6;
  Buffer aBStack_b0 [8];
  Sexy aSStack_a8 [24];
  wstring awStack_90 [40];
  Buffer aBStack_68 [48];
  RtName aRStack_38 [48];
  long local_8;
  
  pbVar6 = (bool *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  Buffer::Buffer(aBStack_68);
  cVar1 = FUN_0547419c(param_1);
  bVar5 = SUB81(aBStack_68,0);
  if (cVar1 == '\0') {
    FUN_05475d88(aBStack_b0,param_1);
    cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,aBStack_b0,bVar5);
    if (cVar1 == '\0') {
      std::string::~string((string *)aBStack_b0);
      uVar2 = 0;
      goto LAB_051bfbb0;
    }
    MakePackageNameFromPackageNameOrFileName((string *)this);
    StringToWString(aSStack_a8,extraout_x1);
    RtName::RtName(aRStack_38,awStack_90);
    FUN_05476c50(awStack_90);
    SetCurrentPackageName(this,aRStack_38);
    RtName::~RtName(aRStack_38);
    std::string::~string((string *)aSStack_a8);
    std::string::~string((string *)aBStack_b0);
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    Buffer::Buffer((Buffer *)aRStack_38);
    if (!param_2) goto LAB_051bfa68;
LAB_051bfafc:
    (**(code **)(**(long **)(gSexyAppBase + 0x68) + 0x20))
              (*(long **)(gSexyAppBase + 0x68),aBStack_68,(Buffer *)aRStack_38);
    puVar4 = (uchar *)Buffer::GetDataPtr((Buffer *)aRStack_38);
    uVar3 = Buffer::GetDataLen((Buffer *)aRStack_38);
  }
  else {
    WStringToString((Sexy *)(this + 0x160),(wstring *)0x0,pbVar6);
    MakeFileNameFromPackageNameOrFileName((string *)this);
    std::string::~string((string *)aRStack_38);
    cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)awStack_90,bVar5);
    if (cVar1 == '\0') {
      std::string::~string((string *)awStack_90);
      uVar2 = 0;
      goto LAB_051bfbb0;
    }
    std::string::~string((string *)awStack_90);
    RtId::StaticSetImplicitTableIndex(*(uint *)this);
    Buffer::Buffer((Buffer *)aRStack_38);
    if (param_2) goto LAB_051bfafc;
LAB_051bfa68:
    puVar4 = (uchar *)Buffer::GetDataPtr(aBStack_68);
    uVar3 = Buffer::GetDataLen(aBStack_68);
  }
  RtSerialRtonReader::RtSerialRtonReader((RtSerialRtonReader *)awStack_90,puVar4,uVar3);
  RtId::StaticSetImplicitTableIndex(0xffffffff);
  RtSerialRtonSync::RtSerialRtonSync
            ((RtSerialRtonSync *)aSStack_a8,(RtSerialRtonReader *)awStack_90);
  std::string::string((string *)aBStack_b0,"");
  uVar2 = SerializeTable((RtSerialRtonSync *)this,(string *)aSStack_a8);
  std::string::~string((string *)aBStack_b0);
  nop();
  WaveProgressMeter::setFillPercentage((WaveProgressMeter *)this,0);
  RtSerialRtonReader::~RtSerialRtonReader((RtSerialRtonReader *)awStack_90);
  Buffer::~Buffer((Buffer *)aRStack_38);
LAB_051bfbb0:
  Buffer::~Buffer(aBStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::saveToFile(Sexy::RtSerialRtonWriter&, std::string const&, bool, bool) */

void __thiscall
Sexy::RtDbTable::saveToFile
          (RtDbTable *this,RtSerialRtonWriter *param_1,string *param_2,bool param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  RtSerialBuffer *pRVar4;
  uchar *puVar5;
  string asStack_70 [8];
  Buffer aBStack_68 [48];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_70);
  if (param_3) {
    pRVar4 = (RtSerialBuffer *)FUN_051b547c(*(undefined8 *)param_1);
    puVar5 = (uchar *)RtSerialBuffer::GetDataPtr(pRVar4);
    pRVar4 = (RtSerialBuffer *)FUN_051b547c(*(undefined8 *)param_1);
    uVar1 = RtSerialBuffer::GetDataSize(pRVar4);
    RtSerial::RtonToJson(puVar5,uVar1,asStack_70,true);
    puVar5 = (uchar *)FUN_0547429c(asStack_70);
    iVar2 = FUN_05474178(asStack_70);
    Buffer::Buffer(aBStack_68);
  }
  else {
    pRVar4 = (RtSerialBuffer *)FUN_051b547c(*(undefined8 *)param_1);
    puVar5 = (uchar *)RtSerialBuffer::GetDataPtr(pRVar4);
    pRVar4 = (RtSerialBuffer *)FUN_051b547c(*(undefined8 *)param_1);
    iVar2 = RtSerialBuffer::GetDataSize(pRVar4);
    Buffer::Buffer(aBStack_68);
  }
  if (param_4) {
    Buffer::Buffer(aBStack_38);
    Buffer::SetData(aBStack_38,puVar5,iVar2);
    (**(code **)(**(long **)(gSexyAppBase + 0x68) + 0x18))
              (*(long **)(gSexyAppBase + 0x68),aBStack_38,aBStack_68);
    puVar5 = (uchar *)Buffer::GetDataPtr(aBStack_68);
    Buffer::GetDataLen(aBStack_68);
    Buffer::~Buffer(aBStack_38);
  }
  uVar3 = SexyAppBase::WriteBytesToFile(gSexyAppBase,param_2,(ulong)puVar5);
  Buffer::~Buffer(aBStack_68);
  std::string::~string(asStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SavePackage(Sexy::RtSerialRtonWriter&, std::string const&, bool, bool) */

void __thiscall
Sexy::RtDbTable::SavePackage
          (RtDbTable *this,RtSerialRtonWriter *param_1,string *param_2,bool param_3,bool param_4)

{
  char cVar1;
  char cVar2;
  string *extraout_x1;
  string *psVar3;
  wstring awStack_38 [8];
  string asStack_30 [16];
  RtSerialRtonSync aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtSerialRtonSync::RtSerialRtonSync(aRStack_20,param_1);
  cVar2 = '\0';
  std::string::string(asStack_30,"");
  psVar3 = asStack_30;
  cVar1 = SerializeTable((RtSerialRtonSync *)this,(string *)aRStack_20);
  std::string::~string(asStack_30);
  nop();
  if (cVar1 != '\0') {
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 == '\0') {
      cVar2 = saveToFile(this,param_1,param_2,param_3,param_4);
      if (cVar2 != '\0') {
        StringToWString((Sexy *)param_2,extraout_x1);
        RtName::RtName((RtName *)asStack_30,awStack_38);
        FUN_05476c50(awStack_38);
        SetCurrentPackageName(this,(RtName *)asStack_30);
        RtName::~RtName((RtName *)asStack_30);
      }
    }
    else {
      WStringToString((Sexy *)(this + 0x160),(wstring *)0x0,(bool *)psVar3);
      cVar2 = saveToFile(this,param_1,asStack_30,param_3,param_4);
      std::string::~string(asStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

