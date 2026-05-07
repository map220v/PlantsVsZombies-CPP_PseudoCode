// Class: Sexy::ResStreamsGroup


/* Sexy::ResStreamsGroup::Reset() */

void __thiscall Sexy::ResStreamsGroup::Reset(ResStreamsGroup *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (*(ColourFit **)(this + 0xb0) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xb0));
    *(undefined8 *)(this + 0xb0) = 0;
  }
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* Sexy::ResStreamsGroup::~ResStreamsGroup() */

void __thiscall Sexy::ResStreamsGroup::~ResStreamsGroup(ResStreamsGroup *this)

{
  Reset(this);
  std::string::~string((string *)this);
  return;
}


/* Sexy::ResStreamsGroup::ResStreamsGroup() */

void __thiscall Sexy::ResStreamsGroup::ResStreamsGroup(ResStreamsGroup *this)

{
  Set8BytesTo0();
  CompiledMap::CompiledMap((CompiledMap *)(this + 0x10));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  Reset(this);
  return;
}


/* Sexy::ResStreamsGroup::InitDescriptor(Sexy::ResStreamGroupDescriptor*, unsigned char*, unsigned
   int) */

void __thiscall
Sexy::ResStreamsGroup::InitDescriptor
          (ResStreamsGroup *this,ResStreamGroupDescriptor *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  std::string::append((string *)this,(char *)param_1,(size_t)param_2);
  iVar1 = *(int *)(param_1 + 200);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  uVar4 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(ResStreamGroupDescriptor **)(this + 0x38) = param_1;
  *(uint *)(this + 0x90) = param_3;
  *(uchar **)(this + 0x88) = param_2 + param_3 * iVar1;
  return;
}


/* Sexy::ResStreamsGroup::InitGroupStream(Sexy::ResStreamGroupHeader*, unsigned int) */

void __thiscall
Sexy::ResStreamsGroup::InitGroupStream
          (ResStreamsGroup *this,ResStreamGroupHeader *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  uVar2 = *(uint *)(param_1 + 0x48);
  *(ResStreamGroupHeader **)(this + 0x78) = param_1;
  CompiledMap::Init((CompiledMap *)(this + 0x10),(uchar *)(param_1 + uVar1),uVar2);
  *(uint *)(this + 0x70) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsGroup::LoadGroupFileIndex(Sexy::IFile*) */

void __thiscall Sexy::ResStreamsGroup::LoadGroupFileIndex(ResStreamsGroup *this,IFile *param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  void *__dest;
  long lVar5;
  uint uVar6;
  size_t __n;
  undefined1 auStack_808 [72];
  int local_7c0;
  uint local_7bc;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x48))(param_1,*(undefined4 *)(this + 0x30));
  cVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1,auStack_808,0x800);
  if (cVar2 != '\0') {
    do {
      iVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    } while (iVar4 == 1);
    iVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
    if (iVar4 != 2) {
      if (local_7bc < 0x5d) {
        uVar6 = local_7c0 + 0x5c;
      }
      else {
        uVar6 = local_7bc + local_7c0;
      }
      if (uVar6 < 0x801) {
        __n = (size_t)uVar6;
        __dest = operator_new__(__n);
        *(uint *)(this + 0xb8) = uVar6;
        *(void **)(this + 0xb0) = __dest;
LAB_051a6368:
        memcpy(__dest,auStack_808,__n);
      }
      else {
        uVar1 = (uVar6 & 0xfffff800) + 0x800;
        __n = (size_t)uVar1;
        __dest = operator_new__(__n);
        *(uint *)(this + 0xb8) = uVar1;
        *(void **)(this + 0xb0) = __dest;
        if (uVar1 < 0x801) goto LAB_051a6368;
        memcpy(__dest,auStack_808,0x800);
        cVar3 = (**(code **)(*(long *)param_1 + 0x50))
                          (param_1,*(long *)(this + 0xb0) + 0x800,uVar6 & 0xfffff800);
        if (cVar3 == '\0') {
LAB_051a62d4:
          if (*(ColourFit **)(this + 0xb0) != (ColourFit *)0x0) {
            EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xb0));
          }
          *(undefined8 *)(this + 0xb0) = 0;
          goto LAB_051a62e4;
        }
        do {
          iVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
        } while (iVar4 == 1);
        iVar4 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
        if (iVar4 == 2) goto LAB_051a62d4;
      }
      lVar5 = *(long *)(this + 0xb0);
      *(long *)(this + 0x78) = lVar5;
      CompiledMap::Init((CompiledMap *)(this + 0x10),
                        (uchar *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x4c)),*(uint *)(lVar5 + 0x48));
      goto LAB_051a62e8;
    }
  }
LAB_051a62e4:
  cVar2 = '\0';
LAB_051a62e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ResStreamsGroup::GetFileIndexData(std::string const&) */

void __thiscall Sexy::ResStreamsGroup::GetFileIndexData(ResStreamsGroup *this,string *param_1)

{
  undefined8 uVar1;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(param_1);
  FUN_051a4cc0(acStack_408,uVar1);
  CompiledMap::Find((CompiledMap *)(this + 0x10),acStack_408);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ResStreamsGroup::StartLoad() */

void __thiscall Sexy::ResStreamsGroup::StartLoad(ResStreamsGroup *this)

{
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}


/* Sexy::ResStreamsGroup::GetTextureReference(unsigned int) */

undefined4 __thiscall Sexy::ResStreamsGroup::GetTextureReference(ResStreamsGroup *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 0x98) + (ulong)param_1 * 4);
}


/* Sexy::ResStreamsGroup::GetTextureMultiReference(unsigned int) */

undefined4 __thiscall
Sexy::ResStreamsGroup::GetTextureMultiReference(ResStreamsGroup *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0xa0) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0xa0) + (ulong)param_1 * 4);
  }
  return uVar1;
}


/* Sexy::ResStreamsGroup::GetRenderData(unsigned int) */

undefined8 __thiscall Sexy::ResStreamsGroup::GetRenderData(ResStreamsGroup *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0xa8) + (ulong)param_1 * 8);
}


/* Sexy::ResStreamsGroup::GetTextureDescriptor(unsigned int) */

long __thiscall Sexy::ResStreamsGroup::GetTextureDescriptor(ResStreamsGroup *this,uint param_1)

{
  return *(long *)(this + 0x88) + (ulong)(param_1 * *(int *)(this + 0x90));
}


/* Sexy::ResStreamsGroup::TEMPNAMEPLACEHOLDERVALUE(Sexy::ResStreamsGroup&) */

void __thiscall Sexy::ResStreamsGroup::operator=(ResStreamsGroup *this,ResStreamsGroup *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  void *__dest;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar9;
  *(undefined4 *)(this + 0x80) = uVar2;
  *(undefined8 *)(this + 0x88) = uVar7;
  *(undefined4 *)(this + 8) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar16;
  *(undefined4 *)(this + 0x30) = uVar5;
  *(undefined4 *)(this + 0x34) = uVar6;
  *(undefined8 *)(this + 0x38) = uVar15;
  *(undefined8 *)(this + 0x40) = uVar14;
  *(undefined8 *)(this + 0x48) = uVar13;
  *(undefined8 *)(this + 0x50) = uVar12;
  *(undefined8 *)(this + 0x58) = uVar11;
  *(undefined8 *)(this + 0x60) = uVar10;
  *(undefined4 *)(this + 0x90) = uVar1;
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  lVar8 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = uVar9;
  *(undefined8 *)(this + 0xa8) = uVar7;
  if (lVar8 == 0) {
    *(undefined8 *)(this + 0xb0) = 0;
  }
  else {
    __dest = operator_new__((ulong)*(uint *)(param_1 + 0xb8));
    *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    *(void **)(this + 0xb0) = __dest;
    memcpy(__dest,*(void **)(param_1 + 0xb0),(ulong)*(uint *)(param_1 + 0xb8));
    if (*(long *)(this + 0xb0) != 0) {
      CompiledMap::Init((CompiledMap *)(this + 0x10),
                        (uchar *)(*(long *)(this + 0xb0) +
                                 (ulong)*(uint *)(*(long *)(this + 0x78) + 0x4c)),
                        *(uint *)(*(long *)(this + 0x78) + 0x48));
      return;
    }
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* Sexy::ResStreamsGroup::CanLoad() */

undefined8 __thiscall Sexy::ResStreamsGroup::CanLoad(ResStreamsGroup *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 8) == 1) {
    return 0;
  }
  if (1 < *(int *)(this + 8) - 2U) {
    uVar1 = ResStreamsPool::IsInstanceAvailable(*(ResStreamsPool **)(this + 0x28));
    return uVar1;
  }
  return 1;
}


/* Sexy::ResStreamsGroup::GetResidentDataBaseAddress() */

long __thiscall Sexy::ResStreamsGroup::GetResidentDataBaseAddress(ResStreamsGroup *this)

{
  long lVar1;
  
  lVar1 = ResStreamsPool::GetResidentDataMemory
                    (*(ResStreamsPool **)(this + 0x28),*(uint *)(this + 0x70));
  return lVar1 + (ulong)*(uint *)(*(long *)(this + 0x38) + 0x94);
}


/* Sexy::ResStreamsGroup::GetGPUDataBaseAddress() */

void __thiscall Sexy::ResStreamsGroup::GetGPUDataBaseAddress(ResStreamsGroup *this)

{
  ResStreamsPool::GetGPUDataMemory(*(ResStreamsPool **)(this + 0x28),*(uint *)(this + 0x70));
  return;
}

