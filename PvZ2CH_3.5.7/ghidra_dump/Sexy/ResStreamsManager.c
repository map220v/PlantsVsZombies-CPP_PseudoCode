// Class: Sexy::ResStreamsManager


/* Sexy::ResStreamsManager::GetRSBPath() */

undefined8 Sexy::ResStreamsManager::GetRSBPath(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::ResStreamsManager::IsCompositeChildActive(Sexy::ResStreamCompositeDescriptor::Child&) */

bool __thiscall
Sexy::ResStreamsManager::IsCompositeChildActive(ResStreamsManager *this,Child *param_1)

{
  bool bVar1;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     (bVar1 = false,
     *(int *)(param_1 + 4) == *(int *)(*(long *)(*(long *)(this + 8) + 0x848) + 0x208))) {
    bVar1 = true;
    if (*(int *)(param_1 + 8) != 0) {
      return *(int *)(param_1 + 8) == *(int *)(*(long *)(*(long *)(this + 8) + 0x848) + 0x20c);
    }
  }
  return bVar1;
}


/* Sexy::ResStreamsManager::OnGPUDataFinished(Sexy::ResStreamsLoadDesc*) */

void __thiscall
Sexy::ResStreamsManager::OnGPUDataFinished(ResStreamsManager *this,ResStreamsLoadDesc *param_1)

{
  param_1[0x1e] = (ResStreamsLoadDesc)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::DebugDrawText(Sexy::Graphics*, std::wstring, int, int, int, int) */

void __thiscall
Sexy::ResStreamsManager::DebugDrawText
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  uVar1 = DAT_06bbd9e0;
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  if (param_7 == 1) {
    uVar2 = 2;
  }
  FUN_05477b24(auStack_20,param_3);
  Color::Color(aCStack_18,0xffffffff);
  PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)param_4,(float)param_5,(float)param_6,uVar1,param_1,auStack_20,
             uVar2,aCStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResStreamsManager::FlagError() */

void __thiscall Sexy::ResStreamsManager::FlagError(ResStreamsManager *this)

{
  this[0x10] = (ResStreamsManager)0x1;
  return;
}


/* Sexy::ResStreamsManager::GetTotalBytesForGroup(Sexy::ResStreamsManager::RSBDesc*, unsigned int)
    */

int __thiscall
Sexy::ResStreamsManager::GetTotalBytesForGroup
          (ResStreamsManager *this,RSBDesc *param_1,uint param_2)

{
  long lVar1;
  
  if (param_1 != (RSBDesc *)0x0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)param_2 * 0xc0 + 0x38);
    return *(int *)(lVar1 + 0xac) + *(int *)(lVar1 + 0x9c) + *(int *)(lVar1 + 0xbc);
  }
  return -1;
}


/* Sexy::ResStreamsManager::GetDiscSpaceForGroup(Sexy::ResStreamsManager::RSBDesc*, unsigned int) */

undefined4 __thiscall
Sexy::ResStreamsManager::GetDiscSpaceForGroup(ResStreamsManager *this,RSBDesc *param_1,uint param_2)

{
  if (param_1 != (RSBDesc *)0x0) {
    return *(undefined4 *)
            (*(long *)(*(long *)(param_1 + 0x68) + (ulong)param_2 * 0xc0 + 0x38) + 0x84);
  }
  return 0xffffffff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::OnAdvanceTiles(Sexy::ResStreamsLoadDesc*) */

void __thiscall
Sexy::ResStreamsManager::OnAdvanceTiles(ResStreamsManager *this,ResStreamsLoadDesc *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ResStreamsGroup *this_00;
  
  lVar2 = ___stack_chk_guard;
  if (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x48)) {
    this_00 = *(ResStreamsGroup **)(param_1 + 8);
    uVar1 = *(int *)(param_1 + 0x44) + 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x44) = uVar1;
    uVar3 = FUN_051a4d94(*(undefined4 *)(this_00 + 0x80));
    if (uVar1 < uVar3) {
      uVar5 = ResStreamsGroup::GetTextureDescriptor(this_00,uVar1);
      uVar3 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x78))
                        (*(long **)(*(long *)(this + 8) + 0x30),uVar5);
      uVar4 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x88))
                        (*(long **)(*(long *)(this + 8) + 0x30),uVar5);
      *(uint *)(param_1 + 0x54) = uVar4;
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar3 / uVar4;
      }
      *(uint *)(param_1 + 0x4c) = uVar1;
      FUN_051a4f50();
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar1 = uVar3 / *(uint *)(param_1 + 0x54);
      }
      *(uint *)(param_1 + 0x50) = uVar1;
    }
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResStreamsManager::OnResidentDataFinished(Sexy::ResStreamsLoadDesc*) */

void __thiscall
Sexy::ResStreamsManager::OnResidentDataFinished(ResStreamsManager *this,ResStreamsLoadDesc *param_1)

{
  ResStreamGroupHeader *pRVar1;
  
  pRVar1 = (ResStreamGroupHeader *)
           ResStreamsPool::GetResidentDataMemory
                     (*(ResStreamsPool **)(param_1 + 0x10),*(uint *)(param_1 + 0x18));
  ResStreamsGroup::InitGroupStream
            (*(ResStreamsGroup **)(param_1 + 8),pRVar1,*(uint *)(param_1 + 0x18));
  param_1[0x1d] = (ResStreamsLoadDesc)0x1;
  return;
}


/* Sexy::ResStreamsManager::DeleteGroup(Sexy::ResStreamsManager::RSBDesc*, unsigned int) */

undefined8 __thiscall
Sexy::ResStreamsManager::DeleteGroup(ResStreamsManager *this,RSBDesc *param_1,uint param_2)

{
  int iVar1;
  ResStreamsGroup *pRVar2;
  long lVar3;
  
  if ((param_1 == (RSBDesc *)0x0) || (param_2 == 0xffffffff)) {
    return 0;
  }
  lVar3 = (ulong)param_2 * 0xc0;
  pRVar2 = (ResStreamsGroup *)(*(long *)(param_1 + 0x68) + lVar3);
  iVar1 = FUN_051a4d90(*(undefined4 *)(pRVar2 + 8));
  if (iVar1 != 3) {
    return 1;
  }
  ResStreamsPool::UnlockInstanceForGroup(*(ResStreamsPool **)(pRVar2 + 0x28),pRVar2);
  iVar1 = ResStreamsPool::GetOccupantCount
                    (*(ResStreamsPool **)(*(long *)(param_1 + 0x68) + lVar3 + 0x28));
  if (iVar1 == 0) {
    pRVar2 = (ResStreamsGroup *)(*(long *)(param_1 + 0x68) + lVar3);
    if ((*(uint *)(*(ResStreamsPool **)(pRVar2 + 0x28) + 0x18) >> 1 & 1) != 0) goto LAB_051a6e5c;
    ResStreamsPool::Destroy(*(ResStreamsPool **)(pRVar2 + 0x28));
  }
  pRVar2 = (ResStreamsGroup *)(*(long *)(param_1 + 0x68) + lVar3);
LAB_051a6e5c:
  *(undefined4 *)(pRVar2 + 8) = 0;
  ResStreamsGroup::Reset(pRVar2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::CreateRSBinLocalPath(std::string const&, std::string const&, std::string
   const&, Sexy::Buffer const*, long, long, long, long) */

void __thiscall
Sexy::ResStreamsManager::CreateRSBinLocalPath
          (ResStreamsManager *this,string *param_1,string *param_2,string *param_3,Buffer *param_4,
          long param_5,long param_6,long param_7,long param_8)

{
  string sVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uchar *puVar5;
  undefined8 uVar6;
  uchar *puVar7;
  string *psVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *plVar9;
  code *pcVar10;
  ulong uVar11;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x28) + 0x38))
            (asStack_48,*(long **)(*(long *)(this + 8) + 0x28));
  FUN_05475d88(asStack_40,param_1);
  FUN_05475d88(asStack_38,param_2);
  std::string::string(asStack_30,"");
  nop();
  cVar3 = FUN_0547419c(asStack_40);
  if (cVar3 == '\0') {
    plVar9 = *(long **)(gSexyAppBase + 0x28);
    pcVar10 = *(code **)(*plVar9 + 0x110);
    std::operator+(asStack_38,"/");
    std::operator+(asStack_20,param_3);
    std::operator+(asStack_18,".smf");
    cVar3 = (*pcVar10)(plVar9,asStack_10,0);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    psVar8 = asStack_40;
    if (cVar3 == '\0') goto LAB_051a7578;
LAB_051a787c:
    std::operator+(psVar8,"/");
    std::operator+(asStack_20,param_3);
    std::operator+(asStack_18,".smf");
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    OutputDebugStrF((wchar_t *)"tag Do not need decompress\n");
    goto LAB_051a78d8;
  }
LAB_051a7578:
  cVar3 = FUN_0547419c(asStack_38);
  if (cVar3 == '\0') {
    plVar9 = *(long **)(gSexyAppBase + 0x28);
    pcVar10 = *(code **)(*plVar9 + 0x110);
    std::operator+(asStack_38,"/");
    std::operator+(asStack_20,param_3);
    std::operator+(asStack_18,".smf");
    cVar3 = (*pcVar10)(plVar9,asStack_10,0);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    psVar8 = asStack_38;
    if (cVar3 != '\0') goto LAB_051a787c;
  }
  if (param_4 == (Buffer *)0x0) {
    OutputDebugStrF((wchar_t *)"tag ResStreamsManager::CreateRSBinLocalPath rsb failed. \n");
    sVar1 = gSexyAppBase[0x3ad];
    uVar6 = extraout_x1_02;
    while (sVar1 == (string)0x0) {
      SexySleep((Sexy *)0xa,(uint)uVar6);
      uVar6 = extraout_x1_03;
      sVar1 = gSexyAppBase[0x3ad];
    }
    goto LAB_051a78d8;
  }
  puVar5 = (uchar *)Buffer::GetDataPtr(param_4);
  uVar4 = SizeForUncompress2(puVar5);
  uVar11 = (ulong)(uVar4 + 0x200000);
  std::string::string(asStack_28,"");
  nop();
  cVar3 = FUN_0547419c(asStack_40);
  if (cVar3 == '\0') {
    lVar2 = 0;
    if (param_6 != 0) {
      lVar2 = (long)uVar11 / param_6;
    }
    uVar6 = FUN_0547429c(asStack_40);
    OutputDebugStrF((wchar_t *)
                    "tag ResStreamsManager::CreateRSBinLocalPath phone path = [%s], phone block free= [%d], phone block size=[%d], need block = [%d], need size = [%d] \n"
                    ,uVar6,param_5,param_6,lVar2,uVar11);
    if (lVar2 <= param_5) {
      thunk_FUN_05475e00(asStack_28,asStack_40);
    }
  }
  cVar3 = FUN_0547419c(asStack_28);
  if (cVar3 == '\0') {
LAB_051a7688:
    std::operator+(asStack_28,"/");
    std::operator+(asStack_20,param_3);
    std::operator+(asStack_18,".smf");
    FUN_05474278(asStack_30,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    uVar6 = FUN_0547429c(asStack_30);
    OutputDebugStrF((wchar_t *)"tag ResourceManager::filePath  = %s\n",uVar6);
    puVar5 = malloc((ulong)uVar4);
    puVar7 = (uchar *)Buffer::GetDataPtr(param_4);
    uVar4 = Buffer::GetDataLen(param_4);
    ZlibUncompressBuffer3(puVar7,puVar5,uVar4);
    cVar3 = SexyAppBase::WriteBytesToFile(gSexyAppBase,asStack_30,(ulong)puVar5);
    free(puVar5);
    if ((cVar3 == '\0') &&
       (OutputDebugStrF((wchar_t *)"tag****************WriteBytesToFile  %d \n",0),
       uVar11 = extraout_x1_01, gSexyAppBase[0x3ad] == (string)0x0)) {
      do {
        SexySleep((Sexy *)0xa,(uint)uVar11);
        uVar11 = (ulong)(byte)gSexyAppBase[0x3ad];
      } while (gSexyAppBase[0x3ad] == (string)0x0);
      std::string::~string(asStack_28);
      goto LAB_051a78d8;
    }
  }
  else {
    cVar3 = FUN_0547419c(asStack_38);
    if (cVar3 == '\0') {
      lVar2 = 0;
      if (param_8 != 0) {
        lVar2 = (long)uVar11 / param_8;
      }
      uVar6 = FUN_0547429c(asStack_38);
      OutputDebugStrF((wchar_t *)
                      "tag ResStreamsManager::CreateRSBinLocalPath sdcard path = [%s], sdcard block free= [%d], sdcard block size=[%d], need block = [%d], need size = [%d] \n"
                      ,uVar6,param_7,param_8,lVar2,uVar11);
      if (lVar2 <= param_7) {
        thunk_FUN_05475e00(asStack_28,asStack_38);
      }
      cVar3 = FUN_0547419c(asStack_28);
      if (cVar3 == '\0') goto LAB_051a7688;
    }
    OutputDebugStrF((wchar_t *)"tag ResStreamsManager::CreateRSBinLocalPath targetPath is empty.\n")
    ;
    sVar1 = gSexyAppBase[0x3ad];
    uVar6 = extraout_x1;
    while (sVar1 == (string)0x0) {
      SexySleep((Sexy *)0xa,(uint)uVar6);
      uVar6 = extraout_x1_00;
      sVar1 = gSexyAppBase[0x3ad];
    }
  }
  std::string::~string(asStack_28);
LAB_051a78d8:
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::IsInitialized(std::string const&) */

void __thiscall Sexy::ResStreamsManager::IsInitialized(ResStreamsManager *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if (*plVar3 != 0) {
      cVar2 = std::operator==((string *)(*plVar3 + 0x10),param_1);
      if (cVar2 != '\0') break;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetRSBPath(unsigned int) */

void Sexy::ResStreamsManager::GetRSBPath(uint param_1)

{
  bool bVar1;
  long *plVar2;
  uint in_w1;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(TaskResource **)((ulong)param_1 + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)((ulong)param_1 + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      GetRSBPath();
LAB_051a7cf8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if (in_w1 < (uint)(*(int *)(lVar3 + 0x60) + *(int *)(lVar3 + 8))) {
        FUN_05475d88();
        goto LAB_051a7cf8;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetComposite(unsigned int) */

void __thiscall Sexy::ResStreamsManager::GetComposite(ResStreamsManager *this,uint param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
      lVar4 = 0;
LAB_051a7dd0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar4);
    }
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar4 = *(long *)(*plVar3 + 0x20);
    iVar1 = *(int *)(*plVar3 + 8);
    if (param_1 < (uint)(iVar1 + *(int *)(lVar4 + 0x34))) {
      lVar4 = lVar4 + (ulong)((param_1 - iVar1) * *(int *)(lVar4 + 0x3c)) +
                      (ulong)*(uint *)(lVar4 + 0x38);
      goto LAB_051a7dd0;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::LookupGroupIndex(std::string const&) */

void __thiscall Sexy::ResStreamsManager::LookupGroupIndex(ResStreamsManager *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      iVar2 = -1;
LAB_051a7ed8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      pcVar4 = (char *)FUN_0547429c(param_1);
      piVar5 = (int *)CompiledMap::Find((CompiledMap *)(lVar6 + 0x50),pcVar4);
      if (piVar5 == (int *)0x0) {
        pcVar4 = (char *)FUN_0547429c(param_1);
        piVar5 = (int *)CompiledMap::Find((CompiledMap *)(lVar6 + 0x40),pcVar4);
        if (piVar5 == (int *)0x0) goto LAB_051a7e9c;
      }
      iVar2 = *piVar5 + *(int *)(lVar6 + 8);
      goto LAB_051a7ed8;
    }
LAB_051a7e9c:
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::LookupGroup(std::string const&) */

void __thiscall Sexy::ResStreamsManager::LookupGroup(ResStreamsManager *this,string *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      uVar2 = 0xffffffff;
LAB_051a7fb4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      pcVar4 = (char *)FUN_0547429c(param_1);
      piVar5 = (int *)CompiledMap::Find((CompiledMap *)(lVar6 + 0x50),pcVar4);
      if (piVar5 != (int *)0x0) {
        uVar2 = *piVar5 + *(int *)(lVar6 + 8) | 0x10000000;
        goto LAB_051a7fb4;
      }
      pcVar4 = (char *)FUN_0547429c(param_1);
      piVar5 = (int *)CompiledMap::Find((CompiledMap *)(lVar6 + 0x40),pcVar4);
      if (piVar5 != (int *)0x0) {
        uVar2 = *piVar5 + *(int *)(lVar6 + 8);
        goto LAB_051a7fb4;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetGroupStatus(unsigned int) */

void __thiscall Sexy::ResStreamsManager::GetGroupStatus(ResStreamsManager *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 local_18;
  undefined8 local_10;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffff) {
    if ((param_1 >> 0x1c & 1) != 0) {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
LAB_051a808c:
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      uVar5 = (ulong)bVar1;
      if (bVar1) {
        plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        lVar8 = *plVar4;
        if ((lVar8 == 0) ||
           ((uint)(*(int *)(lVar8 + 0x60) + *(int *)(lVar8 + 8)) <= (param_1 & 0xfffffff)))
        goto LAB_051a8084;
        uVar7 = 3;
        lVar6 = GetComposite(this,param_1 & 0xfffffff);
        if (*(int *)(lVar6 + 0x480) != 0) {
          puVar9 = (uint *)(lVar6 + 0x80);
          uVar5 = 0;
          uVar7 = 3;
          do {
            cVar2 = IsCompositeChildActive(this,(Child *)(lVar6 + (uVar5 + 8) * 0x10));
            if ((cVar2 != '\0') &&
               (uVar3 = FUN_051a4d90(*(undefined4 *)
                                      (*(long *)(lVar8 + 0x68) + (ulong)*puVar9 * 0xc0 + 8)),
               (int)uVar3 < (int)uVar7)) {
              uVar7 = uVar3;
            }
            uVar3 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar3;
            puVar9 = puVar9 + 4;
          } while (uVar3 < *(uint *)(lVar6 + 0x480));
        }
        uVar5 = (ulong)uVar7;
      }
      goto LAB_051a80ac;
    }
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar8 = *plVar4;
      if ((lVar8 != 0) && (param_1 < (uint)(*(int *)(lVar8 + 8) + *(int *)(lVar8 + 0x60)))) {
        uVar5 = ___stack_chk_guard;
        if (local_8 == ___stack_chk_guard) {
          FUN_051a4d90(*(undefined4 *)
                        (*(long *)(lVar8 + 0x68) + (ulong)(param_1 - *(int *)(lVar8 + 8)) * 0xc0 + 8
                        ));
          return;
        }
        goto LAB_051a8204;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  uVar5 = 0;
LAB_051a80ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_051a8204:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
LAB_051a8084:
  std::_List_const_iterator<Sexy::FontLayer>::operator++
            ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  goto LAB_051a808c;
}


/* Sexy::ResStreamsManager::IsGroupLoaded(unsigned int) */

bool __thiscall Sexy::ResStreamsManager::IsGroupLoaded(ResStreamsManager *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (param_1 != 0xffffffff) {
    iVar2 = GetGroupStatus(this,param_1);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}


/* Sexy::ResStreamsManager::IsGroupLoaded(std::string const&) */

void __thiscall Sexy::ResStreamsManager::IsGroupLoaded(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  IsGroupLoaded(this,uVar1);
  return;
}


/* Sexy::ResStreamsManager::GetGroupStatus(std::string const&) */

void __thiscall Sexy::ResStreamsManager::GetGroupStatus(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  GetGroupStatus(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::LoadGroupFileIndex(unsigned int) */

void __thiscall Sexy::ResStreamsManager::LoadGroupFileIndex(ResStreamsManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if ((param_1 >> 0x1c & 1) == 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88),0);
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1000,0x51a8354);
        (*pcVar1)();
      }
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      puVar4 = (undefined8 *)*puVar4;
      if ((puVar4 != (undefined8 *)0x0) &&
         (param_1 < (uint)(*(int *)(puVar4 + 1) + *(int *)(puVar4 + 0xc)))) break;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    uVar3 = ResStreamsGroup::LoadGroupFileIndex
                      ((ResStreamsGroup *)
                       (puVar4[0xd] + (ulong)(param_1 - *(int *)(puVar4 + 1)) * 0xc0),
                       (IFile *)*puVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::ResStreamsManager::LoadGroupFileIndex(std::string const&) */

void __thiscall Sexy::ResStreamsManager::LoadGroupFileIndex(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  LoadGroupFileIndex(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::UnloadGroupFileIndex(unsigned int) */

void __thiscall Sexy::ResStreamsManager::UnloadGroupFileIndex(ResStreamsManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  if ((param_1 >> 0x1c & 1) == 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1000,0x51a8470);
        (*pcVar1)();
      }
      plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar4 = *plVar3;
      if ((lVar4 != 0) && (param_1 < (uint)(*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x60)))) break;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    ResStreamsGroup::Reset
              ((ResStreamsGroup *)
               (*(long *)(lVar4 + 0x68) + (ulong)(param_1 - *(int *)(lVar4 + 8)) * 0xc0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* Sexy::ResStreamsManager::UnloadGroupFileIndex(std::string const&) */

void __thiscall
Sexy::ResStreamsManager::UnloadGroupFileIndex(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  UnloadGroupFileIndex(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::CanLoadGroup(unsigned int) */

void __thiscall Sexy::ResStreamsManager::CanLoadGroup(ResStreamsManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xffffffff) {
    uVar4 = 0;
  }
  else if ((param_1 >> 0x1c & 1) == 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1000,0x51a866c);
        (*pcVar1)();
      }
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar8 = *plVar5;
      if ((lVar8 != 0) && (param_1 < (uint)(*(int *)(lVar8 + 8) + *(int *)(lVar8 + 0x60)))) break;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    uVar4 = ResStreamsGroup::CanLoad
                      ((ResStreamsGroup *)
                       (*(long *)(lVar8 + 0x68) + (ulong)(param_1 - *(int *)(lVar8 + 8)) * 0xc0));
  }
  else {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar8 = *plVar5;
      if ((lVar8 != 0) &&
         ((param_1 & 0xfffffff) < (uint)(*(int *)(lVar8 + 0x60) + *(int *)(lVar8 + 8))))
      goto LAB_051a8560;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    lVar8 = 0;
LAB_051a8560:
    uVar7 = 0;
    lVar6 = GetComposite(this,param_1 & 0xfffffff);
    puVar9 = (uint *)(lVar6 + 0x80);
    if (*(int *)(lVar6 + 0x480) != 0) {
      do {
        cVar3 = IsCompositeChildActive(this,(Child *)(lVar6 + ((ulong)uVar7 + 8) * 0x10));
        if ((cVar3 != '\0') &&
           (cVar3 = ResStreamsGroup::CanLoad
                              ((ResStreamsGroup *)(*(long *)(lVar8 + 0x68) + (ulong)*puVar9 * 0xc0))
           , uVar4 = 0, cVar3 == '\0')) goto LAB_051a85d0;
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (uVar7 < *(uint *)(lVar6 + 0x480));
    }
    uVar4 = 1;
  }
LAB_051a85d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* Sexy::ResStreamsManager::CanLoadGroup(std::string) */

void __thiscall Sexy::ResStreamsManager::CanLoadGroup(ResStreamsManager *this,string *param_2)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_2);
  CanLoadGroup(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::DeleteGroup(unsigned int) */

void __thiscall Sexy::ResStreamsManager::DeleteGroup(ResStreamsManager *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  RSBDesc *pRVar8;
  uint *puVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xffffffff) {
    uVar4 = 0;
  }
  else if ((param_1 >> 0x1c & 1) == 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pRVar8 = (RSBDesc *)*plVar5;
      if ((pRVar8 != (RSBDesc *)0x0) &&
         (param_1 < (uint)(*(int *)(pRVar8 + 8) + *(int *)(pRVar8 + 0x60)))) {
        uVar7 = param_1 - *(int *)(pRVar8 + 8);
        goto LAB_051a885c;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    uVar7 = 0xffffffff;
    pRVar8 = (RSBDesc *)0x0;
LAB_051a885c:
    uVar4 = DeleteGroup(this,pRVar8,uVar7);
  }
  else {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pRVar8 = (RSBDesc *)*plVar5;
      if ((pRVar8 != (RSBDesc *)0x0) &&
         ((param_1 & 0xfffffff) < (uint)(*(int *)(pRVar8 + 0x60) + *(int *)(pRVar8 + 8))))
      goto LAB_051a8770;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    pRVar8 = (RSBDesc *)0x0;
LAB_051a8770:
    uVar7 = 0;
    lVar6 = GetComposite(this,param_1 & 0xfffffff);
    puVar9 = (uint *)(lVar6 + 0x80);
    if (*(int *)(lVar6 + 0x480) != 0) {
      do {
        while (cVar3 = IsCompositeChildActive(this,(Child *)(lVar6 + ((ulong)uVar7 + 8) * 0x10)),
              cVar3 == '\0') {
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 4;
          if (*(uint *)(lVar6 + 0x480) <= uVar7) goto LAB_051a87e8;
        }
        uVar1 = *puVar9;
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 4;
        DeleteGroup(this,pRVar8,uVar1);
      } while (uVar7 < *(uint *)(lVar6 + 0x480));
    }
LAB_051a87e8:
    uVar4 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* Sexy::ResStreamsManager::DeleteGroup(std::string const&) */

void __thiscall Sexy::ResStreamsManager::DeleteGroup(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  DeleteGroup(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::HasGlobalFileIndex() */

void __thiscall Sexy::ResStreamsManager::HasGlobalFileIndex(ResStreamsManager *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
      uVar4 = 1;
LAB_051a8960:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if ((*plVar3 == 0) ||
       (cVar1 = CompiledMap::Initialized((CompiledMap *)(*plVar3 + 0x30)), cVar1 == '\0')) {
      uVar4 = 0;
      goto LAB_051a8960;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetLoadedFileData(std::string const&, unsigned int&) */

void __thiscall
Sexy::ResStreamsManager::GetLoadedFileData(ResStreamsManager *this,string *param_1,uint *param_2)

{
  ResStreamsGroup *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ResStreamsManager *pRVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pRVar9 = this + 0x88;
  uVar3 = *(undefined8 *)pRVar9;
  local_8 = ___stack_chk_guard;
  *param_2 = 0xffffffff;
  local_18 = FUN_051a7b48(uVar3);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pRVar9);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    do {
      plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar7 = *plVar4;
      if (lVar7 != 0) {
        uVar8 = *(uint *)(lVar7 + 0x60);
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            while( true ) {
              this_00 = (ResStreamsGroup *)(*(long *)(lVar7 + 0x68) + (ulong)uVar6 * 0xc0);
              iVar2 = FUN_051a4d90(*(undefined4 *)(this_00 + 8));
              if ((iVar2 != 3) || (*(long *)(*(long *)(this_00 + 0x28) + 0x48) == 0)) break;
              lVar5 = ResStreamsGroup::GetFileIndexData(this_00,param_1);
              if (lVar5 != 0) {
                *param_2 = uVar6 + *(int *)(lVar7 + 8);
                goto LAB_051a8ab0;
              }
              uVar8 = *(uint *)(lVar7 + 0x60);
              uVar6 = uVar6 + 1;
              if (uVar8 <= uVar6) goto LAB_051a8a74;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
      }
LAB_051a8a74:
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)pRVar9);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    } while (bVar1);
  }
  lVar5 = 0;
LAB_051a8ab0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetLoadedGroupForFile(std::string const&) */

void __thiscall
Sexy::ResStreamsManager::GetLoadedGroupForFile(ResStreamsManager *this,string *param_1)

{
  long lVar1;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetLoadedFileData(this,param_1,&local_c);
  if (lVar1 == 0) {
    local_c = 0xffffffff;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_c);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetResidentFileBuffer(unsigned int, std::string const&, unsigned char**,
   unsigned int*) */

void __thiscall
Sexy::ResStreamsManager::GetResidentFileBuffer
          (ResStreamsManager *this,uint param_1,string *param_2,uchar **param_3,uint *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  uint local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  if (param_1 == 0xffffffff) {
    bVar3 = false;
    GetLoadedFileData(this,param_2,local_24);
LAB_051a8c44:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1000,0x51a8bf8);
      (*pcVar2)();
    }
    plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      if (local_24[0] < (uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x60))) {
        lVar7 = (ulong)(local_24[0] - *(int *)(lVar6 + 8)) * 0xc0;
        piVar5 = (int *)ResStreamsGroup::GetFileIndexData
                                  ((ResStreamsGroup *)(*(long *)(lVar6 + 0x68) + lVar7),param_2);
        if (piVar5 == (int *)0x0) {
          bVar3 = false;
        }
        else if (*piVar5 == 0) {
          lVar6 = ResStreamsGroup::GetResidentDataBaseAddress
                            ((ResStreamsGroup *)(*(long *)(lVar6 + 0x68) + lVar7));
          uVar1 = piVar5[2];
          *param_3 = (uchar *)(lVar6 + (ulong)(uint)piVar5[1]);
          *param_4 = uVar1;
        }
        else {
          bVar3 = false;
          FUN_05475ad8(gSexyAppBase + 0x78," | (aLocationInfo->res_type != RESSTREAM_RESIDENT)");
        }
        goto LAB_051a8c44;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetPakFileFromResidentBuffer(unsigned int, std::string const&) */

void __thiscall
Sexy::ResStreamsManager::GetPakFileFromResidentBuffer
          (ResStreamsManager *this,uint param_1,string *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  uint local_14;
  uchar *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GetResidentFileBuffer(this,param_1,param_2,&local_10,&local_14);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = ::operator_new(0x30);
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2[3] = local_10;
    *(uint *)(puVar2 + 4) = local_14;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined4 *)((long)puVar2 + 0x24) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetTotalBytesForGroup(unsigned int) */

void __thiscall Sexy::ResStreamsManager::GetTotalBytesForGroup(ResStreamsManager *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  RSBDesc *pRVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = 0xffffffff;
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffff) {
    if ((param_1 >> 0x1c & 1) == 0) {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar9 = (RSBDesc *)*plVar6;
        if ((pRVar9 != (RSBDesc *)0x0) &&
           (param_1 < (uint)(*(int *)(pRVar9 + 8) + *(int *)(pRVar9 + 0x60)))) {
          uVar8 = param_1 - *(int *)(pRVar9 + 8);
          goto LAB_051a8f10;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar9 = (RSBDesc *)0x0;
      uVar8 = 0;
LAB_051a8f10:
      uVar5 = GetTotalBytesForGroup(this,pRVar9,uVar8);
    }
    else {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar9 = (RSBDesc *)*plVar6;
        if ((pRVar9 != (RSBDesc *)0x0) &&
           ((param_1 & 0xfffffff) < (uint)(*(int *)(pRVar9 + 0x60) + *(int *)(pRVar9 + 8))))
        goto LAB_051a8df4;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar9 = (RSBDesc *)0x0;
LAB_051a8df4:
      lVar7 = GetComposite(this,param_1 & 0xfffffff);
      if (*(int *)(lVar7 + 0x480) == 0) {
        uVar5 = 0;
      }
      else {
        uVar8 = 0;
        puVar10 = (uint *)(lVar7 + 0x80);
        uVar11 = 0;
        do {
          while (cVar3 = IsCompositeChildActive(this,(Child *)(lVar7 + ((ulong)uVar8 + 8) * 0x10)),
                cVar3 != '\0') {
            uVar1 = *puVar10;
            uVar8 = uVar8 + 1;
            puVar10 = puVar10 + 4;
            iVar4 = GetTotalBytesForGroup(this,pRVar9,uVar1);
            uVar11 = uVar11 + iVar4;
            if (*(uint *)(lVar7 + 0x480) <= uVar8) goto LAB_051a8e74;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar8 < *(uint *)(lVar7 + 0x480));
LAB_051a8e74:
        uVar5 = (ulong)uVar11;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetDiscSpaceForGroup(unsigned int) */

void __thiscall Sexy::ResStreamsManager::GetDiscSpaceForGroup(ResStreamsManager *this,uint param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  RSBDesc *pRVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = -1;
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffff) {
    if ((param_1 >> 0x1c & 1) == 0) {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar10 = (RSBDesc *)*plVar5;
        if ((pRVar10 != (RSBDesc *)0x0) &&
           (param_1 < (uint)(*(int *)(pRVar10 + 8) + *(int *)(pRVar10 + 0x60)))) {
          uVar7 = param_1 - *(int *)(pRVar10 + 8);
          goto LAB_051a90f0;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar10 = (RSBDesc *)0x0;
      uVar7 = 0;
LAB_051a90f0:
      iVar4 = GetDiscSpaceForGroup(this,pRVar10,uVar7);
    }
    else {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar10 = (RSBDesc *)*plVar5;
        if ((pRVar10 != (RSBDesc *)0x0) &&
           ((param_1 & 0xfffffff) < (uint)(*(int *)(pRVar10 + 0x60) + *(int *)(pRVar10 + 8))))
        goto LAB_051a8fe4;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar10 = (RSBDesc *)0x0;
LAB_051a8fe4:
      lVar6 = GetComposite(this,param_1 & 0xfffffff);
      uVar7 = *(uint *)(lVar6 + 0x480);
      if (uVar7 == 0) {
        iVar4 = 0;
      }
      else {
        uVar9 = 0;
        puVar8 = (uint *)(lVar6 + 0x84);
        iVar4 = 0;
        do {
          while (*puVar8 < 0x301) {
            puVar1 = puVar8 + -1;
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + 4;
            iVar3 = GetDiscSpaceForGroup(this,pRVar10,*puVar1);
            iVar4 = iVar4 + iVar3;
            uVar7 = *(uint *)(lVar6 + 0x480);
            if (uVar7 <= uVar9) goto LAB_051a9050;
          }
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 4;
        } while (uVar9 < uVar7);
      }
    }
  }
LAB_051a9050:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::ValidateGroupResources(int) */

void __thiscall Sexy::ResStreamsManager::ValidateGroupResources(ResStreamsManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  ResStreamsGroup *pRVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1000,0x51a91b4);
      (*pcVar1)();
    }
    plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar5 = *plVar3;
    if ((lVar5 != 0) && ((uint)param_1 < (uint)(*(int *)(lVar5 + 8) + *(int *)(lVar5 + 0x60))))
    break;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  pRVar4 = *(ResStreamsGroup **)(*(long *)(this + 8) + 0x30);
  if (*(code **)(*(long *)pRVar4 + 0x30) == IResStreamsDriver::ValidateGroupTextures) {
    if (local_8 == ___stack_chk_guard) {
      IResStreamsDriver::ValidateGroupTextures(pRVar4);
      return;
    }
  }
  else {
    (**(code **)(*(long *)pRVar4 + 0x30))
              (pRVar4,*(long *)(lVar5 + 0x68) + (ulong)(uint)(param_1 - *(int *)(lVar5 + 8)) * 0xc0)
    ;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::PurgeResidentData(unsigned int) */

void __thiscall Sexy::ResStreamsManager::PurgeResidentData(ResStreamsManager *this,uint param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  undefined8 *puVar7;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 >> 0x1c & 1) != 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar12 = *plVar3;
      if ((lVar12 != 0) &&
         ((param_1 & 0xfffffff) < (uint)(*(int *)(lVar12 + 0x60) + *(int *)(lVar12 + 8)))) {
        uVar11 = 0;
        lVar4 = GetComposite(this,param_1 & 0xfffffff);
        uVar8 = *(uint *)(lVar4 + 0x480);
        puVar10 = (uint *)(lVar4 + 0x80);
        if (uVar8 != 0) {
          do {
            lVar9 = *(long *)(*(long *)(lVar12 + 0x68) + (ulong)*puVar10 * 0xc0 + 0x28);
            if (*(void **)(lVar9 + 0x48) != (void *)0x0) {
              free(*(void **)(lVar9 + 0x48));
              *(undefined8 *)(lVar9 + 0x48) = 0;
              iVar1 = *(int *)(lVar9 + 0xc);
              if (iVar1 != 0) {
                puVar5 = *(undefined8 **)(lVar9 + 0x40);
                puVar6 = puVar5;
                do {
                  puVar7 = puVar6 + 2;
                  *puVar6 = 0;
                  puVar6 = puVar7;
                } while (puVar7 != puVar5 + ((ulong)(iVar1 - 1) + 1) * 2);
              }
              uVar8 = *(uint *)(lVar4 + 0x480);
            }
            uVar11 = uVar11 + 1;
            puVar10 = puVar10 + 4;
          } while (uVar11 < uVar8);
        }
        break;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::ResStreamsManager::PurgeResidentData(std::string const&) */

void __thiscall Sexy::ResStreamsManager::PurgeResidentData(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  PurgeResidentData(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::DebugDraw(Sexy::Graphics*, Sexy::TRect<int> const&) */

void __thiscall
Sexy::ResStreamsManager::DebugDraw(ResStreamsManager *this,Graphics *param_1,TRect *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  BaseBufferResource *this_00;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ResStreamsManager *pRVar10;
  char *pcVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics::PushState(param_1);
  Color::Color((Color *)local_18,-0x71000000);
  Graphics::SetColor(param_1,(Color *)local_18);
  Graphics::FillRect(param_1,(TRect *)(param_1 + 0x28));
  Graphics::Translate(param_1,*(int *)param_2,*(int *)(param_2 + 4));
  if (DAT_06bbd9e0 == 0) {
    this_00 = (BaseBufferResource *)PrimeText::Instance();
    DAT_06bbd9e0 = BaseBufferResource::GetPtr(this_00);
  }
  uVar12 = 0;
  FUN_05478178((Color *)local_18,L"ResStreamsManager Debug View",auStack_20);
  DebugDrawText(this,param_1,(Color *)local_18,10,10,*(int *)(param_2 + 8) + -10,0xffffffff);
  FUN_05476c50((Color *)local_18);
  nop();
  pRVar10 = this + 0x88;
  local_30 = FUN_051a7b48(*(undefined8 *)pRVar10);
  local_18[0] = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)pRVar10);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
  if (bVar1) {
    do {
      plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
      lVar6 = *plVar2;
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x70) != 0)) {
        pcVar11 = (char *)(*(long *)(lVar6 + 0x78) + 8);
        do {
          if ((*pcVar11 != '\0') && (*(uint *)(pcVar11 + 4) != 0)) {
            lVar7 = 0;
            do {
              lVar9 = *(long *)(*(long *)(pcVar11 + 0x18) + lVar7 * 8);
              if (lVar9 != 0) {
                uVar12 = uVar12 + *(long *)(lVar9 + 0x40);
              }
              lVar7 = lVar7 + 1;
            } while ((uint)lVar7 < *(uint *)(pcVar11 + 4));
          }
          pcVar11 = pcVar11 + 0x58;
        } while (pcVar11 !=
                 (char *)(*(long *)(lVar6 + 0x78) +
                         (ulong)(*(int *)(lVar6 + 0x70) - 1) * 0x58 + 0x60));
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
      local_18[0] = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)pRVar10);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
    } while (bVar1);
  }
  iVar13 = 10;
  iVar4 = 0x30;
  UCommaSeparate64(uVar12 & 0xffffffff);
  uVar3 = FUN_054766ec((Color *)local_18);
  StrFormat(L"Total time (to load these groups): %ls ms",auStack_28,uVar3);
  FUN_05476c50((Color *)local_18);
  FUN_05477b24((Color *)local_18,auStack_28);
  DebugDrawText(this,param_1,(Color *)local_18,0xfffffff6,10,*(undefined4 *)(param_2 + 8),1);
  FUN_05476c50((Color *)local_18);
  Color::Color((Color *)local_18,0);
  Graphics::SetColor(param_1,(Color *)local_18);
  Graphics::FillRect(param_1,0,0x12,*(int *)(param_2 + 8),3);
  Color::Color((Color *)local_18,1);
  Graphics::SetColor(param_1,(Color *)local_18);
  Graphics::FillRect(param_1,0,0x13,*(int *)(param_2 + 8),1);
  local_30 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  local_18[0] = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)pRVar10);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
  if (bVar1) {
    do {
      plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
      lVar6 = *plVar2;
      if ((lVar6 != 0) && (uVar15 = *(uint *)(lVar6 + 0x70), uVar15 != 0)) {
        lVar7 = *(long *)(lVar6 + 0x78);
        uVar14 = 1;
        do {
          lVar9 = (ulong)(uVar14 - 1) * 0x58;
          if (*(char *)(lVar7 + lVar9 + 8) != '\0') {
            Color::Color((Color *)local_18,1);
            Graphics::SetColor(param_1,(Color *)local_18);
            ToWString((string *)(*(long *)(lVar6 + 0x78) + lVar9));
            DebugDrawText(this,param_1,(Color *)local_18,iVar13,iVar4 + -8,
                          *(undefined4 *)(param_2 + 8),0xffffffff);
            FUN_05476c50((Color *)local_18);
            lVar7 = *(long *)(lVar6 + 0x78);
            iVar5 = 0;
            if (*(int *)(lVar7 + lVar9 + 0xc) != 0) {
              iVar5 = iVar4 + -2;
              uVar15 = 0;
              do {
                Color::Color((Color *)local_18,0);
                Graphics::SetColor(param_1,(Color *)local_18);
                Graphics::DrawRect(param_1,iVar13 + -2,iVar5,0x130,0x2c);
                Color::Color((Color *)local_18,0);
                Graphics::SetColor(param_1,(Color *)local_18);
                Graphics::DrawRect(param_1,iVar13,iVar5 + 2,300,0x28);
                Color::Color((Color *)local_18,1);
                Graphics::SetColor(param_1,(Color *)local_18);
                Graphics::DrawRect(param_1,iVar13 + -1,iVar5 + 1,0x12e,0x2a);
                lVar7 = *(long *)(lVar6 + 0x78);
                lVar8 = lVar7 + lVar9;
                lVar16 = *(long *)(*(long *)(lVar8 + 0x20) + (ulong)uVar15 * 8);
                if (lVar16 != 0) {
                  Color::Color((Color *)local_18,-0xff7fe0);
                  Graphics::SetColor(param_1,(Color *)local_18);
                  Graphics::FillRect(param_1,iVar13,iVar5 + 2,300,0x28);
                  if (*(int *)(lVar16 + 8) == 3) {
                    UCommaSeparate64((ulong)*(uint *)(lVar16 + 0x40));
                    uVar3 = FUN_054766ec(auStack_20);
                    StrFormat(L"Load Time: %ls ms",(Color *)local_18,uVar3);
                    DebugDrawText(this,param_1,(Color *)local_18,iVar13 + 0x14,iVar5 + 0x1e,
                                  *(undefined4 *)(param_2 + 8),0xffffffff);
                    FUN_05476c50((Color *)local_18);
                    FUN_05476c50(auStack_20);
                  }
                  lVar7 = *(long *)(lVar6 + 0x78);
                  lVar8 = lVar7 + lVar9;
                }
                uVar15 = uVar15 + 1;
                iVar5 = iVar5 + 0x28;
              } while (uVar15 < *(uint *)(lVar8 + 0xc));
              iVar5 = *(uint *)(lVar8 + 0xc) * 0x28;
            }
            uVar15 = *(uint *)(lVar6 + 0x70);
            iVar4 = iVar4 + iVar5 + 0x20;
            if ((uVar15 - 1 != uVar14 - 1) &&
               (*(uint *)(param_2 + 0xc) <
                iVar4 + *(int *)(lVar7 + (ulong)uVar14 * 0x58 + 0xc) * 0x28 + 0x20U)) {
              iVar13 = iVar13 + 0x14c;
              iVar4 = 0x30;
            }
          }
          bVar1 = uVar14 < uVar15;
          uVar14 = uVar14 + 1;
        } while (bVar1);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
      local_18[0] = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)pRVar10);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
    } while (bVar1);
  }
  Graphics::PopState(param_1);
  FUN_05476c50(auStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetImage(unsigned int, std::string const&, Sexy::Image**) */

void __thiscall
Sexy::ResStreamsManager::GetImage
          (ResStreamsManager *this,uint param_1,string *param_2,Image **param_3)

{
  bool bVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Image *pIVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_051a9a7c:
      bVar1 = false;
LAB_051a9a80:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar7 = *plVar2;
    if (lVar7 != 0) {
      if (param_1 < (uint)(*(int *)(lVar7 + 8) + *(int *)(lVar7 + 0x60))) {
        lVar8 = (ulong)(param_1 - *(int *)(lVar7 + 8)) * 0xc0;
        piVar3 = (int *)ResStreamsGroup::GetFileIndexData
                                  ((ResStreamsGroup *)(*(long *)(lVar7 + 0x68) + lVar8),param_2);
        if (piVar3 == (int *)0x0) {
          uVar4 = FUN_0547429c(param_2);
          OutputDebugStrF((wchar_t *)"Couldn\'t load image %s\n",uVar4);
          bVar1 = false;
          goto LAB_051a9a80;
        }
        if (*piVar3 == 1) {
          uVar4 = ResStreamsGroup::GetTextureDescriptor
                            ((ResStreamsGroup *)(*(long *)(lVar7 + 0x68) + lVar8),piVar3[3]);
          plVar2 = *(long **)(*(long *)(this + 8) + 0x30);
          pcVar9 = *(code **)(*plVar2 + 0x50);
          FUN_05475d88((string *)&local_10,param_2);
          uVar5 = ResStreamsGroup::GetRenderData
                            ((ResStreamsGroup *)(*(long *)(lVar7 + 0x68) + lVar8),piVar3[3]);
          pIVar6 = (Image *)(*pcVar9)(plVar2,(string *)&local_10,uVar5,0,piVar3,uVar4);
          std::string::~string((string *)&local_10);
          *param_3 = pIVar6;
          bVar1 = pIVar6 != (Image *)0x0;
          goto LAB_051a9a80;
        }
        goto LAB_051a9a7c;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::ClearRSB(std::string const&) */

void __thiscall Sexy::ResStreamsManager::ClearRSB(ResStreamsManager *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RSBDesc *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_051a9e10:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (RSBDesc *)*puVar3;
    if ((this_00 != (RSBDesc *)0x0) &&
       (cVar2 = std::operator==((string *)(this_00 + 0x10),param_1), cVar2 != '\0')) {
      RSBDesc::~RSBDesc(this_00);
      AK::FreeHook(this_00);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      FUN_051a9d00(local_10);
      goto LAB_051a9e10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::Clear() */

void __thiscall Sexy::ResStreamsManager::Clear(ResStreamsManager *this)

{
  bool bVar1;
  undefined8 *puVar2;
  RSBDesc *this_00;
  list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>> *this_01
  ;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>>::clear
            ((list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>> *)
             (this + 0x18));
  std::vector<void*,std::allocator<void*>>::clear
            ((vector<void*,std::allocator<void*>> *)(this + 0x28));
  std::vector<void*,std::allocator<void*>>::clear
            ((vector<void*,std::allocator<void*>> *)(this + 0x40));
  this_01 = (list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
             *)(this + 0x88);
  this[0x10] = (ResStreamsManager)0x0;
  this[0x11] = (ResStreamsManager)0x1;
  local_18 = FUN_051a7b48(*(undefined8 *)this_01);
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_01);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (RSBDesc *)*puVar2;
    if (this_00 != (RSBDesc *)0x0) {
      RSBDesc::~RSBDesc(this_00);
      AK::FreeHook(this_00);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>::
  clear(this_01);
  *(undefined4 *)(this + 0x98) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetFileLocation(unsigned int, std::string const&, unsigned int*,
   unsigned int*) const */

void __thiscall
Sexy::ResStreamsManager::GetFileLocation
          (ResStreamsManager *this,uint param_1,string *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a9f48(*(undefined8 *)(this + 0x88));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_051aa038:
      bVar1 = false;
LAB_051aa03c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar4 = *plVar2;
    if ((lVar4 != 0) && (param_1 < (uint)(*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x60)))) {
      lVar5 = (ulong)(param_1 - *(int *)(lVar4 + 8)) * 0xc0;
      lVar3 = ResStreamsGroup::GetFileIndexData
                        ((ResStreamsGroup *)(*(long *)(lVar4 + 0x68) + lVar5),param_2);
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar4 + 0x68) + lVar5;
        *param_3 = *(int *)(lVar3 + 4) + *(int *)(lVar5 + 0x30) +
                   *(int *)(*(long *)(lVar5 + 0x38) + 0x94);
        *param_4 = *(uint *)(lVar3 + 8);
        goto LAB_051aa03c;
      }
      goto LAB_051aa038;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::FindNextGroupToLoad() */

void __thiscall Sexy::ResStreamsManager::FindNextGroupToLoad(ResStreamsManager *this)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051aa154(*(undefined8 *)(this + 0x18));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x18));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x1c) == '\0') goto LAB_051aa21c;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  lVar3 = 0;
LAB_051aa21c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetBytesLoadedForGroup(Sexy::ResStreamsManager::RSBDesc*, unsigned int)
    */

void __thiscall
Sexy::ResStreamsManager::GetBytesLoadedForGroup
          (ResStreamsManager *this,RSBDesc *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (RSBDesc *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_051a4d90(*(undefined4 *)(*(long *)(param_1 + 0x68) + (ulong)param_2 * 0xc0 + 8));
    if (uVar2 == 3) {
      uVar4 = GetTotalBytesForGroup(this,param_2 + *(int *)(param_1 + 8));
    }
    else if (uVar2 < 2) {
      uVar4 = 0;
    }
    else {
      local_18 = FUN_051aa154(*(undefined8 *)(this + 0x18));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x18));
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        uVar4 = (ulong)bVar1;
        if (!bVar1) break;
        plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        lVar5 = *plVar3;
        if (*(long *)(lVar5 + 8) == *(long *)(param_1 + 0x68) + (ulong)param_2 * 0xc0) {
          uVar4 = (ulong)(uint)(*(int *)(lVar5 + 0x34) + *(int *)(lVar5 + 0x38) +
                               *(int *)(lVar5 + 0x3c));
          break;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetBytesLoadedForGroup(unsigned int) */

void __thiscall
Sexy::ResStreamsManager::GetBytesLoadedForGroup(ResStreamsManager *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  RSBDesc *pRVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar5 = 0xffffffff;
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffff) {
    if ((param_1 >> 0x1c & 1) == 0) {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar9 = (RSBDesc *)*plVar6;
        if ((pRVar9 != (RSBDesc *)0x0) &&
           (param_1 < (uint)(*(int *)(pRVar9 + 8) + *(int *)(pRVar9 + 0x60)))) {
          uVar8 = param_1 - *(int *)(pRVar9 + 8);
          goto LAB_051aa544;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar9 = (RSBDesc *)0x0;
      uVar8 = 0;
LAB_051aa544:
      uVar5 = GetBytesLoadedForGroup(this,pRVar9,uVar8);
    }
    else {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar9 = (RSBDesc *)*plVar6;
        if ((pRVar9 != (RSBDesc *)0x0) &&
           ((param_1 & 0xfffffff) < (uint)(*(int *)(pRVar9 + 0x60) + *(int *)(pRVar9 + 8))))
        goto LAB_051aa428;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      pRVar9 = (RSBDesc *)0x0;
LAB_051aa428:
      lVar7 = GetComposite(this,param_1 & 0xfffffff);
      if (*(int *)(lVar7 + 0x480) == 0) {
        uVar5 = 0;
      }
      else {
        uVar8 = 0;
        puVar10 = (uint *)(lVar7 + 0x80);
        uVar11 = 0;
        do {
          while (cVar3 = IsCompositeChildActive(this,(Child *)(lVar7 + ((ulong)uVar8 + 8) * 0x10)),
                cVar3 != '\0') {
            uVar1 = *puVar10;
            uVar8 = uVar8 + 1;
            puVar10 = puVar10 + 4;
            iVar4 = GetBytesLoadedForGroup(this,pRVar9,uVar1);
            uVar11 = uVar11 + iVar4;
            if (*(uint *)(lVar7 + 0x480) <= uVar8) goto LAB_051aa4a8;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar8 < *(uint *)(lVar7 + 0x480));
LAB_051aa4a8:
        uVar5 = (ulong)uVar11;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::ResStreamsManager(Sexy::SexyAppBase*) */

void __thiscall
Sexy::ResStreamsManager::ResStreamsManager(ResStreamsManager *this,SexyAppBase *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__ResStreamsManager_06a30350;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  CritSect::CritSect((CritSect *)(this + 0x58));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x88));
  std::string::string((string *)(this + 0xa0),"");
  nop();
  *(SexyAppBase **)(this + 8) = param_1;
  this[0x11] = (ResStreamsManager)0x1;
  this[0x10] = (ResStreamsManager)0x0;
  this[0x80] = (ResStreamsManager)0x1;
  std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>::
  clear((list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>> *
        )(this + 0x88));
  *(undefined4 *)(this + 0x98) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::~ResStreamsManager() */

void __thiscall Sexy::ResStreamsManager::~ResStreamsManager(ResStreamsManager *this)

{
  bool bVar1;
  undefined8 *puVar2;
  RSBDesc *this_00;
  list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>> *this_01
  ;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__ResStreamsManager_06a30350;
  this_01 = (list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
             *)(this + 0x88);
  local_18 = FUN_051a7b48(*(undefined8 *)this_01);
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_01);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (RSBDesc *)*puVar2;
    if (this_00 != (RSBDesc *)0x0) {
      RSBDesc::~RSBDesc(this_00);
      AK::FreeHook(this_00);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>::
  clear(this_01);
  std::string::~string((string *)(this + 0xa0));
  std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>::
  ~list(this_01);
  EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x58));
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 0x40));
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 0x28));
  std::list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>>::~list
            ((list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>> *)
             (this + 0x18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResStreamsManager::~ResStreamsManager() */

void __thiscall Sexy::ResStreamsManager::~ResStreamsManager(ResStreamsManager *this)

{
  ~ResStreamsManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::AddDLCRSB(std::string, std::string const&, std::string const&,
   std::string const&, bool) */

void Sexy::ResStreamsManager::AddDLCRSB
               (ResStreamsManager *param_1,undefined8 param_2,string *param_3)

{
  ResStreamGroupDescriptor *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  RSBDesc *pRVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  ResStreamsPool *this;
  ResStreamsGroup *this_00;
  long lVar13;
  ResStreamsPool *pRVar14;
  ulong uVar15;
  ResStreamsGroup *pRVar16;
  bool local_19;
  string asStack_18 [8];
  RSBDesc *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(*(long *)(param_1 + 8) + 0x30) == 0) {
    OutputDebugStrF((wchar_t *)"ResStreamsManager::AddRSB mResStreamsDriver is NULL\n");
    cVar5 = '\0';
    goto LAB_051aad6c;
  }
  cVar5 = IsInitialized(param_1,param_3);
  if (cVar5 != '\0') {
    ClearRSB(param_1,param_3);
  }
  cVar5 = FUN_0547419c(param_3);
  if ((cVar5 == '\0') && (pcVar6 = (char *)FUN_054741b0(param_3,0), *pcVar6 == '/')) {
    FUN_05475d88(asStack_18,param_3);
  }
  else {
    FUN_031dcc6c(asStack_18,param_2,param_3);
  }
  pRVar7 = ::operator_new(0x88);
  RSBDesc::RSBDesc(pRVar7);
  *(undefined4 *)(pRVar7 + 8) = *(undefined4 *)(param_1 + 0x98);
  local_10 = pRVar7;
  thunk_FUN_05475e00(pRVar7 + 0x10,param_3);
  thunk_FUN_05475e00(local_10 + 0x18,asStack_18);
  pRVar7 = local_10;
  uVar8 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0xa8))
                    (*(long **)(*(long *)(param_1 + 8) + 0x28),asStack_18);
  *(undefined8 *)pRVar7 = uVar8;
  cVar5 = '\0';
  if (*(IFile **)local_10 == (IFile *)0x0) {
LAB_051aad54:
    pRVar7 = local_10;
    RSBDesc::~RSBDesc(local_10);
    AK::FreeHook(pRVar7);
  }
  else {
    local_19 = true;
    lVar9 = AllocRSBCommonBuffer(*(IFile **)local_10,(uint *)(local_10 + 0x28),&local_19,false);
    pRVar7 = local_10;
    cVar5 = local_19;
    *(long *)(local_10 + 0x20) = lVar9;
    if (lVar9 == 0) {
      cVar5 = '\0';
      RSBDesc::~RSBDesc(local_10);
      AK::FreeHook(pRVar7);
    }
    else {
      if (local_19 == false) goto LAB_051aad54;
      lVar11 = lVar9;
      if (*(uint *)(lVar9 + 0x14) != 0xffffffff) {
        CompiledMap::Init((CompiledMap *)(local_10 + 0x30),
                          (uchar *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x14)),*(uint *)(lVar9 + 0x10))
        ;
        lVar11 = *(long *)(local_10 + 0x20);
      }
      CompiledMap::Init((CompiledMap *)(local_10 + 0x40),
                        (uchar *)(lVar11 + (ulong)*(uint *)(lVar9 + 0x24)),*(uint *)(lVar9 + 0x20));
      uVar12 = *(uint *)(lVar9 + 0x48);
      uVar15 = (ulong)uVar12;
      lVar11 = uVar15 - 1;
      *(uint *)(local_10 + 0x70) = uVar12;
      puVar10 = operator_new__((ulong)uVar12 * 0x58 + 8);
      pRVar14 = (ResStreamsPool *)(puVar10 + 1);
      *puVar10 = uVar15;
      this = pRVar14;
      if (uVar15 != 0) {
        do {
          lVar11 = lVar11 + -1;
          ResStreamsPool::ResStreamsPool(this);
          this = this + 0x58;
        } while (lVar11 != -1);
      }
      iVar2 = *(int *)(lVar9 + 0x48);
      *(ResStreamsPool **)(local_10 + 0x78) = pRVar14;
      if (iVar2 != 0) {
        uVar12 = 0;
        while( true ) {
          uVar4 = uVar12 * *(int *)(lVar9 + 0x50);
          uVar15 = (ulong)uVar12;
          uVar12 = uVar12 + 1;
          ResStreamsPool::InitDescriptor
                    (pRVar14 + uVar15 * 0x58,
                     (ResStreamPoolDescriptor *)
                     (*(long *)(local_10 + 0x20) + (ulong)uVar4 + (ulong)*(uint *)(lVar9 + 0x4c)));
          if (*(uint *)(lVar9 + 0x48) <= uVar12) break;
          pRVar14 = *(ResStreamsPool **)(local_10 + 0x78);
        }
      }
      uVar12 = *(uint *)(lVar9 + 0x28);
      *(uint *)(local_10 + 0x60) = uVar12;
      uVar15 = (ulong)uVar12;
      lVar11 = uVar15 - 1;
      puVar10 = operator_new__((ulong)uVar12 * 0xc0 + 8);
      pRVar16 = (ResStreamsGroup *)(puVar10 + 1);
      *puVar10 = uVar15;
      this_00 = pRVar16;
      if (uVar15 != 0) {
        do {
          lVar11 = lVar11 + -1;
          ResStreamsGroup::ResStreamsGroup(this_00);
          this_00 = this_00 + 0xc0;
        } while (lVar11 != -1);
      }
      uVar15 = 0;
      iVar2 = *(int *)(lVar9 + 0x28);
      *(ResStreamsGroup **)(local_10 + 0x68) = pRVar16;
      if (iVar2 != 0) {
        do {
          lVar13 = uVar15 * 0xc0;
          pRVar1 = (ResStreamGroupDescriptor *)
                   (*(long *)(local_10 + 0x20) +
                   (ulong)(uint)((int)uVar15 * *(int *)(lVar9 + 0x30)) +
                   (ulong)*(uint *)(lVar9 + 0x2c));
          uVar12 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar12;
          ResStreamsGroup::InitDescriptor
                    (pRVar16 + lVar13,pRVar1,
                     (uchar *)(*(long *)(local_10 + 0x20) + (ulong)*(uint *)(lVar9 + 0x58)),
                     *(uint *)(lVar9 + 0x5c));
          uVar4 = *(uint *)(pRVar1 + 0x88);
          uVar3 = *(uint *)(lVar9 + 0x28);
          pRVar16 = *(ResStreamsGroup **)(local_10 + 0x68);
          lVar11 = *(long *)(local_10 + 0x78);
          *(uint *)(pRVar16 + lVar13 + 0x20) = uVar4;
          *(ulong *)(pRVar16 + lVar13 + 0x28) = lVar11 + (ulong)uVar4 * 0x58;
        } while (uVar12 < uVar3);
      }
      CompiledMap::Init((CompiledMap *)(local_10 + 0x50),
                        (uchar *)(*(long *)(local_10 + 0x20) + (ulong)*(uint *)(lVar9 + 0x44)),
                        *(uint *)(lVar9 + 0x40));
      thunk_FUN_05475e00(param_1 + 0xa0,asStack_18);
      std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
      ::push_back((list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
                   *)(param_1 + 0x88),&local_10);
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + *(int *)(lVar9 + 0x28);
    }
  }
  std::string::~string(asStack_18);
LAB_051aad6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::LoadGroup(Sexy::ResStreamsManager::RSBDesc*, unsigned int) */

void __thiscall
Sexy::ResStreamsManager::LoadGroup(ResStreamsManager *this,RSBDesc *param_1,uint param_2)

{
  ResStreamsGroup *pRVar1;
  ResStreamsPool *this_00;
  uint uVar2;
  undefined4 uVar3;
  ResStreamsLoadDesc *this_01;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  AutoCrit aAStack_18 [8];
  ResStreamsLoadDesc *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (RSBDesc *)0x0) {
    if (param_2 != 0xffffffff) {
      AutoCrit::AutoCrit(aAStack_18,(CritSect *)(this + 0x58));
      lVar6 = (ulong)param_2 * 0xc0;
      if (1 < *(int *)(*(long *)(param_1 + 0x68) + lVar6 + 8) - 2U) {
        this[0x11] = (ResStreamsManager)0x0;
        this_01 = ::operator_new(0x68);
        ResStreamsLoadDesc::ResStreamsLoadDesc(this_01);
        lVar5 = *(long *)(param_1 + 0x78);
        pRVar1 = (ResStreamsGroup *)(*(long *)(param_1 + 0x68) + lVar6);
        uVar2 = *(uint *)(pRVar1 + 0x20);
        *(undefined8 *)this_01 = *(undefined8 *)param_1;
        *(ResStreamsGroup **)(this_01 + 8) = pRVar1;
        this_00 = (ResStreamsPool *)(lVar5 + (ulong)uVar2 * 0x58);
        *(ResStreamsPool **)(this_01 + 0x10) = this_00;
        local_10 = this_01;
        uVar3 = ResStreamsPool::LockInstanceForGroup(this_00,pRVar1,param_2);
        *(undefined4 *)(this_01 + 0x18) = uVar3;
        std::list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>>::push_back
                  ((list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>> *)
                   (this + 0x18),&local_10);
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar6 + 8) = 2;
      }
      AutoCrit::~AutoCrit(aAStack_18);
      uVar4 = 1;
      goto LAB_051ab1b4;
    }
  }
  uVar4 = 0;
LAB_051ab1b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::LoadGroup(unsigned int) */

void __thiscall Sexy::ResStreamsManager::LoadGroup(ResStreamsManager *this,uint param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  RSBDesc *pRVar8;
  uint *puVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != 0xffffffff) && (cVar1 = CanLoadGroup(this,param_1), cVar1 != '\0')) {
    if ((param_1 >> 0x1c & 1) == 0) {
      local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 0x88));
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar3) break;
        plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pRVar8 = (RSBDesc *)*plVar5;
        if ((pRVar8 != (RSBDesc *)0x0) &&
           (param_1 < (uint)(*(int *)(pRVar8 + 8) + *(int *)(pRVar8 + 0x60)))) {
          uVar7 = param_1 - *(int *)(pRVar8 + 8);
          goto LAB_051ab33c;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      uVar7 = 0xffffffff;
      pRVar8 = (RSBDesc *)0x0;
LAB_051ab33c:
      uVar2 = LoadGroup(this,pRVar8,uVar7);
      goto LAB_051ab29c;
    }
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      uVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!(bool)uVar2) break;
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pRVar8 = (RSBDesc *)*puVar4;
      if ((pRVar8 != (RSBDesc *)0x0) &&
         ((param_1 & 0xfffffff) < (uint)(*(int *)(pRVar8 + 0x60) + *(int *)(pRVar8 + 8)))) {
        uVar7 = 0;
        lVar6 = GetComposite(this,param_1 & 0xfffffff);
        puVar9 = (uint *)(lVar6 + 0x80);
        if (*(int *)(lVar6 + 0x480) == 0) goto LAB_051ab29c;
        goto LAB_051ab384;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
LAB_051ab298:
  uVar2 = 0;
  goto LAB_051ab29c;
  while( true ) {
    uVar7 = uVar7 + 1;
    puVar9 = puVar9 + 4;
    if (*(uint *)(lVar6 + 0x480) <= uVar7) break;
LAB_051ab384:
    cVar1 = IsCompositeChildActive(this,(Child *)(lVar6 + ((ulong)uVar7 + 8) * 0x10));
    if ((cVar1 != '\0') && (cVar1 = LoadGroup(this,pRVar8,*puVar9), cVar1 == '\0'))
    goto LAB_051ab298;
  }
LAB_051ab29c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* Sexy::ResStreamsManager::LoadGroup(std::string const&) */

void __thiscall Sexy::ResStreamsManager::LoadGroup(ResStreamsManager *this,string *param_1)

{
  uint uVar1;
  
  uVar1 = LookupGroup(this,param_1);
  LoadGroup(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::ForceLoadGPUData(int) */

void __thiscall Sexy::ResStreamsManager::ForceLoadGPUData(ResStreamsManager *this,int param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ResStreamsLoadDesc *this_00;
  long lVar6;
  undefined8 local_18;
  ResStreamsLoadDesc *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
  while( true ) {
    local_10 = (ResStreamsLoadDesc *)
               std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x88));
    bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1000,0x51ab494);
      (*pcVar3)();
    }
    puVar5 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    puVar5 = (undefined8 *)*puVar5;
    if ((puVar5 != (undefined8 *)0x0) &&
       ((uint)param_1 < (uint)(*(int *)(puVar5 + 1) + *(int *)(puVar5 + 0xc)))) break;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  *(undefined4 *)(puVar5[0xd] + (ulong)(uint)(param_1 - *(int *)(puVar5 + 1)) * 0xc0 + 8) = 2;
  this_00 = ::operator_new(0x68);
  ResStreamsLoadDesc::ResStreamsLoadDesc(this_00);
  lVar1 = puVar5[0xd] + (long)param_1 * 0xc0;
  lVar6 = puVar5[0xf];
  *(undefined8 *)this_00 = *puVar5;
  *(long *)(this_00 + 8) = lVar1;
  uVar2 = *(uint *)(lVar1 + 0x20);
  *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(lVar1 + 0x70);
  this_00[0x22] = (ResStreamsLoadDesc)0x0;
  this_00[0x20] = (ResStreamsLoadDesc)0x0;
  *(ulong *)(this_00 + 0x10) = lVar6 + (ulong)uVar2 * 0x58;
  local_10 = this_00;
  std::list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>>::push_back
            ((list<Sexy::ResStreamsLoadDesc*,std::allocator<Sexy::ResStreamsLoadDesc*>> *)
             (this + 0x18),&local_10);
  this[0x11] = (ResStreamsManager)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::KickOffDecodeTask(void*) */

void __thiscall Sexy::ResStreamsManager::KickOffDecodeTask(ResStreamsManager *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ResStreamsLoadDesc *pRVar7;
  uint *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar7 = (ResStreamsLoadDesc *)FUN_051a4d7c(*(undefined8 *)((long)param_1 + 0x10));
  if (*(code **)(*(long *)param_1 + 0x70) == IResStreamsDriver::Task::GetNumBytesRead) {
    uVar4 = IResStreamsDriver::Task::GetNumBytesRead();
    iVar1 = *(int *)(pRVar7 + 0x40);
  }
  else {
    uVar4 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
    iVar1 = *(int *)(pRVar7 + 0x40);
  }
  uVar16 = 0;
  local_1c = uVar4;
  if (iVar1 != 0) {
    if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
      plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
    }
    else {
      plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
    }
    pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))();
    local_14 = *(int *)(pRVar7 + 0x54) - *(int *)(pRVar7 + 0x40);
    puVar8 = eastl::min_alt<unsigned_int>(&local_14,&local_1c);
    uVar16 = *puVar8;
    uVar20 = (ulong)uVar16;
    lVar13 = (**(code **)(**(long **)(pRVar7 + 0x60) + 0x30))(*(long **)(pRVar7 + 0x60));
    memcpy((void *)(lVar13 + (ulong)*(uint *)(pRVar7 + 0x40)),pvVar12,uVar20);
    uVar18 = uVar16 + *(int *)(pRVar7 + 0x40);
    *(uint *)(pRVar7 + 0x40) = uVar18;
    if ((uVar16 & 3) != 0) {
      if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
        plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
      }
      else {
        plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
      }
      pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))();
      if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
        plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
      }
      else {
        plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
      }
      uVar4 = uVar4 - uVar16;
      uVar16 = 0;
      lVar13 = (**(code **)(*plVar19 + 0x30))();
      memmove(pvVar12,(void *)(lVar13 + uVar20),(ulong)uVar4);
      uVar18 = *(uint *)(pRVar7 + 0x40);
      local_1c = uVar4;
    }
    if (*(uint *)(pRVar7 + 0x54) <= uVar18) {
      uVar9 = ResStreamsGroup::GetTextureDescriptor
                        (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
      uVar5 = ResStreamsGroup::GetTextureReference
                        (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
      uVar6 = ResStreamsGroup::GetTextureMultiReference
                        (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
      uVar4 = *(uint *)(pRVar7 + 0x48);
      if (uVar4 < *(uint *)(pRVar7 + 0x4c)) {
        pvVar12 = (void *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x90))
                                    (*(long **)(*(long *)(this + 8) + 0x30),
                                     *(undefined8 *)(pRVar7 + 0x60),0,uVar9,uVar5,uVar6,uVar4,1);
        FUN_051a4d80((long)pvVar12 + 8,0x2002);
        FUN_051a4d88((long)pvVar12 + 0x10,pRVar7);
        *(int *)(pRVar7 + 0x58) = *(int *)(pRVar7 + 0x58) + 1;
        local_10 = pvVar12;
        std::vector<void*,std::allocator<void*>>::push_back
                  ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
        uVar4 = *(uint *)(pRVar7 + 0x48);
      }
      *(undefined8 *)(pRVar7 + 0x60) = 0;
      *(undefined4 *)(pRVar7 + 0x40) = 0;
      *(uint *)(pRVar7 + 0x48) = uVar4 + 1;
      OnAdvanceTiles(this,pRVar7);
    }
  }
  if (uVar16 < local_1c) {
    uVar4 = *(uint *)(pRVar7 + 0x54);
    uVar18 = local_1c - uVar16;
    local_18 = 0;
    if (uVar4 != 0) {
      local_18 = uVar18 / uVar4;
    }
    if (local_18 != 0) {
      uVar17 = local_1c;
      do {
        local_14 = *(int *)(pRVar7 + 0x50) - *(int *)(pRVar7 + 0x48);
        puVar8 = eastl::min_alt<unsigned_int>(&local_18,&local_14);
        uVar15 = *puVar8;
        uVar14 = uVar15;
        if (((uVar15 * uVar4 & 3) != 0) && (1 < uVar15)) {
          uVar2 = uVar15 * uVar4 - uVar4;
          do {
            uVar3 = uVar2 & 3;
            uVar14 = uVar14 - 1;
            uVar2 = uVar2 - uVar4;
          } while (uVar3 != 0 && 1 < uVar14);
        }
        if (uVar14 == 1) {
          if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
            plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
          }
          else {
            plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
          }
          pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))();
          if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
            plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
          }
          else {
            plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
          }
          lVar13 = (**(code **)(*plVar19 + 0x30))();
          uVar20 = (ulong)uVar16;
          uVar16 = 0;
          memmove(pvVar12,(void *)(lVar13 + uVar20),(ulong)uVar18);
          local_1c = uVar18;
          uVar17 = uVar18;
        }
        else {
          uVar15 = uVar14;
          if ((uVar16 & 3) != 0) {
            if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
              plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
            }
            else {
              plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
            }
            pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))();
            if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
              plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
            }
            else {
              plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
            }
            lVar13 = (**(code **)(*plVar19 + 0x30))();
            uVar20 = (ulong)uVar16;
            uVar16 = 0;
            memmove(pvVar12,(void *)(lVar13 + uVar20),(ulong)uVar18);
            local_1c = uVar18;
            uVar17 = uVar18;
          }
        }
        uVar9 = ResStreamsGroup::GetTextureDescriptor
                          (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
        uVar5 = ResStreamsGroup::GetTextureReference
                          (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
        uVar6 = ResStreamsGroup::GetTextureMultiReference
                          (*(ResStreamsGroup **)(pRVar7 + 8),*(uint *)(pRVar7 + 0x44));
        uVar18 = *(uint *)(pRVar7 + 0x48);
        uVar4 = *(uint *)(pRVar7 + 0x4c);
        if (uVar18 < uVar4) {
          plVar19 = *(long **)(*(long *)(this + 8) + 0x30);
          uVar14 = uVar4 - uVar18;
          if (uVar15 + uVar18 < uVar4) {
            uVar14 = uVar15;
          }
          pcVar10 = *(code **)(*plVar19 + 0x90);
          if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
            uVar11 = IResStreamsDriver::Task::GetOutBuffer();
          }
          else {
            uVar11 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
            uVar18 = *(uint *)(pRVar7 + 0x48);
          }
          pvVar12 = (void *)(*pcVar10)(plVar19,uVar11,uVar16,uVar9,uVar5,uVar6,uVar18,uVar14);
          FUN_051a4d80((long)pvVar12 + 8,0x2002);
          FUN_051a4d88((long)pvVar12 + 0x10,pRVar7);
          *(int *)(pRVar7 + 0x58) = *(int *)(pRVar7 + 0x58) + 1;
          local_10 = pvVar12;
          std::vector<void*,std::allocator<void*>>::push_back
                    ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
          uVar18 = *(uint *)(pRVar7 + 0x48);
        }
        *(uint *)(pRVar7 + 0x48) = uVar18 + uVar15;
        uVar16 = uVar16 + uVar15 * *(int *)(pRVar7 + 0x54);
        OnAdvanceTiles(this,pRVar7);
        uVar4 = *(uint *)(pRVar7 + 0x54);
        uVar18 = uVar17 - uVar16;
        local_18 = 0;
        if (uVar4 != 0) {
          local_18 = uVar18 / uVar4;
        }
      } while (local_18 != 0);
      local_18 = 0;
      if (uVar17 <= uVar16) goto LAB_051ad150;
    }
    if (*(code **)(*(long *)param_1 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
      plVar19 = (long *)IResStreamsDriver::Task::GetOutBuffer();
    }
    else {
      plVar19 = (long *)(**(code **)(*(long *)param_1 + 0x58))(param_1);
    }
    lVar13 = (**(code **)(*plVar19 + 0x30))();
    plVar19 = *(long **)(pRVar7 + 0x60);
    if (plVar19 == (long *)0x0) {
      plVar19 = (long *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0xa8))
                                  (*(long **)(*(long *)(this + 8) + 0x30));
      *(long **)(pRVar7 + 0x60) = plVar19;
    }
    pvVar12 = (void *)(**(code **)(*plVar19 + 0x30))();
    memcpy(pvVar12,(void *)(lVar13 + (ulong)uVar16),(ulong)uVar18);
    *(uint *)(pRVar7 + 0x40) = *(int *)(pRVar7 + 0x40) + uVar18;
  }
LAB_051ad150:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::StartResidentDataLoad(Sexy::ResStreamsLoadDesc*) */

void __thiscall
Sexy::ResStreamsManager::StartResidentDataLoad(ResStreamsManager *this,ResStreamsLoadDesc *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  Sexy *pSVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  string asStack_18 [8];
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResStreamsPool::Allocate(*(ResStreamsPool **)(param_1 + 0x10));
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x38))
            (*(long **)(*(long *)(this + 8) + 0x30),*(long *)(param_1 + 0x10),
             (ulong)*(uint *)(param_1 + 0x18),
             *(undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x10) + 0x28) + (ulong)*(uint *)(param_1 + 0x18) * 8),
             *(undefined8 *)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + (ulong)uVar1 * 8) =
       *(undefined8 *)(param_1 + 8);
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  uVar2 = LookupGroupIndex(this,*(string **)(param_1 + 8));
  *(undefined4 *)(lVar7 + (ulong)uVar1 * 4) = uVar2;
  pSVar3 = (Sexy *)ResStreamsGroup::StartLoad(*(ResStreamsGroup **)(param_1 + 8));
  lVar8 = *(long *)(param_1 + 8);
  pSVar3 = (Sexy *)SexyTime(pSVar3);
  lVar7 = *(long *)(param_1 + 8);
  *(Sexy **)(lVar8 + 0x58) = pSVar3;
  uVar4 = SexyTime(pSVar3);
  *(undefined8 *)(lVar7 + 0x68) = uVar4;
  FUN_05475d88(asStack_18,*(undefined8 *)(param_1 + 8));
  (**(code **)(**(long **)param_1 + 0x48))
            (*(long **)param_1,*(undefined4 *)(*(long *)(param_1 + 8) + 0x30));
  if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x90) +
      *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x98) != 0) {
    plVar6 = *(long **)(*(long *)(this + 8) + 0x30);
    uVar10 = *(undefined8 *)param_1;
    pcVar9 = *(code **)(*plVar6 + 0x60);
    uVar4 = ResStreamsPool::GetResidentDataMemory
                      (*(ResStreamsPool **)(param_1 + 0x10),*(uint *)(param_1 + 0x18));
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    pvVar5 = (void *)(*pcVar9)(plVar6,uVar10,uVar4,*(int *)(lVar7 + 0x90) + *(int *)(lVar7 + 0x98),
                               *(undefined4 *)(*(long *)(param_1 + 8) + 0x30));
    FUN_051a4d80((long)pvVar5 + 8,0x1001);
    FUN_051a4d88((long)pvVar5 + 0x10,param_1);
    local_10 = pvVar5;
    std::vector<void*,std::allocator<void*>>::push_back
              ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::StartGPUDataLoad(Sexy::ResStreamsLoadDesc*) */

void __thiscall
Sexy::ResStreamsManager::StartGPUDataLoad(ResStreamsManager *this,ResStreamsLoadDesc *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  void *pvVar7;
  ResStreamsGroup *this_00;
  long lVar8;
  string asStack_18 [8];
  void *local_10;
  long local_8;
  
  this_00 = *(ResStreamsGroup **)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this_00 + 0x38) + 0xa8) == 0) {
    param_1[0x1e] = (ResStreamsLoadDesc)0x1;
    StartLoadNextGroup(this);
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar2 = FUN_051a4d94(*(undefined4 *)(this_00 + 0x80));
    if (0 < iVar2) {
      uVar5 = ResStreamsGroup::GetTextureDescriptor(this_00,0);
      uVar3 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x78))
                        (*(long **)(*(long *)(this + 8) + 0x30),uVar5);
      local_10 = (void *)CONCAT44(local_10._4_4_,uVar3);
      uVar4 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x88))
                        (*(long **)(*(long *)(this + 8) + 0x30),uVar5);
      *(uint *)(param_1 + 0x54) = uVar4;
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = (uint)local_10 / uVar4;
      }
      *(uint *)(param_1 + 0x4c) = uVar1;
      FUN_051a4f50(&local_10);
      this_00 = *(ResStreamsGroup **)(param_1 + 8);
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x54) != 0) {
        uVar1 = (uint)local_10 / *(uint *)(param_1 + 0x54);
      }
      *(uint *)(param_1 + 0x50) = uVar1;
    }
    FUN_05475d88(asStack_18,this_00);
    (**(code **)(**(long **)param_1 + 0x48))
              (*(long **)param_1,
               (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0xa4) +
               (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x30));
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    if (*(int *)(lVar8 + 0x8c) == 0) {
      uVar3 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x98))
                        (*(long **)(*(long *)(this + 8) + 0x30));
      local_10 = (void *)CONCAT44(local_10._4_4_,uVar3);
      puVar6 = eastl::min_alt<unsigned_int>((uint *)(lVar8 + 0xa8),(uint *)&local_10);
      pvVar7 = (void *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x58))
                                 (*(long **)(*(long *)(this + 8) + 0x30),*(undefined8 *)param_1,
                                  *puVar6);
      uVar5 = 0x1002;
    }
    else {
      uVar3 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x98))
                        (*(long **)(*(long *)(this + 8) + 0x30));
      local_10 = (void *)CONCAT44(local_10._4_4_,uVar3);
      puVar6 = eastl::min_alt<unsigned_int>((uint *)(lVar8 + 0xa8),(uint *)&local_10);
      pvVar7 = (void *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x58))
                                 (*(long **)(*(long *)(this + 8) + 0x30),*(undefined8 *)param_1,
                                  *puVar6);
      uVar5 = 0x2002;
    }
    FUN_051a4d80((long)pvVar7 + 8,uVar5);
    FUN_051a4d88((long)pvVar7 + 0x10,param_1);
    local_10 = pvVar7;
    std::vector<void*,std::allocator<void*>>::push_back
              ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
    std::string::~string(asStack_18);
    uVar5 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* Sexy::ResStreamsManager::StartLoadNextGroup() */

void __thiscall Sexy::ResStreamsManager::StartLoadNextGroup(ResStreamsManager *this)

{
  char cVar1;
  ResStreamsLoadDesc *pRVar2;
  
  cVar1 = SexyAppBase::IsMainThread(*(SexyAppBase **)(this + 8));
  if ((cVar1 != '\0') &&
     (pRVar2 = (ResStreamsLoadDesc *)FindNextGroupToLoad(this), pRVar2 != (ResStreamsLoadDesc *)0x0)
     ) {
    pRVar2[0x1c] = (ResStreamsLoadDesc)0x1;
    if (pRVar2[0x22] != (ResStreamsLoadDesc)0x0) {
      StartResidentDataLoad(this,pRVar2);
      return;
    }
    if (pRVar2[0x21] != (ResStreamsLoadDesc)0x0) {
      StartGPUDataLoad(this,pRVar2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::OnTaskFinished(void*) */

void __thiscall Sexy::ResStreamsManager::OnTaskFinished(ResStreamsManager *this,void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ResStreamsLoadDesc *pRVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  uint local_1c;
  string asStack_18 [8];
  void *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = (ResStreamsLoadDesc *)FUN_051a4d7c(*(undefined8 *)((long)param_1 + 0x10));
  iVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  if (iVar2 == 1) {
    uVar3 = FUN_051a4d78(*(undefined4 *)((long)param_1 + 8));
    if (((uVar3 & 1) == 0) && ((uVar3 >> 1 & 1) != 0)) {
      lVar9 = *(long *)param_1;
      if (*(code **)(lVar9 + 0x70) == IResStreamsDriver::Task::GetNumBytesRead) {
        iVar2 = IResStreamsDriver::Task::GetNumBytesRead();
      }
      else {
        iVar2 = (**(code **)(lVar9 + 0x70))(param_1);
        lVar9 = *(long *)param_1;
      }
      pcVar11 = *(code **)(lVar9 + 0x60);
      *(int *)(pRVar5 + 0x38) = *(int *)(pRVar5 + 0x38) + iVar2;
      if (pcVar11 == IResStreamsDriver::Task::DidFinishDecompression) {
        cVar1 = IResStreamsDriver::Task::DidFinishDecompression();
      }
      else {
        cVar1 = (*pcVar11)(param_1);
      }
      if (cVar1 == '\0') {
        plVar10 = *(long **)(*(long *)(this + 8) + 0x30);
        pcVar11 = *(code **)(*plVar10 + 0x68);
        if (*(code **)(*(long *)param_1 + 0x50) == IResStreamsDriver::Task::GetInBuffer) {
          uVar6 = IResStreamsDriver::Task::GetInBuffer();
        }
        else {
          uVar6 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
        }
        pvVar7 = (void *)(*pcVar11)(plVar10,uVar6,param_1);
        FUN_051a4d80((long)pvVar7 + 8,0x2002);
        FUN_051a4d88((long)pvVar7 + 0x10,pRVar5);
        local_10 = pvVar7;
        std::vector<void*,std::allocator<void*>>::push_back
                  ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
        nop();
      }
      KickOffDecodeTask(this,param_1);
    }
  }
  else if (iVar2 == 0) {
    uVar3 = FUN_051a4d78(*(undefined4 *)((long)param_1 + 8));
    if ((uVar3 & 1) == 0) {
      if ((uVar3 >> 1 & 1) != 0) {
        if (*(code **)(*(long *)param_1 + 0x70) == IResStreamsDriver::Task::GetNumBytesRead) {
          iVar2 = IResStreamsDriver::Task::GetNumBytesRead();
        }
        else {
          iVar2 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
        }
        lVar9 = *(long *)(*(long *)(pRVar5 + 8) + 0x38);
        *(int *)(pRVar5 + 0x2c) = *(int *)(pRVar5 + 0x2c) + iVar2;
        if (*(int *)(lVar9 + 0x8c) == 0) {
          KickOffDecodeTask(this,param_1);
        }
        else {
          lVar9 = *(long *)param_1;
          plVar10 = *(long **)(*(long *)(this + 8) + 0x30);
          pcVar11 = *(code **)(*plVar10 + 0x70);
          if (*(code **)(lVar9 + 0x58) == IResStreamsDriver::Task::GetOutBuffer) {
            uVar6 = IResStreamsDriver::Task::GetOutBuffer();
          }
          else {
            uVar6 = (**(code **)(lVar9 + 0x58))(param_1);
            lVar9 = *(long *)param_1;
          }
          if (*(code **)(lVar9 + 0x70) == IResStreamsDriver::Task::GetNumBytesRead) {
            uVar4 = IResStreamsDriver::Task::GetNumBytesRead();
          }
          else {
            uVar4 = (**(code **)(lVar9 + 0x70))(param_1);
          }
          pvVar7 = (void *)(*pcVar11)(plVar10,uVar6,uVar4,(byte)pRVar5[0x23] ^ 1);
          pRVar5[0x23] = (ResStreamsLoadDesc)0x1;
          FUN_051a4d80((long)pvVar7 + 8,0x2002);
          FUN_051a4d88((long)pvVar7 + 0x10,pRVar5);
          local_10 = pvVar7;
          std::vector<void*,std::allocator<void*>>::push_back
                    ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
          nop();
        }
        if (*(uint *)(pRVar5 + 0x2c) < *(uint *)(*(long *)(*(long *)(pRVar5 + 8) + 0x38) + 0xa8)) {
          FUN_05475d88(asStack_18);
          lVar9 = *(long *)(*(long *)(pRVar5 + 8) + 0x38);
          if (*(int *)(lVar9 + 0x8c) == 0) {
            plVar10 = *(long **)(*(long *)(this + 8) + 0x30);
            local_1c = *(int *)(lVar9 + 0xa8) - *(int *)(pRVar5 + 0x2c);
            uVar4 = (**(code **)(*plVar10 + 0x98))(plVar10);
            local_10 = (void *)CONCAT44(local_10._4_4_,uVar4);
            puVar8 = eastl::min_alt<unsigned_int>(&local_1c,(uint *)&local_10);
            pvVar7 = (void *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x58))
                                       (*(long **)(*(long *)(this + 8) + 0x30),*(undefined8 *)pRVar5
                                        ,*puVar8);
            uVar6 = 0x1002;
          }
          else {
            plVar10 = *(long **)(*(long *)(this + 8) + 0x30);
            local_1c = *(int *)(lVar9 + 0xa8) - *(int *)(pRVar5 + 0x2c);
            uVar4 = (**(code **)(*plVar10 + 0x98))(plVar10);
            local_10 = (void *)CONCAT44(local_10._4_4_,uVar4);
            puVar8 = eastl::min_alt<unsigned_int>(&local_1c,(uint *)&local_10);
            pvVar7 = (void *)(**(code **)(**(long **)(*(long *)(this + 8) + 0x30) + 0x58))
                                       (*(long **)(*(long *)(this + 8) + 0x30),*(undefined8 *)pRVar5
                                        ,*puVar8);
            uVar6 = 0x2002;
          }
          FUN_051a4d80((long)pvVar7 + 8,uVar6);
          FUN_051a4d88((long)pvVar7 + 0x10,pRVar5);
          local_10 = pvVar7;
          std::vector<void*,std::allocator<void*>>::push_back
                    ((vector<void*,std::allocator<void*>> *)(this + 0x28),&local_10);
          nop();
          std::string::~string(asStack_18);
        }
        else {
          StartLoadNextGroup(this);
        }
      }
    }
    else {
      OnResidentDataFinished(this,pRVar5);
      StartGPUDataLoad(this,pRVar5);
    }
  }
  else if ((iVar2 == 2) &&
          (uVar3 = FUN_051a4d78(*(undefined4 *)((long)param_1 + 8)), (uVar3 >> 1 & 1) != 0)) {
    iVar2 = *(int *)(pRVar5 + 0x58);
    *(int *)(pRVar5 + 0x58) = iVar2 + -1;
    uVar3 = FUN_051a4d94(*(undefined4 *)(*(long *)(pRVar5 + 8) + 0x80));
    if ((uVar3 <= *(uint *)(pRVar5 + 0x44)) && (iVar2 + -1 == 0)) {
      OnGPUDataFinished(this,pRVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::Update() */

void __thiscall Sexy::ResStreamsManager::Update(ResStreamsManager *this)

{
  CritSect *this_00;
  vector<void*,std::allocator<void*>> *this_01;
  vector<void*,std::allocator<void*>> *this_02;
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_03;
  ResStreamsLoadDesc RVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  ResStreamsManager RVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ResStreamsLoadDesc *this_04;
  undefined8 local_20;
  undefined8 local_18;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(this + 8) + 0x3ad) == '\0') {
    this_00 = (CritSect *)(this + 0x58);
    cVar2 = CritSect::TryLock(this_00);
    if (cVar2 != '\0') {
      this_01 = (vector<void*,std::allocator<void*>> *)(this + 0x28);
      this_02 = (vector<void*,std::allocator<void*>> *)(this + 0x40);
      iVar8 = 5;
      this_03 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0x18);
      cVar2 = SexyAppBase::IsMainThread(*(SexyAppBase **)(this + 8));
LAB_051ade7c:
      cVar3 = std::vector<void*,std::allocator<void*>>::empty(this_01);
      if ((((cVar3 != '\0') &&
           (cVar3 = std::vector<void*,std::allocator<void*>>::empty(this_02), cVar3 != '\0')) &&
          (lVar7 = FindNextGroupToLoad(this), lVar7 != 0)) &&
         (cVar3 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                            (this_03), cVar3 == '\0')) {
        StartLoadNextGroup(this);
      }
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_01);
      do {
        local_10 = (long *)std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)this_01);
        bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10)
        ;
        while( true ) {
          if (!bVar4) {
            local_20 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_02);
            goto LAB_051adf48;
          }
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          plVar9 = (long *)*puVar6;
          cVar3 = (**(code **)(*plVar9 + 0x28))(plVar9);
          if (cVar3 == '\0') break;
          if (cVar2 == '\0') {
            if (*(code **)(*plVar9 + 0x78) == IResStreamsDriver::Task::CanExecuteOffMainThread) {
              cVar3 = IResStreamsDriver::Task::CanExecuteOffMainThread();
            }
            else {
              cVar3 = (**(code **)(*plVar9 + 0x78))(plVar9);
            }
            if (cVar3 == '\0') break;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_10,(__normal_iterator *)&local_20);
          local_20 = std::vector<void*,std::allocator<void*>>::erase(this_01,local_10);
          (**(code **)(*plVar9 + 0x30))(plVar9);
          local_10 = plVar9;
          std::vector<void*,std::allocator<void*>>::push_back(this_02,(void **)&local_10);
          local_10 = (long *)std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)this_01);
          bVar4 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
        }
        FUN_051aa568((__normal_iterator *)&local_20);
      } while( true );
    }
  }
LAB_051ade08:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_051adf48:
  local_10 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_02);
  bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  while( true ) {
    if (!bVar4) {
      local_18 = FUN_051aa154(*(undefined8 *)(this + 0x18));
      goto LAB_051ae028;
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    plVar9 = (long *)*puVar6;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    cVar3 = (**(code **)(*plVar9 + 0x38))(plVar9);
    if (cVar3 == '\0') break;
    cVar3 = (**(code **)(*plVar9 + 0x40))(plVar9);
    if (cVar3 != '\0') {
      this[0x10] = (ResStreamsManager)0x1;
      CritSect::Unlock(this_00);
      goto LAB_051ade08;
    }
    OnTaskFinished(this,plVar9);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    local_20 = std::vector<void*,std::allocator<void*>>::erase(this_02,local_10);
    (**(code **)(*plVar9 + 0x48))(plVar9);
    (**(code **)(*plVar9 + 8))(plVar9);
    local_10 = (long *)std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_02);
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  }
  FUN_051aa568((__normal_iterator *)&local_20);
  goto LAB_051adf48;
LAB_051ae028:
  local_10 = (long *)std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)this_03);
  bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  while( true ) {
    if (!bVar4) {
      iVar8 = iVar8 + -1;
      if (iVar8 != 0) goto LAB_051ade7c;
      RVar5 = (ResStreamsManager)
              std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_03)
      ;
      this[0x11] = RVar5;
      CritSect::Unlock(this_00);
      goto LAB_051ade08;
    }
    puVar6 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_04 = (ResStreamsLoadDesc *)*puVar6;
    cVar3 = ResStreamsLoadDesc::IsFinished(this_04);
    if (cVar3 == '\0') break;
    RVar1 = this_04[0x20];
    *(undefined4 *)(*(long *)(this_04 + 8) + 8) = 3;
    if (RVar1 != (ResStreamsLoadDesc)0x0) {
      lVar7 = SexyTime((Sexy *)(ulong)(byte)RVar1);
      *(long *)(*(long *)(this_04 + 8) + 0x40) = lVar7 - *(long *)(*(long *)(this_04 + 8) + 0x58);
    }
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    local_18 = FUN_051aa5c8(local_10);
    AK::FreeHook(this_04);
    local_10 = (long *)std::
                       __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                                 ((TaskResource **)this_03);
    bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  }
  FUN_051a4dd0((rbtree_iterator *)&local_18);
  goto LAB_051ae028;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::ForceLoadGroup(unsigned int, std::string const&) */

void Sexy::ResStreamsManager::ForceLoadGroup(uint param_1,string *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  ResStreamsManager *this;
  long *plVar6;
  char *__s;
  undefined8 uVar7;
  uint uVar8;
  size_t __n;
  long lVar9;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  size_t local_8;
  
  this = (ResStreamsManager *)(ulong)param_1;
  uVar8 = (uint)param_2;
  local_8 = ___stack_chk_guard;
  if (uVar8 == 0xffffffff) {
    uVar3 = 0;
    goto LAB_051ae274;
  }
  __n = ___stack_chk_guard;
  iVar5 = GetGroupStatus(this,uVar8);
  if (iVar5 == 3) {
    uVar3 = 1;
    goto LAB_051ae274;
  }
  Set8BytesTo0(asStack_20);
  if ((uVar8 >> 0x1c & 1) == 0) {
    local_18 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1000,0x51ae270);
        (*pcVar1)();
      }
      plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar9 = *plVar6;
      if ((lVar9 != 0) && (uVar8 < (uint)(*(int *)(lVar9 + 8) + *(int *)(lVar9 + 0x60)))) break;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    thunk_FUN_05475e00(asStack_20,
                       *(long *)(lVar9 + 0x68) + (ulong)(uVar8 - *(int *)(lVar9 + 8)) * 0xc0);
    if (iVar5 == 0) goto LAB_051ae30c;
LAB_051ae2cc:
    while ((cVar4 = IsGroupLoaded(this,uVar8), cVar4 == '\0' &&
           (*(char *)(gSexyAppBase + 0x3ad) == '\0'))) {
      cVar4 = NullProfileData::GetGamepadIndex((NullProfileData *)this);
      if (cVar4 != '\0') {
        uVar7 = FUN_0547429c(asStack_20);
        OutputDebugStrF((wchar_t *)"RSB Error: Could not load group \'%s\'.\n",uVar7);
        uVar3 = 0;
        goto LAB_051ae300;
      }
      Update(this);
    }
    uVar3 = IsGroupLoaded(this,uVar8);
  }
  else {
    __s = (char *)GetComposite(this,uVar8 & 0xfffffff);
    std::string::append(asStack_20,__s,__n);
    if (iVar5 != 0) goto LAB_051ae2cc;
LAB_051ae30c:
    cVar4 = LoadGroup(this,uVar8);
    uVar3 = 0;
    if (cVar4 != '\0') goto LAB_051ae2cc;
  }
LAB_051ae300:
  std::string::~string(asStack_20);
LAB_051ae274:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* Sexy::ResStreamsManager::ForceLoadGroup(std::string const&, std::string const&) */

void Sexy::ResStreamsManager::ForceLoadGroup(string *param_1,string *param_2)

{
  ulong uVar1;
  
  uVar1 = LookupGroup((ResStreamsManager *)param_1,param_2);
  ForceLoadGroup((uint)param_1,(string *)(uVar1 & 0xffffffff));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GetGroupForFile(std::string const&, bool, bool) */

void __thiscall
Sexy::ResStreamsManager::GetGroupForFile
          (ResStreamsManager *this,string *param_1,bool param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  string *psVar7;
  long lVar8;
  undefined8 local_418;
  undefined8 local_410;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    uVar3 = GetLoadedGroupForFile(this,param_1);
    psVar7 = (string *)(ulong)uVar3;
    if (uVar3 != 0xffffffff) goto LAB_051ae404;
  }
  cVar1 = HasGlobalFileIndex(this);
  if (cVar1 == '\0') {
LAB_051ae44c:
    psVar7 = (string *)0xffffffff;
  }
  else {
    uVar4 = FUN_0547429c(param_1);
    FUN_051a4cc0(acStack_408,uVar4);
    local_418 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_410 = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)(this + 0x88));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_418,(rbtree_iterator *)&local_410);
      if (!bVar2) break;
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_418);
      lVar8 = *plVar5;
      if ((lVar8 != 0) &&
         (piVar6 = (int *)CompiledMap::Find((CompiledMap *)(lVar8 + 0x30),acStack_408),
         piVar6 != (int *)0x0)) {
        uVar3 = *piVar6 + *(int *)(lVar8 + 8);
        psVar7 = (string *)(ulong)uVar3;
        if (uVar3 == 0xffffffff) goto LAB_051ae44c;
        if ((param_3) && (cVar1 = IsGroupLoaded(this,uVar3), cVar1 == '\0')) {
          ForceLoadGroup((uint)this,psVar7);
          cVar1 = IsGroupLoaded(this,uVar3);
          if (cVar1 == '\0') {
            uVar4 = FUN_0547429c(param_1);
            OutputDebugStrF((wchar_t *)
                            "ResStreamsManager::GetGroupForFile: Failed to load group %d for file %s\n"
                            ,(ulong)uVar3,uVar4);
            OutputDebugStrF((wchar_t *)
                            "  You are probably out of slots in your RSB pool for group \'%d\'\n",
                            (ulong)uVar3);
          }
        }
        goto LAB_051ae404;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_418);
    }
    psVar7 = (string *)0xffffffff;
  }
LAB_051ae404:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::GotFocus() */

void __thiscall Sexy::ResStreamsManager::GotFocus(ResStreamsManager *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x80] != (ResStreamsManager)0x0) {
    local_48 = FUN_051a7b48(*(undefined8 *)(this + 0x88));
    while( true ) {
      local_30[0] = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)(this + 0x88));
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)local_30);
      if (!bVar3) break;
      uVar8 = 0;
      plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
      lVar7 = *plVar6;
      if (*(int *)(lVar7 + 0x60) != 0) {
        do {
          while( true ) {
            iVar5 = GetGroupStatus(this,uVar8 + *(int *)(lVar7 + 8));
            if (iVar5 == 2) break;
            uVar8 = uVar8 + 1;
            if (*(uint *)(lVar7 + 0x60) <= uVar8) goto LAB_051ae6a4;
          }
          DeleteGroup(this,uVar8 + *(int *)(lVar7 + 8));
          uVar1 = uVar8 + *(int *)(lVar7 + 8);
          uVar8 = uVar8 + 1;
          std::string::string((string *)local_30,"Preparing group");
          ForceLoadGroup((uint)this,(string *)(ulong)uVar1);
          std::string::~string((string *)local_30);
          nop();
        } while (uVar8 < *(uint *)(lVar7 + 0x60));
      }
LAB_051ae6a4:
      std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)local_30);
      std::vector<bool,std::allocator<bool>>::resize
                ((vector<bool,std::allocator<bool>> *)local_30,(ulong)*(uint *)(lVar7 + 0x60),false)
      ;
      uVar8 = 0;
      if (*(int *)(lVar7 + 0x60) != 0) {
        do {
          while( true ) {
            cVar4 = IsGroupLoaded(this,uVar8 + *(int *)(lVar7 + 8));
            if (cVar4 != '\0') break;
LAB_051ae6cc:
            uVar2 = *(uint *)(lVar7 + 0x60);
            uVar8 = uVar8 + 1;
            if (uVar2 <= uVar8) goto LAB_051ae738;
          }
          cVar4 = ValidateGroupResources(this,uVar8 + *(int *)(lVar7 + 8));
          if (cVar4 == '\0') goto LAB_051ae6cc;
          uVar1 = uVar8 + 1;
          auVar9 = FUN_051a5084(local_30[0],uVar8);
          local_40 = auVar9;
          std::_Bit_reference::operator=((_Bit_reference *)local_40,true);
          uVar2 = *(uint *)(lVar7 + 0x60);
          uVar8 = uVar1;
        } while (uVar1 < uVar2);
LAB_051ae738:
        if (uVar2 != 0) {
          uVar8 = 0;
          do {
            while( true ) {
              auVar9 = FUN_051a5084(local_30[0],uVar8);
              local_40 = auVar9;
              bVar3 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_40);
              if (!bVar3) break;
              iVar5 = uVar8 + *(int *)(lVar7 + 8);
              uVar8 = uVar8 + 1;
              ForceLoadGPUData(this,iVar5);
              if (*(uint *)(lVar7 + 0x60) <= uVar8) goto LAB_051ae794;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(lVar7 + 0x60));
        }
      }
LAB_051ae794:
      std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30)
      ;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
    }
    while (this[0x11] == (ResStreamsManager)0x0) {
      Update(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::NeedDecompressRsb(std::string const&, std::string const&, std::string
   const&) */

void __thiscall
Sexy::ResStreamsManager::NeedDecompressRsb
          (ResStreamsManager *this,string *param_1,string *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(*(long *)(this + 8) + 0x30) == 0) {
    OutputDebugStrF((wchar_t *)"ResStreamsManager::InitializeWithRSB mResStreamsDriver\n");
    cVar2 = '\0';
    goto LAB_051aecd8;
  }
  std::string::string(asStack_50,".tag");
  nop();
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x28) + 0x38))
            (asStack_18,*(long **)(*(long *)(this + 8) + 0x28));
  std::operator+(asStack_18,param_1);
  std::operator+(asStack_10,asStack_50);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  FUN_05475d88(asStack_40,param_2);
  FUN_05475d88(asStack_38,param_3);
  bVar1 = std::operator==(asStack_40,"");
  if (bVar1) {
    Android::Resources::GetUserDataFolder(*(AndroidAppDriver **)(this + 8));
    FUN_05474278(asStack_40,asStack_10);
    std::string::~string(asStack_10);
  }
  bVar1 = std::operator==(asStack_38,"");
  if (bVar1) {
    Android::Resources::GetExternalFilesDirectory(*(AndroidAppDriver **)(this + 8));
    FUN_05474278(asStack_38,asStack_10);
    std::string::~string(asStack_10);
  }
  cVar2 = (**(code **)(**(long **)(gSexyAppBase + 0x28) + 0x110))
                    (*(long **)(gSexyAppBase + 0x28),asStack_48,0);
  if (cVar2 == '\0') {
LAB_051aecb4:
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_0547419c(asStack_40);
    if (cVar2 == '\0') {
      FUN_05475d88(asStack_10,asStack_48);
      std::operator+(asStack_40,"/");
      std::operator+(asStack_30,param_1);
      std::operator+(asStack_28,asStack_50);
      std::operator+(asStack_20,".smf");
      cVar2 = CheckFileTag(asStack_10,asStack_18);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_10);
      if (cVar2 == '\0') goto LAB_051aecb4;
    }
    cVar2 = FUN_0547419c(asStack_38);
    if (cVar2 == '\0') {
      FUN_05475d88(asStack_10,asStack_48);
      std::operator+(asStack_38,"/");
      std::operator+(asStack_30,param_1);
      std::operator+(asStack_28,asStack_50);
      std::operator+(asStack_20,".smf");
      cVar2 = CheckFileTag(asStack_10,asStack_18);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      std::string::~string(asStack_10);
    }
  }
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
LAB_051aecd8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::DecompressRsbFile(std::string, std::string const&, std::string const&,
   std::string const&, bool, std::string&) */

void __thiscall
Sexy::ResStreamsManager::DecompressRsbFile
          (ResStreamsManager *this,undefined8 param_2,string *param_3,undefined8 param_4,
          undefined8 param_5,char param_6,void *param_7)

{
  string sVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uchar *puVar8;
  long lVar9;
  long lVar10;
  uchar *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *plVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"tag ResourceManager::DecompressMainRsb start\n");
  std::string::string(asStack_98,".tag");
  nop();
  FUN_05475d88(asStack_90,param_2);
  FUN_031dcc6c(asStack_88,asStack_90,param_3);
  FUN_031dcc6c(asStack_38,asStack_90,param_3);
  std::operator+(asStack_38,asStack_98);
  std::string::~string(asStack_38);
  FUN_05475d88(asStack_78,param_4);
  FUN_05475d88(asStack_70,param_5);
  bVar3 = std::operator==(asStack_78,"");
  if (bVar3) {
    Android::Resources::GetUserDataFolder(*(AndroidAppDriver **)(this + 8));
    FUN_05474278(asStack_78,asStack_38);
    std::string::~string(asStack_38);
  }
  bVar3 = std::operator==(asStack_70,"");
  if (bVar3) {
    Android::Resources::GetExternalFilesDirectory(*(AndroidAppDriver **)(this + 8));
    FUN_05474278(asStack_70,asStack_38);
    std::string::~string(asStack_38);
  }
  cVar4 = (**(code **)(**(long **)(gSexyAppBase + 0x28) + 0x110))
                    (*(long **)(gSexyAppBase + 0x28),asStack_80,0);
  std::string::string(asStack_68,"");
  nop();
  cVar5 = FUN_0547419c(asStack_70);
  if (cVar5 == '\0') {
    if (cVar4 == '\0') {
LAB_051af258:
      plVar12 = *(long **)(gSexyAppBase + 0x28);
      pcVar13 = *(code **)(*plVar12 + 0x110);
      std::operator+(asStack_70,"/");
      std::operator+(asStack_48,param_3);
      std::operator+(asStack_40,".smf");
      bVar6 = (*pcVar13)(plVar12,asStack_38,0);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
    }
    else {
      FUN_05475d88(asStack_38,asStack_80);
      std::operator+(asStack_70,"/");
      std::operator+(asStack_58,param_3);
      std::operator+(asStack_50,asStack_98);
      std::operator+(asStack_48,".smf");
      bVar6 = CheckFileTag(asStack_38,asStack_40);
      bVar6 = bVar6 ^ 1;
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      std::string::~string(asStack_38);
    }
    if (bVar6 == 0) goto LAB_051af408;
    std::operator+(asStack_70,"/");
    std::operator+(asStack_48,param_3);
    std::operator+(asStack_40,".smf");
    FUN_05474278(param_7,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    std::operator+(asStack_70,"/");
    std::operator+(asStack_50,param_3);
    std::operator+(asStack_48,asStack_98);
    std::operator+(asStack_40,".smf");
    FUN_05474278(asStack_68,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
LAB_051af5c4:
    OutputDebugStrF((wchar_t *)"tag Do not need decompress\n");
LAB_051af5d0:
    uVar15 = 1;
    gSexyAppBase[0x929] = (string)0x1;
    OutputDebugStrF((wchar_t *)"tag ResourceManager::DecompressMainRsb end\n");
  }
  else {
    if (cVar4 == '\0') goto LAB_051af258;
LAB_051af408:
    cVar5 = FUN_0547419c(asStack_78);
    if (cVar5 == '\0') {
      if (cVar4 == '\0') {
LAB_051af420:
        plVar12 = *(long **)(gSexyAppBase + 0x28);
        pcVar13 = *(code **)(*plVar12 + 0x110);
        std::operator+(asStack_78,"/");
        std::operator+(asStack_48,param_3);
        std::operator+(asStack_40,".smf");
        bVar6 = (*pcVar13)(plVar12,asStack_38,0);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
      }
      else {
        FUN_05475d88(asStack_38,asStack_80);
        std::operator+(asStack_78,"/");
        std::operator+(asStack_58,param_3);
        std::operator+(asStack_50,asStack_98);
        std::operator+(asStack_48,".smf");
        bVar6 = CheckFileTag(asStack_38,asStack_40);
        bVar6 = bVar6 ^ 1;
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::string::~string(asStack_50);
        std::string::~string(asStack_58);
        std::string::~string(asStack_38);
      }
      if (bVar6 != 0) {
        std::operator+(asStack_78,"/");
        std::operator+(asStack_48,param_3);
        std::operator+(asStack_40,".smf");
        FUN_05474278(param_7,asStack_38);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::operator+(asStack_78,"/");
        std::operator+(asStack_50,param_3);
        std::operator+(asStack_48,asStack_98);
        std::operator+(asStack_40,".smf");
        FUN_05474278(asStack_68,asStack_38);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::string::~string(asStack_50);
        goto LAB_051af5c4;
      }
    }
    else if (cVar4 == '\0') goto LAB_051af420;
    Buffer::Buffer((Buffer *)asStack_38);
    cVar5 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)asStack_88,SUB81(asStack_38,0));
    if (cVar5 == '\0') {
      uVar15 = FUN_0547429c(param_3);
      OutputDebugStrF((wchar_t *)"tag ResStreamsManager::InitializeWithRSB read %s failed. \n",
                      uVar15);
      if (param_6 == '\0') {
        std::string::string(asStack_50,&DAT_056e49e0);
        std::string::string(asStack_48,&DAT_056e49f0);
        std::string::string(asStack_40,&DAT_055e9e50);
        Android::UI::ShowAlertDialog(asStack_50,asStack_48,asStack_40,1);
        std::string::~string(asStack_40);
        nop();
        std::string::~string(asStack_48);
        nop();
        std::string::~string(asStack_50);
        nop();
        sVar1 = gSexyAppBase[0x3ad];
        uVar15 = extraout_x1_01;
        while (sVar1 == (string)0x0) {
          SexySleep((Sexy *)0xa,(uint)uVar15);
          uVar15 = extraout_x1_02;
          sVar1 = gSexyAppBase[0x3ad];
        }
      }
      uVar15 = 0;
      Buffer::~Buffer((Buffer *)asStack_38);
      goto LAB_051af5f0;
    }
    puVar8 = (uchar *)Buffer::GetDataPtr((Buffer *)asStack_38);
    uVar7 = SizeForUncompress2(puVar8);
    uVar14 = (ulong)(uVar7 + 0x200000);
    std::string::string(asStack_60,"");
    nop();
    cVar5 = FUN_0547419c(asStack_70);
    if (cVar5 == '\0') {
      lVar9 = Android::Resources::GetFileSystemBlocksFree(asStack_70);
      lVar10 = Android::Resources::GetFileSystemBlockSize(asStack_70);
      lVar2 = 0;
      if (lVar10 != 0) {
        lVar2 = (long)uVar14 / lVar10;
      }
      uVar15 = FUN_0547429c(asStack_70);
      OutputDebugStrF((wchar_t *)
                      "tag ResStreamsManager::InitializeWithRSB sdcard path = [%s], sdcard block free= [%d], sdcard block size=[%d], need block = [%d], need size = [%d] \n"
                      ,uVar15,lVar9,lVar10,lVar2,uVar14);
      if (lVar2 <= lVar9) {
        thunk_FUN_05475e00(asStack_60,asStack_70);
      }
    }
    cVar5 = FUN_0547419c(asStack_60);
    if (cVar5 == '\0') {
LAB_051afabc:
      std::operator+(asStack_60,"/");
      std::operator+(asStack_50,param_3);
      std::operator+(asStack_48,".smf");
      FUN_05474278(param_7,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      std::operator+(asStack_60,"/");
      std::operator+(asStack_58,param_3);
      std::operator+(asStack_50,asStack_98);
      std::operator+(asStack_48,".smf");
      FUN_05474278(asStack_68,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      uVar15 = FUN_0547429c(param_7);
      OutputDebugStrF((wchar_t *)"tag ResourceManager::filePath  = %s\n",uVar15);
      puVar8 = malloc((ulong)uVar7);
      puVar11 = (uchar *)Buffer::GetDataPtr((Buffer *)asStack_38);
      uVar7 = Buffer::GetDataLen((Buffer *)asStack_38);
      ZlibUncompressBuffer3(puVar11,puVar8,uVar7);
      cVar5 = SexyAppBase::WriteBytesToFile(gSexyAppBase,param_7,(ulong)puVar8);
      free(puVar8);
      if (cVar5 != '\0') {
        if (cVar4 != '\0') {
          CopyTagFile(asStack_80,asStack_68);
        }
        std::string::~string(asStack_60);
        Buffer::~Buffer((Buffer *)asStack_38);
        goto LAB_051af5d0;
      }
      OutputDebugStrF((wchar_t *)"tag****************WriteBytesToFile  %d \n");
      std::string::string(asStack_50,&DAT_056e49e0);
      std::string::string(asStack_48,&DAT_056e4b40);
      std::string::string(asStack_40,&DAT_055e9e50);
      Android::UI::ShowAlertDialog(asStack_50,asStack_48,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      std::string::~string(asStack_48);
      nop();
      std::string::~string(asStack_50);
      nop();
      sVar1 = gSexyAppBase[0x3ad];
      uVar15 = extraout_x1_03;
      while (sVar1 == (string)0x0) {
        SexySleep((Sexy *)0xa,(uint)uVar15);
        uVar15 = extraout_x1_04;
        sVar1 = gSexyAppBase[0x3ad];
      }
    }
    else {
      cVar5 = FUN_0547419c(asStack_78);
      if (cVar5 == '\0') {
        lVar9 = Android::Resources::GetFileSystemBlocksFree(asStack_78);
        lVar10 = Android::Resources::GetFileSystemBlockSize(asStack_78);
        lVar2 = 0;
        if (lVar10 != 0) {
          lVar2 = (long)uVar14 / lVar10;
        }
        uVar15 = FUN_0547429c(asStack_78);
        OutputDebugStrF((wchar_t *)
                        "tag ResStreamsManager::InitializeWithRSB phone path = [%s], phone block free= [%d], phone block size=[%d], need block = [%d], need size = [%d] \n"
                        ,uVar15,lVar9,lVar10,lVar2,uVar14);
        if (lVar2 <= lVar9) {
          thunk_FUN_05475e00(asStack_60,asStack_78);
        }
        cVar5 = FUN_0547419c(asStack_60);
        if (cVar5 == '\0') goto LAB_051afabc;
      }
      OutputDebugStrF((wchar_t *)"tag ResStreamsManager::InitializeWithRSB targetPath is empty.\n");
      std::string::string(asStack_50,&DAT_056e4af0);
      std::string::string(asStack_48,&DAT_056e4b00);
      std::string::string(asStack_40,&DAT_055e9e50);
      Android::UI::ShowAlertDialog(asStack_50,asStack_48,asStack_40,1);
      std::string::~string(asStack_40);
      nop();
      std::string::~string(asStack_48);
      nop();
      std::string::~string(asStack_50);
      nop();
      sVar1 = gSexyAppBase[0x3ad];
      uVar15 = extraout_x1;
      while (sVar1 == (string)0x0) {
        SexySleep((Sexy *)0xa,(uint)uVar15);
        uVar15 = extraout_x1_00;
        sVar1 = gSexyAppBase[0x3ad];
      }
    }
    std::string::~string(asStack_60);
    uVar15 = 0;
    Buffer::~Buffer((Buffer *)asStack_38);
  }
LAB_051af5f0:
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::AddRSB(std::string, std::string const&, std::string const&, std::string
   const&, bool) */

void __thiscall
Sexy::ResStreamsManager::AddRSB
          (ResStreamsManager *this,undefined8 param_2,string *param_3,undefined8 param_4,
          undefined8 param_5,undefined1 param_6)

{
  ResStreamGroupDescriptor *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  RSBDesc *pRVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  ResStreamsPool *this_00;
  ResStreamsGroup *this_01;
  long lVar12;
  ResStreamsPool *pRVar13;
  string sVar14;
  ulong uVar15;
  ResStreamsGroup *pRVar16;
  string asStack_30 [8];
  RSBDesc *local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(*(long *)(this + 8) + 0x30) == 0) {
    OutputDebugStrF((wchar_t *)"ResStreamsManager::AddRSB mResStreamsDriver is NULL\n");
    sVar14 = (string)0x0;
    goto LAB_051b0038;
  }
  cVar5 = IsInitialized(this,param_3);
  if (cVar5 != '\0') {
    ClearRSB(this,param_3);
  }
  std::string::string(asStack_30,"");
  nop();
  FUN_05475d88(local_10,param_2);
  DecompressRsbFile(this,local_10,param_3,param_4,param_5,param_6,asStack_30);
  std::string::~string(local_10);
  pRVar6 = ::operator_new(0x88);
  RSBDesc::RSBDesc(pRVar6);
  *(undefined4 *)(pRVar6 + 8) = *(undefined4 *)(this + 0x98);
  local_28 = pRVar6;
  thunk_FUN_05475e00(pRVar6 + 0x10,param_3);
  thunk_FUN_05475e00(local_28 + 0x18,asStack_30);
  pRVar6 = local_28;
  uVar7 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x28) + 0xa8))
                    (*(long **)(*(long *)(this + 8) + 0x28),asStack_30);
  *(undefined8 *)pRVar6 = uVar7;
  if (*(IFile **)local_28 == (IFile *)0x0) {
    uVar7 = FUN_0547429c(local_28 + 0x10);
    OutputDebugStrF((wchar_t *)"pNewRsb->mRsbName = %s",uVar7);
    std::string::string(asStack_20,&DAT_056e4c48);
    std::string::string(asStack_18,&DAT_056e4c60);
    std::string::string(local_10,&DAT_055e9e50);
    Android::UI::ShowAlertDialog(asStack_20,asStack_18,local_10,1);
    std::string::~string(local_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    sVar14 = (string)0x0;
    if (local_28 == (RSBDesc *)0x0) {
      sVar14 = (string)0x0;
    }
    else {
LAB_051b0020:
      pRVar6 = local_28;
      RSBDesc::~RSBDesc(local_28);
      AK::FreeHook(pRVar6);
    }
  }
  else {
    local_10[0] = (string)0x1;
    lVar8 = AllocRSBCommonBuffer
                      (*(IFile **)local_28,(uint *)(local_28 + 0x28),(bool *)local_10,false);
    sVar14 = local_10[0];
    pRVar6 = local_28;
    *(long *)(local_28 + 0x20) = lVar8;
    if (lVar8 == 0) {
      sVar14 = (string)0x0;
      RSBDesc::~RSBDesc(local_28);
      AK::FreeHook(pRVar6);
    }
    else {
      if (local_10[0] == (string)0x0) goto LAB_051b0020;
      lVar10 = lVar8;
      if (*(uint *)(lVar8 + 0x14) != 0xffffffff) {
        CompiledMap::Init((CompiledMap *)(local_28 + 0x30),
                          (uchar *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x14)),*(uint *)(lVar8 + 0x10))
        ;
        lVar10 = *(long *)(local_28 + 0x20);
      }
      CompiledMap::Init((CompiledMap *)(local_28 + 0x40),
                        (uchar *)(lVar10 + (ulong)*(uint *)(lVar8 + 0x24)),*(uint *)(lVar8 + 0x20));
      uVar11 = *(uint *)(lVar8 + 0x48);
      uVar15 = (ulong)uVar11;
      lVar10 = uVar15 - 1;
      *(uint *)(local_28 + 0x70) = uVar11;
      puVar9 = operator_new__((ulong)uVar11 * 0x58 + 8);
      pRVar13 = (ResStreamsPool *)(puVar9 + 1);
      *puVar9 = uVar15;
      this_00 = pRVar13;
      if (uVar15 != 0) {
        do {
          lVar10 = lVar10 + -1;
          ResStreamsPool::ResStreamsPool(this_00);
          this_00 = this_00 + 0x58;
        } while (lVar10 != -1);
      }
      iVar2 = *(int *)(lVar8 + 0x48);
      *(ResStreamsPool **)(local_28 + 0x78) = pRVar13;
      if (iVar2 != 0) {
        uVar11 = 0;
        while( true ) {
          uVar4 = uVar11 * *(int *)(lVar8 + 0x50);
          uVar15 = (ulong)uVar11;
          uVar11 = uVar11 + 1;
          ResStreamsPool::InitDescriptor
                    (pRVar13 + uVar15 * 0x58,
                     (ResStreamPoolDescriptor *)
                     (*(long *)(local_28 + 0x20) + (ulong)uVar4 + (ulong)*(uint *)(lVar8 + 0x4c)));
          if (*(uint *)(lVar8 + 0x48) <= uVar11) break;
          pRVar13 = *(ResStreamsPool **)(local_28 + 0x78);
        }
      }
      uVar11 = *(uint *)(lVar8 + 0x28);
      *(uint *)(local_28 + 0x60) = uVar11;
      uVar15 = (ulong)uVar11;
      lVar10 = uVar15 - 1;
      puVar9 = operator_new__((ulong)uVar11 * 0xc0 + 8);
      pRVar16 = (ResStreamsGroup *)(puVar9 + 1);
      *puVar9 = uVar15;
      this_01 = pRVar16;
      if (uVar15 != 0) {
        do {
          lVar10 = lVar10 + -1;
          ResStreamsGroup::ResStreamsGroup(this_01);
          this_01 = this_01 + 0xc0;
        } while (lVar10 != -1);
      }
      uVar15 = 0;
      iVar2 = *(int *)(lVar8 + 0x28);
      *(ResStreamsGroup **)(local_28 + 0x68) = pRVar16;
      if (iVar2 != 0) {
        do {
          lVar12 = uVar15 * 0xc0;
          pRVar1 = (ResStreamGroupDescriptor *)
                   (*(long *)(local_28 + 0x20) +
                   (ulong)(uint)((int)uVar15 * *(int *)(lVar8 + 0x30)) +
                   (ulong)*(uint *)(lVar8 + 0x2c));
          uVar11 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar11;
          ResStreamsGroup::InitDescriptor
                    (pRVar16 + lVar12,pRVar1,
                     (uchar *)(*(long *)(local_28 + 0x20) + (ulong)*(uint *)(lVar8 + 0x58)),
                     *(uint *)(lVar8 + 0x5c));
          uVar4 = *(uint *)(pRVar1 + 0x88);
          uVar3 = *(uint *)(lVar8 + 0x28);
          pRVar16 = *(ResStreamsGroup **)(local_28 + 0x68);
          lVar10 = *(long *)(local_28 + 0x78);
          *(uint *)(pRVar16 + lVar12 + 0x20) = uVar4;
          *(ulong *)(pRVar16 + lVar12 + 0x28) = lVar10 + (ulong)uVar4 * 0x58;
        } while (uVar11 < uVar3);
      }
      CompiledMap::Init((CompiledMap *)(local_28 + 0x50),
                        (uchar *)(*(long *)(local_28 + 0x20) + (ulong)*(uint *)(lVar8 + 0x44)),
                        *(uint *)(lVar8 + 0x40));
      thunk_FUN_05475e00(this + 0xa0,asStack_30);
      std::list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
      ::push_back((list<Sexy::ResStreamsManager::RSBDesc*,std::allocator<Sexy::ResStreamsManager::RSBDesc*>>
                   *)(this + 0x88),&local_28);
      *(int *)(this + 0x98) = *(int *)(this + 0x98) + *(int *)(lVar8 + 0x28);
    }
  }
  std::string::~string(asStack_30);
LAB_051b0038:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsManager::InitializeWithRSB(std::string const&, std::string const&, std::string
   const&, bool) */

void __thiscall
Sexy::ResStreamsManager::InitializeWithRSB
          (ResStreamsManager *this,string *param_1,string *param_2,string *param_3,bool param_4)

{
  undefined4 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x28) + 0x38))
            (asStack_18,*(long **)(*(long *)(this + 8) + 0x28));
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = AddRSB(this,asStack_10,param_1,param_2,param_3,param_4);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

