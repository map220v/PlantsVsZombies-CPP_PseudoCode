// Class: open_vcdiff::BlockHash


/* open_vcdiff::BlockHash::AddOneIndexHash(int, unsigned int) */

void __thiscall open_vcdiff::BlockHash::AddOneIndexHash(BlockHash *this,int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_053f5888(*(undefined4 *)(this + 0x60));
  if (iVar1 != param_1) {
    return;
  }
  AddBlock(this,param_2);
  return;
}


/* open_vcdiff::BlockHash::CalcTableSize(unsigned long) */

ulong open_vcdiff::BlockHash::CalcTableSize(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = (param_1 >> 2) + 1;
  uVar4 = 1;
  if (1 < uVar1) {
    do {
      uVar4 = uVar4 * 2;
    } while (uVar4 < uVar1);
    if ((uVar4 - 1 & uVar4) != 0) {
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar2 = FUN_054603b8(uVar2,"Internal error: CalcTableSize(dictionary_size = ");
      uVar2 = thunk_FUN_0546069c(uVar2,param_1);
      uVar2 = FUN_054603b8(uVar2,"): resulting table_size ");
      uVar2 = thunk_FUN_0546069c(uVar2,uVar4);
      pcVar3 = " is not a power of 2";
      goto LAB_05447d90;
    }
  }
  if ((param_1 == 0) || (uVar4 <= uVar1 * 2)) {
    return uVar4;
  }
  uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar2 = FUN_054603b8(uVar2,"Internal error: CalcTableSize(dictionary_size = ");
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2,"): resulting table_size ");
  uVar2 = thunk_FUN_0546069c(uVar2,uVar4);
  pcVar3 = " is too large";
LAB_05447d90:
  uVar2 = FUN_054603b8(uVar2,pcVar3);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  return 0;
}


/* open_vcdiff::BlockHash::BlockContentsMatch(char const*, char const*) */

bool open_vcdiff::BlockHash::BlockContentsMatch(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*param_1 == *param_2) {
    iVar2 = memcmp(param_1,param_2,0x10);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* open_vcdiff::BlockHash::SkipNonMatchingBlocks(int, char const*) const */

int __thiscall
open_vcdiff::BlockHash::SkipNonMatchingBlocks(BlockHash *this,int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  if (-1 < param_1) {
    lVar4 = *(long *)this;
    iVar3 = 0x11;
    do {
      cVar1 = BlockContentsMatchInline(param_2,(char *)(lVar4 + (param_1 << 4)));
      if (cVar1 != '\0') {
        return param_1;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return -1;
      }
      piVar2 = (int *)FUN_05447cc0(*(undefined8 *)(this + 0x28),(long)param_1);
      param_1 = *piVar2;
    } while (-1 < param_1);
  }
  return param_1;
}


/* open_vcdiff::BlockHash::FirstMatchingBlockInline(unsigned int, char const*) const */

void __thiscall
open_vcdiff::BlockHash::FirstMatchingBlockInline(BlockHash *this,uint param_1,char *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_05447c9c(*(undefined4 *)(this + 0x58),param_1);
  piVar2 = (int *)FUN_05447cc0(*(undefined8 *)(this + 0x10),uVar1);
  SkipNonMatchingBlocks(this,*piVar2,param_2);
  return;
}


/* open_vcdiff::BlockHash::FirstMatchingBlock(unsigned int, char const*) const */

void open_vcdiff::BlockHash::FirstMatchingBlock(uint param_1,char *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  BlockHash *this;
  char *in_x2;
  
  this = (BlockHash *)(ulong)param_1;
  uVar1 = FUN_05447c9c(*(undefined4 *)(this + 0x58));
  piVar2 = (int *)FUN_05447cc0(*(undefined8 *)(this + 0x10),uVar1);
  SkipNonMatchingBlocks(this,*piVar2,in_x2);
  return;
}


/* open_vcdiff::BlockHash::NextMatchingBlock(int, char const*) const */

undefined8 __thiscall
open_vcdiff::BlockHash::NextMatchingBlock(BlockHash *this,int param_1,char *param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_05447c94(*(undefined8 *)(this + 8));
  if ((ulong)(long)param_1 < uVar1) {
    piVar2 = (int *)FUN_05447cc0(*(undefined8 *)(this + 0x28),(long)param_1);
    uVar3 = SkipNonMatchingBlocks(this,*piVar2,param_2);
    return uVar3;
  }
  uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar3 = FUN_054603b8(uVar3,"NextMatchingBlock called for invalid block number ");
  uVar3 = FUN_0546065c(uVar3,param_1);
  FUN_0545f9e8(uVar3,FUN_0545fdc8);
  CheckFatalError();
  return 0xffffffff;
}


/* open_vcdiff::BlockHash::TooManyMatches(int*) */

bool open_vcdiff::BlockHash::TooManyMatches(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  return 0x40 < iVar1 + 1;
}


/* open_vcdiff::BlockHash::MatchingBytesToLeft(char const*, char const*, int) */

int open_vcdiff::BlockHash::MatchingBytesToLeft(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (0 < param_3) {
    pcVar3 = param_1 + -1;
    pcVar1 = param_2 + -1;
    if (param_1[-1] == param_2[-1]) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        if (iVar2 == param_3) {
          return param_3;
        }
        pcVar3 = pcVar3 + -1;
        pcVar1 = pcVar1 + -1;
      } while (*pcVar3 == *pcVar1);
      return iVar2;
    }
  }
  return 0;
}


/* open_vcdiff::BlockHash::MatchingBytesToRight(char const*, char const*, int) */

int open_vcdiff::BlockHash::MatchingBytesToRight(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 < 1) || (*param_1 != *param_2)) {
    param_3 = 0;
  }
  else {
    iVar1 = 0;
    while( true ) {
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (iVar1 == param_3) break;
      if (*param_1 != *param_2) {
        return iVar1;
      }
    }
  }
  return param_3;
}


/* open_vcdiff::BlockHash::BlockCompareWords(char const*, char const*) */

void open_vcdiff::BlockHash::BlockCompareWords(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)param_1,(exception_ptr *)param_2);
  if (cVar1 != '\0') {
    std::__exception_ptr::operator==((exception_ptr *)(param_1 + 8),(exception_ptr *)(param_2 + 8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::BlockHash::FindBestMatch(unsigned int, char const*, char const*, unsigned long,
   open_vcdiff::BlockHash::Match*) const */

void __thiscall
open_vcdiff::BlockHash::FindBestMatch
          (BlockHash *this,uint param_1,char *param_2,char *param_3,ulong param_4,Match *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong *puVar7;
  int iVar8;
  int local_24;
  int local_20;
  int local_1c;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = 0;
  iVar3 = FirstMatchingBlockInline(this,param_1,param_2);
  if (-1 < iVar3) {
    iVar8 = (int)param_2 - (int)param_3;
    do {
      cVar2 = TooManyMatches(&local_24);
      if (cVar2 != '\0') break;
      iVar1 = iVar3 * 0x10;
      local_20 = iVar1;
      local_1c = iVar8;
      piVar6 = eastl::min_alt<int>(&local_20,&local_1c);
      iVar4 = MatchingBytesToLeft((char *)(*(long *)this + (long)iVar1),param_3 + iVar8,*piVar6);
      local_18 = *(long *)(this + 8) - (long)(iVar1 + 0x10);
      local_10 = param_4 - (long)(iVar8 + 0x10);
      puVar7 = eastl::min_alt<unsigned_long>(&local_18,&local_10);
      iVar5 = MatchingBytesToRight
                        ((char *)(*(long *)this + (long)(iVar1 + 0x10)),param_3 + (iVar8 + 0x10),
                         (int)*puVar7);
      Match::ReplaceIfBetterMatch
                (param_5,(long)iVar5 + (long)iVar4 + 0x10,(iVar1 - iVar4) + *(int *)(this + 0x5c),
                 iVar8 - iVar4);
      iVar3 = NextMatchingBlock(this,iVar3,param_2);
    } while (-1 < iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* open_vcdiff::BlockHash::BlockHash(char const*, unsigned long, int) */

void __thiscall
open_vcdiff::BlockHash::BlockHash(BlockHash *this,char *param_1,ulong param_2,int param_3)

{
  *(char **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0;
  *(int *)(this + 0x5c) = param_3;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  return;
}


/* open_vcdiff::BlockHash::AddBlock(unsigned int) */

void __thiscall open_vcdiff::BlockHash::AddBlock(BlockHash *this,uint param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  cVar3 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x10));
  if (cVar3 != '\0') {
    uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar10 = FUN_054603b8(uVar10,"BlockHash::AddBlock() called before BlockHash::Init()");
    FUN_0545f9e8(uVar10,FUN_0545fdc8);
    CheckFatalError();
    return;
  }
  iVar1 = *(int *)(this + 0x60) + 1;
  iVar8 = (int)(*(ulong *)(this + 8) >> 4);
  if (iVar1 < iVar8) {
    uVar10 = *(undefined8 *)(this + 0x28);
    lVar9 = (long)iVar1;
    piVar5 = (int *)FUN_05447cb8(uVar10,lVar9);
    if (*piVar5 == -1) {
      uVar4 = FUN_05447c9c(*(undefined4 *)(this + 0x58),param_1);
      piVar5 = (int *)FUN_05447cb8(*(undefined8 *)(this + 0x10),uVar4);
      iVar8 = *piVar5;
      if (iVar8 < 0) {
        uVar10 = *(undefined8 *)(this + 0x40);
        *piVar5 = iVar1;
        piVar5 = (int *)FUN_05447cb8(uVar10,lVar9);
        *piVar5 = iVar1;
        *(int *)(this + 0x60) = iVar1;
        return;
      }
      piVar5 = (int *)FUN_05447cb8(*(undefined8 *)(this + 0x40),(long)iVar8);
      iVar2 = *piVar5;
      lVar9 = (long)iVar2;
      piVar6 = (int *)FUN_05447cb8(uVar10,lVar9);
      if (*piVar6 == -1) {
        *piVar6 = iVar1;
        *piVar5 = iVar1;
        *(int *)(this + 0x60) = iVar1;
        return;
      }
      uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar10 = FUN_054603b8(uVar10,
                            "Internal error in BlockHash::AddBlock(): first matching block = ");
      uVar10 = FUN_0546065c(uVar10,iVar8);
      uVar10 = FUN_054603b8(uVar10,", last matching block = ");
      uVar10 = FUN_0546065c(uVar10,iVar2);
      uVar10 = FUN_054603b8(uVar10,", next block should be -1 but is ");
      uVar7 = *(undefined8 *)(this + 0x28);
    }
    else {
      uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar10 = FUN_054603b8(uVar10,"Internal error in BlockHash::AddBlock(): block number = ");
      uVar10 = FUN_0546065c(uVar10,iVar1);
      uVar10 = FUN_054603b8(uVar10,", next block should be -1 but is ");
      uVar7 = *(undefined8 *)(this + 0x28);
    }
    piVar5 = (int *)FUN_05447cb8(uVar7,lVar9);
    iVar8 = *piVar5;
  }
  else {
    uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar10 = FUN_054603b8(uVar10,"BlockHash::AddBlock() called with block number ");
    uVar10 = FUN_0546065c(uVar10,iVar1);
    uVar10 = FUN_054603b8(uVar10," that is past last block ");
    iVar8 = iVar8 + -1;
  }
  uVar10 = FUN_0546065c(uVar10,iVar8);
  FUN_0545f9e8(uVar10,FUN_0545fdc8);
  CheckFatalError();
  return;
}


/* open_vcdiff::BlockHash::AddAllBlocksThroughIndex(int) */

void __thiscall open_vcdiff::BlockHash::AddAllBlocksThroughIndex(BlockHash *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((int)*(undefined8 *)(this + 8) < param_1) {
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar6 = FUN_054603b8(uVar6,"BlockHash::AddAllBlocksThroughIndex() called with index ");
    uVar6 = FUN_0546065c(uVar6,param_1);
    uVar6 = FUN_054603b8(uVar6," higher than end index  ");
    uVar6 = thunk_FUN_0546069c(uVar6,*(undefined8 *)(this + 8));
    FUN_0545f9e8(uVar6,FUN_0545fdc8);
    CheckFatalError();
    return;
  }
  iVar3 = *(int *)(this + 0x60);
  iVar2 = iVar3 * 0x10;
  if (param_1 <= iVar2) {
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar6 = FUN_054603b8(uVar6,"BlockHash::AddAllBlocksThroughIndex() called with index ");
    uVar6 = FUN_0546065c(uVar6,param_1);
    uVar6 = FUN_054603b8(uVar6," <= last index added ( ");
    uVar6 = FUN_0546065c(uVar6,iVar2);
    uVar6 = FUN_054603b8(uVar6,&DAT_056e31d0);
    FUN_0545f9e8(uVar6,FUN_0545fdc8);
    CheckFatalError();
    return;
  }
  iVar2 = FUN_05447cb4();
  if (iVar2 + -0x10 < param_1) {
    param_1 = iVar2 + -0xf;
  }
  lVar5 = FUN_05447cb0(*(undefined8 *)this);
  iVar3 = FUN_05447ca4(iVar3);
  for (pcVar1 = (char *)(lVar5 + iVar3); pcVar1 < (char *)(lVar5 + param_1); pcVar1 = pcVar1 + 0x10)
  {
    uVar4 = RollingHash<16>::Hash(pcVar1);
    AddBlock(this,uVar4);
  }
  return;
}


/* open_vcdiff::BlockHash::AddAllBlocks() */

void __thiscall open_vcdiff::BlockHash::AddAllBlocks(BlockHash *this)

{
  AddAllBlocksThroughIndex(this,*(int *)(this + 8));
  return;
}


/* open_vcdiff::BlockHash::~BlockHash() */

void __thiscall open_vcdiff::BlockHash::~BlockHash(BlockHash *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::BlockHash::Init(bool) */

void __thiscall open_vcdiff::BlockHash::Init(BlockHash *this,bool param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x10));
  if (cVar1 != '\0') {
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)(this + 0x28));
    if (cVar1 != '\0') {
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)(this + 0x40));
      if (cVar1 != '\0') {
        uVar3 = CalcTableSize(*(ulong *)(this + 8));
        if (uVar3 == 0) {
          cVar1 = '\0';
          uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
          uVar2 = FUN_054603b8(uVar2,"Error finding table size for source size ");
          uVar2 = thunk_FUN_0546069c(uVar2,*(undefined8 *)(this + 8));
          FUN_0545f9e8(uVar2,FUN_0545fdc8);
          CheckFatalError();
        }
        else {
          *(int *)(this + 0x58) = (int)uVar3 + -1;
          local_c = -1;
          std::vector<int,std::allocator<int>>::resize
                    ((vector<int,std::allocator<int>> *)(this + 0x10),uVar3,&local_c);
          uVar3 = FUN_05447c94(*(undefined8 *)(this + 8));
          local_c = -1;
          std::vector<int,std::allocator<int>>::resize
                    ((vector<int,std::allocator<int>> *)(this + 0x28),uVar3,&local_c);
          uVar3 = FUN_05447c94(*(undefined8 *)(this + 8));
          local_c = -1;
          std::vector<int,std::allocator<int>>::resize
                    ((vector<int,std::allocator<int>> *)(this + 0x40),uVar3,&local_c);
          if (param_1) {
            AddAllBlocks(this);
          }
        }
        goto LAB_054486f0;
      }
    }
  }
  cVar1 = '\0';
  uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar2 = FUN_054603b8(uVar2,"Init() called twice for same BlockHash object");
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
LAB_054486f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* open_vcdiff::BlockHash::CreateDictionaryHash(char const*, unsigned long) */

BlockHash * open_vcdiff::BlockHash::CreateDictionaryHash(char *param_1,ulong param_2)

{
  char cVar1;
  BlockHash *this;
  BlockHash *pBVar2;
  
  this = ::operator_new(0x68);
  BlockHash(this,param_1,param_2,0);
  cVar1 = Init(this,true);
  pBVar2 = this;
  if (cVar1 == '\0') {
    pBVar2 = (BlockHash *)0x0;
    ~BlockHash(this);
    AK::FreeHook(this);
  }
  return pBVar2;
}


/* open_vcdiff::BlockHash::CreateTargetHash(char const*, unsigned long, unsigned long) */

BlockHash * open_vcdiff::BlockHash::CreateTargetHash(char *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  BlockHash *this;
  BlockHash *pBVar2;
  
  this = ::operator_new(0x68);
  BlockHash(this,param_1,param_2,(int)param_3);
  cVar1 = Init(this,false);
  pBVar2 = this;
  if (cVar1 == '\0') {
    pBVar2 = (BlockHash *)0x0;
    ~BlockHash(this);
    AK::FreeHook(this);
  }
  return pBVar2;
}

