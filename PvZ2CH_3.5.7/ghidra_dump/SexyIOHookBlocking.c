// Class: SexyIOHookBlocking


/* SexyIOHookBlocking::Write(AkFileDesc&, AkIoHeuristics const&, void*, AkIOTransferInfo&) */

undefined8
SexyIOHookBlocking::Write
          (AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,AkIOTransferInfo *param_4)

{
  return 2;
}


/* non-virtual thunk to SexyIOHookBlocking::Write(AkFileDesc&, AkIoHeuristics const&, void*,
   AkIOTransferInfo&) */

void __thiscall
SexyIOHookBlocking::Write
          (SexyIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  Write((AkFileDesc *)(this + -8),(AkIoHeuristics *)param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyIOHookBlocking::Open(char const*, AkOpenMode, AkFileSystemFlags*, bool&, AkFileDesc&) */

void __thiscall
SexyIOHookBlocking::Open
          (SexyIOHookBlocking *this,char *param_1,undefined4 param_3,undefined8 param_4,
          undefined1 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,param_1);
  nop();
  lVar2 = *(long *)this;
  *param_5 = 1;
  pcVar3 = *(code **)(lVar2 + 0x50);
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = (*pcVar3)(this,asStack_10,param_3,param_4,param_5,param_6);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* SexyIOHookBlocking::Close(AkFileDesc&) */

void __thiscall SexyIOHookBlocking::Close(SexyIOHookBlocking *this,AkFileDesc *param_1)

{
  CAkFileHelpers::CloseFile(*(__sFILE **)(param_1 + 0x18));
  return;
}


/* non-virtual thunk to SexyIOHookBlocking::Close(AkFileDesc&) */

void __thiscall SexyIOHookBlocking::Close(SexyIOHookBlocking *this,AkFileDesc *param_1)

{
  Close(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyIOHookBlocking::Read(AkFileDesc&, AkIoHeuristics const&, void*, AkIOTransferInfo&) */

void __thiscall
SexyIOHookBlocking::Read
          (SexyIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CAkFileHelpers::ReadBlocking
                    ((__sFILE **)(param_1 + 0x18),param_3,*(uint *)param_4,*(uint *)(param_4 + 0xc),
                     &local_c);
  if ((int)uVar2 == 1) {
    uVar1 = 2;
    if (*(uint *)(param_4 + 0xc) == local_c) {
      uVar1 = 1;
    }
    uVar2 = (ulong)uVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* non-virtual thunk to SexyIOHookBlocking::Read(AkFileDesc&, AkIoHeuristics const&, void*,
   AkIOTransferInfo&) */

void __thiscall
SexyIOHookBlocking::Read
          (SexyIOHookBlocking *this,AkFileDesc *param_1,AkIoHeuristics *param_2,void *param_3,
          AkIOTransferInfo *param_4)

{
  Read(this + -8,param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyIOHookBlocking::Open_Aux(std::string, AkOpenMode, AkFileSystemFlags*, bool&, AkFileDesc&) */

void __thiscall
SexyIOHookBlocking::Open_Aux
          (SexyIOHookBlocking *this,string *param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,ulong *param_6)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *__file;
  undefined8 uVar6;
  ResStreamsManager *this_00;
  uint local_9c;
  ulong local_98;
  uint local_90 [2];
  long local_8;
  
  local_98 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = *(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908);
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string((string *)&stack0xffffffffffffff78,"dynamic.rsb");
    cVar2 = Sexy::ResStreamsManager::IsInitialized(this_00,(string *)&stack0xffffffffffffff78);
    std::string::~string((string *)&stack0xffffffffffffff78);
    nop();
    if (((cVar2 != '\0') &&
        (uVar3 = Sexy::ResStreamsManager::GetGroupForFile
                           (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),param_2,false,false)
        , uVar3 != 0xffffffff)) &&
       (cVar2 = Sexy::ResStreamsManager::IsGroupLoaded
                          (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),uVar3), cVar2 == '\0'
       )) {
      Sexy::ResStreamsManager::GetRSBPath((uint)*(undefined8 *)(Sexy::gSexyAppBase + 0x908));
      uVar6 = FUN_0547429c((stat *)&stack0xffffffffffffff78);
      if ((local_98 != 0) || (iVar5 = FUN_052f0f90(uVar6,param_3,&local_98), iVar5 == 1)) {
        param_6[3] = local_98;
        iVar5 = 2;
        Sexy::ResStreamsManager::LoadGroupFileIndex
                  (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),uVar3);
        cVar2 = Sexy::ResStreamsManager::GetFileLocation
                          (*(ResStreamsManager **)(Sexy::gSexyAppBase + 0x908),uVar3,param_2,
                           &local_9c,local_90);
        if (cVar2 != '\0') {
          iVar4 = *(int *)(this + 0x32c);
          iVar5 = 1;
          uVar1 = *(undefined4 *)(this + 0x324);
          *param_6 = (ulong)local_90[0];
          *(uint *)(param_6 + 1) = local_9c + iVar4;
          *(undefined4 *)(param_6 + 4) = uVar1;
          param_6[2] = 0;
          *(undefined4 *)((long)param_6 + 0xc) = 0;
        }
        std::string::~string((string *)&stack0xffffffffffffff78);
        goto LAB_052f12a8;
      }
      std::string::~string((string *)&stack0xffffffffffffff78);
    }
  }
  (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x28) + 0x38))
            ((stat *)&stack0xffffffffffffff78,*(long **)(Sexy::gSexyAppBase + 0x28));
  std::operator+((string *)&stack0xffffffffffffff78,param_2);
  std::string::~string((string *)&stack0xffffffffffffff78);
  __file = (char *)FUN_0547429c((string *)local_90);
  if ((local_98 != 0) || (iVar5 = FUN_052f0f90(__file,param_3,&local_98), iVar5 == 1)) {
    param_6[3] = local_98;
    iVar5 = 2;
    iVar4 = stat(__file,(stat *)&stack0xffffffffffffff78);
    if (iVar4 == 0) {
      uVar1 = *(undefined4 *)(this + 0x324);
      iVar5 = 1;
      *param_6 = 0;
      *(undefined4 *)(param_6 + 1) = 0;
      *(undefined4 *)(param_6 + 4) = uVar1;
      param_6[2] = 0;
      *(undefined4 *)((long)param_6 + 0xc) = 0;
    }
  }
  std::string::~string((string *)local_90);
LAB_052f12a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* SexyIOHookBlocking::SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  CAkDefaultIOHookBlocking::CAkDefaultIOHookBlocking((CAkDefaultIOHookBlocking *)this);
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined ***)this = &PTR__SexyIOHookBlocking_06a343a0;
  *(undefined ***)(this + 8) = &PTR__SexyIOHookBlocking_06a34408;
  *(undefined ***)(this + 0x10) = &PTR__SexyIOHookBlocking_06a34458;
  Set8BytesTo0(this + 0x330);
  this[0x338] = (SexyIOHookBlocking)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x340));
  return;
}


/* SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  *(undefined ***)this = &PTR__SexyIOHookBlocking_06a343a0;
  *(undefined ***)(this + 8) = &PTR__SexyIOHookBlocking_06a34408;
  *(undefined ***)(this + 0x10) = &PTR__SexyIOHookBlocking_06a34458;
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 0x340));
  std::string::~string((string *)(this + 0x330));
  CAkDefaultIOHookBlocking::~CAkDefaultIOHookBlocking((CAkDefaultIOHookBlocking *)this);
  return;
}


/* non-virtual thunk to SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  ~SexyIOHookBlocking(this + -0x10);
  return;
}


/* non-virtual thunk to SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  ~SexyIOHookBlocking(this + -8);
  return;
}


/* SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  ~SexyIOHookBlocking(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  ~SexyIOHookBlocking(this + -0x10);
  return;
}


/* non-virtual thunk to SexyIOHookBlocking::~SexyIOHookBlocking() */

void __thiscall SexyIOHookBlocking::~SexyIOHookBlocking(SexyIOHookBlocking *this)

{
  ~SexyIOHookBlocking(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SexyIOHookBlocking::Open(unsigned int, AkOpenMode, AkFileSystemFlags*, bool&, AkFileDesc&) */

void __thiscall
SexyIOHookBlocking::Open
          (SexyIOHookBlocking *this,ulong param_2,undefined4 param_3,undefined8 param_4,
          undefined1 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  string asStack_b0 [8];
  char local_a8 [56];
  char local_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_70[0x40] = '\0';
  local_70[0x41] = '\0';
  local_70[0x42] = '\0';
  local_70[0x43] = '\0';
  local_70[0x44] = '\0';
  local_70[0x45] = '\0';
  local_70[0x46] = '\0';
  local_70[0x47] = '\0';
  local_70[0x48] = '\0';
  local_70[0x49] = '\0';
  local_70[0x4a] = '\0';
  local_70[0x4b] = '\0';
  local_70[0x4c] = '\0';
  local_70[0x4d] = '\0';
  local_70[0x4e] = '\0';
  local_70[0x4f] = '\0';
  local_70[0x50] = '\0';
  local_70[0x51] = '\0';
  local_70[0x52] = '\0';
  local_70[0x53] = '\0';
  local_70[0x54] = '\0';
  local_70[0x55] = '\0';
  local_70[0x56] = '\0';
  local_70[0x57] = '\0';
  local_70[0x58] = '\0';
  local_70[0x59] = '\0';
  local_70[0x5a] = '\0';
  local_70[0x5b] = '\0';
  local_70[0x5c] = '\0';
  local_70[0x5d] = '\0';
  local_70[0x5e] = '\0';
  local_70[0x5f] = '\0';
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  local_70[0x18] = '\0';
  local_70[0x19] = '\0';
  local_70[0x1a] = '\0';
  local_70[0x1b] = '\0';
  local_70[0x1c] = '\0';
  local_70[0x1d] = '\0';
  local_70[0x1e] = '\0';
  local_70[0x1f] = '\0';
  local_70[0x20] = '\0';
  local_70[0x21] = '\0';
  local_70[0x22] = '\0';
  local_70[0x23] = '\0';
  local_70[0x24] = '\0';
  local_70[0x25] = '\0';
  local_70[0x26] = '\0';
  local_70[0x27] = '\0';
  local_70[0x28] = '\0';
  local_70[0x29] = '\0';
  local_70[0x2a] = '\0';
  local_70[0x2b] = '\0';
  local_70[0x2c] = '\0';
  local_70[0x2d] = '\0';
  local_70[0x2e] = '\0';
  local_70[0x2f] = '\0';
  local_70[0x30] = '\0';
  local_70[0x31] = '\0';
  local_70[0x32] = '\0';
  local_70[0x33] = '\0';
  local_70[0x34] = '\0';
  local_70[0x35] = '\0';
  local_70[0x36] = '\0';
  local_70[0x37] = '\0';
  local_70[0x38] = '\0';
  local_70[0x39] = '\0';
  local_70[0x3a] = '\0';
  local_70[0x3b] = '\0';
  local_70[0x3c] = '\0';
  local_70[0x3d] = '\0';
  local_70[0x3e] = '\0';
  local_70[0x3f] = '\0';
  local_70[0x60] = '\0';
  local_70[0x61] = '\0';
  local_70[0x62] = '\0';
  local_70[99] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  sprintf(local_a8,"%u",param_2 & 0xffffffff);
  uVar2 = 2;
  std::string::string(asStack_b0,local_a8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)(this + 0x340),asStack_b0);
  uVar3 = FUN_0547429c();
  iVar1 = sprintf(local_70,"%s/%s.wem",uVar3,local_a8);
  std::string::~string(asStack_b0);
  nop();
  if (0 < iVar1) {
    lVar4 = *(long *)this;
    *param_5 = 1;
    pcVar5 = *(code **)(lVar4 + 0x50);
    std::string::string(asStack_b0,local_70);
    uVar2 = (*pcVar5)(this,asStack_b0,param_3,param_4,param_5,param_6);
    std::string::~string(asStack_b0);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

